#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 55
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 47
#define ALIAS_COUNT 0
#define TOKEN_COUNT 24
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  aux_sym_script_block_token1 = 1,
  anon_sym_LBRACK = 2,
  anon_sym_iscript = 3,
  anon_sym_RBRACK = 4,
  anon_sym_endscript = 5,
  anon_sym_AT = 6,
  aux_sym_tag_name_token1 = 7,
  anon_sym_EQ = 8,
  anon_sym_DQUOTE = 9,
  sym_string_content = 10,
  sym_unquoted_value = 11,
  sym_at_unquoted_value = 12,
  anon_sym_SEMI = 13,
  aux_sym_comment_token1 = 14,
  anon_sym_STAR = 15,
  sym_label_name = 16,
  anon_sym_POUND = 17,
  sym_speaker_name = 18,
  sym_text_line = 19,
  sym_inline_text = 20,
  sym_blank_line = 21,
  sym_script_content = 22,
  sym__error_sentinel = 23,
  sym_source_file = 24,
  sym_script_block = 25,
  sym_iscript_open = 26,
  sym_endscript_close = 27,
  sym__line = 28,
  sym__statement = 29,
  sym_tag_line = 30,
  sym_tag = 31,
  sym_at_tag = 32,
  sym_tag_name = 33,
  sym_attribute = 34,
  sym_attribute_name = 35,
  sym_attribute_value = 36,
  sym_at_attribute = 37,
  sym_at_attribute_value = 38,
  sym_quoted_string = 39,
  sym_comment = 40,
  sym_label = 41,
  sym_speaker = 42,
  aux_sym_source_file_repeat1 = 43,
  aux_sym_tag_line_repeat1 = 44,
  aux_sym_tag_repeat1 = 45,
  aux_sym_at_tag_repeat1 = 46,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym_script_block_token1] = "script_block_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_iscript] = "iscript",
  [anon_sym_RBRACK] = "]",
  [anon_sym_endscript] = "endscript",
  [anon_sym_AT] = "@",
  [aux_sym_tag_name_token1] = "tag_name_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_content] = "string_content",
  [sym_unquoted_value] = "unquoted_value",
  [sym_at_unquoted_value] = "at_unquoted_value",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_STAR] = "*",
  [sym_label_name] = "label_name",
  [anon_sym_POUND] = "#",
  [sym_speaker_name] = "speaker_name",
  [sym_text_line] = "text_line",
  [sym_inline_text] = "inline_text",
  [sym_blank_line] = "blank_line",
  [sym_script_content] = "script_content",
  [sym__error_sentinel] = "_error_sentinel",
  [sym_source_file] = "source_file",
  [sym_script_block] = "script_block",
  [sym_iscript_open] = "iscript_open",
  [sym_endscript_close] = "endscript_close",
  [sym__line] = "_line",
  [sym__statement] = "_statement",
  [sym_tag_line] = "tag_line",
  [sym_tag] = "tag",
  [sym_at_tag] = "at_tag",
  [sym_tag_name] = "tag_name",
  [sym_attribute] = "attribute",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [sym_at_attribute] = "at_attribute",
  [sym_at_attribute_value] = "at_attribute_value",
  [sym_quoted_string] = "quoted_string",
  [sym_comment] = "comment",
  [sym_label] = "label",
  [sym_speaker] = "speaker",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_tag_line_repeat1] = "tag_line_repeat1",
  [aux_sym_tag_repeat1] = "tag_repeat1",
  [aux_sym_at_tag_repeat1] = "at_tag_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym_script_block_token1] = aux_sym_script_block_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_iscript] = anon_sym_iscript,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_endscript] = anon_sym_endscript,
  [anon_sym_AT] = anon_sym_AT,
  [aux_sym_tag_name_token1] = aux_sym_tag_name_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_content] = sym_string_content,
  [sym_unquoted_value] = sym_unquoted_value,
  [sym_at_unquoted_value] = sym_at_unquoted_value,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_label_name] = sym_label_name,
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_speaker_name] = sym_speaker_name,
  [sym_text_line] = sym_text_line,
  [sym_inline_text] = sym_inline_text,
  [sym_blank_line] = sym_blank_line,
  [sym_script_content] = sym_script_content,
  [sym__error_sentinel] = sym__error_sentinel,
  [sym_source_file] = sym_source_file,
  [sym_script_block] = sym_script_block,
  [sym_iscript_open] = sym_iscript_open,
  [sym_endscript_close] = sym_endscript_close,
  [sym__line] = sym__line,
  [sym__statement] = sym__statement,
  [sym_tag_line] = sym_tag_line,
  [sym_tag] = sym_tag,
  [sym_at_tag] = sym_at_tag,
  [sym_tag_name] = sym_tag_name,
  [sym_attribute] = sym_attribute,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [sym_at_attribute] = sym_at_attribute,
  [sym_at_attribute_value] = sym_at_attribute_value,
  [sym_quoted_string] = sym_quoted_string,
  [sym_comment] = sym_comment,
  [sym_label] = sym_label,
  [sym_speaker] = sym_speaker,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_tag_line_repeat1] = aux_sym_tag_line_repeat1,
  [aux_sym_tag_repeat1] = aux_sym_tag_repeat1,
  [aux_sym_at_tag_repeat1] = aux_sym_at_tag_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_script_block_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_iscript] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_endscript] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_tag_name_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_string_content] = {
    .visible = true,
    .named = true,
  },
  [sym_unquoted_value] = {
    .visible = true,
    .named = true,
  },
  [sym_at_unquoted_value] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_STAR] = {
    .visible = true,
    .named = false,
  },
  [sym_label_name] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [sym_speaker_name] = {
    .visible = true,
    .named = true,
  },
  [sym_text_line] = {
    .visible = true,
    .named = true,
  },
  [sym_inline_text] = {
    .visible = true,
    .named = true,
  },
  [sym_blank_line] = {
    .visible = true,
    .named = true,
  },
  [sym_script_content] = {
    .visible = true,
    .named = true,
  },
  [sym__error_sentinel] = {
    .visible = false,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_script_block] = {
    .visible = true,
    .named = true,
  },
  [sym_iscript_open] = {
    .visible = true,
    .named = true,
  },
  [sym_endscript_close] = {
    .visible = true,
    .named = true,
  },
  [sym__line] = {
    .visible = false,
    .named = true,
  },
  [sym__statement] = {
    .visible = false,
    .named = true,
  },
  [sym_tag_line] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_at_tag] = {
    .visible = true,
    .named = true,
  },
  [sym_tag_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_name] = {
    .visible = true,
    .named = true,
  },
  [sym_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_at_attribute] = {
    .visible = true,
    .named = true,
  },
  [sym_at_attribute_value] = {
    .visible = true,
    .named = true,
  },
  [sym_quoted_string] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_speaker] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_at_tag_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_name = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_name, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '\n', 26,
        '\r', 1,
        '"', 49,
        '#', 60,
        '*', 58,
        ';', 55,
        '=', 48,
        '@', 32,
        '[', 27,
        ']', 29,
        'e', 38,
        'i', 43,
        '\t', 2,
        ' ', 2,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(26);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 26,
        '\r', 1,
        '"', 49,
        '#', 60,
        '*', 58,
        ';', 55,
        '=', 48,
        '@', 32,
        '[', 27,
        ']', 29,
        'e', 38,
        'i', 43,
        '\t', 2,
        ' ', 2,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 3:
      ADVANCE_MAP(
        '\n', 26,
        '\r', 1,
        '#', 60,
        '*', 58,
        ';', 55,
        '@', 32,
        '[', 27,
        '\t', 3,
        ' ', 3,
      );
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(66);
      END_STATE();
    case 5:
      ADVANCE_MAP(
        '\n', 66,
        '\r', 4,
        '#', 60,
        '*', 58,
        ';', 55,
        '@', 32,
        '[', 27,
        '\t', 5,
        ' ', 5,
      );
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ']') ADVANCE(53);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(54);
      END_STATE();
    case 8:
      if (lookahead == ']') ADVANCE(53);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == 'c') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(17);
      END_STATE();
    case 11:
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(11);
      END_STATE();
    case 12:
      if (lookahead == 'i') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(12);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 13:
      if (lookahead == 'i') ADVANCE(15);
      END_STATE();
    case 14:
      if (lookahead == 'n') ADVANCE(10);
      END_STATE();
    case 15:
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'r') ADVANCE(13);
      END_STATE();
    case 17:
      if (lookahead == 's') ADVANCE(9);
      END_STATE();
    case 18:
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 19:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(19);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(59);
      END_STATE();
    case 20:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '\n', 26,
        '\r', 1,
        '#', 60,
        '*', 58,
        ';', 55,
        '@', 32,
        '[', 27,
        '\t', 3,
        ' ', 3,
      );
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 21:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(48);
      if (lookahead == ']') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(21);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 22:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '[') ADVANCE(27);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0) ADVANCE(65);
      END_STATE();
    case 23:
      if (eof) ADVANCE(25);
      if (lookahead == '\n') ADVANCE(26);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(62);
      END_STATE();
    case 24:
      if (eof) ADVANCE(25);
      ADVANCE_MAP(
        '\n', 66,
        '\r', 4,
        '#', 60,
        '*', 58,
        ';', 55,
        '@', 32,
        '[', 27,
        '\t', 5,
        ' ', 5,
      );
      if (lookahead != 0) ADVANCE(63);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_script_block_token1);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_iscript);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_endscript);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_endscript);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'c') ADVANCE(41);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'c') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'd') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'i') ADVANCE(39);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'i') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'n') ADVANCE(35);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'p') ADVANCE(45);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'p') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'r') ADVANCE(36);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 'r') ADVANCE(37);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(33);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 's') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 't') ADVANCE(28);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (lookahead == 't') ADVANCE(31);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(50);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(51);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_unquoted_value);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == ']') ADVANCE(53);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ' ||
          lookahead == '"') ADVANCE(8);
      if (lookahead != 0) ADVANCE(52);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_unquoted_value);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ']') ADVANCE(53);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_at_unquoted_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(56);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(57);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(57);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_speaker_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(62);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_speaker_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(62);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '[') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(64);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '[') ADVANCE(65);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '[') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_blank_line);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 24},
  [2] = {.lex_state = 24},
  [3] = {.lex_state = 24},
  [4] = {.lex_state = 20},
  [5] = {.lex_state = 20},
  [6] = {.lex_state = 20},
  [7] = {.lex_state = 24},
  [8] = {.lex_state = 24},
  [9] = {.lex_state = 24},
  [10] = {.lex_state = 22},
  [11] = {.lex_state = 22},
  [12] = {.lex_state = 21},
  [13] = {.lex_state = 22},
  [14] = {.lex_state = 21},
  [15] = {.lex_state = 21},
  [16] = {.lex_state = 21},
  [17] = {.lex_state = 21},
  [18] = {.lex_state = 21},
  [19] = {.lex_state = 21},
  [20] = {.lex_state = 22},
  [21] = {.lex_state = 21},
  [22] = {.lex_state = 21},
  [23] = {.lex_state = 21},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 22},
  [26] = {.lex_state = 7},
  [27] = {.lex_state = 21},
  [28] = {.lex_state = 0, .external_lex_state = 2},
  [29] = {.lex_state = 23},
  [30] = {.lex_state = 12},
  [31] = {.lex_state = 21},
  [32] = {.lex_state = 21},
  [33] = {.lex_state = 21},
  [34] = {.lex_state = 50},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 21},
  [41] = {.lex_state = 21},
  [42] = {.lex_state = 21},
  [43] = {.lex_state = 21},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 56},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 19},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 11},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym_script_block_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_iscript] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_endscript] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_tag_name_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [sym_blank_line] = ACTIONS(1),
    [sym_script_content] = ACTIONS(1),
    [sym__error_sentinel] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(50),
    [sym_script_block] = STATE(3),
    [sym_iscript_open] = STATE(54),
    [sym__line] = STATE(3),
    [sym__statement] = STATE(35),
    [sym_tag_line] = STATE(35),
    [sym_tag] = STATE(10),
    [sym_at_tag] = STATE(35),
    [sym_comment] = STATE(35),
    [sym_label] = STATE(35),
    [sym_speaker] = STATE(35),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
    [anon_sym_POUND] = ACTIONS(13),
    [sym_text_line] = ACTIONS(15),
    [sym_blank_line] = ACTIONS(17),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(24), 1,
      anon_sym_AT,
    ACTIONS(27), 1,
      anon_sym_SEMI,
    ACTIONS(30), 1,
      anon_sym_STAR,
    ACTIONS(33), 1,
      anon_sym_POUND,
    ACTIONS(36), 1,
      sym_text_line,
    ACTIONS(39), 1,
      sym_blank_line,
    STATE(10), 1,
      sym_tag,
    STATE(54), 1,
      sym_iscript_open,
    STATE(2), 3,
      sym_script_block,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(48), 6,
      sym__statement,
      sym_tag_line,
      sym_at_tag,
      sym_comment,
      sym_label,
      sym_speaker,
  [44] = 12,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(13), 1,
      anon_sym_POUND,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(44), 1,
      sym_text_line,
    ACTIONS(46), 1,
      sym_blank_line,
    STATE(10), 1,
      sym_tag,
    STATE(54), 1,
      sym_iscript_open,
    STATE(2), 3,
      sym_script_block,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(37), 6,
      sym__statement,
      sym_tag_line,
      sym_at_tag,
      sym_comment,
      sym_label,
      sym_speaker,
  [88] = 3,
    ACTIONS(50), 1,
      aux_sym_script_block_token1,
    ACTIONS(52), 1,
      sym_blank_line,
    ACTIONS(48), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_text_line,
  [104] = 3,
    ACTIONS(56), 1,
      aux_sym_script_block_token1,
    ACTIONS(58), 1,
      sym_blank_line,
    ACTIONS(54), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_text_line,
  [120] = 2,
    ACTIONS(62), 1,
      sym_blank_line,
    ACTIONS(60), 8,
      ts_builtin_sym_end,
      aux_sym_script_block_token1,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_text_line,
  [134] = 1,
    ACTIONS(64), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_text_line,
      sym_blank_line,
  [145] = 1,
    ACTIONS(54), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_text_line,
      sym_blank_line,
  [156] = 1,
    ACTIONS(66), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_text_line,
      sym_blank_line,
  [167] = 5,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      aux_sym_script_block_token1,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(74), 1,
      sym_inline_text,
    STATE(11), 2,
      sym_tag,
      aux_sym_tag_line_repeat1,
  [184] = 5,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(76), 1,
      ts_builtin_sym_end,
    ACTIONS(78), 1,
      aux_sym_script_block_token1,
    ACTIONS(80), 1,
      sym_inline_text,
    STATE(13), 2,
      sym_tag,
      aux_sym_tag_line_repeat1,
  [201] = 4,
    ACTIONS(84), 1,
      aux_sym_tag_name_token1,
    STATE(23), 1,
      sym_attribute_name,
    ACTIONS(82), 2,
      ts_builtin_sym_end,
      aux_sym_script_block_token1,
    STATE(15), 2,
      sym_at_attribute,
      aux_sym_at_tag_repeat1,
  [216] = 5,
    ACTIONS(86), 1,
      ts_builtin_sym_end,
    ACTIONS(88), 1,
      aux_sym_script_block_token1,
    ACTIONS(90), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      sym_inline_text,
    STATE(13), 2,
      sym_tag,
      aux_sym_tag_line_repeat1,
  [233] = 4,
    ACTIONS(98), 1,
      aux_sym_tag_name_token1,
    STATE(23), 1,
      sym_attribute_name,
    ACTIONS(96), 2,
      ts_builtin_sym_end,
      aux_sym_script_block_token1,
    STATE(14), 2,
      sym_at_attribute,
      aux_sym_at_tag_repeat1,
  [248] = 4,
    ACTIONS(84), 1,
      aux_sym_tag_name_token1,
    STATE(23), 1,
      sym_attribute_name,
    ACTIONS(101), 2,
      ts_builtin_sym_end,
      aux_sym_script_block_token1,
    STATE(14), 2,
      sym_at_attribute,
      aux_sym_at_tag_repeat1,
  [263] = 1,
    ACTIONS(103), 5,
      ts_builtin_sym_end,
      aux_sym_script_block_token1,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
      anon_sym_EQ,
  [271] = 4,
    ACTIONS(84), 1,
      aux_sym_tag_name_token1,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym_attribute_name,
    STATE(18), 2,
      sym_attribute,
      aux_sym_tag_repeat1,
  [285] = 4,
    ACTIONS(84), 1,
      aux_sym_tag_name_token1,
    ACTIONS(107), 1,
      anon_sym_RBRACK,
    STATE(31), 1,
      sym_attribute_name,
    STATE(19), 2,
      sym_attribute,
      aux_sym_tag_repeat1,
  [299] = 4,
    ACTIONS(109), 1,
      anon_sym_RBRACK,
    ACTIONS(111), 1,
      aux_sym_tag_name_token1,
    STATE(31), 1,
      sym_attribute_name,
    STATE(19), 2,
      sym_attribute,
      aux_sym_tag_repeat1,
  [313] = 2,
    ACTIONS(114), 2,
      ts_builtin_sym_end,
      sym_inline_text,
    ACTIONS(116), 2,
      aux_sym_script_block_token1,
      anon_sym_LBRACK,
  [322] = 1,
    ACTIONS(118), 4,
      ts_builtin_sym_end,
      aux_sym_script_block_token1,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
  [329] = 1,
    ACTIONS(120), 4,
      ts_builtin_sym_end,
      aux_sym_script_block_token1,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
  [336] = 2,
    ACTIONS(124), 1,
      anon_sym_EQ,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      aux_sym_script_block_token1,
      aux_sym_tag_name_token1,
  [345] = 4,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(128), 1,
      sym_unquoted_value,
    STATE(41), 1,
      sym_quoted_string,
    STATE(42), 1,
      sym_attribute_value,
  [358] = 2,
    ACTIONS(130), 2,
      ts_builtin_sym_end,
      sym_inline_text,
    ACTIONS(132), 2,
      aux_sym_script_block_token1,
      anon_sym_LBRACK,
  [367] = 4,
    ACTIONS(126), 1,
      anon_sym_DQUOTE,
    ACTIONS(134), 1,
      sym_at_unquoted_value,
    STATE(32), 1,
      sym_quoted_string,
    STATE(33), 1,
      sym_at_attribute_value,
  [380] = 1,
    ACTIONS(136), 4,
      ts_builtin_sym_end,
      aux_sym_script_block_token1,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
  [387] = 3,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    ACTIONS(140), 1,
      sym_script_content,
    STATE(4), 1,
      sym_endscript_close,
  [397] = 3,
    ACTIONS(142), 1,
      ts_builtin_sym_end,
    ACTIONS(144), 1,
      aux_sym_script_block_token1,
    ACTIONS(146), 1,
      sym_speaker_name,
  [407] = 3,
    ACTIONS(148), 1,
      anon_sym_iscript,
    ACTIONS(150), 1,
      aux_sym_tag_name_token1,
    STATE(17), 1,
      sym_tag_name,
  [417] = 2,
    ACTIONS(154), 1,
      anon_sym_EQ,
    ACTIONS(152), 2,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
  [425] = 1,
    ACTIONS(156), 3,
      ts_builtin_sym_end,
      aux_sym_script_block_token1,
      aux_sym_tag_name_token1,
  [431] = 1,
    ACTIONS(158), 3,
      ts_builtin_sym_end,
      aux_sym_script_block_token1,
      aux_sym_tag_name_token1,
  [437] = 2,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
    ACTIONS(162), 1,
      sym_string_content,
  [444] = 2,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(164), 1,
      aux_sym_script_block_token1,
  [451] = 1,
    ACTIONS(166), 2,
      ts_builtin_sym_end,
      aux_sym_script_block_token1,
  [456] = 2,
    ACTIONS(164), 1,
      aux_sym_script_block_token1,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
  [463] = 1,
    ACTIONS(170), 2,
      ts_builtin_sym_end,
      aux_sym_script_block_token1,
  [468] = 1,
    ACTIONS(172), 2,
      ts_builtin_sym_end,
      aux_sym_script_block_token1,
  [473] = 2,
    ACTIONS(174), 1,
      aux_sym_tag_name_token1,
    STATE(12), 1,
      sym_tag_name,
  [480] = 1,
    ACTIONS(176), 2,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
  [485] = 1,
    ACTIONS(178), 2,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
  [490] = 2,
    ACTIONS(174), 1,
      aux_sym_tag_name_token1,
    STATE(17), 1,
      sym_tag_name,
  [497] = 2,
    ACTIONS(138), 1,
      anon_sym_LBRACK,
    STATE(5), 1,
      sym_endscript_close,
  [504] = 1,
    ACTIONS(180), 1,
      aux_sym_comment_token1,
  [508] = 1,
    ACTIONS(182), 1,
      aux_sym_script_block_token1,
  [512] = 1,
    ACTIONS(184), 1,
      sym_label_name,
  [516] = 1,
    ACTIONS(164), 1,
      aux_sym_script_block_token1,
  [520] = 1,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
  [524] = 1,
    ACTIONS(188), 1,
      ts_builtin_sym_end,
  [528] = 1,
    ACTIONS(190), 1,
      anon_sym_endscript,
  [532] = 1,
    ACTIONS(192), 1,
      anon_sym_RBRACK,
  [536] = 1,
    ACTIONS(194), 1,
      anon_sym_DQUOTE,
  [540] = 1,
    ACTIONS(196), 1,
      aux_sym_script_block_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 44,
  [SMALL_STATE(4)] = 88,
  [SMALL_STATE(5)] = 104,
  [SMALL_STATE(6)] = 120,
  [SMALL_STATE(7)] = 134,
  [SMALL_STATE(8)] = 145,
  [SMALL_STATE(9)] = 156,
  [SMALL_STATE(10)] = 167,
  [SMALL_STATE(11)] = 184,
  [SMALL_STATE(12)] = 201,
  [SMALL_STATE(13)] = 216,
  [SMALL_STATE(14)] = 233,
  [SMALL_STATE(15)] = 248,
  [SMALL_STATE(16)] = 263,
  [SMALL_STATE(17)] = 271,
  [SMALL_STATE(18)] = 285,
  [SMALL_STATE(19)] = 299,
  [SMALL_STATE(20)] = 313,
  [SMALL_STATE(21)] = 322,
  [SMALL_STATE(22)] = 329,
  [SMALL_STATE(23)] = 336,
  [SMALL_STATE(24)] = 345,
  [SMALL_STATE(25)] = 358,
  [SMALL_STATE(26)] = 367,
  [SMALL_STATE(27)] = 380,
  [SMALL_STATE(28)] = 387,
  [SMALL_STATE(29)] = 397,
  [SMALL_STATE(30)] = 407,
  [SMALL_STATE(31)] = 417,
  [SMALL_STATE(32)] = 425,
  [SMALL_STATE(33)] = 431,
  [SMALL_STATE(34)] = 437,
  [SMALL_STATE(35)] = 444,
  [SMALL_STATE(36)] = 451,
  [SMALL_STATE(37)] = 456,
  [SMALL_STATE(38)] = 463,
  [SMALL_STATE(39)] = 468,
  [SMALL_STATE(40)] = 473,
  [SMALL_STATE(41)] = 480,
  [SMALL_STATE(42)] = 485,
  [SMALL_STATE(43)] = 490,
  [SMALL_STATE(44)] = 497,
  [SMALL_STATE(45)] = 504,
  [SMALL_STATE(46)] = 508,
  [SMALL_STATE(47)] = 512,
  [SMALL_STATE(48)] = 516,
  [SMALL_STATE(49)] = 520,
  [SMALL_STATE(50)] = 524,
  [SMALL_STATE(51)] = 528,
  [SMALL_STATE(52)] = 532,
  [SMALL_STATE(53)] = 536,
  [SMALL_STATE(54)] = 540,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(45),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(47),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(48),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 3, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 3, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 4, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [58] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_script_block, 4, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_endscript_close, 3, 0, 0),
  [62] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_endscript_close, 3, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_script_block, 5, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_line, 1, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_line, 1, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_line, 2, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_line, 2, 0, 0),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_tag, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_line_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_line_repeat1, 2, 0, 0),
  [90] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_line_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_line_repeat1, 2, 0, 0), SHIFT_REPEAT(13),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_at_tag_repeat1, 2, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_at_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_tag, 3, 0, 0),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2, 0, 0),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_name, 1, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_attribute, 1, 0, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_speaker, 1, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_speaker, 1, 0, 0),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [148] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [150] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 1),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_attribute_value, 1, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_attribute, 3, 0, 2),
  [160] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_speaker, 2, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 2),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_iscript_open, 3, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [188] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
};

enum ts_external_scanner_symbol_identifiers {
  ts_external_token_script_content = 0,
  ts_external_token__error_sentinel = 1,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_script_content] = sym_script_content,
  [ts_external_token__error_sentinel] = sym__error_sentinel,
};

static const bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_script_content] = true,
    [ts_external_token__error_sentinel] = true,
  },
  [2] = {
    [ts_external_token_script_content] = true,
  },
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_tyranoscript_external_scanner_create(void);
void tree_sitter_tyranoscript_external_scanner_destroy(void *);
bool tree_sitter_tyranoscript_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_tyranoscript_external_scanner_serialize(void *, char *);
void tree_sitter_tyranoscript_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_tyranoscript(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_tyranoscript_external_scanner_create,
      tree_sitter_tyranoscript_external_scanner_destroy,
      tree_sitter_tyranoscript_external_scanner_scan,
      tree_sitter_tyranoscript_external_scanner_serialize,
      tree_sitter_tyranoscript_external_scanner_deserialize,
    },
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
