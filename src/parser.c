#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 54
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 44
#define ALIAS_COUNT 0
#define TOKEN_COUNT 26
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 9
#define MAX_ALIAS_SEQUENCE_LENGTH 6
#define PRODUCTION_ID_COUNT 12

enum {
  anon_sym_AT = 1,
  anon_sym_POUNDlink = 2,
  anon_sym_POUNDpragma = 3,
  anon_sym_build = 4,
  anon_sym_test = 5,
  anon_sym_Task = 6,
  anon_sym_LBRACE = 7,
  anon_sym_RBRACE = 8,
  anon_sym_COLON = 9,
  anon_sym_LBRACK = 10,
  anon_sym_COMMA = 11,
  anon_sym_RBRACK = 12,
  anon_sym_cmddef = 13,
  anon_sym_LPAREN = 14,
  anon_sym_RPAREN = 15,
  anon_sym_SEMI = 16,
  anon_sym_DOT = 17,
  sym_string_literal = 18,
  sym_integer_literal = 19,
  anon_sym_True = 20,
  anon_sym_False = 21,
  anon_sym_true = 22,
  anon_sym_false = 23,
  sym_identifier = 24,
  sym_encap = 25,
  sym_source_file = 26,
  sym__defintion = 27,
  sym_namespace_definition = 28,
  sym_link_definition = 29,
  sym_pragma_definition = 30,
  sym_task_definition = 31,
  sym_task_deps = 32,
  sym_cmddef_definition = 33,
  sym_cmd_call = 34,
  sym_cmd_internal = 35,
  sym_cmd_local = 36,
  sym_cmd_external = 37,
  sym_cmd_arg = 38,
  sym_boolean_literal = 39,
  aux_sym_source_file_repeat1 = 40,
  aux_sym_task_definition_repeat1 = 41,
  aux_sym_task_deps_repeat1 = 42,
  aux_sym_cmd_internal_repeat1 = 43,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_AT] = "@",
  [anon_sym_POUNDlink] = "#link",
  [anon_sym_POUNDpragma] = "#pragma",
  [anon_sym_build] = "build",
  [anon_sym_test] = "test",
  [anon_sym_Task] = "Task",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [anon_sym_LBRACK] = "[",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACK] = "]",
  [anon_sym_cmddef] = "cmddef",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_SEMI] = ";",
  [anon_sym_DOT] = ".",
  [sym_string_literal] = "string_literal",
  [sym_integer_literal] = "integer_literal",
  [anon_sym_True] = "True",
  [anon_sym_False] = "False",
  [anon_sym_true] = "true",
  [anon_sym_false] = "false",
  [sym_identifier] = "identifier",
  [sym_encap] = "encap",
  [sym_source_file] = "source_file",
  [sym__defintion] = "_defintion",
  [sym_namespace_definition] = "namespace_definition",
  [sym_link_definition] = "link_definition",
  [sym_pragma_definition] = "pragma_definition",
  [sym_task_definition] = "task_definition",
  [sym_task_deps] = "task_deps",
  [sym_cmddef_definition] = "cmddef_definition",
  [sym_cmd_call] = "cmd_call",
  [sym_cmd_internal] = "cmd_internal",
  [sym_cmd_local] = "cmd_local",
  [sym_cmd_external] = "cmd_external",
  [sym_cmd_arg] = "cmd_arg",
  [sym_boolean_literal] = "boolean_literal",
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_task_definition_repeat1] = "task_definition_repeat1",
  [aux_sym_task_deps_repeat1] = "task_deps_repeat1",
  [aux_sym_cmd_internal_repeat1] = "cmd_internal_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_AT] = anon_sym_AT,
  [anon_sym_POUNDlink] = anon_sym_POUNDlink,
  [anon_sym_POUNDpragma] = anon_sym_POUNDpragma,
  [anon_sym_build] = anon_sym_build,
  [anon_sym_test] = anon_sym_test,
  [anon_sym_Task] = anon_sym_Task,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_cmddef] = anon_sym_cmddef,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [anon_sym_DOT] = anon_sym_DOT,
  [sym_string_literal] = sym_string_literal,
  [sym_integer_literal] = sym_integer_literal,
  [anon_sym_True] = anon_sym_True,
  [anon_sym_False] = anon_sym_False,
  [anon_sym_true] = anon_sym_true,
  [anon_sym_false] = anon_sym_false,
  [sym_identifier] = sym_identifier,
  [sym_encap] = sym_encap,
  [sym_source_file] = sym_source_file,
  [sym__defintion] = sym__defintion,
  [sym_namespace_definition] = sym_namespace_definition,
  [sym_link_definition] = sym_link_definition,
  [sym_pragma_definition] = sym_pragma_definition,
  [sym_task_definition] = sym_task_definition,
  [sym_task_deps] = sym_task_deps,
  [sym_cmddef_definition] = sym_cmddef_definition,
  [sym_cmd_call] = sym_cmd_call,
  [sym_cmd_internal] = sym_cmd_internal,
  [sym_cmd_local] = sym_cmd_local,
  [sym_cmd_external] = sym_cmd_external,
  [sym_cmd_arg] = sym_cmd_arg,
  [sym_boolean_literal] = sym_boolean_literal,
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
  [aux_sym_task_definition_repeat1] = aux_sym_task_definition_repeat1,
  [aux_sym_task_deps_repeat1] = aux_sym_task_deps_repeat1,
  [aux_sym_cmd_internal_repeat1] = aux_sym_cmd_internal_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_AT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDlink] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_POUNDpragma] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_build] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_test] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Task] = {
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
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_cmddef] = {
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
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [sym_string_literal] = {
    .visible = true,
    .named = true,
  },
  [sym_integer_literal] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_True] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_False] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_true] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_false] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
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
  [sym_namespace_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_link_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_pragma_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_task_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_task_deps] = {
    .visible = true,
    .named = true,
  },
  [sym_cmddef_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_call] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_internal] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_local] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_external] = {
    .visible = true,
    .named = true,
  },
  [sym_cmd_arg] = {
    .visible = true,
    .named = true,
  },
  [sym_boolean_literal] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_task_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_task_deps_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_cmd_internal_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_cmd_name = 1,
  field_cmddef_name = 2,
  field_dep_name = 3,
  field_job_name = 4,
  field_module_name = 5,
  field_namespace = 6,
  field_pragma_job = 7,
  field_task_deps = 8,
  field_task_name = 9,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_cmd_name] = "cmd_name",
  [field_cmddef_name] = "cmddef_name",
  [field_dep_name] = "dep_name",
  [field_job_name] = "job_name",
  [field_module_name] = "module_name",
  [field_namespace] = "namespace",
  [field_pragma_job] = "pragma_job",
  [field_task_deps] = "task_deps",
  [field_task_name] = "task_name",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 2},
  [4] = {.index = 4, .length = 1},
  [5] = {.index = 5, .length = 1},
  [6] = {.index = 6, .length = 1},
  [7] = {.index = 7, .length = 1},
  [8] = {.index = 8, .length = 2},
  [9] = {.index = 10, .length = 1},
  [10] = {.index = 11, .length = 2},
  [11] = {.index = 13, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_namespace, 1},
  [1] =
    {field_module_name, 1},
  [2] =
    {field_job_name, 2},
    {field_pragma_job, 1},
  [4] =
    {field_task_name, 1},
  [5] =
    {field_cmddef_name, 1},
  [6] =
    {field_cmd_name, 0},
  [7] =
    {field_dep_name, 0},
  [8] =
    {field_task_deps, 2},
    {field_task_name, 1},
  [10] =
    {field_dep_name, 2, .inherited = true},
  [11] =
    {field_dep_name, 0, .inherited = true},
    {field_dep_name, 1, .inherited = true},
  [13] =
    {field_cmd_name, 2},
    {field_module_name, 0},
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(42);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '#') ADVANCE(24);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == '@') ADVANCE(43);
      if (lookahead == 'F') ADVANCE(4);
      if (lookahead == 'T') ADVANCE(5);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == 'b') ADVANCE(40);
      if (lookahead == 'c') ADVANCE(28);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 't') ADVANCE(17);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(67);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == '.') ADVANCE(59);
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == ';') ADVANCE(58);
      if (lookahead == 'F') ADVANCE(4);
      if (lookahead == 'T') ADVANCE(32);
      if (lookahead == '[') ADVANCE(52);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 't') ADVANCE(33);
      if (lookahead == '{') ADVANCE(49);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == ',') ADVANCE(53);
      if (lookahead == ']') ADVANCE(54);
      if (lookahead == '}') ADVANCE(50);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(66);
      END_STATE();
    case 4:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 5:
      if (lookahead == 'a') ADVANCE(34);
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 6:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 7:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 8:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 9:
      if (lookahead == 'd') ADVANCE(46);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(11);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(15);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 17:
      if (lookahead == 'e') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 18:
      if (lookahead == 'f') ADVANCE(55);
      END_STATE();
    case 19:
      if (lookahead == 'g') ADVANCE(29);
      END_STATE();
    case 20:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 21:
      if (lookahead == 'i') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == 'k') ADVANCE(48);
      END_STATE();
    case 23:
      if (lookahead == 'k') ADVANCE(44);
      END_STATE();
    case 24:
      if (lookahead == 'l') ADVANCE(20);
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 25:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 26:
      if (lookahead == 'l') ADVANCE(9);
      END_STATE();
    case 27:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 28:
      if (lookahead == 'm') ADVANCE(10);
      END_STATE();
    case 29:
      if (lookahead == 'm') ADVANCE(7);
      END_STATE();
    case 30:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 31:
      if (lookahead == 'r') ADVANCE(6);
      END_STATE();
    case 32:
      if (lookahead == 'r') ADVANCE(39);
      END_STATE();
    case 33:
      if (lookahead == 'r') ADVANCE(41);
      END_STATE();
    case 34:
      if (lookahead == 's') ADVANCE(22);
      END_STATE();
    case 35:
      if (lookahead == 's') ADVANCE(38);
      END_STATE();
    case 36:
      if (lookahead == 's') ADVANCE(14);
      END_STATE();
    case 37:
      if (lookahead == 's') ADVANCE(16);
      END_STATE();
    case 38:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 39:
      if (lookahead == 'u') ADVANCE(12);
      END_STATE();
    case 40:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 41:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(anon_sym_AT);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_POUNDlink);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_POUNDpragma);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_build);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(anon_sym_test);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(anon_sym_Task);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_cmddef);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_string_literal);
      if (lookahead == '"') ADVANCE(60);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_integer_literal);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_True);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_False);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_true);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_false);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z') ||
          lookahead == '~') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_encap);
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
  [4] = {.lex_state = 1},
  [5] = {.lex_state = 1},
  [6] = {.lex_state = 1},
  [7] = {.lex_state = 1},
  [8] = {.lex_state = 1},
  [9] = {.lex_state = 3},
  [10] = {.lex_state = 1},
  [11] = {.lex_state = 3},
  [12] = {.lex_state = 3},
  [13] = {.lex_state = 3},
  [14] = {.lex_state = 3},
  [15] = {.lex_state = 3},
  [16] = {.lex_state = 3},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 3},
  [28] = {.lex_state = 3},
  [29] = {.lex_state = 3},
  [30] = {.lex_state = 3},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 3},
  [34] = {.lex_state = 3},
  [35] = {.lex_state = 3},
  [36] = {.lex_state = 3},
  [37] = {.lex_state = 3},
  [38] = {.lex_state = 3},
  [39] = {.lex_state = 3},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 3},
  [42] = {.lex_state = 3},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 3},
  [49] = {.lex_state = 3},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 3},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_AT] = ACTIONS(1),
    [anon_sym_POUNDlink] = ACTIONS(1),
    [anon_sym_POUNDpragma] = ACTIONS(1),
    [anon_sym_build] = ACTIONS(1),
    [anon_sym_test] = ACTIONS(1),
    [anon_sym_Task] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_cmddef] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [sym_string_literal] = ACTIONS(1),
    [sym_integer_literal] = ACTIONS(1),
    [anon_sym_True] = ACTIONS(1),
    [anon_sym_False] = ACTIONS(1),
    [anon_sym_true] = ACTIONS(1),
    [anon_sym_false] = ACTIONS(1),
    [sym_encap] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(40),
    [sym__defintion] = STATE(2),
    [sym_namespace_definition] = STATE(2),
    [sym_link_definition] = STATE(2),
    [sym_pragma_definition] = STATE(2),
    [sym_task_definition] = STATE(2),
    [sym_cmddef_definition] = STATE(2),
    [aux_sym_source_file_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_AT] = ACTIONS(5),
    [anon_sym_POUNDlink] = ACTIONS(7),
    [anon_sym_POUNDpragma] = ACTIONS(9),
    [anon_sym_Task] = ACTIONS(11),
    [anon_sym_cmddef] = ACTIONS(13),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 7,
    ACTIONS(5), 1,
      anon_sym_AT,
    ACTIONS(7), 1,
      anon_sym_POUNDlink,
    ACTIONS(9), 1,
      anon_sym_POUNDpragma,
    ACTIONS(11), 1,
      anon_sym_Task,
    ACTIONS(13), 1,
      anon_sym_cmddef,
    ACTIONS(15), 1,
      ts_builtin_sym_end,
    STATE(3), 7,
      sym__defintion,
      sym_namespace_definition,
      sym_link_definition,
      sym_pragma_definition,
      sym_task_definition,
      sym_cmddef_definition,
      aux_sym_source_file_repeat1,
  [28] = 7,
    ACTIONS(17), 1,
      ts_builtin_sym_end,
    ACTIONS(19), 1,
      anon_sym_AT,
    ACTIONS(22), 1,
      anon_sym_POUNDlink,
    ACTIONS(25), 1,
      anon_sym_POUNDpragma,
    ACTIONS(28), 1,
      anon_sym_Task,
    ACTIONS(31), 1,
      anon_sym_cmddef,
    STATE(3), 7,
      sym__defintion,
      sym_namespace_definition,
      sym_link_definition,
      sym_pragma_definition,
      sym_task_definition,
      sym_cmddef_definition,
      aux_sym_source_file_repeat1,
  [56] = 5,
    ACTIONS(34), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym_boolean_literal,
    ACTIONS(36), 2,
      sym_string_literal,
      sym_integer_literal,
    STATE(4), 2,
      sym_cmd_arg,
      aux_sym_cmd_internal_repeat1,
    ACTIONS(39), 4,
      anon_sym_True,
      anon_sym_False,
      anon_sym_true,
      anon_sym_false,
  [77] = 5,
    ACTIONS(42), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym_boolean_literal,
    ACTIONS(44), 2,
      sym_string_literal,
      sym_integer_literal,
    STATE(4), 2,
      sym_cmd_arg,
      aux_sym_cmd_internal_repeat1,
    ACTIONS(46), 4,
      anon_sym_True,
      anon_sym_False,
      anon_sym_true,
      anon_sym_false,
  [98] = 5,
    ACTIONS(48), 1,
      anon_sym_RPAREN,
    STATE(8), 1,
      sym_boolean_literal,
    ACTIONS(44), 2,
      sym_string_literal,
      sym_integer_literal,
    STATE(5), 2,
      sym_cmd_arg,
      aux_sym_cmd_internal_repeat1,
    ACTIONS(46), 4,
      anon_sym_True,
      anon_sym_False,
      anon_sym_true,
      anon_sym_false,
  [119] = 1,
    ACTIONS(50), 8,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      sym_string_literal,
      sym_integer_literal,
      anon_sym_True,
      anon_sym_False,
      anon_sym_true,
      anon_sym_false,
  [130] = 2,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    ACTIONS(54), 7,
      anon_sym_RPAREN,
      sym_string_literal,
      sym_integer_literal,
      anon_sym_True,
      anon_sym_False,
      anon_sym_true,
      anon_sym_false,
  [143] = 4,
    ACTIONS(56), 1,
      anon_sym_RBRACE,
    ACTIONS(58), 1,
      sym_identifier,
    STATE(11), 2,
      sym_cmd_call,
      aux_sym_task_definition_repeat1,
    STATE(37), 3,
      sym_cmd_internal,
      sym_cmd_local,
      sym_cmd_external,
  [159] = 1,
    ACTIONS(60), 7,
      anon_sym_RPAREN,
      sym_string_literal,
      sym_integer_literal,
      anon_sym_True,
      anon_sym_False,
      anon_sym_true,
      anon_sym_false,
  [169] = 4,
    ACTIONS(58), 1,
      sym_identifier,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_cmd_call,
      aux_sym_task_definition_repeat1,
    STATE(37), 3,
      sym_cmd_internal,
      sym_cmd_local,
      sym_cmd_external,
  [185] = 4,
    ACTIONS(64), 1,
      anon_sym_RBRACE,
    ACTIONS(66), 1,
      sym_identifier,
    STATE(12), 2,
      sym_cmd_call,
      aux_sym_task_definition_repeat1,
    STATE(37), 3,
      sym_cmd_internal,
      sym_cmd_local,
      sym_cmd_external,
  [201] = 4,
    ACTIONS(58), 1,
      sym_identifier,
    ACTIONS(69), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_cmd_call,
      aux_sym_task_definition_repeat1,
    STATE(37), 3,
      sym_cmd_internal,
      sym_cmd_local,
      sym_cmd_external,
  [217] = 4,
    ACTIONS(58), 1,
      sym_identifier,
    ACTIONS(71), 1,
      anon_sym_RBRACE,
    STATE(12), 2,
      sym_cmd_call,
      aux_sym_task_definition_repeat1,
    STATE(37), 3,
      sym_cmd_internal,
      sym_cmd_local,
      sym_cmd_external,
  [233] = 4,
    ACTIONS(58), 1,
      sym_identifier,
    ACTIONS(73), 1,
      anon_sym_RBRACE,
    STATE(13), 2,
      sym_cmd_call,
      aux_sym_task_definition_repeat1,
    STATE(37), 3,
      sym_cmd_internal,
      sym_cmd_local,
      sym_cmd_external,
  [249] = 4,
    ACTIONS(58), 1,
      sym_identifier,
    ACTIONS(75), 1,
      anon_sym_RBRACE,
    STATE(14), 2,
      sym_cmd_call,
      aux_sym_task_definition_repeat1,
    STATE(37), 3,
      sym_cmd_internal,
      sym_cmd_local,
      sym_cmd_external,
  [265] = 1,
    ACTIONS(77), 6,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_POUNDlink,
      anon_sym_POUNDpragma,
      anon_sym_Task,
      anon_sym_cmddef,
  [274] = 1,
    ACTIONS(79), 6,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_POUNDlink,
      anon_sym_POUNDpragma,
      anon_sym_Task,
      anon_sym_cmddef,
  [283] = 1,
    ACTIONS(81), 6,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_POUNDlink,
      anon_sym_POUNDpragma,
      anon_sym_Task,
      anon_sym_cmddef,
  [292] = 1,
    ACTIONS(83), 6,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_POUNDlink,
      anon_sym_POUNDpragma,
      anon_sym_Task,
      anon_sym_cmddef,
  [301] = 1,
    ACTIONS(85), 6,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_POUNDlink,
      anon_sym_POUNDpragma,
      anon_sym_Task,
      anon_sym_cmddef,
  [310] = 1,
    ACTIONS(87), 6,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_POUNDlink,
      anon_sym_POUNDpragma,
      anon_sym_Task,
      anon_sym_cmddef,
  [319] = 1,
    ACTIONS(89), 6,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_POUNDlink,
      anon_sym_POUNDpragma,
      anon_sym_Task,
      anon_sym_cmddef,
  [328] = 1,
    ACTIONS(91), 6,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_POUNDlink,
      anon_sym_POUNDpragma,
      anon_sym_Task,
      anon_sym_cmddef,
  [337] = 1,
    ACTIONS(93), 6,
      ts_builtin_sym_end,
      anon_sym_AT,
      anon_sym_POUNDlink,
      anon_sym_POUNDpragma,
      anon_sym_Task,
      anon_sym_cmddef,
  [346] = 3,
    ACTIONS(95), 1,
      anon_sym_LBRACE,
    ACTIONS(97), 1,
      anon_sym_COLON,
    STATE(53), 1,
      sym_task_deps,
  [356] = 3,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    ACTIONS(101), 1,
      sym_identifier,
    STATE(30), 1,
      aux_sym_task_deps_repeat1,
  [366] = 3,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    ACTIONS(105), 1,
      sym_identifier,
    STATE(28), 1,
      aux_sym_task_deps_repeat1,
  [376] = 2,
    ACTIONS(108), 1,
      anon_sym_COMMA,
    ACTIONS(110), 2,
      anon_sym_RBRACK,
      sym_identifier,
  [384] = 3,
    ACTIONS(101), 1,
      sym_identifier,
    ACTIONS(112), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      aux_sym_task_deps_repeat1,
  [394] = 3,
    ACTIONS(114), 1,
      anon_sym_LPAREN,
    ACTIONS(116), 1,
      anon_sym_SEMI,
    ACTIONS(118), 1,
      anon_sym_DOT,
  [404] = 1,
    ACTIONS(120), 2,
      anon_sym_build,
      anon_sym_test,
  [409] = 1,
    ACTIONS(122), 2,
      anon_sym_RBRACK,
      sym_identifier,
  [414] = 1,
    ACTIONS(124), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [419] = 1,
    ACTIONS(126), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [424] = 1,
    ACTIONS(128), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [429] = 1,
    ACTIONS(130), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [434] = 1,
    ACTIONS(132), 2,
      anon_sym_RBRACE,
      sym_identifier,
  [439] = 1,
    ACTIONS(134), 1,
      sym_identifier,
  [443] = 1,
    ACTIONS(136), 1,
      ts_builtin_sym_end,
  [447] = 1,
    ACTIONS(138), 1,
      sym_identifier,
  [451] = 1,
    ACTIONS(140), 1,
      sym_identifier,
  [455] = 1,
    ACTIONS(142), 1,
      anon_sym_SEMI,
  [459] = 1,
    ACTIONS(144), 1,
      anon_sym_SEMI,
  [463] = 1,
    ACTIONS(146), 1,
      anon_sym_LBRACE,
  [467] = 1,
    ACTIONS(148), 1,
      anon_sym_LBRACK,
  [471] = 1,
    ACTIONS(150), 1,
      anon_sym_LBRACE,
  [475] = 1,
    ACTIONS(152), 1,
      sym_identifier,
  [479] = 1,
    ACTIONS(154), 1,
      sym_identifier,
  [483] = 1,
    ACTIONS(156), 1,
      anon_sym_SEMI,
  [487] = 1,
    ACTIONS(158), 1,
      sym_identifier,
  [491] = 1,
    ACTIONS(160), 1,
      anon_sym_LBRACE,
  [495] = 1,
    ACTIONS(162), 1,
      anon_sym_LBRACE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 28,
  [SMALL_STATE(4)] = 56,
  [SMALL_STATE(5)] = 77,
  [SMALL_STATE(6)] = 98,
  [SMALL_STATE(7)] = 119,
  [SMALL_STATE(8)] = 130,
  [SMALL_STATE(9)] = 143,
  [SMALL_STATE(10)] = 159,
  [SMALL_STATE(11)] = 169,
  [SMALL_STATE(12)] = 185,
  [SMALL_STATE(13)] = 201,
  [SMALL_STATE(14)] = 217,
  [SMALL_STATE(15)] = 233,
  [SMALL_STATE(16)] = 249,
  [SMALL_STATE(17)] = 265,
  [SMALL_STATE(18)] = 274,
  [SMALL_STATE(19)] = 283,
  [SMALL_STATE(20)] = 292,
  [SMALL_STATE(21)] = 301,
  [SMALL_STATE(22)] = 310,
  [SMALL_STATE(23)] = 319,
  [SMALL_STATE(24)] = 328,
  [SMALL_STATE(25)] = 337,
  [SMALL_STATE(26)] = 346,
  [SMALL_STATE(27)] = 356,
  [SMALL_STATE(28)] = 366,
  [SMALL_STATE(29)] = 376,
  [SMALL_STATE(30)] = 384,
  [SMALL_STATE(31)] = 394,
  [SMALL_STATE(32)] = 404,
  [SMALL_STATE(33)] = 409,
  [SMALL_STATE(34)] = 414,
  [SMALL_STATE(35)] = 419,
  [SMALL_STATE(36)] = 424,
  [SMALL_STATE(37)] = 429,
  [SMALL_STATE(38)] = 434,
  [SMALL_STATE(39)] = 439,
  [SMALL_STATE(40)] = 443,
  [SMALL_STATE(41)] = 447,
  [SMALL_STATE(42)] = 451,
  [SMALL_STATE(43)] = 455,
  [SMALL_STATE(44)] = 459,
  [SMALL_STATE(45)] = 463,
  [SMALL_STATE(46)] = 467,
  [SMALL_STATE(47)] = 471,
  [SMALL_STATE(48)] = 475,
  [SMALL_STATE(49)] = 479,
  [SMALL_STATE(50)] = 483,
  [SMALL_STATE(51)] = 487,
  [SMALL_STATE(52)] = 491,
  [SMALL_STATE(53)] = 495,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(39),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(51),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(32),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(42),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(41),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_cmd_internal_repeat1, 2),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cmd_internal_repeat1, 2), SHIFT_REPEAT(8),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_cmd_internal_repeat1, 2), SHIFT_REPEAT(7),
  [42] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [44] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [46] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [48] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_boolean_literal, 1),
  [52] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_arg, 1),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [58] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [60] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_arg, 2),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_task_definition_repeat1, 2),
  [66] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_definition_repeat1, 2), SHIFT_REPEAT(31),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [71] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [77] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmddef_definition, 5, .production_id = 5),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmddef_definition, 4, .production_id = 5),
  [81] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pragma_definition, 3, .production_id = 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_namespace_definition, 2, .production_id = 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_link_definition, 2, .production_id = 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_definition, 4, .production_id = 4),
  [89] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_definition, 5, .production_id = 8),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_definition, 6, .production_id = 8),
  [93] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_definition, 5, .production_id = 4),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_task_deps_repeat1, 2, .production_id = 10),
  [105] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_task_deps_repeat1, 2, .production_id = 10), SHIFT_REPEAT(29),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_task_deps_repeat1, 1, .production_id = 7),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_task_deps_repeat1, 2, .production_id = 7),
  [124] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_local, 2, .production_id = 6),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_internal, 4, .production_id = 6),
  [128] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_internal, 5, .production_id = 6),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_call, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_cmd_external, 4, .production_id = 11),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [136] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_deps, 4, .production_id = 9),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_task_deps, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
