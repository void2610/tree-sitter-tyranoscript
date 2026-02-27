#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 30
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 30
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  aux_sym__line_token1 = 1,
  anon_sym_LBRACK = 2,
  anon_sym_RBRACK = 3,
  aux_sym_tag_name_token1 = 4,
  anon_sym_EQ = 5,
  anon_sym_DQUOTE = 6,
  sym_string_content = 7,
  sym_unquoted_value = 8,
  anon_sym_SEMI = 9,
  aux_sym_comment_token1 = 10,
  anon_sym_STAR = 11,
  sym_label_name = 12,
  sym_text_line = 13,
  sym_inline_text = 14,
  sym_blank_line = 15,
  sym_source_file = 16,
  sym__line = 17,
  sym_tag_line = 18,
  sym_tag = 19,
  sym_tag_name = 20,
  sym_attribute = 21,
  sym_attribute_name = 22,
  sym_attribute_value = 23,
  sym_quoted_string = 24,
  sym_comment = 25,
  sym_label = 26,
  aux_sym_source_file_repeat1 = 27,
  aux_sym_tag_line_repeat1 = 28,
  aux_sym_tag_repeat1 = 29,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [aux_sym__line_token1] = "_line_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [aux_sym_tag_name_token1] = "tag_name_token1",
  [anon_sym_EQ] = "=",
  [anon_sym_DQUOTE] = "\"",
  [sym_string_content] = "string_content",
  [sym_unquoted_value] = "unquoted_value",
  [anon_sym_SEMI] = ";",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_STAR] = "*",
  [sym_label_name] = "label_name",
  [sym_text_line] = "text_line",
  [sym_inline_text] = "inline_text",
  [sym_blank_line] = "blank_line",
  [sym_source_file] = "source_file",
  [sym__line] = "_line",
  [sym_tag_line] = "tag_line",
  [sym_tag] = "tag",
  [sym_tag_name] = "tag_name",
  [sym_attribute] = "attribute",
  [sym_attribute_name] = "attribute_name",
  [sym_attribute_value] = "attribute_value",
  [sym_quoted_string] = "quoted_string",
  [sym_comment] = "comment",
  [sym_label] = "label",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_tag_line_repeat1] = "tag_line_repeat1",
  [aux_sym_tag_repeat1] = "tag_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [aux_sym__line_token1] = aux_sym__line_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [aux_sym_tag_name_token1] = aux_sym_tag_name_token1,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [sym_string_content] = sym_string_content,
  [sym_unquoted_value] = sym_unquoted_value,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_STAR] = anon_sym_STAR,
  [sym_label_name] = sym_label_name,
  [sym_text_line] = sym_text_line,
  [sym_inline_text] = sym_inline_text,
  [sym_blank_line] = sym_blank_line,
  [sym_source_file] = sym_source_file,
  [sym__line] = sym__line,
  [sym_tag_line] = sym_tag_line,
  [sym_tag] = sym_tag,
  [sym_tag_name] = sym_tag_name,
  [sym_attribute] = sym_attribute,
  [sym_attribute_name] = sym_attribute_name,
  [sym_attribute_value] = sym_attribute_value,
  [sym_quoted_string] = sym_quoted_string,
  [sym_comment] = sym_comment,
  [sym_label] = sym_label,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_tag_line_repeat1] = aux_sym_tag_line_repeat1,
  [aux_sym_tag_repeat1] = aux_sym_tag_repeat1,
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
  [sym_tag_line] = {
    .visible = true,
    .named = true,
  },
  [sym_tag] = {
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
        '"', 17,
        '*', 25,
        ';', 21,
        '=', 16,
        '[', 13,
        ']', 14,
        '\t', 2,
        ' ', 2,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(12);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 12,
        '\r', 1,
        '"', 17,
        '*', 25,
        ';', 21,
        '=', 16,
        '[', 13,
        ']', 14,
        '\t', 2,
        ' ', 2,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(17);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ']') ADVANCE(20);
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
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(3);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 9:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(12);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0) ADVANCE(28);
      END_STATE();
    case 10:
      if (eof) ADVANCE(11);
      if (lookahead == '\n') ADVANCE(31);
      if (lookahead == '\r') ADVANCE(4);
      if (lookahead == '*') ADVANCE(25);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '[') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(5);
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
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(18);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(19);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_unquoted_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ']') ADVANCE(20);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '[') ADVANCE(30);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(23);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_STAR);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '[') ADVANCE(30);
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
      if (lookahead == '*') ADVANCE(26);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '[') ADVANCE(28);
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
  [4] = {.lex_state = 9},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 9},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 8},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 18},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 23},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 7},
  [29] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [aux_sym__line_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [aux_sym_tag_name_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_STAR] = ACTIONS(1),
    [sym_blank_line] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(27),
    [sym__line] = STATE(2),
    [sym_tag_line] = STATE(10),
    [sym_tag] = STATE(4),
    [sym_comment] = STATE(10),
    [sym_label] = STATE(10),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
    [anon_sym_SEMI] = ACTIONS(7),
    [anon_sym_STAR] = ACTIONS(9),
    [sym_text_line] = ACTIONS(11),
    [sym_blank_line] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 9,
    ACTIONS(5), 1,
      anon_sym_LBRACK,
    ACTIONS(7), 1,
      anon_sym_SEMI,
    ACTIONS(9), 1,
      anon_sym_STAR,
    ACTIONS(11), 1,
      sym_text_line,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      sym_blank_line,
    STATE(4), 1,
      sym_tag,
    STATE(3), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(10), 3,
      sym_tag_line,
      sym_comment,
      sym_label,
  [31] = 9,
    ACTIONS(19), 1,
      ts_builtin_sym_end,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(24), 1,
      anon_sym_SEMI,
    ACTIONS(27), 1,
      anon_sym_STAR,
    ACTIONS(30), 1,
      sym_text_line,
    ACTIONS(33), 1,
      sym_blank_line,
    STATE(4), 1,
      sym_tag,
    STATE(3), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(10), 3,
      sym_tag_line,
      sym_comment,
      sym_label,
  [62] = 5,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
    ACTIONS(40), 1,
      anon_sym_LBRACK,
    ACTIONS(43), 1,
      sym_inline_text,
    STATE(5), 2,
      sym_tag,
      aux_sym_tag_line_repeat1,
    ACTIONS(38), 5,
      aux_sym__line_token1,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym_text_line,
      sym_blank_line,
  [83] = 5,
    ACTIONS(45), 1,
      ts_builtin_sym_end,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(52), 1,
      sym_inline_text,
    STATE(6), 2,
      sym_tag,
      aux_sym_tag_line_repeat1,
    ACTIONS(47), 5,
      aux_sym__line_token1,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym_text_line,
      sym_blank_line,
  [104] = 5,
    ACTIONS(54), 1,
      ts_builtin_sym_end,
    ACTIONS(58), 1,
      anon_sym_LBRACK,
    ACTIONS(61), 1,
      sym_inline_text,
    STATE(6), 2,
      sym_tag,
      aux_sym_tag_line_repeat1,
    ACTIONS(56), 5,
      aux_sym__line_token1,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym_text_line,
      sym_blank_line,
  [125] = 2,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    ACTIONS(66), 7,
      aux_sym__line_token1,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym_text_line,
      sym_inline_text,
      sym_blank_line,
  [138] = 2,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 7,
      aux_sym__line_token1,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym_text_line,
      sym_inline_text,
      sym_blank_line,
  [151] = 2,
    ACTIONS(74), 1,
      sym_blank_line,
    ACTIONS(72), 6,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym_text_line,
  [163] = 3,
    ACTIONS(78), 1,
      aux_sym__line_token1,
    ACTIONS(80), 1,
      sym_blank_line,
    ACTIONS(76), 5,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym_text_line,
  [177] = 2,
    ACTIONS(84), 1,
      sym_blank_line,
    ACTIONS(82), 6,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym_text_line,
  [189] = 1,
    ACTIONS(86), 6,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_SEMI,
      anon_sym_STAR,
      sym_text_line,
      sym_blank_line,
  [198] = 4,
    ACTIONS(88), 1,
      anon_sym_RBRACK,
    ACTIONS(90), 1,
      aux_sym_tag_name_token1,
    STATE(18), 1,
      sym_attribute_name,
    STATE(15), 2,
      sym_attribute,
      aux_sym_tag_repeat1,
  [212] = 4,
    ACTIONS(92), 1,
      anon_sym_RBRACK,
    ACTIONS(94), 1,
      aux_sym_tag_name_token1,
    STATE(18), 1,
      sym_attribute_name,
    STATE(14), 2,
      sym_attribute,
      aux_sym_tag_repeat1,
  [226] = 4,
    ACTIONS(90), 1,
      aux_sym_tag_name_token1,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    STATE(18), 1,
      sym_attribute_name,
    STATE(14), 2,
      sym_attribute,
      aux_sym_tag_repeat1,
  [240] = 4,
    ACTIONS(99), 1,
      anon_sym_DQUOTE,
    ACTIONS(101), 1,
      sym_unquoted_value,
    STATE(22), 1,
      sym_quoted_string,
    STATE(23), 1,
      sym_attribute_value,
  [253] = 1,
    ACTIONS(103), 3,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
      anon_sym_EQ,
  [259] = 2,
    ACTIONS(107), 1,
      anon_sym_EQ,
    ACTIONS(105), 2,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
  [267] = 2,
    ACTIONS(109), 1,
      aux_sym_tag_name_token1,
    STATE(13), 1,
      sym_tag_name,
  [274] = 1,
    ACTIONS(111), 2,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
  [279] = 2,
    ACTIONS(113), 1,
      anon_sym_DQUOTE,
    ACTIONS(115), 1,
      sym_string_content,
  [286] = 1,
    ACTIONS(117), 2,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
  [291] = 1,
    ACTIONS(119), 2,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
  [296] = 1,
    ACTIONS(121), 2,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
  [301] = 1,
    ACTIONS(123), 2,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
  [306] = 1,
    ACTIONS(125), 1,
      aux_sym_comment_token1,
  [310] = 1,
    ACTIONS(127), 1,
      ts_builtin_sym_end,
  [314] = 1,
    ACTIONS(129), 1,
      sym_label_name,
  [318] = 1,
    ACTIONS(131), 1,
      anon_sym_DQUOTE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 31,
  [SMALL_STATE(4)] = 62,
  [SMALL_STATE(5)] = 83,
  [SMALL_STATE(6)] = 104,
  [SMALL_STATE(7)] = 125,
  [SMALL_STATE(8)] = 138,
  [SMALL_STATE(9)] = 151,
  [SMALL_STATE(10)] = 163,
  [SMALL_STATE(11)] = 177,
  [SMALL_STATE(12)] = 189,
  [SMALL_STATE(13)] = 198,
  [SMALL_STATE(14)] = 212,
  [SMALL_STATE(15)] = 226,
  [SMALL_STATE(16)] = 240,
  [SMALL_STATE(17)] = 253,
  [SMALL_STATE(18)] = 259,
  [SMALL_STATE(19)] = 267,
  [SMALL_STATE(20)] = 274,
  [SMALL_STATE(21)] = 279,
  [SMALL_STATE(22)] = 286,
  [SMALL_STATE(23)] = 291,
  [SMALL_STATE(24)] = 296,
  [SMALL_STATE(25)] = 301,
  [SMALL_STATE(26)] = 306,
  [SMALL_STATE(27)] = 310,
  [SMALL_STATE(28)] = 314,
  [SMALL_STATE(29)] = 318,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(26),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(28),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_line, 1, 0, 0),
  [38] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_line, 1, 0, 0),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_tag_line, 1, 0, 0), SHIFT(19),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_line, 2, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_line, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_tag_line, 2, 0, 0), SHIFT(19),
  [52] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_line_repeat1, 2, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_line_repeat1, 2, 0, 0),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_line_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_line_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4, 0, 0),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 2, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 1, 0, 0),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__line, 1, 0, 0),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [84] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 2, 0, 0),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2, 0, 0),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2, 0, 0),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1, 0, 0),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 1),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_name, 1, 0, 0),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 2),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [127] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
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
