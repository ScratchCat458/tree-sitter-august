#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 45
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
  [5] = 4,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 6,
  [10] = 7,
  [11] = 11,
  [12] = 11,
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
  [26] = 15,
  [27] = 22,
  [28] = 23,
  [29] = 13,
  [30] = 30,
  [31] = 30,
  [32] = 32,
  [33] = 32,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 42,
  [44] = 35,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(14);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == 'a') ADVANCE(9);
      if (lookahead == 'e') ADVANCE(12);
      if (lookahead == 'u') ADVANCE(6);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '~') ADVANCE(24);
      if (lookahead == '<' ||
          lookahead == '>' ||
          lookahead == '[' ||
          lookahead == ']') ADVANCE(41);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+') ADVANCE(40);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == ')') ADVANCE(26);
      if (lookahead == ',') ADVANCE(27);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == '}') ADVANCE(22);
      if (lookahead == '~') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+') ADVANCE(40);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(23);
      END_STATE();
    case 4:
      if (lookahead == 'e') ADVANCE(15);
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
      if (lookahead == 's') ADVANCE(17);
      END_STATE();
    case 10:
      if (lookahead == 's') ADVANCE(4);
      END_STATE();
    case 11:
      if (lookahead == 't') ADVANCE(19);
      END_STATE();
    case 12:
      if (lookahead == 'x') ADVANCE(8);
      END_STATE();
    case 13:
      if (eof) ADVANCE(14);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ':') ADVANCE(3);
      if (lookahead == '@') ADVANCE(18);
      if (lookahead == 'e') ADVANCE(37);
      if (lookahead == 'u') ADVANCE(32);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '~') ADVANCE(24);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(13)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_expose);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_expose);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_unit);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_unit);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_COLON_COLON);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_str_lit);
      if (lookahead == '"') ADVANCE(28);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_str_lit);
      if (lookahead == '"') ADVANCE(29);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'e') ADVANCE(16);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'n') ADVANCE(31);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'o') ADVANCE(35);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'p') ADVANCE(33);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 's') ADVANCE(30);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 't') ADVANCE(20);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == 'x') ADVANCE(34);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_ident);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_raw_ident);
      if (lookahead == '"') ADVANCE(28);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+') ADVANCE(39);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_raw_ident);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+') ADVANCE(40);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_encap);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 13},
  [2] = {.lex_state = 13},
  [3] = {.lex_state = 13},
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 1},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 1},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 13},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 13},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 13},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 13},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 13},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 13},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 13},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 13},
  [44] = {.lex_state = 13},
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
    [sym_source_file] = STATE(40),
    [sym__defintion] = STATE(3),
    [sym_expose] = STATE(3),
    [sym_unit] = STATE(3),
    [sym_cmd_call] = STATE(3),
    [aux_sym_source_file_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_expose] = ACTIONS(5),
    [anon_sym_AT] = ACTIONS(7),
    [anon_sym_unit] = ACTIONS(9),
    [anon_sym_TILDE] = ACTIONS(7),
    [sym_ident] = ACTIONS(11),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 6,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(15), 1,
      anon_sym_expose,
    ACTIONS(21), 1,
      anon_sym_unit,
    ACTIONS(24), 1,
      sym_ident,
    ACTIONS(18), 2,
      anon_sym_AT,
      anon_sym_TILDE,
    STATE(2), 5,
      sym__defintion,
      sym_expose,
      sym_unit,
      sym_cmd_call,
      aux_sym_source_file_repeat1,
  [24] = 6,
    ACTIONS(5), 1,
      anon_sym_expose,
    ACTIONS(9), 1,
      anon_sym_unit,
    ACTIONS(11), 1,
      sym_ident,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(7), 2,
      anon_sym_AT,
      anon_sym_TILDE,
    STATE(2), 5,
      sym__defintion,
      sym_expose,
      sym_unit,
      sym_cmd_call,
      aux_sym_source_file_repeat1,
  [48] = 6,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(31), 1,
      anon_sym_RPAREN,
    ACTIONS(35), 1,
      sym_raw_ident,
    STATE(16), 1,
      sym_meta_attr,
    ACTIONS(33), 2,
      sym_str_lit,
      sym_ident,
    STATE(8), 2,
      sym_cmd_arg,
      aux_sym_cmd_call_repeat1,
  [69] = 6,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_raw_ident,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_meta_attr,
    ACTIONS(33), 2,
      sym_str_lit,
      sym_ident,
    STATE(8), 2,
      sym_cmd_arg,
      aux_sym_cmd_call_repeat1,
  [90] = 6,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_raw_ident,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_meta_attr,
    ACTIONS(33), 2,
      sym_str_lit,
      sym_ident,
    STATE(5), 2,
      sym_cmd_arg,
      aux_sym_cmd_call_repeat1,
  [111] = 6,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_raw_ident,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_meta_attr,
    ACTIONS(33), 2,
      sym_str_lit,
      sym_ident,
    STATE(8), 2,
      sym_cmd_arg,
      aux_sym_cmd_call_repeat1,
  [132] = 6,
    ACTIONS(43), 1,
      anon_sym_AT,
    ACTIONS(46), 1,
      anon_sym_RPAREN,
    ACTIONS(51), 1,
      sym_raw_ident,
    STATE(16), 1,
      sym_meta_attr,
    ACTIONS(48), 2,
      sym_str_lit,
      sym_ident,
    STATE(8), 2,
      sym_cmd_arg,
      aux_sym_cmd_call_repeat1,
  [153] = 6,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_raw_ident,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_meta_attr,
    ACTIONS(33), 2,
      sym_str_lit,
      sym_ident,
    STATE(4), 2,
      sym_cmd_arg,
      aux_sym_cmd_call_repeat1,
  [174] = 6,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_raw_ident,
    ACTIONS(56), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_meta_attr,
    ACTIONS(33), 2,
      sym_str_lit,
      sym_ident,
    STATE(8), 2,
      sym_cmd_arg,
      aux_sym_cmd_call_repeat1,
  [195] = 6,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_raw_ident,
    ACTIONS(58), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_meta_attr,
    ACTIONS(33), 2,
      sym_str_lit,
      sym_ident,
    STATE(10), 2,
      sym_cmd_arg,
      aux_sym_cmd_call_repeat1,
  [216] = 6,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_raw_ident,
    ACTIONS(60), 1,
      anon_sym_RPAREN,
    STATE(16), 1,
      sym_meta_attr,
    ACTIONS(33), 2,
      sym_str_lit,
      sym_ident,
    STATE(7), 2,
      sym_cmd_arg,
      aux_sym_cmd_call_repeat1,
  [237] = 2,
    ACTIONS(62), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(64), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [248] = 4,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    ACTIONS(70), 1,
      sym_ident,
    ACTIONS(66), 2,
      anon_sym_AT,
      anon_sym_TILDE,
    STATE(19), 2,
      sym_cmd_call,
      aux_sym_unit_repeat1,
  [263] = 2,
    ACTIONS(72), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(74), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [274] = 3,
    ACTIONS(78), 1,
      anon_sym_COMMA,
    ACTIONS(80), 1,
      sym_raw_ident,
    ACTIONS(76), 4,
      anon_sym_AT,
      anon_sym_RPAREN,
      sym_str_lit,
      sym_ident,
  [287] = 4,
    ACTIONS(85), 1,
      anon_sym_RBRACE,
    ACTIONS(87), 1,
      sym_ident,
    ACTIONS(82), 2,
      anon_sym_AT,
      anon_sym_TILDE,
    STATE(17), 2,
      sym_cmd_call,
      aux_sym_unit_repeat1,
  [302] = 2,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(92), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [313] = 4,
    ACTIONS(70), 1,
      sym_ident,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    ACTIONS(66), 2,
      anon_sym_AT,
      anon_sym_TILDE,
    STATE(17), 2,
      sym_cmd_call,
      aux_sym_unit_repeat1,
  [328] = 2,
    ACTIONS(96), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(98), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [339] = 2,
    ACTIONS(102), 1,
      sym_raw_ident,
    ACTIONS(100), 5,
      anon_sym_AT,
      anon_sym_RPAREN,
      anon_sym_COMMA,
      sym_str_lit,
      sym_ident,
  [350] = 2,
    ACTIONS(104), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(106), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [361] = 2,
    ACTIONS(108), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(110), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [372] = 2,
    ACTIONS(112), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(114), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [383] = 2,
    ACTIONS(118), 1,
      sym_raw_ident,
    ACTIONS(116), 4,
      anon_sym_AT,
      anon_sym_RPAREN,
      sym_str_lit,
      sym_ident,
  [393] = 1,
    ACTIONS(72), 4,
      anon_sym_AT,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_ident,
  [400] = 1,
    ACTIONS(104), 4,
      anon_sym_AT,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_ident,
  [407] = 1,
    ACTIONS(108), 4,
      anon_sym_AT,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_ident,
  [414] = 1,
    ACTIONS(62), 4,
      anon_sym_AT,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_ident,
  [421] = 1,
    ACTIONS(120), 3,
      anon_sym_AT,
      anon_sym_TILDE,
      sym_ident,
  [427] = 1,
    ACTIONS(122), 3,
      anon_sym_AT,
      anon_sym_TILDE,
      sym_ident,
  [433] = 2,
    ACTIONS(124), 1,
      anon_sym_COLON_COLON,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
  [440] = 2,
    ACTIONS(128), 1,
      anon_sym_COLON_COLON,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
  [447] = 1,
    ACTIONS(132), 1,
      sym_ident,
  [451] = 1,
    ACTIONS(134), 1,
      anon_sym_LPAREN,
  [455] = 1,
    ACTIONS(136), 1,
      sym_ident,
  [459] = 1,
    ACTIONS(138), 1,
      sym_ident,
  [463] = 1,
    ACTIONS(140), 1,
      anon_sym_LBRACE,
  [467] = 1,
    ACTIONS(142), 1,
      anon_sym_as,
  [471] = 1,
    ACTIONS(144), 1,
      ts_builtin_sym_end,
  [475] = 1,
    ACTIONS(146), 1,
      sym_ident,
  [479] = 1,
    ACTIONS(126), 1,
      anon_sym_LPAREN,
  [483] = 1,
    ACTIONS(130), 1,
      anon_sym_LPAREN,
  [487] = 1,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 24,
  [SMALL_STATE(4)] = 48,
  [SMALL_STATE(5)] = 69,
  [SMALL_STATE(6)] = 90,
  [SMALL_STATE(7)] = 111,
  [SMALL_STATE(8)] = 132,
  [SMALL_STATE(9)] = 153,
  [SMALL_STATE(10)] = 174,
  [SMALL_STATE(11)] = 195,
  [SMALL_STATE(12)] = 216,
  [SMALL_STATE(13)] = 237,
  [SMALL_STATE(14)] = 248,
  [SMALL_STATE(15)] = 263,
  [SMALL_STATE(16)] = 274,
  [SMALL_STATE(17)] = 287,
  [SMALL_STATE(18)] = 302,
  [SMALL_STATE(19)] = 313,
  [SMALL_STATE(20)] = 328,
  [SMALL_STATE(21)] = 339,
  [SMALL_STATE(22)] = 350,
  [SMALL_STATE(23)] = 361,
  [SMALL_STATE(24)] = 372,
  [SMALL_STATE(25)] = 383,
  [SMALL_STATE(26)] = 393,
  [SMALL_STATE(27)] = 400,
  [SMALL_STATE(28)] = 407,
  [SMALL_STATE(29)] = 414,
  [SMALL_STATE(30)] = 421,
  [SMALL_STATE(31)] = 427,
  [SMALL_STATE(32)] = 433,
  [SMALL_STATE(33)] = 440,
  [SMALL_STATE(34)] = 447,
  [SMALL_STATE(35)] = 451,
  [SMALL_STATE(36)] = 455,
  [SMALL_STATE(37)] = 459,
  [SMALL_STATE(38)] = 463,
  [SMALL_STATE(39)] = 467,
  [SMALL_STATE(40)] = 471,
  [SMALL_STATE(41)] = 475,
  [SMALL_STATE(42)] = 479,
  [SMALL_STATE(43)] = 483,
  [SMALL_STATE(44)] = 487,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(34),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cmd_call_repeat1, 2), SHIFT_REPEAT(36),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cmd_call_repeat1, 2),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cmd_call_repeat1, 2), SHIFT_REPEAT(16),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cmd_call_repeat1, 2), SHIFT_REPEAT(16),
  [54] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [62] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_call, 6, .production_id = 4),
  [64] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_call, 6, .production_id = 4),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_call, 3, .production_id = 1),
  [74] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_call, 3, .production_id = 1),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_arg, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [80] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_arg, 1),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(43),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(33),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 5, .production_id = 3),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 5, .production_id = 3),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose, 4, .production_id = 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose, 4, .production_id = 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_attr, 2),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_attr, 2),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_call, 4, .production_id = 1),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_call, 4, .production_id = 1),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_call, 5, .production_id = 4),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_call, 5, .production_id = 4),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 4, .production_id = 3),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 4, .production_id = 3),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_arg, 2),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_arg, 2),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [144] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
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
