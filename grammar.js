/// <reference types="tree-sitter-cli/dsl" />
// ティラノスクリプト (.ks) の Tree-sitter 文法定義

module.exports = grammar({
  name: 'tyranoscript',

  // 空白はトークン間に入れることができる（改行は含まない）
  extras: $ => [/[ \t]/],

  // tag_line 内での tag/inline_text の繰り返しの曖昧さを解決
  conflicts: $ => [
    [$.tag_line],
  ],

  rules: {
    // ソースファイル全体
    source_file: $ => repeat(
      choice(
        $._line,
        $.blank_line,
      )
    ),

    // 各行（改行で終わる、またはEOFで終わる）
    _line: $ => seq(
      choice(
        $.comment,
        $.label,
        $.tag_line,
        $.text_line,
      ),
      optional(/\r?\n/),
    ),

    // タグ行: タグのみ、またはタグ＋インラインテキストの組み合わせ
    tag_line: $ => seq(
      $.tag,
      repeat(choice($.tag, $.inline_text)),
    ),

    // [tag_name param=value param2="value2"]
    tag: $ => seq(
      '[',
      $.tag_name,
      repeat($.attribute),
      ']',
    ),

    // タグ名
    tag_name: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    // 属性: name=value または name のみ
    attribute: $ => choice(
      seq(
        field('name', $.attribute_name),
        '=',
        field('value', $.attribute_value),
      ),
      field('name', $.attribute_name),
    ),

    // 属性名
    attribute_name: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    // 属性値
    attribute_value: $ => choice(
      $.quoted_string,
      $.unquoted_value,
    ),

    // ダブルクォートで囲まれた文字列
    quoted_string: $ => seq('"', optional($.string_content), '"'),

    // 文字列の中身
    string_content: $ => /[^"]*/,

    // クォートなしの値
    unquoted_value: $ => /[^\s\]"]+/,

    // ; コメント
    comment: $ => seq(';', /[^\r\n]*/),

    // *label_name
    label: $ => seq('*', $.label_name),

    // ラベル名
    label_name: $ => /[^\s\r\n]+/,

    // テキスト行（タグ・コメント・ラベル・空行以外）
    text_line: $ => /[^\[;*\r\n \t][^\[\r\n]*/,

    // タグの後に続くインラインテキスト
    inline_text: $ => /[^\[\r\n]+/,

    // 空行
    blank_line: $ => /[ \t]*\r?\n/,
  }
});
