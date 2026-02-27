// ティラノスクリプト用の外部スキャナー
// [iscript]...[endscript] ブロック内のスクリプト内容を認識する

#include "tree_sitter/parser.h"

#include <string.h>

// externals で定義したトークンの列挙
enum TokenType {
  SCRIPT_CONTENT,
};

// [endscript] の文字列（'[' は含まない）
static const char ENDSCRIPT[] = "endscript]";
static const unsigned ENDSCRIPT_LEN = 10;

void *tree_sitter_tyranoscript_external_scanner_create(void) {
  return NULL;
}

void tree_sitter_tyranoscript_external_scanner_destroy(void *payload) {
}

unsigned tree_sitter_tyranoscript_external_scanner_serialize(
  void *payload, char *buffer) {
  return 0;
}

void tree_sitter_tyranoscript_external_scanner_deserialize(
  void *payload, const char *buffer, unsigned length) {
}

// script_content トークンをスキャンする
// [endscript] が見つかるまで全文字を消費する
bool tree_sitter_tyranoscript_external_scanner_scan(
  void *payload, TSLexer *lexer, const bool *valid_symbols) {

  // script_content が期待されていない場合はスキップ
  if (!valid_symbols[SCRIPT_CONTENT]) {
    return false;
  }

  // スクリプト内容が空の場合に対応するため、最初に内容があるか確認
  bool has_content = false;

  while (lexer->lookahead != 0) {
    // '[' を見つけたら [endscript] かチェック
    if (lexer->lookahead == '[') {
      // 現在位置をマーク（'[' の直前）
      lexer->mark_end(lexer);

      // '[' を読み飛ばす
      lexer->advance(lexer, false);

      // 残りの "endscript]" と一致するかチェック
      bool match = true;
      for (unsigned i = 0; i < ENDSCRIPT_LEN; i++) {
        if (lexer->lookahead != ENDSCRIPT[i]) {
          match = false;
          break;
        }
        lexer->advance(lexer, false);
      }

      if (match) {
        // [endscript] と一致した場合
        if (has_content) {
          // script_content トークンとして返す（mark_end の位置まで）
          lexer->result_symbol = SCRIPT_CONTENT;
          return true;
        }
        // 内容がない場合は false を返す（script_content は optional なので）
        return false;
      }
      // 一致しなかった場合、内容の一部として続行
      has_content = true;
      continue;
    }

    has_content = true;
    lexer->advance(lexer, false);
  }

  // EOF に達した場合
  if (has_content) {
    lexer->mark_end(lexer);
    lexer->result_symbol = SCRIPT_CONTENT;
    return true;
  }

  return false;
}
