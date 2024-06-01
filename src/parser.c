#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 56
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 27
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
  anon_sym_COMMA = 10,
  anon_sym_RPAREN = 11,
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
  sym_block = 23,
  aux_sym_source_file_repeat1 = 24,
  aux_sym_unit_repeat1 = 25,
  aux_sym_cmd_call_repeat1 = 26,
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
  [6] = 6,
  [7] = 4,
  [8] = 8,
  [9] = 8,
  [10] = 5,
  [11] = 6,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 14,
  [17] = 17,
  [18] = 13,
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
  [34] = 27,
  [35] = 32,
  [36] = 20,
  [37] = 31,
  [38] = 22,
  [39] = 21,
  [40] = 30,
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
      if (eof) ADVANCE(14);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(26);
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
      if (lookahead == ')') ADVANCE(27);
      if (lookahead == ',') ADVANCE(26);
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
      if (lookahead == '"') ADVANCE(28);
      if (lookahead != 0) ADVANCE(2);
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
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_str_lit);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_str_lit);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+') ADVANCE(40);
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
      if (lookahead == '"') ADVANCE(29);
      if (('!' <= lookahead && lookahead <= '&') ||
          lookahead == '*' ||
          lookahead == '+') ADVANCE(39);
      if (lookahead != 0) ADVANCE(2);
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
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 13},
  [21] = {.lex_state = 13},
  [22] = {.lex_state = 13},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 13},
  [25] = {.lex_state = 13},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 13},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 13},
  [30] = {.lex_state = 13},
  [31] = {.lex_state = 13},
  [32] = {.lex_state = 13},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 1},
  [38] = {.lex_state = 1},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 1},
  [41] = {.lex_state = 1},
  [42] = {.lex_state = 13},
  [43] = {.lex_state = 13},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 13},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 13},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 13},
  [54] = {.lex_state = 13},
  [55] = {.lex_state = 13},
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
    [sym_block] = STATE(21),
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
    STATE(21), 1,
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
    STATE(21), 1,
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
    ACTIONS(35), 1,
      sym_ident,
    STATE(12), 1,
      aux_sym_cmd_call_repeat1,
    STATE(23), 1,
      sym_cmd_arg,
    STATE(28), 1,
      sym_meta_attr,
    ACTIONS(33), 2,
      sym_str_lit,
      sym_raw_ident,
  [77] = 7,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_ident,
    ACTIONS(37), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      aux_sym_cmd_call_repeat1,
    STATE(23), 1,
      sym_cmd_arg,
    STATE(28), 1,
      sym_meta_attr,
    ACTIONS(33), 2,
      sym_str_lit,
      sym_raw_ident,
  [100] = 7,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_ident,
    ACTIONS(39), 1,
      anon_sym_RPAREN,
    STATE(5), 1,
      aux_sym_cmd_call_repeat1,
    STATE(23), 1,
      sym_cmd_arg,
    STATE(28), 1,
      sym_meta_attr,
    ACTIONS(33), 2,
      sym_str_lit,
      sym_raw_ident,
  [123] = 7,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_ident,
    ACTIONS(41), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      aux_sym_cmd_call_repeat1,
    STATE(23), 1,
      sym_cmd_arg,
    STATE(28), 1,
      sym_meta_attr,
    ACTIONS(33), 2,
      sym_str_lit,
      sym_raw_ident,
  [146] = 7,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_ident,
    ACTIONS(43), 1,
      anon_sym_RPAREN,
    STATE(7), 1,
      aux_sym_cmd_call_repeat1,
    STATE(23), 1,
      sym_cmd_arg,
    STATE(28), 1,
      sym_meta_attr,
    ACTIONS(33), 2,
      sym_str_lit,
      sym_raw_ident,
  [169] = 7,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_ident,
    ACTIONS(45), 1,
      anon_sym_RPAREN,
    STATE(4), 1,
      aux_sym_cmd_call_repeat1,
    STATE(23), 1,
      sym_cmd_arg,
    STATE(28), 1,
      sym_meta_attr,
    ACTIONS(33), 2,
      sym_str_lit,
      sym_raw_ident,
  [192] = 7,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_ident,
    ACTIONS(47), 1,
      anon_sym_RPAREN,
    STATE(12), 1,
      aux_sym_cmd_call_repeat1,
    STATE(23), 1,
      sym_cmd_arg,
    STATE(28), 1,
      sym_meta_attr,
    ACTIONS(33), 2,
      sym_str_lit,
      sym_raw_ident,
  [215] = 7,
    ACTIONS(29), 1,
      anon_sym_AT,
    ACTIONS(35), 1,
      sym_ident,
    ACTIONS(49), 1,
      anon_sym_RPAREN,
    STATE(10), 1,
      aux_sym_cmd_call_repeat1,
    STATE(23), 1,
      sym_cmd_arg,
    STATE(28), 1,
      sym_meta_attr,
    ACTIONS(33), 2,
      sym_str_lit,
      sym_raw_ident,
  [238] = 7,
    ACTIONS(51), 1,
      anon_sym_AT,
    ACTIONS(54), 1,
      anon_sym_RPAREN,
    ACTIONS(59), 1,
      sym_ident,
    STATE(12), 1,
      aux_sym_cmd_call_repeat1,
    STATE(23), 1,
      sym_cmd_arg,
    STATE(28), 1,
      sym_meta_attr,
    ACTIONS(56), 2,
      sym_str_lit,
      sym_raw_ident,
  [261] = 5,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    ACTIONS(66), 1,
      sym_ident,
    STATE(39), 1,
      sym_block,
    ACTIONS(62), 2,
      anon_sym_AT,
      anon_sym_TILDE,
    STATE(15), 2,
      sym_cmd_call,
      aux_sym_unit_repeat1,
  [279] = 5,
    ACTIONS(66), 1,
      sym_ident,
    ACTIONS(68), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_block,
    ACTIONS(62), 2,
      anon_sym_AT,
      anon_sym_TILDE,
    STATE(13), 2,
      sym_cmd_call,
      aux_sym_unit_repeat1,
  [297] = 5,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    ACTIONS(75), 1,
      sym_ident,
    STATE(39), 1,
      sym_block,
    ACTIONS(70), 2,
      anon_sym_AT,
      anon_sym_TILDE,
    STATE(15), 2,
      sym_cmd_call,
      aux_sym_unit_repeat1,
  [315] = 5,
    ACTIONS(66), 1,
      sym_ident,
    ACTIONS(78), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_block,
    ACTIONS(62), 2,
      anon_sym_AT,
      anon_sym_TILDE,
    STATE(18), 2,
      sym_cmd_call,
      aux_sym_unit_repeat1,
  [333] = 5,
    ACTIONS(66), 1,
      sym_ident,
    ACTIONS(80), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_block,
    ACTIONS(62), 2,
      anon_sym_AT,
      anon_sym_TILDE,
    STATE(15), 2,
      sym_cmd_call,
      aux_sym_unit_repeat1,
  [351] = 5,
    ACTIONS(66), 1,
      sym_ident,
    ACTIONS(82), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_block,
    ACTIONS(62), 2,
      anon_sym_AT,
      anon_sym_TILDE,
    STATE(15), 2,
      sym_cmd_call,
      aux_sym_unit_repeat1,
  [369] = 5,
    ACTIONS(66), 1,
      sym_ident,
    ACTIONS(84), 1,
      anon_sym_RBRACE,
    STATE(39), 1,
      sym_block,
    ACTIONS(62), 2,
      anon_sym_AT,
      anon_sym_TILDE,
    STATE(17), 2,
      sym_cmd_call,
      aux_sym_unit_repeat1,
  [387] = 2,
    ACTIONS(86), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(88), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [398] = 2,
    ACTIONS(90), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(92), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [409] = 2,
    ACTIONS(94), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(96), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [420] = 3,
    ACTIONS(100), 1,
      anon_sym_COMMA,
    ACTIONS(102), 2,
      sym_str_lit,
      sym_raw_ident,
    ACTIONS(98), 3,
      anon_sym_AT,
      anon_sym_RPAREN,
      sym_ident,
  [433] = 2,
    ACTIONS(104), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(106), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [444] = 2,
    ACTIONS(108), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(110), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [455] = 2,
    ACTIONS(114), 2,
      sym_str_lit,
      sym_raw_ident,
    ACTIONS(112), 4,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_ident,
  [466] = 2,
    ACTIONS(116), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(118), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [477] = 2,
    ACTIONS(122), 2,
      sym_str_lit,
      sym_raw_ident,
    ACTIONS(120), 4,
      anon_sym_AT,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_ident,
  [488] = 2,
    ACTIONS(124), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(126), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [499] = 2,
    ACTIONS(128), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(130), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [510] = 2,
    ACTIONS(132), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(134), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [521] = 2,
    ACTIONS(136), 3,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_TILDE,
    ACTIONS(138), 3,
      anon_sym_expose,
      anon_sym_unit,
      sym_ident,
  [532] = 2,
    ACTIONS(140), 2,
      sym_str_lit,
      sym_raw_ident,
    ACTIONS(54), 3,
      anon_sym_AT,
      anon_sym_RPAREN,
      sym_ident,
  [542] = 1,
    ACTIONS(116), 4,
      anon_sym_AT,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_ident,
  [549] = 1,
    ACTIONS(136), 4,
      anon_sym_AT,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_ident,
  [556] = 1,
    ACTIONS(86), 4,
      anon_sym_AT,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_ident,
  [563] = 1,
    ACTIONS(132), 4,
      anon_sym_AT,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_ident,
  [570] = 1,
    ACTIONS(94), 4,
      anon_sym_AT,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_ident,
  [577] = 1,
    ACTIONS(90), 4,
      anon_sym_AT,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_ident,
  [584] = 1,
    ACTIONS(128), 4,
      anon_sym_AT,
      anon_sym_RBRACE,
      anon_sym_TILDE,
      sym_ident,
  [591] = 1,
    ACTIONS(142), 3,
      anon_sym_AT,
      anon_sym_TILDE,
      sym_ident,
  [597] = 3,
    ACTIONS(144), 1,
      anon_sym_LBRACE,
    ACTIONS(146), 1,
      anon_sym_COLON_COLON,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
  [607] = 3,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
    ACTIONS(152), 1,
      anon_sym_COLON_COLON,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
  [617] = 1,
    ACTIONS(156), 3,
      anon_sym_AT,
      anon_sym_TILDE,
      sym_ident,
  [623] = 1,
    ACTIONS(158), 1,
      sym_ident,
  [627] = 1,
    ACTIONS(160), 1,
      sym_ident,
  [631] = 1,
    ACTIONS(162), 1,
      anon_sym_LPAREN,
  [635] = 1,
    ACTIONS(164), 1,
      sym_ident,
  [639] = 1,
    ACTIONS(166), 1,
      anon_sym_LBRACE,
  [643] = 1,
    ACTIONS(168), 1,
      anon_sym_as,
  [647] = 1,
    ACTIONS(170), 1,
      ts_builtin_sym_end,
  [651] = 1,
    ACTIONS(172), 1,
      sym_ident,
  [655] = 1,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
  [659] = 1,
    ACTIONS(154), 1,
      anon_sym_LPAREN,
  [663] = 1,
    ACTIONS(174), 1,
      anon_sym_LPAREN,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 27,
  [SMALL_STATE(4)] = 54,
  [SMALL_STATE(5)] = 77,
  [SMALL_STATE(6)] = 100,
  [SMALL_STATE(7)] = 123,
  [SMALL_STATE(8)] = 146,
  [SMALL_STATE(9)] = 169,
  [SMALL_STATE(10)] = 192,
  [SMALL_STATE(11)] = 215,
  [SMALL_STATE(12)] = 238,
  [SMALL_STATE(13)] = 261,
  [SMALL_STATE(14)] = 279,
  [SMALL_STATE(15)] = 297,
  [SMALL_STATE(16)] = 315,
  [SMALL_STATE(17)] = 333,
  [SMALL_STATE(18)] = 351,
  [SMALL_STATE(19)] = 369,
  [SMALL_STATE(20)] = 387,
  [SMALL_STATE(21)] = 398,
  [SMALL_STATE(22)] = 409,
  [SMALL_STATE(23)] = 420,
  [SMALL_STATE(24)] = 433,
  [SMALL_STATE(25)] = 444,
  [SMALL_STATE(26)] = 455,
  [SMALL_STATE(27)] = 466,
  [SMALL_STATE(28)] = 477,
  [SMALL_STATE(29)] = 488,
  [SMALL_STATE(30)] = 499,
  [SMALL_STATE(31)] = 510,
  [SMALL_STATE(32)] = 521,
  [SMALL_STATE(33)] = 532,
  [SMALL_STATE(34)] = 542,
  [SMALL_STATE(35)] = 549,
  [SMALL_STATE(36)] = 556,
  [SMALL_STATE(37)] = 563,
  [SMALL_STATE(38)] = 570,
  [SMALL_STATE(39)] = 577,
  [SMALL_STATE(40)] = 584,
  [SMALL_STATE(41)] = 591,
  [SMALL_STATE(42)] = 597,
  [SMALL_STATE(43)] = 607,
  [SMALL_STATE(44)] = 617,
  [SMALL_STATE(45)] = 623,
  [SMALL_STATE(46)] = 627,
  [SMALL_STATE(47)] = 631,
  [SMALL_STATE(48)] = 635,
  [SMALL_STATE(49)] = 639,
  [SMALL_STATE(50)] = 643,
  [SMALL_STATE(51)] = 647,
  [SMALL_STATE(52)] = 651,
  [SMALL_STATE(53)] = 655,
  [SMALL_STATE(54)] = 659,
  [SMALL_STATE(55)] = 663,
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
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cmd_call_repeat1, 2), SHIFT_REPEAT(46),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cmd_call_repeat1, 2),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_cmd_call_repeat1, 2), SHIFT_REPEAT(28),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cmd_call_repeat1, 2), SHIFT_REPEAT(28),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [66] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(54),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2),
  [75] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_unit_repeat1, 2), SHIFT_REPEAT(43),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_call, 5, .production_id = 4),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_call, 5, .production_id = 4),
  [90] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_call, 1),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_call, 1),
  [94] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 3, .production_id = 1),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 3, .production_id = 1),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cmd_call_repeat1, 1),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [102] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cmd_call_repeat1, 1),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 5, .production_id = 3),
  [106] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 5, .production_id = 3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_expose, 4, .production_id = 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_expose, 4, .production_id = 2),
  [112] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meta_attr, 2),
  [114] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_meta_attr, 2),
  [116] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_call, 4, .production_id = 1),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_call, 4, .production_id = 1),
  [120] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_arg, 1),
  [122] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_arg, 1),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit, 4, .production_id = 3),
  [126] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_unit, 4, .production_id = 3),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_call, 3, .production_id = 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_call, 3, .production_id = 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_block, 4, .production_id = 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_block, 4, .production_id = 1),
  [136] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_call, 6, .production_id = 4),
  [138] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_cmd_call, 6, .production_id = 4),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_cmd_call_repeat1, 2),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
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
