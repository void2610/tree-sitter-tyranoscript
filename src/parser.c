#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
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
  anon_sym_POUND = 15,
  sym_speaker_name = 16,
  sym_text_line = 17,
  sym_inline_text = 18,
  sym_blank_line = 19,
  sym_source_file = 20,
  sym__line = 21,
  sym__statement = 22,
  sym_tag_line = 23,
  sym_tag = 24,
  sym_at_tag = 25,
  sym_tag_name = 26,
  sym_attribute = 27,
  sym_attribute_name = 28,
  sym_attribute_value = 29,
  sym_at_attribute = 30,
  sym_at_attribute_value = 31,
  sym_quoted_string = 32,
  sym_comment = 33,
  sym_label = 34,
  sym_speaker = 35,
  aux_sym_source_file_repeat1 = 36,
  aux_sym_tag_line_repeat1 = 37,
  aux_sym_tag_repeat1 = 38,
  aux_sym_at_tag_repeat1 = 39,
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
  [anon_sym_POUND] = "#",
  [sym_speaker_name] = "speaker_name",
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
  [sym_speaker] = "speaker",
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
  [anon_sym_POUND] = anon_sym_POUND,
  [sym_speaker_name] = sym_speaker_name,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      ADVANCE_MAP(
        '\n', 13,
        '\r', 1,
        '"', 19,
        '#', 29,
        '*', 27,
        ';', 24,
        '=', 18,
        '@', 16,
        '[', 14,
        ']', 15,
        '\t', 2,
        ' ', 2,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(13);
      END_STATE();
    case 2:
      ADVANCE_MAP(
        '\n', 13,
        '\r', 1,
        '"', 19,
        '#', 29,
        '*', 27,
        ';', 24,
        '=', 18,
        '@', 16,
        '[', 14,
        ']', 15,
        '\t', 2,
        ' ', 2,
      );
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(35);
      END_STATE();
    case 4:
      ADVANCE_MAP(
        '\n', 35,
        '\r', 3,
        '#', 29,
        '*', 27,
        ';', 24,
        '@', 16,
        '[', 14,
        '\t', 4,
        ' ', 4,
      );
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(5);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(23);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(19);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(6);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ']') ADVANCE(22);
      END_STATE();
    case 7:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(7);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead)) ADVANCE(28);
      END_STATE();
    case 8:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '=') ADVANCE(18);
      if (lookahead == ']') ADVANCE(15);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(8);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 9:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '[') ADVANCE(14);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0) ADVANCE(34);
      END_STATE();
    case 10:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(13);
      if (lookahead == '\r') ADVANCE(1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0) ADVANCE(31);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      ADVANCE_MAP(
        '\n', 35,
        '\r', 3,
        '#', 29,
        '*', 27,
        ';', 24,
        '@', 16,
        '[', 14,
        '\t', 4,
        ' ', 4,
      );
      if (lookahead != 0) ADVANCE(32);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(aux_sym__line_token1);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(aux_sym_tag_name_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(20);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_string_content);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(21);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_unquoted_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"' &&
          lookahead != ']') ADVANCE(22);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_at_unquoted_value);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ' &&
          lookahead != '"') ADVANCE(23);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(25);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(26);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(26);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_STAR);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_label_name);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != ' ') ADVANCE(28);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_speaker_name);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(30);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(31);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_speaker_name);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_text_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '[') ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(33);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '[') ADVANCE(34);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_inline_text);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '[') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_blank_line);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 9},
  [6] = {.lex_state = 8},
  [7] = {.lex_state = 9},
  [8] = {.lex_state = 9},
  [9] = {.lex_state = 8},
  [10] = {.lex_state = 8},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 8},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 8},
  [16] = {.lex_state = 8},
  [17] = {.lex_state = 9},
  [18] = {.lex_state = 8},
  [19] = {.lex_state = 9},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 8},
  [23] = {.lex_state = 10},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 8},
  [31] = {.lex_state = 8},
  [32] = {.lex_state = 20},
  [33] = {.lex_state = 8},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 25},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 8},
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
    [anon_sym_POUND] = ACTIONS(1),
    [sym_blank_line] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(37),
    [sym__line] = STATE(3),
    [sym__statement] = STATE(30),
    [sym_tag_line] = STATE(30),
    [sym_tag] = STATE(5),
    [sym_at_tag] = STATE(30),
    [sym_comment] = STATE(30),
    [sym_label] = STATE(30),
    [sym_speaker] = STATE(30),
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
  [0] = 11,
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
    STATE(5), 1,
      sym_tag,
    STATE(2), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(41), 6,
      sym__statement,
      sym_tag_line,
      sym_at_tag,
      sym_comment,
      sym_label,
      sym_speaker,
  [40] = 11,
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
    STATE(5), 1,
      sym_tag,
    STATE(2), 2,
      sym__line,
      aux_sym_source_file_repeat1,
    STATE(27), 6,
      sym__statement,
      sym_tag_line,
      sym_at_tag,
      sym_comment,
      sym_label,
      sym_speaker,
  [80] = 1,
    ACTIONS(48), 8,
      ts_builtin_sym_end,
      anon_sym_LBRACK,
      anon_sym_AT,
      anon_sym_SEMI,
      anon_sym_STAR,
      anon_sym_POUND,
      sym_text_line,
      sym_blank_line,
  [91] = 5,
    ACTIONS(50), 1,
      ts_builtin_sym_end,
    ACTIONS(52), 1,
      aux_sym__line_token1,
    ACTIONS(54), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      sym_inline_text,
    STATE(7), 2,
      sym_tag,
      aux_sym_tag_line_repeat1,
  [108] = 4,
    ACTIONS(60), 1,
      aux_sym_tag_name_token1,
    STATE(18), 1,
      sym_attribute_name,
    ACTIONS(58), 2,
      ts_builtin_sym_end,
      aux_sym__line_token1,
    STATE(10), 2,
      sym_at_attribute,
      aux_sym_at_tag_repeat1,
  [123] = 5,
    ACTIONS(54), 1,
      anon_sym_LBRACK,
    ACTIONS(62), 1,
      ts_builtin_sym_end,
    ACTIONS(64), 1,
      aux_sym__line_token1,
    ACTIONS(66), 1,
      sym_inline_text,
    STATE(8), 2,
      sym_tag,
      aux_sym_tag_line_repeat1,
  [140] = 5,
    ACTIONS(68), 1,
      ts_builtin_sym_end,
    ACTIONS(70), 1,
      aux_sym__line_token1,
    ACTIONS(72), 1,
      anon_sym_LBRACK,
    ACTIONS(75), 1,
      sym_inline_text,
    STATE(8), 2,
      sym_tag,
      aux_sym_tag_line_repeat1,
  [157] = 4,
    ACTIONS(80), 1,
      aux_sym_tag_name_token1,
    STATE(18), 1,
      sym_attribute_name,
    ACTIONS(78), 2,
      ts_builtin_sym_end,
      aux_sym__line_token1,
    STATE(9), 2,
      sym_at_attribute,
      aux_sym_at_tag_repeat1,
  [172] = 4,
    ACTIONS(60), 1,
      aux_sym_tag_name_token1,
    STATE(18), 1,
      sym_attribute_name,
    ACTIONS(83), 2,
      ts_builtin_sym_end,
      aux_sym__line_token1,
    STATE(9), 2,
      sym_at_attribute,
      aux_sym_at_tag_repeat1,
  [187] = 4,
    ACTIONS(60), 1,
      aux_sym_tag_name_token1,
    ACTIONS(85), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      sym_attribute_name,
    STATE(14), 2,
      sym_attribute,
      aux_sym_tag_repeat1,
  [201] = 1,
    ACTIONS(87), 5,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
      anon_sym_EQ,
  [209] = 4,
    ACTIONS(89), 1,
      anon_sym_RBRACK,
    ACTIONS(91), 1,
      aux_sym_tag_name_token1,
    STATE(24), 1,
      sym_attribute_name,
    STATE(13), 2,
      sym_attribute,
      aux_sym_tag_repeat1,
  [223] = 4,
    ACTIONS(60), 1,
      aux_sym_tag_name_token1,
    ACTIONS(94), 1,
      anon_sym_RBRACK,
    STATE(24), 1,
      sym_attribute_name,
    STATE(13), 2,
      sym_attribute,
      aux_sym_tag_repeat1,
  [237] = 1,
    ACTIONS(96), 4,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
  [244] = 1,
    ACTIONS(98), 4,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
  [251] = 2,
    ACTIONS(100), 2,
      ts_builtin_sym_end,
      sym_inline_text,
    ACTIONS(102), 2,
      aux_sym__line_token1,
      anon_sym_LBRACK,
  [260] = 2,
    ACTIONS(106), 1,
      anon_sym_EQ,
    ACTIONS(104), 3,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      aux_sym_tag_name_token1,
  [269] = 2,
    ACTIONS(108), 2,
      ts_builtin_sym_end,
      sym_inline_text,
    ACTIONS(110), 2,
      aux_sym__line_token1,
      anon_sym_LBRACK,
  [278] = 4,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      sym_at_unquoted_value,
    STATE(25), 1,
      sym_quoted_string,
    STATE(26), 1,
      sym_at_attribute_value,
  [291] = 4,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(116), 1,
      sym_unquoted_value,
    STATE(35), 1,
      sym_quoted_string,
    STATE(36), 1,
      sym_attribute_value,
  [304] = 1,
    ACTIONS(118), 4,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
  [311] = 3,
    ACTIONS(120), 1,
      ts_builtin_sym_end,
    ACTIONS(122), 1,
      aux_sym__line_token1,
    ACTIONS(124), 1,
      sym_speaker_name,
  [321] = 2,
    ACTIONS(128), 1,
      anon_sym_EQ,
    ACTIONS(126), 2,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
  [329] = 1,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      aux_sym_tag_name_token1,
  [335] = 1,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      aux_sym__line_token1,
      aux_sym_tag_name_token1,
  [341] = 2,
    ACTIONS(134), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      aux_sym__line_token1,
  [348] = 1,
    ACTIONS(138), 2,
      ts_builtin_sym_end,
      aux_sym__line_token1,
  [353] = 2,
    ACTIONS(140), 1,
      aux_sym_tag_name_token1,
    STATE(11), 1,
      sym_tag_name,
  [360] = 2,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    ACTIONS(136), 1,
      aux_sym__line_token1,
  [367] = 1,
    ACTIONS(142), 2,
      ts_builtin_sym_end,
      aux_sym__line_token1,
  [372] = 2,
    ACTIONS(144), 1,
      anon_sym_DQUOTE,
    ACTIONS(146), 1,
      sym_string_content,
  [379] = 1,
    ACTIONS(148), 2,
      ts_builtin_sym_end,
      aux_sym__line_token1,
  [384] = 2,
    ACTIONS(140), 1,
      aux_sym_tag_name_token1,
    STATE(6), 1,
      sym_tag_name,
  [391] = 1,
    ACTIONS(150), 2,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
  [396] = 1,
    ACTIONS(152), 2,
      anon_sym_RBRACK,
      aux_sym_tag_name_token1,
  [401] = 1,
    ACTIONS(154), 1,
      ts_builtin_sym_end,
  [405] = 1,
    ACTIONS(156), 1,
      sym_label_name,
  [409] = 1,
    ACTIONS(158), 1,
      aux_sym_comment_token1,
  [413] = 1,
    ACTIONS(160), 1,
      anon_sym_DQUOTE,
  [417] = 1,
    ACTIONS(136), 1,
      aux_sym__line_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 40,
  [SMALL_STATE(4)] = 80,
  [SMALL_STATE(5)] = 91,
  [SMALL_STATE(6)] = 108,
  [SMALL_STATE(7)] = 123,
  [SMALL_STATE(8)] = 140,
  [SMALL_STATE(9)] = 157,
  [SMALL_STATE(10)] = 172,
  [SMALL_STATE(11)] = 187,
  [SMALL_STATE(12)] = 201,
  [SMALL_STATE(13)] = 209,
  [SMALL_STATE(14)] = 223,
  [SMALL_STATE(15)] = 237,
  [SMALL_STATE(16)] = 244,
  [SMALL_STATE(17)] = 251,
  [SMALL_STATE(18)] = 260,
  [SMALL_STATE(19)] = 269,
  [SMALL_STATE(20)] = 278,
  [SMALL_STATE(21)] = 291,
  [SMALL_STATE(22)] = 304,
  [SMALL_STATE(23)] = 311,
  [SMALL_STATE(24)] = 321,
  [SMALL_STATE(25)] = 329,
  [SMALL_STATE(26)] = 335,
  [SMALL_STATE(27)] = 341,
  [SMALL_STATE(28)] = 348,
  [SMALL_STATE(29)] = 353,
  [SMALL_STATE(30)] = 360,
  [SMALL_STATE(31)] = 367,
  [SMALL_STATE(32)] = 372,
  [SMALL_STATE(33)] = 379,
  [SMALL_STATE(34)] = 384,
  [SMALL_STATE(35)] = 391,
  [SMALL_STATE(36)] = 396,
  [SMALL_STATE(37)] = 401,
  [SMALL_STATE(38)] = 405,
  [SMALL_STATE(39)] = 409,
  [SMALL_STATE(40)] = 413,
  [SMALL_STATE(41)] = 417,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(34),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(38),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(41),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__line, 2, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_line, 1, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_line, 1, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_tag, 2, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_line, 2, 0, 0),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag_line, 2, 0, 0),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [68] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_line_repeat1, 2, 0, 0),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tag_line_repeat1, 2, 0, 0),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tag_line_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_line_repeat1, 2, 0, 0), SHIFT_REPEAT(8),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_at_tag_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_at_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_tag, 3, 0, 0),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_name, 1, 0, 0),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tag_repeat1, 2, 0, 0), SHIFT_REPEAT(12),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 3, 0, 0),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag_name, 1, 0, 0),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 3, 0, 0),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 3, 0, 0),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_attribute, 1, 0, 1),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tag, 4, 0, 0),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tag, 4, 0, 0),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_quoted_string, 2, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_speaker, 1, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_speaker, 1, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 1, 0, 1),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_attribute_value, 1, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_at_attribute, 3, 0, 2),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 2, 0, 0),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 2, 0, 0),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [142] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 2, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_speaker, 2, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute_value, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_attribute, 3, 0, 2),
  [154] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
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
