#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 40
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 37
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  aux_sym__line_token1 = 1,
  anon_sym_LBRACK = 2,
  anon_sym_RBRACK = 3,
  anon_sym_AT = 4,
  aux_sym_tag_name_token1 = 5,
  anon_sym_EQ = 6,
  anon_sym_DQUOTE = 7,
  sym_string_content = 8,
  sym_unquoted_value = 9,
  sym_at_unquoted_value = 10,
  anon_sym_SEMI = 11,
  aux_sym_comment_token1 = 12,
  anon_sym_STAR = 13,
  sym_label_name = 14,
  sym_text_line = 15,
  sym_inline_text = 16,
  sym_blank_line = 17,
  sym_source_file = 18,
  sym__line = 19,
  sym__statement = 20,
  sym_tag_line = 21,
  sym_tag = 22,
  sym_at_tag = 23,
  sym_tag_name = 24,
  sym_attribute = 25,
  sym_attribute_name = 26,
  sym_attribute_value = 27,
  sym_at_attribute = 28,
  sym_at_attribute_value = 29,
  sym_quoted_string = 30,
  sym_comment = 31,
  sym_label = 32,
  aux_sym_source_file_repeat1 = 33,
  aux_sym_tag_line_repeat1 = 34,
  aux_sym_tag_repeat1 = 35,
  aux_sym_at_tag_repeat1 = 36,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__line_token1] = "_line_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
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
  [sym_text_line] = "text_line",
  [sym_inline_text] = "inline_text",
  [sym_blank_line] = "blank_line",
  [sym_source_file] = "source_file",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_tag_line_repeat1] = "tag_line_repeat1",
  [aux_sym_tag_repeat1] = "tag_repeat1",
  [aux_sym_at_tag_repeat1] = "at_tag_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__line_token1] = aux_sym__line_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
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
  [sym_text_line] = sym_text_line,
  [sym_inline_text] = sym_inline_text,
  [sym_blank_line] = sym_blank_line,
  [sym_source_file] = sym_source_file,
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
  [aux_sym__line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
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
  [sym_source_file] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(11);
      ADVANCE_MAP(
        '\n', 12,
        '\r', 1,
        '"', 18,
        '*', 26,
        ';', 23,
        '=', 17,
        '@', 15,
        '[', 13,
        ']', 14,
        '\t', 2,
        ' ', 2,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(12);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 12,
        '\r', 1,
        '"', 18,
        '*', 26,
        ';', 23,
        '=', 17,
        '@', 15,
        '[', 13,
        ']', 14,
        '\t', 2,
        ' ', 2,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(31);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 31,
        '\r', 3,
        '*', 26,
        ';', 23,
        '@', 15,
        '[', 13,
        '\t', 4,
        ' ', 4,
      );
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ']') ADVANCE(21);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(18);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(27);
      END_STATE();
    case 8:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == ']') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 9:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(30);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      ADVANCE_MAP(
        '\n', 31,
        '\r', 3,
        '*', 26,
        ';', 23,
        '@', 15,
        '[', 13,
        '\t', 4,
        ' ', 4,
      );
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(19);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(20);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_unquoted_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ']') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_at_unquoted_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(25);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(25);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '[') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '[') ADVANCE(30);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '[') ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_blank_line);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 10},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 8},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 8},
  [9] = {.lex_state = 9},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 9},
  [17] = {.lex_state = 8},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 8},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 8},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 19},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 7},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 24},
  [38] = {.lex_state = 8},
  [39] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [aux_sym_tag_name_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_blank_line] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(36),
    [sym__line] = STATE(2),
    [sym__statement] = STATE(28),
    [sym_tag_line] = STATE(28),
    [sym_tag] = STATE(7),
    [sym_at_tag] = STATE(28),
    [sym_comment] = STATE(28),
    [sym_label] = STATE(28),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [anon_sym_SEMI] = ACTIONS(9),
    [anon_sym_STAR] = ACTIONS(11),
    [sym_text_line] = ACTIONS(13),
    [sym_blank_line] = ACTIONS(15),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_AT,
    ACTIONS(9), 1,
      anon_sym_SEMI,
    ACTIONS(11), 1,
      anon_sym_STAR,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      sym_text_line,
    ACTIONS(21), 1,
      sym_blank_line,
    STATE(7), 1,
      sym_tag,
    STATE(3), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(26), 5,
      sym__statement,
      sym_tag_line,
      sym_at_tag,
      sym_comment,
      sym_label,
  [36] = 10,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    ACTIONS(25), 1,
      anon_sym_LBRACK,
    ACTIONS(28), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      anon_sym_SEMI,
    ACTIONS(34), 1,
      anon_sym_STAR,
    ACTIONS(37), 1,
      sym_text_line,
    ACTIONS(40), 1,
      sym_blank_line,
    STATE(7), 1,
      sym_tag,
    STATE(3), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(38), 5,
      sym__statement,
      sym_tag_line,
      sym_at_tag,
      sym_comment,
      sym_label,
  [72] = 1,
    ACTIONS(43), 7,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym_text_line,
      sym_blank_line,
  [82] = 4,
    ACTIONS(47), 1,
      aux_sym_tag_name_token1,
    STATE(15), 1,
      sym_attribute_name,
    ACTIONS(45), 2,
      ts_builtin_sym_end,
      aux_sym__line_token1,
    STATE(8), 2,
      sym_at_attribute,
      aux_sym_at_tag_repeat1,
  [97] = 5,
    ACTIONS(49), 1,
      ts_builtin_sym_end,
    ACTIONS(51), 1,
      aux_sym__line_token1,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      sym_inline_text,
    STATE(9), 2,
      sym_tag,
      aux_sym_tag_line_repeat1,
  [114] = 5,
    ACTIONS(53), 1,
      anon_sym_LBRACK,
    ACTIONS(57), 1,
      ts_builtin_sym_end,
    ACTIONS(59), 1,
      aux_sym__line_token1,
    ACTIONS(61), 1,
      sym_inline_text,
    STATE(6), 2,
      sym_tag,
      aux_sym_tag_line_repeat1,
  [131] = 4,
    ACTIONS(47), 1,
      aux_sym_tag_name_token1,
    STATE(15), 1,
      sym_attribute_name,
    ACTIONS(63), 2,
      ts_builtin_sym_end,
      aux_sym__line_token1,
    STATE(10), 2,
      sym_at_attribute,
      aux_sym_at_tag_repeat1,
  [146] = 5,
    ACTIONS(65), 1,
      ts_builtin_sym_end,
    ACTIONS(67), 1,
      aux_sym__line_token1,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(72), 1,
      sym_inline_text,
    STATE(9), 2,
      sym_tag,
      aux_sym_tag_line_repeat1,
  [163] = 4,
    ACTIONS(77), 1,
      aux_sym_tag_name_token1,
    STATE(15), 1,
      sym_attribute_name,
    ACTIONS(75), 2,
      ts_builtin_sym_end,
      aux_sym__line_token1,
    STATE(10), 2,
      sym_at_attribute,
      aux_sym_at_tag_repeat1,
  [178] = 1,
    ACTIONS(80), 5,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
      anon_sym_EQ,
  [186] = 4,
    ACTIONS(47), 1,
      aux_sym_tag_name_token1,
    ACTIONS(82), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      sym_attribute_name,
    STATE(14), 2,
      sym_attribute,
      aux_sym_tag_repeat1,
  [200] = 4,
    ACTIONS(47), 1,
      aux_sym_tag_name_token1,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      sym_attribute_name,
    STATE(12), 2,
      sym_attribute,
      aux_sym_tag_repeat1,
  [214] = 4,
    ACTIONS(86), 1,
      anon_sym_RBRACK,
    ACTIONS(88), 1,
      aux_sym_tag_name_token1,
    STATE(23), 1,
      sym_attribute_name,
    STATE(14), 2,
      sym_attribute,
      aux_sym_tag_repeat1,
  [228] = 2,
    ACTIONS(93), 1,
      anon_sym_EQ,
    ACTIONS(91), 3,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      aux_sym_tag_name_token1,
  [237] = 2,
    ACTIONS(95), 2,
      ts_builtin_sym_end,
      sym_inline_text,
    ACTIONS(97), 2,
      aux_sym__line_token1,
      anon_sym_LBRACK,
  [246] = 1,
    ACTIONS(99), 4,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
  [253] = 4,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(103), 1,
      sym_unquoted_value,
    STATE(33), 1,
      sym_quoted_string,
    STATE(34), 1,
      sym_attribute_value,
  [266] = 2,
    ACTIONS(105), 2,
      ts_builtin_sym_end,
      sym_inline_text,
    ACTIONS(107), 2,
      aux_sym__line_token1,
      anon_sym_LBRACK,
  [275] = 4,
    ACTIONS(101), 1,
      anon_sym_DQUOTE,
    ACTIONS(109), 1,
      sym_at_unquoted_value,
    STATE(24), 1,
      sym_quoted_string,
    STATE(25), 1,
      sym_at_attribute_value,
  [288] = 1,
    ACTIONS(111), 4,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
  [295] = 1,
    ACTIONS(113), 4,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
  [302] = 2,
    ACTIONS(117), 1,
      anon_sym_EQ,
    ACTIONS(115), 2,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
  [310] = 1,
    ACTIONS(119), 3,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      aux_sym_tag_name_token1,
  [316] = 1,
    ACTIONS(121), 3,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      aux_sym_tag_name_token1,
  [322] = 2,
    ACTIONS(123), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      aux_sym__line_token1,
  [329] = 2,
    ACTIONS(127), 1,
      aux_sym_tag_name_token1,
    STATE(5), 1,
      sym_tag_name,
  [336] = 2,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      aux_sym__line_token1,
  [343] = 1,
    ACTIONS(129), 2,
      ts_builtin_sym_end,
      aux_sym__line_token1,
  [348] = 2,
    ACTIONS(127), 1,
      aux_sym_tag_name_token1,
    STATE(13), 1,
      sym_tag_name,
  [355] = 1,
    ACTIONS(131), 2,
      ts_builtin_sym_end,
      aux_sym__line_token1,
  [360] = 2,
    ACTIONS(133), 1,
      anon_sym_DQUOTE,
    ACTIONS(135), 1,
      sym_string_content,
  [367] = 1,
    ACTIONS(137), 2,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
  [372] = 1,
    ACTIONS(139), 2,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
  [377] = 1,
    ACTIONS(141), 1,
      sym_label_name,
  [381] = 1,
    ACTIONS(143), 1,
      ts_builtin_sym_end,
  [385] = 1,
    ACTIONS(145), 1,
      aux_sym_comment_token1,
  [389] = 1,
    ACTIONS(125), 1,
      aux_sym__line_token1,
  [393] = 1,
    ACTIONS(147), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 36,
  [SMALL_STATE(4)] = 72,
  [SMALL_STATE(5)] = 82,
  [SMALL_STATE(6)] = 97,
  [SMALL_STATE(7)] = 114,
  [SMALL_STATE(8)] = 131,
  [SMALL_STATE(9)] = 146,
  [SMALL_STATE(10)] = 163,
  [SMALL_STATE(11)] = 178,
  [SMALL_STATE(12)] = 186,
  [SMALL_STATE(13)] = 200,
  [SMALL_STATE(14)] = 214,
  [SMALL_STATE(15)] = 228,
  [SMALL_STATE(16)] = 237,
  [SMALL_STATE(17)] = 246,
  [SMALL_STATE(18)] = 253,
  [SMALL_STATE(19)] = 266,
  [SMALL_STATE(20)] = 275,
  [SMALL_STATE(21)] = 288,
  [SMALL_STATE(22)] = 295,
  [SMALL_STATE(23)] = 302,
  [SMALL_STATE(24)] = 310,
  [SMALL_STATE(25)] = 316,
  [SMALL_STATE(26)] = 322,
  [SMALL_STATE(27)] = 329,
  [SMALL_STATE(28)] = 336,
  [SMALL_STATE(29)] = 343,
  [SMALL_STATE(30)] = 348,
  [SMALL_STATE(31)] = 355,
  [SMALL_STATE(32)] = 360,
  [SMALL_STATE(33)] = 367,
  [SMALL_STATE(34)] = 372,
  [SMALL_STATE(35)] = 377,
  [SMALL_STATE(36)] = 381,
  [SMALL_STATE(37)] = 385,
  [SMALL_STATE(38)] = 389,
  [SMALL_STATE(39)] = 393,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(35),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_tag, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_line, 2, 0, 0),
  [51] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_line, 2, 0, 0),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_line, 1, 0, 0),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_line, 1, 0, 0),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_tag, 3, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_line_repeat1, 2, 0, 0),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_line_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_line_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_line_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_at_tag_repeat1, 2, 0, 0),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_at_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2, 0, 0),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(11),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_attribute, 1, 0, 1),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, 0, 0),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, 0, 0),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_name, 1, 0, 0),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4, 0, 0),
  [107] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4, 0, 0),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [115] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 1),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_attribute_value, 1, 0, 0),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_attribute, 3, 0, 2),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [143] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [145] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [147] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
};

#ifdef __cplusplus
extern "C" {
#endif
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
