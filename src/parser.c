#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 33
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 26
#define ALIAS_COUNT 0
#define TOKEN_COUNT 16
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
  anon_sym_RPAREN = 10,
  anon_sym_COMMA = 11,
  sym_str_lit = 12,
  sym_ident = 13,
  sym_raw_ident = 14,
  sym_encap = 15,
  sym_source_file = 16,
  sym__defintion = 17,
  sym_expose = 18,
  sym_meta_attr = 19,
  sym_unit = 20,
  sym_cmd_call = 21,
  sym_cmd_arg = 22,
  aux_sym_source_file_repeat1 = 23,
  aux_sym_unit_repeat1 = 24,
  aux_sym_cmd_call_repeat1 = 25,
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
  [anon_sym_RPAREN] = ")",
  [anon_sym_COMMA] = ",",
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
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_COMMA] = anon_sym_COMMA,
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
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
    {field_unit, 1},
  [1] =
    {field_name, 1},
  [2] =
    {field_name, 0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(13);
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(6);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '}') ADVANCE(19);
      if (lookahead == '~') ADVANCE(21);
      if (lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(30);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+') ADVANCE(29);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(28);
      if (lookahead == '(') ADVANCE(22);
      if (lookahead == ')') ADVANCE(23);
      if (lookahead == ',') ADVANCE(24);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '@') ADVANCE(16);
      if (lookahead == '{') ADVANCE(18);
      if (lookahead == '}') ADVANCE(19);
      if (lookahead == '~') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+') ADVANCE(29);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(20);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(14);
      END_STATE();
    case 5:
      if (lookahead == 'i') ADVANCE(11);
      END_STATE();
    case 6:
      if (lookahead == 'n') ADVANCE(5);
      END_STATE();
    case 7:
      if (lookahead == 'o') ADVANCE(10);
      END_STATE();
    case 8:
      if (lookahead == 'p') ADVANCE(7);
      END_STATE();
    case 9:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == 'x') ADVANCE(8);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(anon_sym_expose);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_str_lit);
      if (lookahead == '"') ADVANCE(25);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_str_lit);
      if (lookahead == '"') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_raw_ident);
      if (lookahead == '"') ADVANCE(25);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+') ADVANCE(28);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_raw_ident);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+') ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_encap);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 1},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 1},
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
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_str_lit] = ACTIONS(1),
    [sym_raw_ident] = ACTIONS(1),
    [sym_encap] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(30),
    [sym__defintion] = STATE(8),
    [sym_expose] = STATE(8),
    [sym_unit] = STATE(8),
    [aux_sym_source_file_repeat1] = STATE(8),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_expose] = ACTIONS(5),
    [anon_sym_unit] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(11), 1,
      anon_sym_RPAREN,
    ACTIONS(15), 1,
      sym_raw_ident,
    STATE(13), 1,
      sym_meta_attr,
    ACTIONS(13), 2,
      sym_str_lit,
      sym_ident,
    STATE(6), 2,
      sym_cmd_arg,
      aux_sym_cmd_call_repeat1,
  [21] = 6,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      sym_raw_ident,
    ACTIONS(17), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_meta_attr,
    ACTIONS(13), 2,
      sym_str_lit,
      sym_ident,
    STATE(5), 2,
      sym_cmd_arg,
      aux_sym_cmd_call_repeat1,
  [42] = 6,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      sym_raw_ident,
    ACTIONS(19), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_meta_attr,
    ACTIONS(13), 2,
      sym_str_lit,
      sym_ident,
    STATE(3), 2,
      sym_cmd_arg,
      aux_sym_cmd_call_repeat1,
  [63] = 6,
    ACTIONS(21), 1,
      anon_sym_AT,
    ACTIONS(24), 1,
      anon_sym_RPAREN,
    ACTIONS(29), 1,
      sym_raw_ident,
    STATE(13), 1,
      sym_meta_attr,
    ACTIONS(26), 2,
      sym_str_lit,
      sym_ident,
    STATE(5), 2,
      sym_cmd_arg,
      aux_sym_cmd_call_repeat1,
  [84] = 6,
    ACTIONS(9), 1,
      anon_sym_AT,
    ACTIONS(15), 1,
      sym_raw_ident,
    ACTIONS(32), 1,
      anon_sym_RPAREN,
    STATE(13), 1,
      sym_meta_attr,
    ACTIONS(13), 2,
      sym_str_lit,
      sym_ident,
    STATE(5), 2,
      sym_cmd_arg,
      aux_sym_cmd_call_repeat1,
  [105] = 4,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
    ACTIONS(36), 1,
      anon_sym_expose,
    ACTIONS(39), 1,
      anon_sym_unit,
    STATE(7), 4,
      sym__defintion,
      sym_expose,
      sym_unit,
      aux_sym_source_file_repeat1,
  [121] = 4,
    ACTIONS(5), 1,
      anon_sym_expose,
    ACTIONS(7), 1,
      anon_sym_unit,
    ACTIONS(42), 1,
      ts_builtin_sym_end,
    STATE(7), 4,
      sym__defintion,
      sym_expose,
      sym_unit,
      aux_sym_source_file_repeat1,
  [137] = 4,
    ACTIONS(47), 1,
      anon_sym_RBRACE,
    ACTIONS(49), 1,
      sym_ident,
    ACTIONS(44), 2,
      anon_sym_AT,
      anon_sym_TILDE,
    STATE(9), 2,
      sym_cmd_call,
      aux_sym_unit_repeat1,
  [152] = 4,
    ACTIONS(54), 1,
      anon_sym_RBRACE,
    ACTIONS(56), 1,
      sym_ident,
    ACTIONS(52), 2,
      anon_sym_AT,
      anon_sym_TILDE,
    STATE(12), 2,
      sym_cmd_call,
      aux_sym_unit_repeat1,
  [167] = 2,
    ACTIONS(60), 1,
      sym_raw_ident,
    ACTIONS(58), 5,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_str_lit,
      sym_ident,
  [178] = 4,
    ACTIONS(56), 1,
      sym_ident,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    ACTIONS(52), 2,
      anon_sym_AT,
      anon_sym_TILDE,
    STATE(9), 2,
      sym_cmd_call,
      aux_sym_unit_repeat1,
  [193] = 3,
    ACTIONS(66), 1,
      anon_sym_COMMA,
    ACTIONS(68), 1,
      sym_raw_ident,
    ACTIONS(64), 4,
      anon_sym_AT,
      anon_sym_RPAREN,
      sym_str_lit,
      sym_ident,
  [206] = 2,
    ACTIONS(72), 1,
      sym_raw_ident,
    ACTIONS(70), 4,
      anon_sym_AT,
      anon_sym_RPAREN,
      sym_str_lit,
      sym_ident,
  [216] = 1,
    ACTIONS(74), 4,
      anon_sym_AT,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_ident,
  [223] = 1,
    ACTIONS(76), 4,
      anon_sym_AT,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_ident,
  [230] = 1,
    ACTIONS(78), 4,
      anon_sym_AT,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_ident,
  [237] = 1,
    ACTIONS(80), 4,
      anon_sym_AT,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_ident,
  [244] = 1,
    ACTIONS(82), 3,
      ts_builtin_sym_end,
      anon_sym_expose,
      anon_sym_unit,
  [250] = 1,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      anon_sym_expose,
      anon_sym_unit,
  [256] = 1,
    ACTIONS(86), 3,
      anon_sym_AT,
      anon_sym_TILDE,
      sym_ident,
  [262] = 1,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      anon_sym_expose,
      anon_sym_unit,
  [268] = 2,
    ACTIONS(90), 1,
      anon_sym_COLON_COLON,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
  [275] = 1,
    ACTIONS(94), 1,
      sym_ident,
  [279] = 1,
    ACTIONS(96), 1,
      anon_sym_LBRACE,
  [283] = 1,
    ACTIONS(98), 1,
      sym_ident,
  [287] = 1,
    ACTIONS(100), 1,
      anon_sym_LPAREN,
  [291] = 1,
    ACTIONS(102), 1,
      anon_sym_as,
  [295] = 1,
    ACTIONS(92), 1,
      anon_sym_LPAREN,
  [299] = 1,
    ACTIONS(104), 1,
      ts_builtin_sym_end,
  [303] = 1,
    ACTIONS(106), 1,
      sym_ident,
  [307] = 1,
    ACTIONS(108), 1,
      sym_ident,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 21,
  [SMALL_STATE(4)] = 42,
  [SMALL_STATE(5)] = 63,
  [SMALL_STATE(6)] = 84,
  [SMALL_STATE(7)] = 105,
  [SMALL_STATE(8)] = 121,
  [SMALL_STATE(9)] = 137,
  [SMALL_STATE(10)] = 152,
  [SMALL_STATE(11)] = 167,
  [SMALL_STATE(12)] = 178,
  [SMALL_STATE(13)] = 193,
  [SMALL_STATE(14)] = 206,
  [SMALL_STATE(15)] = 216,
  [SMALL_STATE(16)] = 223,
  [SMALL_STATE(17)] = 230,
  [SMALL_STATE(18)] = 237,
  [SMALL_STATE(19)] = 244,
  [SMALL_STATE(20)] = 250,
  [SMALL_STATE(21)] = 256,
  [SMALL_STATE(22)] = 262,
  [SMALL_STATE(23)] = 268,
  [SMALL_STATE(24)] = 275,
  [SMALL_STATE(25)] = 279,
  [SMALL_STATE(26)] = 283,
  [SMALL_STATE(27)] = 287,
  [SMALL_STATE(28)] = 291,
  [SMALL_STATE(29)] = 295,
  [SMALL_STATE(30)] = 299,
  [SMALL_STATE(31)] = 303,
  [SMALL_STATE(32)] = 307,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cmd_call_repeat1, 2), SHIFT_REPEAT(24),
  [24] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cmd_call_repeat1, 2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cmd_call_repeat1, 2), SHIFT_REPEAT(13),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cmd_call_repeat1, 2), SHIFT_REPEAT(13),
  [32] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(26),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(31),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(29),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(23),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_attr, 2),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_attr, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_arg, 1),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_arg, 1),
  [70] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_arg, 2),
  [72] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_arg, 2),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_call, 6, .production_id = 4),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_call, 5, .production_id = 4),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_call, 4, .production_id = 3),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_call, 3, .production_id = 3),
  [82] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 4, .production_id = 2),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 5, .production_id = 2),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose, 4, .production_id = 1),
  [90] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [104] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
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
