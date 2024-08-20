#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 22
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 20
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 3

enum ts_symbol_identifiers {
  anon_sym_FROM = 1,
  anon_sym_PARAMETER = 2,
  anon_sym_TEMPLATE = 3,
  anon_sym_SYSTEM = 4,
  anon_sym_ADAPTER = 5,
  anon_sym_LICENSE = 6,
  anon_sym_DQUOTE = 7,
  aux_sym_string_token1 = 8,
  aux_sym_string_token2 = 9,
  anon_sym_SQUOTE = 10,
  aux_sym_string_token3 = 11,
  sym_number = 12,
  anon_sym_true = 13,
  anon_sym_false = 14,
  anon_sym_DQUOTE_DQUOTE_DQUOTE = 15,
  aux_sym_heredoc_token1 = 16,
  aux_sym_heredoc_token2 = 17,
  aux_sym_heredoc_token3 = 18,
  sym_comment = 19,
  sym_source_file = 20,
  sym__definition = 21,
  sym_instruction = 22,
  sym_instruction_keyword = 23,
  sym__value = 24,
  sym_string = 25,
  sym_boolean = 26,
  sym_heredoc = 27,
  aux_sym_source_file_repeat1 = 28,
  aux_sym_string_repeat1 = 29,
  aux_sym_string_repeat2 = 30,
  aux_sym_heredoc_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_FROM] = "FROM",
  [anon_sym_PARAMETER] = "PARAMETER",
  [anon_sym_TEMPLATE] = "TEMPLATE",
  [anon_sym_SYSTEM] = "SYSTEM",
  [anon_sym_ADAPTER] = "ADAPTER",
  [anon_sym_LICENSE] = "LICENSE",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_string_token1] = "string_token1",
  [aux_sym_string_token2] = "string_token2",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_string_token3] = "string_token3",
  [sym_number] = "number",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = "\"\"\"",
  [aux_sym_heredoc_token1] = "heredoc_token1",
  [aux_sym_heredoc_token2] = "heredoc_token2",
  [aux_sym_heredoc_token3] = "heredoc_token3",
  [sym_comment] = "comment",
  [sym_source_file] = "source_file",
  [sym__definition] = "_definition",
  [sym_instruction] = "instruction",
  [sym_instruction_keyword] = "instruction_keyword",
  [sym__value] = "_value",
  [sym_string] = "string",
  [sym_boolean] = "boolean",
  [sym_heredoc] = "heredoc",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
  [aux_sym_heredoc_repeat1] = "heredoc_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_FROM] = anon_sym_FROM,
  [anon_sym_PARAMETER] = anon_sym_PARAMETER,
  [anon_sym_TEMPLATE] = anon_sym_TEMPLATE,
  [anon_sym_SYSTEM] = anon_sym_SYSTEM,
  [anon_sym_ADAPTER] = anon_sym_ADAPTER,
  [anon_sym_LICENSE] = anon_sym_LICENSE,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_string_token1] = aux_sym_string_token1,
  [aux_sym_string_token2] = aux_sym_string_token2,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_string_token3] = aux_sym_string_token3,
  [sym_number] = sym_number,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = anon_sym_DQUOTE_DQUOTE_DQUOTE,
  [aux_sym_heredoc_token1] = aux_sym_heredoc_token1,
  [aux_sym_heredoc_token2] = aux_sym_heredoc_token2,
  [aux_sym_heredoc_token3] = aux_sym_heredoc_token3,
  [sym_comment] = sym_comment,
  [sym_source_file] = sym_source_file,
  [sym__definition] = sym__definition,
  [sym_instruction] = sym_instruction,
  [sym_instruction_keyword] = sym_instruction_keyword,
  [sym__value] = sym__value,
  [sym_string] = sym_string,
  [sym_boolean] = sym_boolean,
  [sym_heredoc] = sym_heredoc,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
  [aux_sym_heredoc_repeat1] = aux_sym_heredoc_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_FROM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PARAMETER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TEMPLATE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SYSTEM] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_ADAPTER] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LICENSE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_string_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE_DQUOTE_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_heredoc_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_heredoc_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_heredoc_token3] = {
    .visible = false,
    .named = false,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__definition] = {
    .visible = false,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction_keyword] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean] = {
    .visible = true,
    .named = true,
  },
  [sym_heredoc] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_heredoc_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_keyword = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_keyword] = "keyword",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_keyword, 0},
  [1] =
    {field_keyword, 0},
    {field_value, 1},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      ADVANCE_MAP(
        '"', 59,
        '#', 75,
        '\'', 63,
        'A', 12,
        'F', 31,
        'L', 21,
        'P', 8,
        'S', 41,
        'T', 13,
        '\\', 50,
        'f', 42,
        't', 46,
      );
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(70);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(70);
      if (lookahead != 0) ADVANCE(74);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(5);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0) ADVANCE(71);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(58);
      if (lookahead == '\\') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0) ADVANCE(60);
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 6:
      if (lookahead == '\'') ADVANCE(63);
      if (lookahead == '\\') ADVANCE(50);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0) ADVANCE(64);
      END_STATE();
    case 7:
      if (lookahead == 'A') ADVANCE(30);
      END_STATE();
    case 8:
      if (lookahead == 'A') ADVANCE(34);
      END_STATE();
    case 9:
      if (lookahead == 'A') ADVANCE(26);
      END_STATE();
    case 10:
      if (lookahead == 'A') ADVANCE(39);
      END_STATE();
    case 11:
      if (lookahead == 'C') ADVANCE(14);
      END_STATE();
    case 12:
      if (lookahead == 'D') ADVANCE(7);
      END_STATE();
    case 13:
      if (lookahead == 'E') ADVANCE(25);
      END_STATE();
    case 14:
      if (lookahead == 'E') ADVANCE(27);
      END_STATE();
    case 15:
      if (lookahead == 'E') ADVANCE(57);
      END_STATE();
    case 16:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 17:
      if (lookahead == 'E') ADVANCE(32);
      END_STATE();
    case 18:
      if (lookahead == 'E') ADVANCE(33);
      END_STATE();
    case 19:
      if (lookahead == 'E') ADVANCE(24);
      END_STATE();
    case 20:
      if (lookahead == 'E') ADVANCE(38);
      END_STATE();
    case 21:
      if (lookahead == 'I') ADVANCE(11);
      END_STATE();
    case 22:
      if (lookahead == 'L') ADVANCE(10);
      END_STATE();
    case 23:
      if (lookahead == 'M') ADVANCE(52);
      END_STATE();
    case 24:
      if (lookahead == 'M') ADVANCE(55);
      END_STATE();
    case 25:
      if (lookahead == 'M') ADVANCE(29);
      END_STATE();
    case 26:
      if (lookahead == 'M') ADVANCE(20);
      END_STATE();
    case 27:
      if (lookahead == 'N') ADVANCE(36);
      END_STATE();
    case 28:
      if (lookahead == 'O') ADVANCE(23);
      END_STATE();
    case 29:
      if (lookahead == 'P') ADVANCE(22);
      END_STATE();
    case 30:
      if (lookahead == 'P') ADVANCE(37);
      END_STATE();
    case 31:
      if (lookahead == 'R') ADVANCE(28);
      END_STATE();
    case 32:
      if (lookahead == 'R') ADVANCE(56);
      END_STATE();
    case 33:
      if (lookahead == 'R') ADVANCE(53);
      END_STATE();
    case 34:
      if (lookahead == 'R') ADVANCE(9);
      END_STATE();
    case 35:
      if (lookahead == 'S') ADVANCE(40);
      END_STATE();
    case 36:
      if (lookahead == 'S') ADVANCE(15);
      END_STATE();
    case 37:
      if (lookahead == 'T') ADVANCE(17);
      END_STATE();
    case 38:
      if (lookahead == 'T') ADVANCE(18);
      END_STATE();
    case 39:
      if (lookahead == 'T') ADVANCE(16);
      END_STATE();
    case 40:
      if (lookahead == 'T') ADVANCE(19);
      END_STATE();
    case 41:
      if (lookahead == 'Y') ADVANCE(35);
      END_STATE();
    case 42:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(68);
      END_STATE();
    case 44:
      if (lookahead == 'e') ADVANCE(69);
      END_STATE();
    case 45:
      if (lookahead == 'l') ADVANCE(47);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 47:
      if (lookahead == 's') ADVANCE(44);
      END_STATE();
    case 48:
      if (lookahead == 'u') ADVANCE(43);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 50:
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(62);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_FROM);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_PARAMETER);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_TEMPLATE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_SYSTEM);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_ADAPTER);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LICENSE);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      if (lookahead == '"') ADVANCE(1);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(aux_sym_string_token1);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(aux_sym_string_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(61);
      if (lookahead != 0 &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(60);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(aux_sym_string_token2);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(aux_sym_string_token3);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(aux_sym_string_token3);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(64);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_number);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(67);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_DQUOTE_DQUOTE_DQUOTE);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(aux_sym_heredoc_token1);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(aux_sym_heredoc_token1);
      if (('\t' <= lookahead && lookahead <= '\r') ||
          lookahead == ' ') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '"') ADVANCE(71);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(aux_sym_heredoc_token2);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_heredoc_token3);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(75);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 6},
  [16] = {.lex_state = 4},
  [17] = {.lex_state = 4},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_FROM] = ACTIONS(1),
    [anon_sym_PARAMETER] = ACTIONS(1),
    [anon_sym_TEMPLATE] = ACTIONS(1),
    [anon_sym_SYSTEM] = ACTIONS(1),
    [anon_sym_ADAPTER] = ACTIONS(1),
    [anon_sym_LICENSE] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [aux_sym_string_token2] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(1),
    [sym_comment] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(21),
    [sym__definition] = STATE(5),
    [sym_instruction] = STATE(5),
    [sym_instruction_keyword] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_FROM] = ACTIONS(5),
    [anon_sym_PARAMETER] = ACTIONS(5),
    [anon_sym_TEMPLATE] = ACTIONS(5),
    [anon_sym_SYSTEM] = ACTIONS(5),
    [anon_sym_ADAPTER] = ACTIONS(5),
    [anon_sym_LICENSE] = ACTIONS(5),
    [sym_comment] = ACTIONS(7),
  },
  [2] = {
    [sym__value] = STATE(6),
    [sym_string] = STATE(6),
    [sym_boolean] = STATE(6),
    [sym_heredoc] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(9),
    [anon_sym_FROM] = ACTIONS(9),
    [anon_sym_PARAMETER] = ACTIONS(9),
    [anon_sym_TEMPLATE] = ACTIONS(9),
    [anon_sym_SYSTEM] = ACTIONS(9),
    [anon_sym_ADAPTER] = ACTIONS(9),
    [anon_sym_LICENSE] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [anon_sym_true] = ACTIONS(17),
    [anon_sym_false] = ACTIONS(17),
    [anon_sym_DQUOTE_DQUOTE_DQUOTE] = ACTIONS(19),
    [sym_comment] = ACTIONS(9),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(23), 1,
      anon_sym_DQUOTE,
    ACTIONS(21), 13,
      ts_builtin_sym_end,
      anon_sym_FROM,
      anon_sym_PARAMETER,
      anon_sym_TEMPLATE,
      anon_sym_SYSTEM,
      anon_sym_ADAPTER,
      anon_sym_LICENSE,
      anon_sym_SQUOTE,
      sym_number,
      anon_sym_true,
      anon_sym_false,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
      sym_comment,
  [19] = 5,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(30), 1,
      sym_comment,
    STATE(2), 1,
      sym_instruction_keyword,
    STATE(4), 3,
      sym__definition,
      sym_instruction,
      aux_sym_source_file_repeat1,
    ACTIONS(27), 6,
      anon_sym_FROM,
      anon_sym_PARAMETER,
      anon_sym_TEMPLATE,
      anon_sym_SYSTEM,
      anon_sym_ADAPTER,
      anon_sym_LICENSE,
  [42] = 5,
    ACTIONS(33), 1,
      ts_builtin_sym_end,
    ACTIONS(35), 1,
      sym_comment,
    STATE(2), 1,
      sym_instruction_keyword,
    STATE(4), 3,
      sym__definition,
      sym_instruction,
      aux_sym_source_file_repeat1,
    ACTIONS(5), 6,
      anon_sym_FROM,
      anon_sym_PARAMETER,
      anon_sym_TEMPLATE,
      anon_sym_SYSTEM,
      anon_sym_ADAPTER,
      anon_sym_LICENSE,
  [65] = 1,
    ACTIONS(37), 8,
      ts_builtin_sym_end,
      anon_sym_FROM,
      anon_sym_PARAMETER,
      anon_sym_TEMPLATE,
      anon_sym_SYSTEM,
      anon_sym_ADAPTER,
      anon_sym_LICENSE,
      sym_comment,
  [76] = 1,
    ACTIONS(39), 8,
      ts_builtin_sym_end,
      anon_sym_FROM,
      anon_sym_PARAMETER,
      anon_sym_TEMPLATE,
      anon_sym_SYSTEM,
      anon_sym_ADAPTER,
      anon_sym_LICENSE,
      sym_comment,
  [87] = 1,
    ACTIONS(41), 8,
      ts_builtin_sym_end,
      anon_sym_FROM,
      anon_sym_PARAMETER,
      anon_sym_TEMPLATE,
      anon_sym_SYSTEM,
      anon_sym_ADAPTER,
      anon_sym_LICENSE,
      sym_comment,
  [98] = 1,
    ACTIONS(43), 8,
      ts_builtin_sym_end,
      anon_sym_FROM,
      anon_sym_PARAMETER,
      anon_sym_TEMPLATE,
      anon_sym_SYSTEM,
      anon_sym_ADAPTER,
      anon_sym_LICENSE,
      sym_comment,
  [109] = 1,
    ACTIONS(45), 8,
      ts_builtin_sym_end,
      anon_sym_FROM,
      anon_sym_PARAMETER,
      anon_sym_TEMPLATE,
      anon_sym_SYSTEM,
      anon_sym_ADAPTER,
      anon_sym_LICENSE,
      sym_comment,
  [120] = 1,
    ACTIONS(47), 8,
      ts_builtin_sym_end,
      anon_sym_FROM,
      anon_sym_PARAMETER,
      anon_sym_TEMPLATE,
      anon_sym_SYSTEM,
      anon_sym_ADAPTER,
      anon_sym_LICENSE,
      sym_comment,
  [131] = 4,
    ACTIONS(49), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(51), 1,
      aux_sym_heredoc_token1,
    STATE(13), 1,
      aux_sym_heredoc_repeat1,
    ACTIONS(53), 2,
      aux_sym_heredoc_token2,
      aux_sym_heredoc_token3,
  [145] = 4,
    ACTIONS(55), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(57), 1,
      aux_sym_heredoc_token1,
    STATE(14), 1,
      aux_sym_heredoc_repeat1,
    ACTIONS(59), 2,
      aux_sym_heredoc_token2,
      aux_sym_heredoc_token3,
  [159] = 4,
    ACTIONS(61), 1,
      anon_sym_DQUOTE_DQUOTE_DQUOTE,
    ACTIONS(63), 1,
      aux_sym_heredoc_token1,
    STATE(14), 1,
      aux_sym_heredoc_repeat1,
    ACTIONS(66), 2,
      aux_sym_heredoc_token2,
      aux_sym_heredoc_token3,
  [173] = 4,
    ACTIONS(69), 1,
      aux_sym_string_token2,
    ACTIONS(71), 1,
      anon_sym_SQUOTE,
    ACTIONS(73), 1,
      aux_sym_string_token3,
    STATE(18), 1,
      aux_sym_string_repeat2,
  [186] = 4,
    ACTIONS(71), 1,
      anon_sym_DQUOTE,
    ACTIONS(75), 1,
      aux_sym_string_token1,
    ACTIONS(77), 1,
      aux_sym_string_token2,
    STATE(17), 1,
      aux_sym_string_repeat1,
  [199] = 4,
    ACTIONS(79), 1,
      anon_sym_DQUOTE,
    ACTIONS(81), 1,
      aux_sym_string_token1,
    ACTIONS(83), 1,
      aux_sym_string_token2,
    STATE(19), 1,
      aux_sym_string_repeat1,
  [212] = 4,
    ACTIONS(79), 1,
      anon_sym_SQUOTE,
    ACTIONS(85), 1,
      aux_sym_string_token2,
    ACTIONS(87), 1,
      aux_sym_string_token3,
    STATE(20), 1,
      aux_sym_string_repeat2,
  [225] = 4,
    ACTIONS(89), 1,
      anon_sym_DQUOTE,
    ACTIONS(91), 1,
      aux_sym_string_token1,
    ACTIONS(94), 1,
      aux_sym_string_token2,
    STATE(19), 1,
      aux_sym_string_repeat1,
  [238] = 4,
    ACTIONS(97), 1,
      aux_sym_string_token2,
    ACTIONS(100), 1,
      anon_sym_SQUOTE,
    ACTIONS(102), 1,
      aux_sym_string_token3,
    STATE(20), 1,
      aux_sym_string_repeat2,
  [251] = 1,
    ACTIONS(105), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 19,
  [SMALL_STATE(5)] = 42,
  [SMALL_STATE(6)] = 65,
  [SMALL_STATE(7)] = 76,
  [SMALL_STATE(8)] = 87,
  [SMALL_STATE(9)] = 98,
  [SMALL_STATE(10)] = 109,
  [SMALL_STATE(11)] = 120,
  [SMALL_STATE(12)] = 131,
  [SMALL_STATE(13)] = 145,
  [SMALL_STATE(14)] = 159,
  [SMALL_STATE(15)] = 173,
  [SMALL_STATE(16)] = 186,
  [SMALL_STATE(17)] = 199,
  [SMALL_STATE(18)] = 212,
  [SMALL_STATE(19)] = 225,
  [SMALL_STATE(20)] = 238,
  [SMALL_STATE(21)] = 251,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0, 0, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 1, 0, 1),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction_keyword, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction_keyword, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(3),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [33] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1, 0, 0),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [37] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 2),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean, 1, 0, 0),
  [41] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [43] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc, 2, 0, 0),
  [45] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_heredoc, 3, 0, 0),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [55] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [59] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [61] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_heredoc_repeat1, 2, 0, 0),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_heredoc_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [66] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_heredoc_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [69] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [77] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [79] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [83] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [85] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [87] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(19),
  [97] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(20),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(20),
  [105] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
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

TS_PUBLIC const TSLanguage *tree_sitter_ollama_modelfile(void) {
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
