/// <reference types="tree-sitter-cli/dsl" />
// ティラノスクリプト (.ks) の Tree-sitter 文法定義

module.exports = grammar({
  name: 'tyranoscript',

  // 空白はトークン間に入れることができる（改行は含まない）
  extras: $ => [/[ \t]/],

  // 外部スキャナーで認識するトークン
  externals: $ => [
    $.script_content,
  ],

  rules: {
    // ソースファイル全体
    // 改行で終わる行の繰り返し＋最終行（改行なし）
    source_file: $ => seq(
      repeat(choice($._line, $.blank_line, $.script_block)),
      optional($._statement),
    ),

    // [iscript]...[endscript] ブロック
    // 末尾の改行も消費して blank_line にならないようにする
    script_block: $ => seq(
      alias(token(prec(1, /\[iscript\]/)), '[iscript]'),
      /\r?\n/,
      optional($.script_content),
      alias(token(prec(1, /\[endscript\]/)), '[endscript]'),
      optional(/\r?\n/),
    ),

    // 改行で終わる行（改行を必須にすることで行の途中で分割されるのを防ぐ）
    _line: $ => seq(
      $._statement,
      /\r?\n/,
    ),

    // 行の内容（改行を含まない）
    _statement: $ => choice(
      $.comment,
      $.label,
      $.speaker,
      $.at_tag,
      $.tag_line,
      $.text_line,
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

    // @tag_name param=value（[]タグのショートハンド記法）
    // 行末まで1つのタグとして扱う
    at_tag: $ => seq(
      '@',
      $.tag_name,
      repeat($.at_attribute),
    ),

    // タグ名
    tag_name: $ => /[a-zA-Z_][a-zA-Z0-9_]*/,

    // []タグ用の属性: name=value または name のみ
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

    // []タグ用の属性値
    attribute_value: $ => choice(
      $.quoted_string,
      $.unquoted_value,
    ),

    // @タグ用の属性（unquoted_valueが]を含められるよう別定義）
    at_attribute: $ => choice(
      seq(
        field('name', $.attribute_name),
        '=',
        field('value', $.at_attribute_value),
      ),
      field('name', $.attribute_name),
    ),

    // @タグ用の属性値
    at_attribute_value: $ => choice(
      $.quoted_string,
      $.at_unquoted_value,
    ),

    // ダブルクォートで囲まれた文字列
    quoted_string: $ => seq('"', optional($.string_content), '"'),

    // 文字列の中身
    string_content: $ => /[^"]*/,

    // []タグ用のクォートなし値
    unquoted_value: $ => /[^\s\]"]+/,

    // @タグ用のクォートなし値（]も許容）
    at_unquoted_value: $ => /[^\s"]+/,

    // ; コメント
    comment: $ => seq(';', /[^\r\n]*/),

    // *label_name
    label: $ => seq('*', $.label_name),

    // ラベル名
    label_name: $ => /[^\s\r\n]+/,

    // #話者名（#、#?、#あかね など）
    speaker: $ => seq('#', optional($.speaker_name)),

    // 話者名
    speaker_name: $ => /[^\r\n]+/,

    // テキスト行（タグ・コメント・ラベル・@タグ・#話者・空行以外）
    text_line: $ => /[^\[;*@#\r\n \t][^\[\r\n]*/,

    // タグの後に続くインラインテキスト
    inline_text: $ => /[^\[\r\n]+/,

    // 空行
    blank_line: $ => /[ \t]*\r?\n/,
  }
});
