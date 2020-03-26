#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 149
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 59
#define ALIAS_COUNT 0
#define TOKEN_COUNT 34
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9

enum {
  anon_sym_from = 1,
  anon_sym_DOT = 2,
  anon_sym_DOT_DOT_SLASH = 3,
  anon_sym_import = 4,
  anon_sym_COMMA = 5,
  anon_sym_abstract = 6,
  anon_sym_node = 7,
  anon_sym_extends = 8,
  anon_sym_LBRACE = 9,
  anon_sym_RBRACE = 10,
  anon_sym_LPAREN = 11,
  anon_sym_RPAREN = 12,
  anon_sym_BANG = 13,
  anon_sym_LBRACK_RBRACK = 14,
  anon_sym_DASH_GT = 15,
  anon_sym_PIPE = 16,
  anon_sym_type = 17,
  anon_sym_EQ = 18,
  anon_sym_function = 19,
  anon_sym_COLON = 20,
  anon_sym_EQ_GT = 21,
  anon_sym_enum = 22,
  anon_sym_const = 23,
  anon_sym_morph = 24,
  anon_sym_new = 25,
  anon_sym_if = 26,
  sym_identifier = 27,
  sym_decorator_identifier = 28,
  sym_expression = 29,
  anon_sym_e1 = 30,
  anon_sym_e2 = 31,
  anon_sym_e1_COLONt1 = 32,
  anon_sym_e2_COLONt2 = 33,
  sym_program = 34,
  sym_block = 35,
  sym_import = 36,
  sym_node = 37,
  sym_decorator = 38,
  sym_decorator_args = 39,
  sym_node_edge = 40,
  sym_types = 41,
  sym_function_definition = 42,
  sym_enum_definition = 43,
  sym_constant_declaration = 44,
  sym_morph_declaration = 45,
  sym_morph_mutation = 46,
  sym_if_function = 47,
  sym_expression_list = 48,
  sym_typed_args = 49,
  aux_sym_program_repeat1 = 50,
  aux_sym_block_repeat1 = 51,
  aux_sym_import_repeat1 = 52,
  aux_sym_import_repeat2 = 53,
  aux_sym_node_repeat1 = 54,
  aux_sym_node_repeat2 = 55,
  aux_sym_types_repeat1 = 56,
  aux_sym_enum_definition_repeat1 = 57,
  aux_sym_morph_declaration_repeat1 = 58,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_from] = "from",
  [anon_sym_DOT] = ".",
  [anon_sym_DOT_DOT_SLASH] = "../",
  [anon_sym_import] = "import",
  [anon_sym_COMMA] = ",",
  [anon_sym_abstract] = "abstract",
  [anon_sym_node] = "node",
  [anon_sym_extends] = "extends",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_BANG] = "!",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_PIPE] = "|",
  [anon_sym_type] = "type",
  [anon_sym_EQ] = "=",
  [anon_sym_function] = "function",
  [anon_sym_COLON] = ":",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_enum] = "enum",
  [anon_sym_const] = "const",
  [anon_sym_morph] = "morph",
  [anon_sym_new] = "new",
  [anon_sym_if] = "if",
  [sym_identifier] = "identifier",
  [sym_decorator_identifier] = "decorator_identifier",
  [sym_expression] = "expression",
  [anon_sym_e1] = "e1",
  [anon_sym_e2] = "e2",
  [anon_sym_e1_COLONt1] = "e1: t1",
  [anon_sym_e2_COLONt2] = "e2: t2",
  [sym_program] = "program",
  [sym_block] = "block",
  [sym_import] = "import",
  [sym_node] = "node",
  [sym_decorator] = "decorator",
  [sym_decorator_args] = "decorator_args",
  [sym_node_edge] = "node_edge",
  [sym_types] = "types",
  [sym_function_definition] = "function_definition",
  [sym_enum_definition] = "enum_definition",
  [sym_constant_declaration] = "constant_declaration",
  [sym_morph_declaration] = "morph_declaration",
  [sym_morph_mutation] = "morph_mutation",
  [sym_if_function] = "if_function",
  [sym_expression_list] = "expression_list",
  [sym_typed_args] = "typed_args",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_block_repeat1] = "block_repeat1",
  [aux_sym_import_repeat1] = "import_repeat1",
  [aux_sym_import_repeat2] = "import_repeat2",
  [aux_sym_node_repeat1] = "node_repeat1",
  [aux_sym_node_repeat2] = "node_repeat2",
  [aux_sym_types_repeat1] = "types_repeat1",
  [aux_sym_enum_definition_repeat1] = "enum_definition_repeat1",
  [aux_sym_morph_declaration_repeat1] = "morph_declaration_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DOT_DOT_SLASH] = anon_sym_DOT_DOT_SLASH,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_node] = anon_sym_node,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_type] = anon_sym_type,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_function] = anon_sym_function,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_morph] = anon_sym_morph,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_if] = anon_sym_if,
  [sym_identifier] = sym_identifier,
  [sym_decorator_identifier] = sym_decorator_identifier,
  [sym_expression] = sym_expression,
  [anon_sym_e1] = anon_sym_e1,
  [anon_sym_e2] = anon_sym_e2,
  [anon_sym_e1_COLONt1] = anon_sym_e1_COLONt1,
  [anon_sym_e2_COLONt2] = anon_sym_e2_COLONt2,
  [sym_program] = sym_program,
  [sym_block] = sym_block,
  [sym_import] = sym_import,
  [sym_node] = sym_node,
  [sym_decorator] = sym_decorator,
  [sym_decorator_args] = sym_decorator_args,
  [sym_node_edge] = sym_node_edge,
  [sym_types] = sym_types,
  [sym_function_definition] = sym_function_definition,
  [sym_enum_definition] = sym_enum_definition,
  [sym_constant_declaration] = sym_constant_declaration,
  [sym_morph_declaration] = sym_morph_declaration,
  [sym_morph_mutation] = sym_morph_mutation,
  [sym_if_function] = sym_if_function,
  [sym_expression_list] = sym_expression_list,
  [sym_typed_args] = sym_typed_args,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_block_repeat1] = aux_sym_block_repeat1,
  [aux_sym_import_repeat1] = aux_sym_import_repeat1,
  [aux_sym_import_repeat2] = aux_sym_import_repeat2,
  [aux_sym_node_repeat1] = aux_sym_node_repeat1,
  [aux_sym_node_repeat2] = aux_sym_node_repeat2,
  [aux_sym_types_repeat1] = aux_sym_types_repeat1,
  [aux_sym_enum_definition_repeat1] = aux_sym_enum_definition_repeat1,
  [aux_sym_morph_declaration_repeat1] = aux_sym_morph_declaration_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_from] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT_DOT_SLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_import] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_node] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_extends] = {
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
  [anon_sym_LPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RPAREN] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_function] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_enum] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_const] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_morph] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_if] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_decorator_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_expression] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_e1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e2] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e1_COLONt1] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_e2_COLONt2] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_import] = {
    .visible = true,
    .named = true,
  },
  [sym_node] = {
    .visible = true,
    .named = true,
  },
  [sym_decorator] = {
    .visible = true,
    .named = true,
  },
  [sym_decorator_args] = {
    .visible = true,
    .named = true,
  },
  [sym_node_edge] = {
    .visible = true,
    .named = true,
  },
  [sym_types] = {
    .visible = true,
    .named = true,
  },
  [sym_function_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_enum_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_constant_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_morph_declaration] = {
    .visible = true,
    .named = true,
  },
  [sym_morph_mutation] = {
    .visible = true,
    .named = true,
  },
  [sym_if_function] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_list] = {
    .visible = true,
    .named = true,
  },
  [sym_typed_args] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_import_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_node_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_node_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_types_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_enum_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_morph_declaration_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static TSSymbol ts_alias_sequences[1][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(69);
      if (lookahead == '!') ADVANCE(82);
      if (lookahead == '(') ADVANCE(80);
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ',') ADVANCE(74);
      if (lookahead == '-') ADVANCE(13);
      if (lookahead == '.') ADVANCE(71);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '=') ADVANCE(88);
      if (lookahead == '@') ADVANCE(21);
      if (lookahead == '[') ADVANCE(15);
      if (lookahead == 'a') ADVANCE(17);
      if (lookahead == 'c') ADVANCE(40);
      if (lookahead == 'e') ADVANCE(5);
      if (lookahead == 'f') ADVANCE(52);
      if (lookahead == 'i') ADVANCE(22);
      if (lookahead == 'm') ADVANCE(41);
      if (lookahead == 'n') ADVANCE(25);
      if (lookahead == 't') ADVANCE(68);
      if (lookahead == '{') ADVANCE(78);
      if (lookahead == '|') ADVANCE(85);
      if (lookahead == '}') ADVANCE(79);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      END_STATE();
    case 1:
      if (lookahead == ' ') ADVANCE(59);
      END_STATE();
    case 2:
      if (lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 3:
      if (lookahead == ')') ADVANCE(81);
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '=') ADVANCE(87);
      if (lookahead == 'e') ADVANCE(7);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '/') ADVANCE(72);
      END_STATE();
    case 5:
      if (lookahead == '1') ADVANCE(101);
      if (lookahead == '2') ADVANCE(103);
      if (lookahead == 'n') ADVANCE(66);
      if (lookahead == 'x') ADVANCE(47);
      END_STATE();
    case 6:
      if (lookahead == '1') ADVANCE(104);
      END_STATE();
    case 7:
      if (lookahead == '1') ADVANCE(100);
      if (lookahead == '2') ADVANCE(12);
      END_STATE();
    case 8:
      if (lookahead == '1') ADVANCE(11);
      if (lookahead == '2') ADVANCE(102);
      END_STATE();
    case 9:
      if (lookahead == '2') ADVANCE(105);
      END_STATE();
    case 10:
      if (lookahead == ':') ADVANCE(90);
      if (lookahead == '=') ADVANCE(14);
      if (lookahead == 'e') ADVANCE(8);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(10)
      END_STATE();
    case 11:
      if (lookahead == ':') ADVANCE(1);
      END_STATE();
    case 12:
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 13:
      if (lookahead == '>') ADVANCE(84);
      END_STATE();
    case 14:
      if (lookahead == '>') ADVANCE(91);
      END_STATE();
    case 15:
      if (lookahead == ']') ADVANCE(83);
      END_STATE();
    case 16:
      if (lookahead == 'a') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == 'b') ADVANCE(55);
      END_STATE();
    case 18:
      if (lookahead == 'c') ADVANCE(42);
      END_STATE();
    case 19:
      if (lookahead == 'c') ADVANCE(61);
      END_STATE();
    case 20:
      if (lookahead == 'c') ADVANCE(64);
      END_STATE();
    case 21:
      if (lookahead == 'd') ADVANCE(26);
      END_STATE();
    case 22:
      if (lookahead == 'd') ADVANCE(29);
      if (lookahead == 'f') ADVANCE(96);
      if (lookahead == 'm') ADVANCE(48);
      END_STATE();
    case 23:
      if (lookahead == 'd') ADVANCE(56);
      END_STATE();
    case 24:
      if (lookahead == 'd') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 'e') ADVANCE(67);
      if (lookahead == 'o') ADVANCE(24);
      END_STATE();
    case 26:
      if (lookahead == 'e') ADVANCE(18);
      END_STATE();
    case 27:
      if (lookahead == 'e') ADVANCE(76);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(86);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 31:
      if (lookahead == 'h') ADVANCE(94);
      END_STATE();
    case 32:
      if (lookahead == 'i') ADVANCE(45);
      END_STATE();
    case 33:
      if (lookahead == 'm') ADVANCE(92);
      END_STATE();
    case 34:
      if (lookahead == 'm') ADVANCE(70);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(89);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(23);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(19);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(57);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(39);
      END_STATE();
    case 41:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 42:
      if (lookahead == 'o') ADVANCE(98);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 46:
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 47:
      if (lookahead == 'p') ADVANCE(50);
      if (lookahead == 't') ADVANCE(30);
      END_STATE();
    case 48:
      if (lookahead == 'p') ADVANCE(44);
      END_STATE();
    case 49:
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 50:
      if (lookahead == 'r') ADVANCE(99);
      END_STATE();
    case 51:
      if (lookahead == 'r') ADVANCE(16);
      END_STATE();
    case 52:
      if (lookahead == 'r') ADVANCE(43);
      if (lookahead == 'u') ADVANCE(37);
      END_STATE();
    case 53:
      if (lookahead == 'r') ADVANCE(46);
      END_STATE();
    case 54:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 55:
      if (lookahead == 's') ADVANCE(65);
      END_STATE();
    case 56:
      if (lookahead == 's') ADVANCE(77);
      END_STATE();
    case 57:
      if (lookahead == 's') ADVANCE(58);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 59:
      if (lookahead == 't') ADVANCE(6);
      END_STATE();
    case 60:
      if (lookahead == 't') ADVANCE(9);
      END_STATE();
    case 61:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 62:
      if (lookahead == 't') ADVANCE(97);
      END_STATE();
    case 63:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 64:
      if (lookahead == 't') ADVANCE(75);
      END_STATE();
    case 65:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 66:
      if (lookahead == 'u') ADVANCE(33);
      END_STATE();
    case 67:
      if (lookahead == 'w') ADVANCE(95);
      END_STATE();
    case 68:
      if (lookahead == 'y') ADVANCE(49);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '.') ADVANCE(4);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_DOT_DOT_SLASH);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_node);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(91);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_function);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_morph);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_if);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(sym_identifier);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(sym_decorator_identifier);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(sym_expression);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_e1);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(anon_sym_e1);
      if (lookahead == ':') ADVANCE(1);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_e2);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(anon_sym_e2);
      if (lookahead == ':') ADVANCE(2);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(anon_sym_e1_COLONt1);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_e2_COLONt2);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
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
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 3},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 10},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 10},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 3},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 0},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 0},
  [113] = {.lex_state = 0},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 10},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 10},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 10},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 0},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 0},
  [139] = {.lex_state = 0},
  [140] = {.lex_state = 0},
  [141] = {.lex_state = 0},
  [142] = {.lex_state = 3},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 0},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 0},
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOT_DOT_SLASH] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_node] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_LBRACK_RBRACK] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_function] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_morph] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_if] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [sym_decorator_identifier] = ACTIONS(1),
    [sym_expression] = ACTIONS(1),
    [anon_sym_e1] = ACTIONS(1),
    [anon_sym_e2] = ACTIONS(1),
    [anon_sym_e1_COLONt1] = ACTIONS(1),
    [anon_sym_e2_COLONt2] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(127),
    [sym_block] = STATE(2),
    [sym_import] = STATE(4),
    [sym_node] = STATE(14),
    [sym_decorator] = STATE(49),
    [sym_function_definition] = STATE(14),
    [sym_enum_definition] = STATE(14),
    [sym_constant_declaration] = STATE(14),
    [sym_morph_declaration] = STATE(14),
    [sym_if_function] = STATE(14),
    [aux_sym_program_repeat1] = STATE(2),
    [aux_sym_block_repeat1] = STATE(4),
    [aux_sym_node_repeat1] = STATE(49),
    [ts_builtin_sym_end] = ACTIONS(3),
    [anon_sym_from] = ACTIONS(5),
    [anon_sym_abstract] = ACTIONS(7),
    [anon_sym_node] = ACTIONS(9),
    [anon_sym_function] = ACTIONS(11),
    [anon_sym_enum] = ACTIONS(13),
    [anon_sym_const] = ACTIONS(15),
    [anon_sym_morph] = ACTIONS(17),
    [anon_sym_if] = ACTIONS(19),
    [sym_decorator_identifier] = ACTIONS(21),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(5), 1,
      anon_sym_from,
    ACTIONS(7), 1,
      anon_sym_abstract,
    ACTIONS(9), 1,
      anon_sym_node,
    ACTIONS(11), 1,
      anon_sym_function,
    ACTIONS(13), 1,
      anon_sym_enum,
    ACTIONS(15), 1,
      anon_sym_const,
    ACTIONS(17), 1,
      anon_sym_morph,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      sym_decorator_identifier,
    ACTIONS(23), 1,
      ts_builtin_sym_end,
    STATE(3), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(4), 2,
      sym_import,
      aux_sym_block_repeat1,
    STATE(49), 2,
      sym_decorator,
      aux_sym_node_repeat1,
    STATE(14), 6,
      sym_node,
      sym_function_definition,
      sym_enum_definition,
      sym_constant_declaration,
      sym_morph_declaration,
      sym_if_function,
  [51] = 14,
    ACTIONS(25), 1,
      ts_builtin_sym_end,
    ACTIONS(27), 1,
      anon_sym_from,
    ACTIONS(30), 1,
      anon_sym_abstract,
    ACTIONS(33), 1,
      anon_sym_node,
    ACTIONS(36), 1,
      anon_sym_function,
    ACTIONS(39), 1,
      anon_sym_enum,
    ACTIONS(42), 1,
      anon_sym_const,
    ACTIONS(45), 1,
      anon_sym_morph,
    ACTIONS(48), 1,
      anon_sym_if,
    ACTIONS(51), 1,
      sym_decorator_identifier,
    STATE(3), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(4), 2,
      sym_import,
      aux_sym_block_repeat1,
    STATE(49), 2,
      sym_decorator,
      aux_sym_node_repeat1,
    STATE(14), 6,
      sym_node,
      sym_function_definition,
      sym_enum_definition,
      sym_constant_declaration,
      sym_morph_declaration,
      sym_if_function,
  [102] = 12,
    ACTIONS(5), 1,
      anon_sym_from,
    ACTIONS(7), 1,
      anon_sym_abstract,
    ACTIONS(9), 1,
      anon_sym_node,
    ACTIONS(11), 1,
      anon_sym_function,
    ACTIONS(13), 1,
      anon_sym_enum,
    ACTIONS(15), 1,
      anon_sym_const,
    ACTIONS(17), 1,
      anon_sym_morph,
    ACTIONS(19), 1,
      anon_sym_if,
    ACTIONS(21), 1,
      sym_decorator_identifier,
    STATE(9), 2,
      sym_import,
      aux_sym_block_repeat1,
    STATE(49), 2,
      sym_decorator,
      aux_sym_node_repeat1,
    STATE(29), 6,
      sym_node,
      sym_function_definition,
      sym_enum_definition,
      sym_constant_declaration,
      sym_morph_declaration,
      sym_if_function,
  [146] = 3,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    STATE(6), 1,
      aux_sym_import_repeat2,
    ACTIONS(54), 9,
      anon_sym_from,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_function,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_morph,
      anon_sym_if,
      sym_decorator_identifier,
  [164] = 3,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    STATE(6), 1,
      aux_sym_import_repeat2,
    ACTIONS(58), 9,
      anon_sym_from,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_function,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_morph,
      anon_sym_if,
      sym_decorator_identifier,
  [182] = 3,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    STATE(5), 1,
      aux_sym_import_repeat2,
    ACTIONS(63), 9,
      anon_sym_from,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_function,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_morph,
      anon_sym_if,
      sym_decorator_identifier,
  [200] = 3,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    STATE(6), 1,
      aux_sym_import_repeat2,
    ACTIONS(63), 9,
      anon_sym_from,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_function,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_morph,
      anon_sym_if,
      sym_decorator_identifier,
  [218] = 3,
    ACTIONS(65), 1,
      anon_sym_from,
    STATE(9), 2,
      sym_import,
      aux_sym_block_repeat1,
    ACTIONS(68), 8,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_function,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_morph,
      anon_sym_if,
      sym_decorator_identifier,
  [236] = 3,
    ACTIONS(56), 1,
      anon_sym_COMMA,
    STATE(8), 1,
      aux_sym_import_repeat2,
    ACTIONS(70), 9,
      anon_sym_from,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_function,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_morph,
      anon_sym_if,
      sym_decorator_identifier,
  [254] = 1,
    ACTIONS(72), 10,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_function,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_morph,
      anon_sym_if,
      sym_decorator_identifier,
  [267] = 1,
    ACTIONS(74), 10,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_function,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_morph,
      anon_sym_if,
      sym_decorator_identifier,
  [280] = 1,
    ACTIONS(76), 10,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_function,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_morph,
      anon_sym_if,
      sym_decorator_identifier,
  [293] = 1,
    ACTIONS(78), 10,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_function,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_morph,
      anon_sym_if,
      sym_decorator_identifier,
  [306] = 1,
    ACTIONS(80), 10,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_function,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_morph,
      anon_sym_if,
      sym_decorator_identifier,
  [319] = 1,
    ACTIONS(82), 10,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_function,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_morph,
      anon_sym_if,
      sym_decorator_identifier,
  [332] = 1,
    ACTIONS(84), 10,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_function,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_morph,
      anon_sym_if,
      sym_decorator_identifier,
  [345] = 1,
    ACTIONS(86), 10,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_function,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_morph,
      anon_sym_if,
      sym_decorator_identifier,
  [358] = 1,
    ACTIONS(88), 10,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_function,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_morph,
      anon_sym_if,
      sym_decorator_identifier,
  [371] = 1,
    ACTIONS(90), 10,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_function,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_morph,
      anon_sym_if,
      sym_decorator_identifier,
  [384] = 1,
    ACTIONS(92), 10,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_function,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_morph,
      anon_sym_if,
      sym_decorator_identifier,
  [397] = 1,
    ACTIONS(94), 10,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_function,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_morph,
      anon_sym_if,
      sym_decorator_identifier,
  [410] = 1,
    ACTIONS(96), 10,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_function,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_morph,
      anon_sym_if,
      sym_decorator_identifier,
  [423] = 1,
    ACTIONS(98), 10,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_function,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_morph,
      anon_sym_if,
      sym_decorator_identifier,
  [436] = 1,
    ACTIONS(100), 10,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_function,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_morph,
      anon_sym_if,
      sym_decorator_identifier,
  [449] = 1,
    ACTIONS(58), 10,
      anon_sym_from,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_function,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_morph,
      anon_sym_if,
      sym_decorator_identifier,
  [462] = 1,
    ACTIONS(102), 10,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_function,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_morph,
      anon_sym_if,
      sym_decorator_identifier,
  [475] = 1,
    ACTIONS(104), 10,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_function,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_morph,
      anon_sym_if,
      sym_decorator_identifier,
  [488] = 1,
    ACTIONS(106), 10,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_function,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_morph,
      anon_sym_if,
      sym_decorator_identifier,
  [501] = 6,
    ACTIONS(21), 1,
      sym_decorator_identifier,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 1,
      anon_sym_new,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(31), 2,
      sym_morph_mutation,
      aux_sym_morph_declaration_repeat1,
    STATE(52), 2,
      sym_decorator,
      aux_sym_node_repeat1,
  [522] = 6,
    ACTIONS(21), 1,
      sym_decorator_identifier,
    ACTIONS(110), 1,
      anon_sym_new,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(114), 1,
      anon_sym_RBRACE,
    STATE(35), 2,
      sym_morph_mutation,
      aux_sym_morph_declaration_repeat1,
    STATE(52), 2,
      sym_decorator,
      aux_sym_node_repeat1,
  [543] = 3,
    ACTIONS(118), 1,
      anon_sym_LPAREN,
    STATE(51), 1,
      sym_decorator_args,
    ACTIONS(116), 6,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_new,
      sym_identifier,
      sym_decorator_identifier,
  [558] = 3,
    ACTIONS(122), 1,
      sym_decorator_identifier,
    STATE(33), 2,
      sym_decorator,
      aux_sym_node_repeat1,
    ACTIONS(120), 5,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_new,
      sym_identifier,
  [573] = 6,
    ACTIONS(21), 1,
      sym_decorator_identifier,
    ACTIONS(110), 1,
      anon_sym_new,
    ACTIONS(112), 1,
      sym_identifier,
    ACTIONS(125), 1,
      anon_sym_RBRACE,
    STATE(36), 2,
      sym_morph_mutation,
      aux_sym_morph_declaration_repeat1,
    STATE(52), 2,
      sym_decorator,
      aux_sym_node_repeat1,
  [594] = 6,
    ACTIONS(127), 1,
      anon_sym_RBRACE,
    ACTIONS(129), 1,
      anon_sym_new,
    ACTIONS(132), 1,
      sym_identifier,
    ACTIONS(135), 1,
      sym_decorator_identifier,
    STATE(35), 2,
      sym_morph_mutation,
      aux_sym_morph_declaration_repeat1,
    STATE(52), 2,
      sym_decorator,
      aux_sym_node_repeat1,
  [615] = 6,
    ACTIONS(21), 1,
      sym_decorator_identifier,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    ACTIONS(110), 1,
      anon_sym_new,
    ACTIONS(112), 1,
      sym_identifier,
    STATE(35), 2,
      sym_morph_mutation,
      aux_sym_morph_declaration_repeat1,
    STATE(52), 2,
      sym_decorator,
      aux_sym_node_repeat1,
  [636] = 5,
    ACTIONS(21), 1,
      sym_decorator_identifier,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    ACTIONS(140), 1,
      sym_identifier,
    STATE(39), 2,
      sym_node_edge,
      aux_sym_node_repeat2,
    STATE(61), 2,
      sym_decorator,
      aux_sym_node_repeat1,
  [654] = 5,
    ACTIONS(21), 1,
      sym_decorator_identifier,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    STATE(39), 2,
      sym_node_edge,
      aux_sym_node_repeat2,
    STATE(61), 2,
      sym_decorator,
      aux_sym_node_repeat1,
  [672] = 5,
    ACTIONS(144), 1,
      anon_sym_RBRACE,
    ACTIONS(146), 1,
      sym_identifier,
    ACTIONS(149), 1,
      sym_decorator_identifier,
    STATE(39), 2,
      sym_node_edge,
      aux_sym_node_repeat2,
    STATE(61), 2,
      sym_decorator,
      aux_sym_node_repeat1,
  [690] = 5,
    ACTIONS(21), 1,
      sym_decorator_identifier,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(38), 2,
      sym_node_edge,
      aux_sym_node_repeat2,
    STATE(61), 2,
      sym_decorator,
      aux_sym_node_repeat1,
  [708] = 5,
    ACTIONS(21), 1,
      sym_decorator_identifier,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(142), 1,
      anon_sym_RBRACE,
    STATE(47), 2,
      sym_node_edge,
      aux_sym_node_repeat2,
    STATE(61), 2,
      sym_decorator,
      aux_sym_node_repeat1,
  [726] = 5,
    ACTIONS(21), 1,
      sym_decorator_identifier,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(154), 1,
      anon_sym_RBRACE,
    STATE(39), 2,
      sym_node_edge,
      aux_sym_node_repeat2,
    STATE(61), 2,
      sym_decorator,
      aux_sym_node_repeat1,
  [744] = 5,
    ACTIONS(21), 1,
      sym_decorator_identifier,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(152), 1,
      anon_sym_RBRACE,
    STATE(39), 2,
      sym_node_edge,
      aux_sym_node_repeat2,
    STATE(61), 2,
      sym_decorator,
      aux_sym_node_repeat1,
  [762] = 5,
    ACTIONS(21), 1,
      sym_decorator_identifier,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(156), 1,
      anon_sym_RBRACE,
    STATE(43), 2,
      sym_node_edge,
      aux_sym_node_repeat2,
    STATE(61), 2,
      sym_decorator,
      aux_sym_node_repeat1,
  [780] = 5,
    ACTIONS(21), 1,
      sym_decorator_identifier,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(37), 2,
      sym_node_edge,
      aux_sym_node_repeat2,
    STATE(61), 2,
      sym_decorator,
      aux_sym_node_repeat1,
  [798] = 5,
    ACTIONS(21), 1,
      sym_decorator_identifier,
    ACTIONS(138), 1,
      anon_sym_RBRACE,
    ACTIONS(140), 1,
      sym_identifier,
    STATE(42), 2,
      sym_node_edge,
      aux_sym_node_repeat2,
    STATE(61), 2,
      sym_decorator,
      aux_sym_node_repeat1,
  [816] = 5,
    ACTIONS(21), 1,
      sym_decorator_identifier,
    ACTIONS(140), 1,
      sym_identifier,
    ACTIONS(158), 1,
      anon_sym_RBRACE,
    STATE(39), 2,
      sym_node_edge,
      aux_sym_node_repeat2,
    STATE(61), 2,
      sym_decorator,
      aux_sym_node_repeat1,
  [834] = 1,
    ACTIONS(160), 6,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_new,
      sym_identifier,
      sym_decorator_identifier,
  [843] = 5,
    ACTIONS(21), 1,
      sym_decorator_identifier,
    ACTIONS(162), 1,
      anon_sym_abstract,
    ACTIONS(164), 1,
      anon_sym_node,
    ACTIONS(166), 1,
      anon_sym_morph,
    STATE(33), 2,
      sym_decorator,
      aux_sym_node_repeat1,
  [860] = 1,
    ACTIONS(168), 6,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_new,
      sym_identifier,
      sym_decorator_identifier,
  [869] = 1,
    ACTIONS(170), 6,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_new,
      sym_identifier,
      sym_decorator_identifier,
  [878] = 4,
    ACTIONS(21), 1,
      sym_decorator_identifier,
    ACTIONS(172), 1,
      anon_sym_new,
    ACTIONS(174), 1,
      sym_identifier,
    STATE(33), 2,
      sym_decorator,
      aux_sym_node_repeat1,
  [892] = 3,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    STATE(55), 1,
      aux_sym_types_repeat1,
    ACTIONS(176), 3,
      anon_sym_RBRACE,
      sym_identifier,
      sym_decorator_identifier,
  [904] = 3,
    ACTIONS(178), 1,
      anon_sym_PIPE,
    STATE(53), 1,
      aux_sym_types_repeat1,
    ACTIONS(180), 3,
      anon_sym_RBRACE,
      sym_identifier,
      sym_decorator_identifier,
  [916] = 3,
    ACTIONS(184), 1,
      anon_sym_PIPE,
    STATE(55), 1,
      aux_sym_types_repeat1,
    ACTIONS(182), 3,
      anon_sym_RBRACE,
      sym_identifier,
      sym_decorator_identifier,
  [928] = 1,
    ACTIONS(182), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      sym_identifier,
      sym_decorator_identifier,
  [935] = 4,
    ACTIONS(187), 1,
      anon_sym_DOT,
    ACTIONS(189), 1,
      anon_sym_DOT_DOT_SLASH,
    ACTIONS(191), 1,
      sym_identifier,
    STATE(66), 1,
      aux_sym_import_repeat1,
  [948] = 1,
    ACTIONS(193), 4,
      anon_sym_RBRACE,
      anon_sym_new,
      sym_identifier,
      sym_decorator_identifier,
  [955] = 1,
    ACTIONS(195), 4,
      anon_sym_RBRACE,
      anon_sym_new,
      sym_identifier,
      sym_decorator_identifier,
  [962] = 1,
    ACTIONS(197), 4,
      anon_sym_RBRACE,
      anon_sym_new,
      sym_identifier,
      sym_decorator_identifier,
  [969] = 3,
    ACTIONS(21), 1,
      sym_decorator_identifier,
    ACTIONS(199), 1,
      sym_identifier,
    STATE(33), 2,
      sym_decorator,
      aux_sym_node_repeat1,
  [980] = 3,
    ACTIONS(201), 1,
      anon_sym_RBRACE,
    ACTIONS(203), 1,
      sym_identifier,
    STATE(62), 1,
      aux_sym_enum_definition_repeat1,
  [990] = 3,
    ACTIONS(206), 1,
      anon_sym_RBRACE,
    ACTIONS(208), 1,
      sym_identifier,
    STATE(69), 1,
      aux_sym_enum_definition_repeat1,
  [1000] = 3,
    ACTIONS(210), 1,
      anon_sym_DOT_DOT_SLASH,
    ACTIONS(213), 1,
      sym_identifier,
    STATE(64), 1,
      aux_sym_import_repeat1,
  [1010] = 1,
    ACTIONS(215), 3,
      anon_sym_RBRACE,
      sym_identifier,
      sym_decorator_identifier,
  [1016] = 3,
    ACTIONS(217), 1,
      anon_sym_DOT_DOT_SLASH,
    ACTIONS(219), 1,
      sym_identifier,
    STATE(64), 1,
      aux_sym_import_repeat1,
  [1026] = 1,
    ACTIONS(221), 3,
      anon_sym_RBRACE,
      sym_identifier,
      sym_decorator_identifier,
  [1032] = 2,
    ACTIONS(225), 1,
      anon_sym_DASH_GT,
    ACTIONS(223), 2,
      anon_sym_BANG,
      anon_sym_LBRACK_RBRACK,
  [1040] = 3,
    ACTIONS(227), 1,
      anon_sym_RBRACE,
    ACTIONS(229), 1,
      sym_identifier,
    STATE(62), 1,
      aux_sym_enum_definition_repeat1,
  [1050] = 2,
    ACTIONS(233), 1,
      anon_sym_DASH_GT,
    ACTIONS(231), 2,
      anon_sym_BANG,
      anon_sym_LBRACK_RBRACK,
  [1058] = 1,
    ACTIONS(235), 3,
      anon_sym_RBRACE,
      sym_identifier,
      sym_decorator_identifier,
  [1064] = 3,
    ACTIONS(237), 1,
      anon_sym_RPAREN,
    ACTIONS(239), 1,
      anon_sym_e1,
    STATE(98), 1,
      sym_expression_list,
  [1074] = 2,
    ACTIONS(241), 1,
      anon_sym_EQ,
    ACTIONS(243), 1,
      anon_sym_COLON,
  [1081] = 2,
    ACTIONS(245), 1,
      sym_identifier,
    STATE(71), 1,
      sym_types,
  [1088] = 2,
    ACTIONS(247), 1,
      anon_sym_extends,
    ACTIONS(249), 1,
      anon_sym_LBRACE,
  [1095] = 2,
    ACTIONS(251), 1,
      anon_sym_e1_COLONt1,
    STATE(109), 1,
      sym_typed_args,
  [1102] = 2,
    ACTIONS(245), 1,
      sym_identifier,
    STATE(65), 1,
      sym_types,
  [1109] = 2,
    ACTIONS(253), 1,
      anon_sym_extends,
    ACTIONS(255), 1,
      anon_sym_LBRACE,
  [1116] = 2,
    ACTIONS(245), 1,
      sym_identifier,
    STATE(67), 1,
      sym_types,
  [1123] = 2,
    ACTIONS(257), 1,
      anon_sym_extends,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
  [1130] = 2,
    ACTIONS(261), 1,
      anon_sym_COLON,
    ACTIONS(263), 1,
      anon_sym_EQ_GT,
  [1137] = 1,
    ACTIONS(265), 1,
      anon_sym_LBRACE,
  [1141] = 1,
    ACTIONS(267), 1,
      anon_sym_import,
  [1145] = 1,
    ACTIONS(269), 1,
      sym_expression,
  [1149] = 1,
    ACTIONS(271), 1,
      sym_identifier,
  [1153] = 1,
    ACTIONS(273), 1,
      anon_sym_LBRACE,
  [1157] = 1,
    ACTIONS(233), 1,
      anon_sym_DASH_GT,
  [1161] = 1,
    ACTIONS(275), 1,
      anon_sym_e2_COLONt2,
  [1165] = 1,
    ACTIONS(277), 1,
      sym_expression,
  [1169] = 1,
    ACTIONS(279), 1,
      anon_sym_LBRACE,
  [1173] = 1,
    ACTIONS(281), 1,
      sym_expression,
  [1177] = 1,
    ACTIONS(283), 1,
      anon_sym_RPAREN,
  [1181] = 1,
    ACTIONS(285), 1,
      sym_identifier,
  [1185] = 1,
    ACTIONS(287), 1,
      anon_sym_RPAREN,
  [1189] = 1,
    ACTIONS(289), 1,
      sym_identifier,
  [1193] = 1,
    ACTIONS(291), 1,
      anon_sym_RPAREN,
  [1197] = 1,
    ACTIONS(293), 1,
      sym_expression,
  [1201] = 1,
    ACTIONS(295), 1,
      anon_sym_RPAREN,
  [1205] = 1,
    ACTIONS(297), 1,
      anon_sym_COMMA,
  [1209] = 1,
    ACTIONS(299), 1,
      anon_sym_DASH_GT,
  [1213] = 1,
    ACTIONS(301), 1,
      anon_sym_RPAREN,
  [1217] = 1,
    ACTIONS(303), 1,
      sym_identifier,
  [1221] = 1,
    ACTIONS(305), 1,
      sym_expression,
  [1225] = 1,
    ACTIONS(307), 1,
      anon_sym_LPAREN,
  [1229] = 1,
    ACTIONS(309), 1,
      anon_sym_LPAREN,
  [1233] = 1,
    ACTIONS(311), 1,
      sym_identifier,
  [1237] = 1,
    ACTIONS(313), 1,
      anon_sym_COLON,
  [1241] = 1,
    ACTIONS(315), 1,
      anon_sym_LPAREN,
  [1245] = 1,
    ACTIONS(317), 1,
      anon_sym_RPAREN,
  [1249] = 1,
    ACTIONS(319), 1,
      anon_sym_LBRACE,
  [1253] = 1,
    ACTIONS(321), 1,
      anon_sym_LBRACE,
  [1257] = 1,
    ACTIONS(323), 1,
      sym_identifier,
  [1261] = 1,
    ACTIONS(325), 1,
      anon_sym_COMMA,
  [1265] = 1,
    ACTIONS(327), 1,
      anon_sym_node,
  [1269] = 1,
    ACTIONS(329), 1,
      anon_sym_e2,
  [1273] = 1,
    ACTIONS(331), 1,
      sym_identifier,
  [1277] = 1,
    ACTIONS(333), 1,
      anon_sym_EQ_GT,
  [1281] = 1,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
  [1285] = 1,
    ACTIONS(335), 1,
      anon_sym_import,
  [1289] = 1,
    ACTIONS(337), 1,
      anon_sym_EQ_GT,
  [1293] = 1,
    ACTIONS(219), 1,
      sym_identifier,
  [1297] = 1,
    ACTIONS(174), 1,
      sym_identifier,
  [1301] = 1,
    ACTIONS(339), 1,
      anon_sym_COLON,
  [1305] = 1,
    ACTIONS(341), 1,
      sym_expression,
  [1309] = 1,
    ACTIONS(343), 1,
      sym_identifier,
  [1313] = 1,
    ACTIONS(345), 1,
      sym_expression,
  [1317] = 1,
    ACTIONS(347), 1,
      ts_builtin_sym_end,
  [1321] = 1,
    ACTIONS(349), 1,
      anon_sym_LPAREN,
  [1325] = 1,
    ACTIONS(351), 1,
      sym_identifier,
  [1329] = 1,
    ACTIONS(353), 1,
      anon_sym_RPAREN,
  [1333] = 1,
    ACTIONS(355), 1,
      sym_identifier,
  [1337] = 1,
    ACTIONS(357), 1,
      sym_expression,
  [1341] = 1,
    ACTIONS(359), 1,
      anon_sym_COLON,
  [1345] = 1,
    ACTIONS(361), 1,
      sym_expression,
  [1349] = 1,
    ACTIONS(363), 1,
      sym_identifier,
  [1353] = 1,
    ACTIONS(365), 1,
      sym_identifier,
  [1357] = 1,
    ACTIONS(367), 1,
      sym_identifier,
  [1361] = 1,
    ACTIONS(369), 1,
      sym_identifier,
  [1365] = 1,
    ACTIONS(371), 1,
      sym_identifier,
  [1369] = 1,
    ACTIONS(373), 1,
      sym_identifier,
  [1373] = 1,
    ACTIONS(375), 1,
      sym_expression,
  [1377] = 1,
    ACTIONS(377), 1,
      anon_sym_EQ,
  [1381] = 1,
    ACTIONS(379), 1,
      anon_sym_COLON,
  [1385] = 1,
    ACTIONS(381), 1,
      sym_identifier,
  [1389] = 1,
    ACTIONS(164), 1,
      anon_sym_node,
  [1393] = 1,
    ACTIONS(383), 1,
      sym_identifier,
  [1397] = 1,
    ACTIONS(385), 1,
      sym_expression,
  [1401] = 1,
    ACTIONS(387), 1,
      sym_identifier,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 51,
  [SMALL_STATE(4)] = 102,
  [SMALL_STATE(5)] = 146,
  [SMALL_STATE(6)] = 164,
  [SMALL_STATE(7)] = 182,
  [SMALL_STATE(8)] = 200,
  [SMALL_STATE(9)] = 218,
  [SMALL_STATE(10)] = 236,
  [SMALL_STATE(11)] = 254,
  [SMALL_STATE(12)] = 267,
  [SMALL_STATE(13)] = 280,
  [SMALL_STATE(14)] = 293,
  [SMALL_STATE(15)] = 306,
  [SMALL_STATE(16)] = 319,
  [SMALL_STATE(17)] = 332,
  [SMALL_STATE(18)] = 345,
  [SMALL_STATE(19)] = 358,
  [SMALL_STATE(20)] = 371,
  [SMALL_STATE(21)] = 384,
  [SMALL_STATE(22)] = 397,
  [SMALL_STATE(23)] = 410,
  [SMALL_STATE(24)] = 423,
  [SMALL_STATE(25)] = 436,
  [SMALL_STATE(26)] = 449,
  [SMALL_STATE(27)] = 462,
  [SMALL_STATE(28)] = 475,
  [SMALL_STATE(29)] = 488,
  [SMALL_STATE(30)] = 501,
  [SMALL_STATE(31)] = 522,
  [SMALL_STATE(32)] = 543,
  [SMALL_STATE(33)] = 558,
  [SMALL_STATE(34)] = 573,
  [SMALL_STATE(35)] = 594,
  [SMALL_STATE(36)] = 615,
  [SMALL_STATE(37)] = 636,
  [SMALL_STATE(38)] = 654,
  [SMALL_STATE(39)] = 672,
  [SMALL_STATE(40)] = 690,
  [SMALL_STATE(41)] = 708,
  [SMALL_STATE(42)] = 726,
  [SMALL_STATE(43)] = 744,
  [SMALL_STATE(44)] = 762,
  [SMALL_STATE(45)] = 780,
  [SMALL_STATE(46)] = 798,
  [SMALL_STATE(47)] = 816,
  [SMALL_STATE(48)] = 834,
  [SMALL_STATE(49)] = 843,
  [SMALL_STATE(50)] = 860,
  [SMALL_STATE(51)] = 869,
  [SMALL_STATE(52)] = 878,
  [SMALL_STATE(53)] = 892,
  [SMALL_STATE(54)] = 904,
  [SMALL_STATE(55)] = 916,
  [SMALL_STATE(56)] = 928,
  [SMALL_STATE(57)] = 935,
  [SMALL_STATE(58)] = 948,
  [SMALL_STATE(59)] = 955,
  [SMALL_STATE(60)] = 962,
  [SMALL_STATE(61)] = 969,
  [SMALL_STATE(62)] = 980,
  [SMALL_STATE(63)] = 990,
  [SMALL_STATE(64)] = 1000,
  [SMALL_STATE(65)] = 1010,
  [SMALL_STATE(66)] = 1016,
  [SMALL_STATE(67)] = 1026,
  [SMALL_STATE(68)] = 1032,
  [SMALL_STATE(69)] = 1040,
  [SMALL_STATE(70)] = 1050,
  [SMALL_STATE(71)] = 1058,
  [SMALL_STATE(72)] = 1064,
  [SMALL_STATE(73)] = 1074,
  [SMALL_STATE(74)] = 1081,
  [SMALL_STATE(75)] = 1088,
  [SMALL_STATE(76)] = 1095,
  [SMALL_STATE(77)] = 1102,
  [SMALL_STATE(78)] = 1109,
  [SMALL_STATE(79)] = 1116,
  [SMALL_STATE(80)] = 1123,
  [SMALL_STATE(81)] = 1130,
  [SMALL_STATE(82)] = 1137,
  [SMALL_STATE(83)] = 1141,
  [SMALL_STATE(84)] = 1145,
  [SMALL_STATE(85)] = 1149,
  [SMALL_STATE(86)] = 1153,
  [SMALL_STATE(87)] = 1157,
  [SMALL_STATE(88)] = 1161,
  [SMALL_STATE(89)] = 1165,
  [SMALL_STATE(90)] = 1169,
  [SMALL_STATE(91)] = 1173,
  [SMALL_STATE(92)] = 1177,
  [SMALL_STATE(93)] = 1181,
  [SMALL_STATE(94)] = 1185,
  [SMALL_STATE(95)] = 1189,
  [SMALL_STATE(96)] = 1193,
  [SMALL_STATE(97)] = 1197,
  [SMALL_STATE(98)] = 1201,
  [SMALL_STATE(99)] = 1205,
  [SMALL_STATE(100)] = 1209,
  [SMALL_STATE(101)] = 1213,
  [SMALL_STATE(102)] = 1217,
  [SMALL_STATE(103)] = 1221,
  [SMALL_STATE(104)] = 1225,
  [SMALL_STATE(105)] = 1229,
  [SMALL_STATE(106)] = 1233,
  [SMALL_STATE(107)] = 1237,
  [SMALL_STATE(108)] = 1241,
  [SMALL_STATE(109)] = 1245,
  [SMALL_STATE(110)] = 1249,
  [SMALL_STATE(111)] = 1253,
  [SMALL_STATE(112)] = 1257,
  [SMALL_STATE(113)] = 1261,
  [SMALL_STATE(114)] = 1265,
  [SMALL_STATE(115)] = 1269,
  [SMALL_STATE(116)] = 1273,
  [SMALL_STATE(117)] = 1277,
  [SMALL_STATE(118)] = 1281,
  [SMALL_STATE(119)] = 1285,
  [SMALL_STATE(120)] = 1289,
  [SMALL_STATE(121)] = 1293,
  [SMALL_STATE(122)] = 1297,
  [SMALL_STATE(123)] = 1301,
  [SMALL_STATE(124)] = 1305,
  [SMALL_STATE(125)] = 1309,
  [SMALL_STATE(126)] = 1313,
  [SMALL_STATE(127)] = 1317,
  [SMALL_STATE(128)] = 1321,
  [SMALL_STATE(129)] = 1325,
  [SMALL_STATE(130)] = 1329,
  [SMALL_STATE(131)] = 1333,
  [SMALL_STATE(132)] = 1337,
  [SMALL_STATE(133)] = 1341,
  [SMALL_STATE(134)] = 1345,
  [SMALL_STATE(135)] = 1349,
  [SMALL_STATE(136)] = 1353,
  [SMALL_STATE(137)] = 1357,
  [SMALL_STATE(138)] = 1361,
  [SMALL_STATE(139)] = 1365,
  [SMALL_STATE(140)] = 1369,
  [SMALL_STATE(141)] = 1373,
  [SMALL_STATE(142)] = 1377,
  [SMALL_STATE(143)] = 1381,
  [SMALL_STATE(144)] = 1385,
  [SMALL_STATE(145)] = 1389,
  [SMALL_STATE(146)] = 1393,
  [SMALL_STATE(147)] = 1397,
  [SMALL_STATE(148)] = 1401,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [5] = {.count = 1, .reusable = true}, SHIFT(57),
  [7] = {.count = 1, .reusable = true}, SHIFT(145),
  [9] = {.count = 1, .reusable = true}, SHIFT(144),
  [11] = {.count = 1, .reusable = true}, SHIFT(140),
  [13] = {.count = 1, .reusable = true}, SHIFT(139),
  [15] = {.count = 1, .reusable = true}, SHIFT(137),
  [17] = {.count = 1, .reusable = true}, SHIFT(136),
  [19] = {.count = 1, .reusable = true}, SHIFT(128),
  [21] = {.count = 1, .reusable = true}, SHIFT(32),
  [23] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [25] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [27] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(57),
  [30] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(145),
  [33] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(144),
  [36] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(140),
  [39] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(139),
  [42] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(137),
  [45] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(136),
  [48] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(128),
  [51] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(32),
  [54] = {.count = 1, .reusable = true}, REDUCE(sym_import, 6),
  [56] = {.count = 1, .reusable = true}, SHIFT(85),
  [58] = {.count = 1, .reusable = true}, REDUCE(aux_sym_import_repeat2, 2),
  [60] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_repeat2, 2), SHIFT_REPEAT(85),
  [63] = {.count = 1, .reusable = true}, REDUCE(sym_import, 5),
  [65] = {.count = 2, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2), SHIFT_REPEAT(57),
  [68] = {.count = 1, .reusable = true}, REDUCE(aux_sym_block_repeat1, 2),
  [70] = {.count = 1, .reusable = true}, REDUCE(sym_import, 4),
  [72] = {.count = 1, .reusable = true}, REDUCE(sym_if_function, 6),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym_node, 6),
  [76] = {.count = 1, .reusable = true}, REDUCE(sym_node, 4),
  [78] = {.count = 1, .reusable = true}, REDUCE(sym_block, 1),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym_morph_declaration, 7),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 7),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 7),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym_morph_declaration, 9),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym_node, 7),
  [90] = {.count = 1, .reusable = true}, REDUCE(sym_function_definition, 9),
  [92] = {.count = 1, .reusable = true}, REDUCE(sym_morph_declaration, 8),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_constant_declaration, 6),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_enum_definition, 6),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_constant_declaration, 4),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_node, 5),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_node, 8),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_node, 9),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_block, 2),
  [108] = {.count = 1, .reusable = true}, SHIFT(21),
  [110] = {.count = 1, .reusable = true}, SHIFT(122),
  [112] = {.count = 1, .reusable = true}, SHIFT(123),
  [114] = {.count = 1, .reusable = true}, SHIFT(18),
  [116] = {.count = 1, .reusable = true}, REDUCE(sym_decorator, 1),
  [118] = {.count = 1, .reusable = true}, SHIFT(72),
  [120] = {.count = 1, .reusable = true}, REDUCE(aux_sym_node_repeat1, 2),
  [122] = {.count = 2, .reusable = true}, REDUCE(aux_sym_node_repeat1, 2), SHIFT_REPEAT(32),
  [125] = {.count = 1, .reusable = true}, SHIFT(15),
  [127] = {.count = 1, .reusable = true}, REDUCE(aux_sym_morph_declaration_repeat1, 2),
  [129] = {.count = 2, .reusable = true}, REDUCE(aux_sym_morph_declaration_repeat1, 2), SHIFT_REPEAT(122),
  [132] = {.count = 2, .reusable = true}, REDUCE(aux_sym_morph_declaration_repeat1, 2), SHIFT_REPEAT(123),
  [135] = {.count = 2, .reusable = true}, REDUCE(aux_sym_morph_declaration_repeat1, 2), SHIFT_REPEAT(32),
  [138] = {.count = 1, .reusable = true}, SHIFT(27),
  [140] = {.count = 1, .reusable = true}, SHIFT(68),
  [142] = {.count = 1, .reusable = true}, SHIFT(12),
  [144] = {.count = 1, .reusable = true}, REDUCE(aux_sym_node_repeat2, 2),
  [146] = {.count = 2, .reusable = true}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(68),
  [149] = {.count = 2, .reusable = true}, REDUCE(aux_sym_node_repeat2, 2), SHIFT_REPEAT(32),
  [152] = {.count = 1, .reusable = true}, SHIFT(25),
  [154] = {.count = 1, .reusable = true}, SHIFT(28),
  [156] = {.count = 1, .reusable = true}, SHIFT(13),
  [158] = {.count = 1, .reusable = true}, SHIFT(19),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym_decorator_args, 2),
  [162] = {.count = 1, .reusable = true}, SHIFT(114),
  [164] = {.count = 1, .reusable = true}, SHIFT(112),
  [166] = {.count = 1, .reusable = true}, SHIFT(116),
  [168] = {.count = 1, .reusable = true}, REDUCE(sym_decorator_args, 3),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_decorator, 2),
  [172] = {.count = 1, .reusable = true}, SHIFT(135),
  [174] = {.count = 1, .reusable = true}, SHIFT(133),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym_types, 2),
  [178] = {.count = 1, .reusable = true}, SHIFT(95),
  [180] = {.count = 1, .reusable = true}, REDUCE(sym_types, 1),
  [182] = {.count = 1, .reusable = true}, REDUCE(aux_sym_types_repeat1, 2),
  [184] = {.count = 2, .reusable = true}, REDUCE(aux_sym_types_repeat1, 2), SHIFT_REPEAT(95),
  [187] = {.count = 1, .reusable = false}, SHIFT(121),
  [189] = {.count = 1, .reusable = true}, SHIFT(66),
  [191] = {.count = 1, .reusable = true}, SHIFT(119),
  [193] = {.count = 1, .reusable = true}, REDUCE(sym_morph_mutation, 3),
  [195] = {.count = 1, .reusable = true}, REDUCE(sym_morph_mutation, 4),
  [197] = {.count = 1, .reusable = true}, REDUCE(sym_morph_mutation, 5),
  [199] = {.count = 1, .reusable = true}, SHIFT(70),
  [201] = {.count = 1, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2),
  [203] = {.count = 2, .reusable = true}, REDUCE(aux_sym_enum_definition_repeat1, 2), SHIFT_REPEAT(62),
  [206] = {.count = 1, .reusable = true}, SHIFT(23),
  [208] = {.count = 1, .reusable = true}, SHIFT(69),
  [210] = {.count = 2, .reusable = true}, REDUCE(aux_sym_import_repeat1, 2), SHIFT_REPEAT(64),
  [213] = {.count = 1, .reusable = true}, REDUCE(aux_sym_import_repeat1, 2),
  [215] = {.count = 1, .reusable = true}, REDUCE(sym_node_edge, 5),
  [217] = {.count = 1, .reusable = true}, SHIFT(64),
  [219] = {.count = 1, .reusable = true}, SHIFT(83),
  [221] = {.count = 1, .reusable = true}, REDUCE(sym_node_edge, 4),
  [223] = {.count = 1, .reusable = true}, SHIFT(87),
  [225] = {.count = 1, .reusable = true}, SHIFT(74),
  [227] = {.count = 1, .reusable = true}, SHIFT(16),
  [229] = {.count = 1, .reusable = true}, SHIFT(62),
  [231] = {.count = 1, .reusable = true}, SHIFT(100),
  [233] = {.count = 1, .reusable = true}, SHIFT(79),
  [235] = {.count = 1, .reusable = true}, REDUCE(sym_node_edge, 3),
  [237] = {.count = 1, .reusable = true}, SHIFT(48),
  [239] = {.count = 1, .reusable = true}, SHIFT(99),
  [241] = {.count = 1, .reusable = true}, SHIFT(126),
  [243] = {.count = 1, .reusable = true}, SHIFT(125),
  [245] = {.count = 1, .reusable = true}, SHIFT(54),
  [247] = {.count = 1, .reusable = true}, SHIFT(131),
  [249] = {.count = 1, .reusable = true}, SHIFT(40),
  [251] = {.count = 1, .reusable = true}, SHIFT(113),
  [253] = {.count = 1, .reusable = true}, SHIFT(138),
  [255] = {.count = 1, .reusable = true}, SHIFT(44),
  [257] = {.count = 1, .reusable = true}, SHIFT(93),
  [259] = {.count = 1, .reusable = true}, SHIFT(41),
  [261] = {.count = 1, .reusable = true}, SHIFT(102),
  [263] = {.count = 1, .reusable = true}, SHIFT(103),
  [265] = {.count = 1, .reusable = true}, SHIFT(46),
  [267] = {.count = 1, .reusable = true}, SHIFT(146),
  [269] = {.count = 1, .reusable = true}, SHIFT(94),
  [271] = {.count = 1, .reusable = true}, SHIFT(26),
  [273] = {.count = 1, .reusable = true}, SHIFT(45),
  [275] = {.count = 1, .reusable = true}, SHIFT(101),
  [277] = {.count = 1, .reusable = true}, SHIFT(22),
  [279] = {.count = 1, .reusable = true}, SHIFT(34),
  [281] = {.count = 1, .reusable = true}, SHIFT(11),
  [283] = {.count = 1, .reusable = true}, REDUCE(sym_expression_list, 3),
  [285] = {.count = 1, .reusable = true}, SHIFT(82),
  [287] = {.count = 1, .reusable = true}, SHIFT(110),
  [289] = {.count = 1, .reusable = true}, SHIFT(56),
  [291] = {.count = 1, .reusable = true}, SHIFT(120),
  [293] = {.count = 1, .reusable = true}, SHIFT(96),
  [295] = {.count = 1, .reusable = true}, SHIFT(50),
  [297] = {.count = 1, .reusable = true}, SHIFT(115),
  [299] = {.count = 1, .reusable = true}, SHIFT(77),
  [301] = {.count = 1, .reusable = true}, REDUCE(sym_typed_args, 3),
  [303] = {.count = 1, .reusable = true}, SHIFT(117),
  [305] = {.count = 1, .reusable = true}, SHIFT(17),
  [307] = {.count = 1, .reusable = true}, SHIFT(124),
  [309] = {.count = 1, .reusable = true}, SHIFT(84),
  [311] = {.count = 1, .reusable = true}, SHIFT(80),
  [313] = {.count = 1, .reusable = true}, SHIFT(129),
  [315] = {.count = 1, .reusable = true}, SHIFT(76),
  [317] = {.count = 1, .reusable = true}, SHIFT(81),
  [319] = {.count = 1, .reusable = true}, SHIFT(30),
  [321] = {.count = 1, .reusable = true}, SHIFT(63),
  [323] = {.count = 1, .reusable = true}, SHIFT(75),
  [325] = {.count = 1, .reusable = true}, SHIFT(88),
  [327] = {.count = 1, .reusable = true}, SHIFT(106),
  [329] = {.count = 1, .reusable = true}, SHIFT(92),
  [331] = {.count = 1, .reusable = true}, SHIFT(105),
  [333] = {.count = 1, .reusable = true}, SHIFT(132),
  [335] = {.count = 1, .reusable = true}, SHIFT(148),
  [337] = {.count = 1, .reusable = true}, SHIFT(91),
  [339] = {.count = 1, .reusable = true}, SHIFT(134),
  [341] = {.count = 1, .reusable = true}, SHIFT(130),
  [343] = {.count = 1, .reusable = true}, SHIFT(142),
  [345] = {.count = 1, .reusable = true}, SHIFT(24),
  [347] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [349] = {.count = 1, .reusable = true}, SHIFT(97),
  [351] = {.count = 1, .reusable = true}, SHIFT(111),
  [353] = {.count = 1, .reusable = true}, SHIFT(90),
  [355] = {.count = 1, .reusable = true}, SHIFT(86),
  [357] = {.count = 1, .reusable = true}, SHIFT(20),
  [359] = {.count = 1, .reusable = true}, SHIFT(141),
  [361] = {.count = 1, .reusable = true}, SHIFT(58),
  [363] = {.count = 1, .reusable = true}, SHIFT(143),
  [365] = {.count = 1, .reusable = true}, SHIFT(104),
  [367] = {.count = 1, .reusable = true}, SHIFT(73),
  [369] = {.count = 1, .reusable = true}, SHIFT(118),
  [371] = {.count = 1, .reusable = true}, SHIFT(107),
  [373] = {.count = 1, .reusable = true}, SHIFT(108),
  [375] = {.count = 1, .reusable = true}, SHIFT(59),
  [377] = {.count = 1, .reusable = true}, SHIFT(89),
  [379] = {.count = 1, .reusable = true}, SHIFT(147),
  [381] = {.count = 1, .reusable = true}, SHIFT(78),
  [383] = {.count = 1, .reusable = true}, SHIFT(7),
  [385] = {.count = 1, .reusable = true}, SHIFT(60),
  [387] = {.count = 1, .reusable = true}, SHIFT(10),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_morph(void) {
  static TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .symbol_metadata = ts_symbol_metadata,
    .parse_table = (const unsigned short *)ts_parse_table,
    .small_parse_table = (const uint16_t *)ts_small_parse_table,
    .small_parse_table_map = (const uint32_t *)ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .lex_modes = ts_lex_modes,
    .symbol_names = ts_symbol_names,
    .public_symbol_map = ts_symbol_map,
    .alias_sequences = (const TSSymbol *)ts_alias_sequences,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .lex_fn = ts_lex,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
