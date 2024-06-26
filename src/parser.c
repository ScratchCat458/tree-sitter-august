#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 29
#define ALIAS_COUNT 0
#define TOKEN_COUNT 18
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 3
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 5

enum {
  anon_sym_expose = 1,
  anon_sym_as = 2,
  anon_sym_AT = 3,
  anon_sym_unit = 4,
  anon_sym_LBRACE = 5,
  anon_sym_RBRACE = 6,
  anon_sym_COLON_COLON = 7,
  anon_sym_TILDE = 8,
  anon_sym_LPAREN = 9,
  anon_sym_COMMA = 10,
  anon_sym_RPAREN = 11,
  aux_sym_cmd_arg_token1 = 12,
  anon_sym_EQ_GT = 13,
  sym_str_lit = 14,
  sym_ident = 15,
  sym_raw_ident = 16,
  sym_encap = 17,
  sym_source_file = 18,
  sym__defintion = 19,
  sym_expose = 20,
  sym_meta_attr = 21,
  sym_unit = 22,
  sym_cmd_call = 23,
  sym_cmd_arg = 24,
  sym_block = 25,
  aux_sym_source_file_repeat1 = 26,
  aux_sym_unit_repeat1 = 27,
  aux_sym_cmd_call_repeat1 = 28,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_expose] = "expose",
  [anon_sym_as] = "as",
  [anon_sym_AT] = "@",
  [anon_sym_unit] = "unit",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON_COLON] = "::",
  [anon_sym_TILDE] = "~",
  [anon_sym_LPAREN] = "(",
  [anon_sym_COMMA] = ",",
  [anon_sym_RPAREN] = ")",
  [aux_sym_cmd_arg_token1] = "cmd_arg_token1",
  [anon_sym_EQ_GT] = "=>",
  [sym_str_lit] = "str_lit",
  [sym_ident] = "ident",
  [sym_raw_ident] = "raw_ident",
  [sym_encap] = "encap",
  [sym_source_file] = "source_file",
  [sym__defintion] = "_defintion",
  [sym_expose] = "expose",
  [sym_meta_attr] = "meta_attr",
  [sym_unit] = "unit",
  [sym_cmd_call] = "cmd_call",
  [sym_cmd_arg] = "cmd_arg",
  [sym_block] = "block",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_unit_repeat1] = "unit_repeat1",
  [aux_sym_cmd_call_repeat1] = "cmd_call_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_expose] = anon_sym_expose,
  [anon_sym_as] = anon_sym_as,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_unit] = anon_sym_unit,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON_COLON] = anon_sym_COLON_COLON,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [aux_sym_cmd_arg_token1] = aux_sym_cmd_arg_token1,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [sym_str_lit] = sym_str_lit,
  [sym_ident] = sym_ident,
  [sym_raw_ident] = sym_raw_ident,
  [sym_encap] = sym_encap,
  [sym_source_file] = sym_source_file,
  [sym__defintion] = sym__defintion,
  [sym_expose] = sym_expose,
  [sym_meta_attr] = sym_meta_attr,
  [sym_unit] = sym_unit,
  [sym_cmd_call] = sym_cmd_call,
  [sym_cmd_arg] = sym_cmd_arg,
  [sym_block] = sym_block,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_unit_repeat1] = aux_sym_unit_repeat1,
  [aux_sym_cmd_call_repeat1] = aux_sym_cmd_call_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_expose] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_unit] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_cmd_arg_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_str_lit] = {
    .visible = true,
    .named = true,
  },
  [sym_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_raw_ident] = {
    .visible = true,
    .named = true,
  },
  [sym_encap] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym__defintion] = {
    .visible = false,
    .named = true,
  },
  [sym_expose] = {
    .visible = true,
    .named = true,
  },
  [sym_meta_attr] = {
    .visible = true,
    .named = true,
  },
  [sym_unit] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_call] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_unit_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cmd_call_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_name = 1,
  field_ns = 2,
  field_unit = 3,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_name] = "name",
  [field_ns] = "ns",
  [field_unit] = "unit",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 1},
  [4] = {.index = 3, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 0},
  [1] =
    {field_unit, 1},
  [2] =
    {field_name, 1},
  [3] =
    {field_name, 2},
    {field_ns, 0},
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
  [6] = 4,
  [7] = 7,
  [8] = 7,
  [9] = 9,
  [10] = 9,
  [11] = 11,
  [12] = 5,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 16,
  [20] = 20,
  [21] = 21,
  [22] = 17,
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
  [34] = 28,
  [35] = 33,
  [36] = 24,
  [37] = 32,
  [38] = 26,
  [39] = 29,
  [40] = 31,
  [41] = 41,
  [42] = 42,
  [43] = 42,
  [44] = 41,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 53,
  [55] = 47,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(16);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(11);
      if (lookahead == 'e') ADVANCE(14);
      if (lookahead == 'u') ADVANCE(8);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '~') ADVANCE(26);
      if (('<' <= lookahead && lookahead <= '>') ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+') ADVANCE(44);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == ')') ADVANCE(29);
      if (lookahead == ',') ADVANCE(28);
      if (lookahead == '=') ADVANCE(4);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '~') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('<' <= lookahead && lookahead <= '>') ||
          lookahead == '[' ||
          lookahead == ']' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(30);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+') ADVANCE(44);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(32);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(25);
      END_STATE();
    case 4:
      if (lookahead == '>') ADVANCE(31);
      END_STATE();
    case 5:
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == '}') ADVANCE(24);
      if (lookahead == '~') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(5)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 6:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 7:
      if (lookahead == 'i') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == 'n') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 'o') ADVANCE(12);
      END_STATE();
    case 10:
      if (lookahead == 'p') ADVANCE(9);
      END_STATE();
    case 11:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 's') ADVANCE(6);
      END_STATE();
    case 13:
      if (lookahead == 't') ADVANCE(21);
      END_STATE();
    case 14:
      if (lookahead == 'x') ADVANCE(10);
      END_STATE();
    case 15:
      if (eof) ADVANCE(16);
      if (lookahead == '(') ADVANCE(27);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '@') ADVANCE(20);
      if (lookahead == 'e') ADVANCE(41);
      if (lookahead == 'u') ADVANCE(36);
      if (lookahead == '{') ADVANCE(23);
      if (lookahead == '~') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(15)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_expose);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_expose);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_unit);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_cmd_arg_token1);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_str_lit);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_str_lit);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+') ADVANCE(44);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(18);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(35);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(39);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(37);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(34);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(38);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_raw_ident);
      if (lookahead == '"') ADVANCE(33);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+') ADVANCE(43);
      if (lookahead != 0) ADVANCE(2);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_raw_ident);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+') ADVANCE(44);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 15},
  [2] = {.lex_state = 15},
  [3] = {.lex_state = 15},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 5},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 5},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 15},
  [25] = {.lex_state = 15},
  [26] = {.lex_state = 15},
  [27] = {.lex_state = 15},
  [28] = {.lex_state = 15},
  [29] = {.lex_state = 15},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 15},
  [33] = {.lex_state = 15},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 5},
  [36] = {.lex_state = 5},
  [37] = {.lex_state = 5},
  [38] = {.lex_state = 5},
  [39] = {.lex_state = 5},
  [40] = {.lex_state = 5},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 15},
  [43] = {.lex_state = 15},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 15},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 15},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 15},
  [54] = {.lex_state = 15},
  [55] = {.lex_state = 15},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_expose] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_unit] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON_COLON] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [aux_sym_cmd_arg_token1] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [sym_str_lit] = ACTIONS(1),
    [sym_raw_ident] = ACTIONS(1),
    [sym_encap] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(51),
    [sym__defintion] = STATE(2),
    [sym_expose] = STATE(2),
    [sym_unit] = STATE(2),
    [sym_cmd_call] = STATE(2),
    [sym_block] = STATE(29),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_expose] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [anon_sym_unit] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(7),
    [sym_ident] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      anon_sym_expose,
    ACTIONS(9), 1,
      anon_sym_unit,
    ACTIONS(11), 1,
      sym_ident,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    STATE(29), 1,
      sym_block,
    ACTIONS(7), 2,
      anon_sym_AT,
      anon_sym_TILDE,
    STATE(3), 5,
      sym__defintion,
      sym_expose,
      sym_unit,
      sym_cmd_call,
      aux_sym_source_file_repeat1,
  [27] = 7,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    ACTIONS(17), 1,
      anon_sym_expose,
    ACTIONS(23), 1,
      anon_sym_unit,
    ACTIONS(26), 1,
      sym_ident,
    STATE(29), 1,
      sym_block,
    ACTIONS(20), 2,
      anon_sym_AT,
      anon_sym_TILDE,
    STATE(3), 5,
      sym__defintion,
      sym_expose,
      sym_unit,
      sym_cmd_call,
      aux_sym_source_file_repeat1,
  [54] = 7,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      aux_sym_cmd_call_repeat1,
    STATE(14), 1,
      sym_cmd_arg,
    STATE(15), 1,
      sym_meta_attr,
    ACTIONS(35), 2,
      sym_str_lit,
      sym_raw_ident,
    ACTIONS(33), 3,
      aux_sym_cmd_arg_token1,
      anon_sym_EQ_GT,
      sym_ident,
  [79] = 7,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_cmd_call_repeat1,
    STATE(14), 1,
      sym_cmd_arg,
    STATE(15), 1,
      sym_meta_attr,
    ACTIONS(35), 2,
      sym_str_lit,
      sym_raw_ident,
    ACTIONS(33), 3,
      aux_sym_cmd_arg_token1,
      anon_sym_EQ_GT,
      sym_ident,
  [104] = 7,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      aux_sym_cmd_call_repeat1,
    STATE(14), 1,
      sym_cmd_arg,
    STATE(15), 1,
      sym_meta_attr,
    ACTIONS(35), 2,
      sym_str_lit,
      sym_raw_ident,
    ACTIONS(33), 3,
      aux_sym_cmd_arg_token1,
      anon_sym_EQ_GT,
      sym_ident,
  [129] = 7,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_cmd_call_repeat1,
    STATE(14), 1,
      sym_cmd_arg,
    STATE(15), 1,
      sym_meta_attr,
    ACTIONS(35), 2,
      sym_str_lit,
      sym_raw_ident,
    ACTIONS(33), 3,
      aux_sym_cmd_arg_token1,
      anon_sym_EQ_GT,
      sym_ident,
  [154] = 7,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_cmd_call_repeat1,
    STATE(14), 1,
      sym_cmd_arg,
    STATE(15), 1,
      sym_meta_attr,
    ACTIONS(35), 2,
      sym_str_lit,
      sym_raw_ident,
    ACTIONS(33), 3,
      aux_sym_cmd_arg_token1,
      anon_sym_EQ_GT,
      sym_ident,
  [179] = 7,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      aux_sym_cmd_call_repeat1,
    STATE(14), 1,
      sym_cmd_arg,
    STATE(15), 1,
      sym_meta_attr,
    ACTIONS(35), 2,
      sym_str_lit,
      sym_raw_ident,
    ACTIONS(33), 3,
      aux_sym_cmd_arg_token1,
      anon_sym_EQ_GT,
      sym_ident,
  [204] = 7,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      aux_sym_cmd_call_repeat1,
    STATE(14), 1,
      sym_cmd_arg,
    STATE(15), 1,
      sym_meta_attr,
    ACTIONS(35), 2,
      sym_str_lit,
      sym_raw_ident,
    ACTIONS(33), 3,
      aux_sym_cmd_arg_token1,
      anon_sym_EQ_GT,
      sym_ident,
  [229] = 7,
    ACTIONS(49), 1,
      anon_sym_AT,
    ACTIONS(52), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_cmd_call_repeat1,
    STATE(14), 1,
      sym_cmd_arg,
    STATE(15), 1,
      sym_meta_attr,
    ACTIONS(57), 2,
      sym_str_lit,
      sym_raw_ident,
    ACTIONS(54), 3,
      aux_sym_cmd_arg_token1,
      anon_sym_EQ_GT,
      sym_ident,
  [254] = 7,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    STATE(11), 1,
      aux_sym_cmd_call_repeat1,
    STATE(14), 1,
      sym_cmd_arg,
    STATE(15), 1,
      sym_meta_attr,
    ACTIONS(35), 2,
      sym_str_lit,
      sym_raw_ident,
    ACTIONS(33), 3,
      aux_sym_cmd_arg_token1,
      anon_sym_EQ_GT,
      sym_ident,
  [279] = 2,
    ACTIONS(64), 2,
      sym_str_lit,
      sym_raw_ident,
    ACTIONS(62), 6,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_cmd_arg_token1,
      anon_sym_EQ_GT,
      sym_ident,
  [292] = 3,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    ACTIONS(70), 2,
      sym_str_lit,
      sym_raw_ident,
    ACTIONS(66), 5,
      anon_sym_AT,
      anon_sym_RPAREN,
      aux_sym_cmd_arg_token1,
      anon_sym_EQ_GT,
      sym_ident,
  [307] = 2,
    ACTIONS(74), 2,
      sym_str_lit,
      sym_raw_ident,
    ACTIONS(72), 6,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      aux_sym_cmd_arg_token1,
      anon_sym_EQ_GT,
      sym_ident,
  [320] = 5,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    ACTIONS(80), 1,
      sym_ident,
    STATE(39), 1,
      sym_block,
    ACTIONS(76), 2,
      anon_sym_AT,
      anon_sym_TILDE,
    STATE(17), 2,
      sym_cmd_call,
      aux_sym_unit_repeat1,
  [338] = 5,
    ACTIONS(80), 1,
      sym_ident,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_block,
    ACTIONS(76), 2,
      anon_sym_AT,
      anon_sym_TILDE,
    STATE(20), 2,
      sym_cmd_call,
      aux_sym_unit_repeat1,
  [356] = 5,
    ACTIONS(80), 1,
      sym_ident,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_block,
    ACTIONS(76), 2,
      anon_sym_AT,
      anon_sym_TILDE,
    STATE(20), 2,
      sym_cmd_call,
      aux_sym_unit_repeat1,
  [374] = 5,
    ACTIONS(80), 1,
      sym_ident,
    ACTIONS(86), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_block,
    ACTIONS(76), 2,
      anon_sym_AT,
      anon_sym_TILDE,
    STATE(22), 2,
      sym_cmd_call,
      aux_sym_unit_repeat1,
  [392] = 5,
    ACTIONS(91), 1,
      anon_sym_RBRACE,
    ACTIONS(93), 1,
      sym_ident,
    STATE(39), 1,
      sym_block,
    ACTIONS(88), 2,
      anon_sym_AT,
      anon_sym_TILDE,
    STATE(20), 2,
      sym_cmd_call,
      aux_sym_unit_repeat1,
  [410] = 5,
    ACTIONS(80), 1,
      sym_ident,
    ACTIONS(96), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_block,
    ACTIONS(76), 2,
      anon_sym_AT,
      anon_sym_TILDE,
    STATE(18), 2,
      sym_cmd_call,
      aux_sym_unit_repeat1,
  [428] = 5,
    ACTIONS(80), 1,
      sym_ident,
    ACTIONS(98), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_block,
    ACTIONS(76), 2,
      anon_sym_AT,
      anon_sym_TILDE,
    STATE(20), 2,
      sym_cmd_call,
      aux_sym_unit_repeat1,
  [446] = 2,
    ACTIONS(100), 2,
      sym_str_lit,
      sym_raw_ident,
    ACTIONS(52), 5,
      anon_sym_AT,
      anon_sym_RPAREN,
      aux_sym_cmd_arg_token1,
      anon_sym_EQ_GT,
      sym_ident,
  [458] = 2,
    ACTIONS(102), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(104), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [469] = 2,
    ACTIONS(106), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(108), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [480] = 2,
    ACTIONS(110), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(112), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [491] = 2,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(116), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [502] = 2,
    ACTIONS(118), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(120), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [513] = 2,
    ACTIONS(122), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(124), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [524] = 2,
    ACTIONS(126), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(128), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [535] = 2,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(132), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [546] = 2,
    ACTIONS(134), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(136), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [557] = 2,
    ACTIONS(138), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(140), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [568] = 1,
    ACTIONS(118), 4,
      anon_sym_AT,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_ident,
  [575] = 1,
    ACTIONS(138), 4,
      anon_sym_AT,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_ident,
  [582] = 1,
    ACTIONS(102), 4,
      anon_sym_AT,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_ident,
  [589] = 1,
    ACTIONS(134), 4,
      anon_sym_AT,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_ident,
  [596] = 1,
    ACTIONS(110), 4,
      anon_sym_AT,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_ident,
  [603] = 1,
    ACTIONS(122), 4,
      anon_sym_AT,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_ident,
  [610] = 1,
    ACTIONS(130), 4,
      anon_sym_AT,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_ident,
  [617] = 1,
    ACTIONS(142), 3,
      anon_sym_AT,
      anon_sym_TILDE,
      sym_ident,
  [623] = 3,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    ACTIONS(146), 1,
      anon_sym_COLON_COLON,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
  [633] = 3,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      anon_sym_COLON_COLON,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
  [643] = 1,
    ACTIONS(156), 3,
      anon_sym_AT,
      anon_sym_TILDE,
      sym_ident,
  [649] = 1,
    ACTIONS(158), 1,
      sym_ident,
  [653] = 1,
    ACTIONS(160), 1,
      sym_ident,
  [657] = 1,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
  [661] = 1,
    ACTIONS(164), 1,
      sym_ident,
  [665] = 1,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
  [669] = 1,
    ACTIONS(168), 1,
      anon_sym_as,
  [673] = 1,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
  [677] = 1,
    ACTIONS(172), 1,
      sym_ident,
  [681] = 1,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
  [685] = 1,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
  [689] = 1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 79,
  [SMALL_STATE(6)] = 104,
  [SMALL_STATE(7)] = 129,
  [SMALL_STATE(8)] = 154,
  [SMALL_STATE(9)] = 179,
  [SMALL_STATE(10)] = 204,
  [SMALL_STATE(11)] = 229,
  [SMALL_STATE(12)] = 254,
  [SMALL_STATE(13)] = 279,
  [SMALL_STATE(14)] = 292,
  [SMALL_STATE(15)] = 307,
  [SMALL_STATE(16)] = 320,
  [SMALL_STATE(17)] = 338,
  [SMALL_STATE(18)] = 356,
  [SMALL_STATE(19)] = 374,
  [SMALL_STATE(20)] = 392,
  [SMALL_STATE(21)] = 410,
  [SMALL_STATE(22)] = 428,
  [SMALL_STATE(23)] = 446,
  [SMALL_STATE(24)] = 458,
  [SMALL_STATE(25)] = 469,
  [SMALL_STATE(26)] = 480,
  [SMALL_STATE(27)] = 491,
  [SMALL_STATE(28)] = 502,
  [SMALL_STATE(29)] = 513,
  [SMALL_STATE(30)] = 524,
  [SMALL_STATE(31)] = 535,
  [SMALL_STATE(32)] = 546,
  [SMALL_STATE(33)] = 557,
  [SMALL_STATE(34)] = 568,
  [SMALL_STATE(35)] = 575,
  [SMALL_STATE(36)] = 582,
  [SMALL_STATE(37)] = 589,
  [SMALL_STATE(38)] = 596,
  [SMALL_STATE(39)] = 603,
  [SMALL_STATE(40)] = 610,
  [SMALL_STATE(41)] = 617,
  [SMALL_STATE(42)] = 623,
  [SMALL_STATE(43)] = 633,
  [SMALL_STATE(44)] = 643,
  [SMALL_STATE(45)] = 649,
  [SMALL_STATE(46)] = 653,
  [SMALL_STATE(47)] = 657,
  [SMALL_STATE(48)] = 661,
  [SMALL_STATE(49)] = 665,
  [SMALL_STATE(50)] = 669,
  [SMALL_STATE(51)] = 673,
  [SMALL_STATE(52)] = 677,
  [SMALL_STATE(53)] = 681,
  [SMALL_STATE(54)] = 685,
  [SMALL_STATE(55)] = 689,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(48),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(53),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(52),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cmd_call_repeat1, 2), SHIFT_REPEAT(46),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cmd_call_repeat1, 2),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cmd_call_repeat1, 2), SHIFT_REPEAT(15),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cmd_call_repeat1, 2), SHIFT_REPEAT(15),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_attr, 2),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_attr, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cmd_call_repeat1, 1),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cmd_call_repeat1, 1),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_arg, 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_arg, 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(54),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(43),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [100] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cmd_call_repeat1, 2),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_call, 5, .production_id = 4),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_call, 5, .production_id = 4),
  [106] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose, 4, .production_id = 2),
  [108] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose, 4, .production_id = 2),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 1),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 1),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 5, .production_id = 3),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 5, .production_id = 3),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_call, 4, .production_id = 1),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_call, 4, .production_id = 1),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_call, 1),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_call, 1),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 4, .production_id = 3),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 4, .production_id = 3),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_call, 3, .production_id = 1),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_call, 3, .production_id = 1),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 1),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_call, 6, .production_id = 4),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_call, 6, .production_id = 4),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [170] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_august(void) {
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
