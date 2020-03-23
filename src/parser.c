#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 136
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 79
#define ALIAS_COUNT 0
#define TOKEN_COUNT 41
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 8

enum {
  anon_sym_abstract = 1,
  anon_sym_interface = 2,
  anon_sym_LBRACE = 3,
  anon_sym_RBRACE = 4,
  anon_sym_LBRACK_RBRACK = 5,
  anon_sym_BANG = 6,
  anon_sym_COLON = 7,
  anon_sym_LPAREN = 8,
  anon_sym_RPAREN = 9,
  anon_sym_extends = 10,
  anon_sym_not = 11,
  anon_sym_DASH_GT = 12,
  anon_sym_LT_DASH = 13,
  anon_sym_DOT = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  anon_sym_COMMA = 17,
  sym_false = 18,
  sym_true = 19,
  anon_sym_DQUOTE = 20,
  aux_sym_simple_string_token1 = 21,
  anon_sym_SQUOTE = 22,
  aux_sym_simple_string_token2 = 23,
  sym_escape_sequence = 24,
  sym_comment = 25,
  anon_sym_BQUOTE = 26,
  anon_sym_DOLLAR_LBRACE = 27,
  sym_camel_identifier = 28,
  sym_snake_identifier = 29,
  sym_pascal_identifier = 30,
  sym_integer = 31,
  sym_float = 32,
  sym_additive_operator = 33,
  sym_disjunction_operator = 34,
  sym_conjuction_operator = 35,
  sym_unary_operator = 36,
  sym_multiplicative_operator = 37,
  sym_relational_operator = 38,
  sym__automatic_semicolon = 39,
  sym__template_chars = 40,
  sym_program = 41,
  sym_block = 42,
  sym_interface_definition = 43,
  sym_interface_prop = 44,
  sym_type_identifier = 45,
  sym_decorator = 46,
  sym_extends = 47,
  sym__expression = 48,
  sym__boolean_expression = 49,
  sym_disjunction_expression = 50,
  sym_conjuction_expression = 51,
  sym_negation_expression = 52,
  sym_relational_expression = 53,
  sym__arithmetic_expression = 54,
  sym_additive_expression = 55,
  sym_multiplicative_expression = 56,
  sym_non_literal_factor = 57,
  sym_left_arrow_accessor = 58,
  sym_right_arrow_accessor = 59,
  sym_dot_accessor = 60,
  sym_function_call = 61,
  sym_array_accessor = 62,
  sym_unary_expression = 63,
  sym_list = 64,
  sym_expression_args = 65,
  sym__literal = 66,
  sym__number = 67,
  sym__string = 68,
  sym_simple_string = 69,
  sym_template_string = 70,
  sym_template_substitution = 71,
  aux_sym_program_repeat1 = 72,
  aux_sym_interface_definition_repeat1 = 73,
  aux_sym_interface_definition_repeat2 = 74,
  aux_sym_expression_args_repeat1 = 75,
  aux_sym_simple_string_repeat1 = 76,
  aux_sym_simple_string_repeat2 = 77,
  aux_sym_template_string_repeat1 = 78,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_abstract] = "abstract",
  [anon_sym_interface] = "interface",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_LBRACK_RBRACK] = "[]",
  [anon_sym_BANG] = "!",
  [anon_sym_COLON] = ":",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_extends] = "extends",
  [anon_sym_not] = "not",
  [anon_sym_DASH_GT] = "->",
  [anon_sym_LT_DASH] = "<-",
  [anon_sym_DOT] = ".",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_COMMA] = ",",
  [sym_false] = "false",
  [sym_true] = "true",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_simple_string_token1] = "simple_string_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_simple_string_token2] = "simple_string_token2",
  [sym_escape_sequence] = "escape_sequence",
  [sym_comment] = "comment",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [sym_camel_identifier] = "camel_identifier",
  [sym_snake_identifier] = "snake_identifier",
  [sym_pascal_identifier] = "pascal_identifier",
  [sym_integer] = "integer",
  [sym_float] = "float",
  [sym_additive_operator] = "additive_operator",
  [sym_disjunction_operator] = "disjunction_operator",
  [sym_conjuction_operator] = "conjuction_operator",
  [sym_unary_operator] = "unary_operator",
  [sym_multiplicative_operator] = "multiplicative_operator",
  [sym_relational_operator] = "relational_operator",
  [sym__automatic_semicolon] = "_automatic_semicolon",
  [sym__template_chars] = "_template_chars",
  [sym_program] = "program",
  [sym_block] = "block",
  [sym_interface_definition] = "interface_definition",
  [sym_interface_prop] = "interface_prop",
  [sym_type_identifier] = "type_identifier",
  [sym_decorator] = "decorator",
  [sym_extends] = "extends",
  [sym__expression] = "_expression",
  [sym__boolean_expression] = "_boolean_expression",
  [sym_disjunction_expression] = "disjunction_expression",
  [sym_conjuction_expression] = "conjuction_expression",
  [sym_negation_expression] = "negation_expression",
  [sym_relational_expression] = "relational_expression",
  [sym__arithmetic_expression] = "_arithmetic_expression",
  [sym_additive_expression] = "additive_expression",
  [sym_multiplicative_expression] = "multiplicative_expression",
  [sym_non_literal_factor] = "non_literal_factor",
  [sym_left_arrow_accessor] = "left_arrow_accessor",
  [sym_right_arrow_accessor] = "right_arrow_accessor",
  [sym_dot_accessor] = "dot_accessor",
  [sym_function_call] = "function_call",
  [sym_array_accessor] = "array_accessor",
  [sym_unary_expression] = "unary_expression",
  [sym_list] = "list",
  [sym_expression_args] = "expression_args",
  [sym__literal] = "_literal",
  [sym__number] = "_number",
  [sym__string] = "_string",
  [sym_simple_string] = "simple_string",
  [sym_template_string] = "template_string",
  [sym_template_substitution] = "template_substitution",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_interface_definition_repeat1] = "interface_definition_repeat1",
  [aux_sym_interface_definition_repeat2] = "interface_definition_repeat2",
  [aux_sym_expression_args_repeat1] = "expression_args_repeat1",
  [aux_sym_simple_string_repeat1] = "simple_string_repeat1",
  [aux_sym_simple_string_repeat2] = "simple_string_repeat2",
  [aux_sym_template_string_repeat1] = "template_string_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_interface] = anon_sym_interface,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_LBRACK_RBRACK] = anon_sym_LBRACK_RBRACK,
  [anon_sym_BANG] = anon_sym_BANG,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [anon_sym_LT_DASH] = anon_sym_LT_DASH,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_false] = sym_false,
  [sym_true] = sym_true,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_simple_string_token1] = aux_sym_simple_string_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_simple_string_token2] = aux_sym_simple_string_token2,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_comment] = sym_comment,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [sym_camel_identifier] = sym_camel_identifier,
  [sym_snake_identifier] = sym_snake_identifier,
  [sym_pascal_identifier] = sym_pascal_identifier,
  [sym_integer] = sym_integer,
  [sym_float] = sym_float,
  [sym_additive_operator] = sym_additive_operator,
  [sym_disjunction_operator] = sym_disjunction_operator,
  [sym_conjuction_operator] = sym_conjuction_operator,
  [sym_unary_operator] = sym_unary_operator,
  [sym_multiplicative_operator] = sym_multiplicative_operator,
  [sym_relational_operator] = sym_relational_operator,
  [sym__automatic_semicolon] = sym__automatic_semicolon,
  [sym__template_chars] = sym__template_chars,
  [sym_program] = sym_program,
  [sym_block] = sym_block,
  [sym_interface_definition] = sym_interface_definition,
  [sym_interface_prop] = sym_interface_prop,
  [sym_type_identifier] = sym_type_identifier,
  [sym_decorator] = sym_decorator,
  [sym_extends] = sym_extends,
  [sym__expression] = sym__expression,
  [sym__boolean_expression] = sym__boolean_expression,
  [sym_disjunction_expression] = sym_disjunction_expression,
  [sym_conjuction_expression] = sym_conjuction_expression,
  [sym_negation_expression] = sym_negation_expression,
  [sym_relational_expression] = sym_relational_expression,
  [sym__arithmetic_expression] = sym__arithmetic_expression,
  [sym_additive_expression] = sym_additive_expression,
  [sym_multiplicative_expression] = sym_multiplicative_expression,
  [sym_non_literal_factor] = sym_non_literal_factor,
  [sym_left_arrow_accessor] = sym_left_arrow_accessor,
  [sym_right_arrow_accessor] = sym_right_arrow_accessor,
  [sym_dot_accessor] = sym_dot_accessor,
  [sym_function_call] = sym_function_call,
  [sym_array_accessor] = sym_array_accessor,
  [sym_unary_expression] = sym_unary_expression,
  [sym_list] = sym_list,
  [sym_expression_args] = sym_expression_args,
  [sym__literal] = sym__literal,
  [sym__number] = sym__number,
  [sym__string] = sym__string,
  [sym_simple_string] = sym_simple_string,
  [sym_template_string] = sym_template_string,
  [sym_template_substitution] = sym_template_substitution,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_interface_definition_repeat1] = aux_sym_interface_definition_repeat1,
  [aux_sym_interface_definition_repeat2] = aux_sym_interface_definition_repeat2,
  [aux_sym_expression_args_repeat1] = aux_sym_expression_args_repeat1,
  [aux_sym_simple_string_repeat1] = aux_sym_simple_string_repeat1,
  [aux_sym_simple_string_repeat2] = aux_sym_simple_string_repeat2,
  [aux_sym_template_string_repeat1] = aux_sym_template_string_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_abstract] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_interface] = {
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
  [anon_sym_LBRACK_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
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
  [anon_sym_extends] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
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
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_simple_string_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_simple_string_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [sym_camel_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_snake_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_pascal_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_integer] = {
    .visible = true,
    .named = true,
  },
  [sym_float] = {
    .visible = true,
    .named = true,
  },
  [sym_additive_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_disjunction_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_conjuction_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_multiplicative_operator] = {
    .visible = true,
    .named = true,
  },
  [sym_relational_operator] = {
    .visible = true,
    .named = true,
  },
  [sym__automatic_semicolon] = {
    .visible = false,
    .named = true,
  },
  [sym__template_chars] = {
    .visible = false,
    .named = true,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_block] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_definition] = {
    .visible = true,
    .named = true,
  },
  [sym_interface_prop] = {
    .visible = true,
    .named = true,
  },
  [sym_type_identifier] = {
    .visible = true,
    .named = true,
  },
  [sym_decorator] = {
    .visible = true,
    .named = true,
  },
  [sym_extends] = {
    .visible = true,
    .named = true,
  },
  [sym__expression] = {
    .visible = false,
    .named = true,
  },
  [sym__boolean_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_disjunction_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_conjuction_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_negation_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_relational_expression] = {
    .visible = true,
    .named = true,
  },
  [sym__arithmetic_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_additive_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_multiplicative_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_non_literal_factor] = {
    .visible = true,
    .named = true,
  },
  [sym_left_arrow_accessor] = {
    .visible = true,
    .named = true,
  },
  [sym_right_arrow_accessor] = {
    .visible = true,
    .named = true,
  },
  [sym_dot_accessor] = {
    .visible = true,
    .named = true,
  },
  [sym_function_call] = {
    .visible = true,
    .named = true,
  },
  [sym_array_accessor] = {
    .visible = true,
    .named = true,
  },
  [sym_unary_expression] = {
    .visible = true,
    .named = true,
  },
  [sym_list] = {
    .visible = true,
    .named = true,
  },
  [sym_expression_args] = {
    .visible = true,
    .named = true,
  },
  [sym__literal] = {
    .visible = false,
    .named = true,
  },
  [sym__number] = {
    .visible = false,
    .named = true,
  },
  [sym__string] = {
    .visible = false,
    .named = true,
  },
  [sym_simple_string] = {
    .visible = true,
    .named = true,
  },
  [sym_template_string] = {
    .visible = true,
    .named = true,
  },
  [sym_template_substitution] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_definition_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_interface_definition_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_expression_args_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_simple_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_simple_string_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_template_string_repeat1] = {
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
      if (eof) ADVANCE(72);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '$') ADVANCE(56);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(155);
      if (lookahead == '&') ADVANCE(156);
      if (lookahead == '\'') ADVANCE(102);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '+') ADVANCE(149);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '0') ADVANCE(139);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(160);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == '\\') ADVANCE(53);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '`') ADVANCE(116);
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '{') ADVANCE(77);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == '}') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(70)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(136);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(100);
      if (lookahead != 0) ADVANCE(101);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(96);
      if (lookahead == '\r') ADVANCE(110);
      if (lookahead == 'u') ADVANCE(57);
      if (lookahead == 'x') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(11)
      if (lookahead == '\'') ADVANCE(102);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(107);
      if (lookahead != 0) ADVANCE(108);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(103);
      if (lookahead == '\r') ADVANCE(111);
      if (lookahead == 'u') ADVANCE(57);
      if (lookahead == 'x') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '&') ADVANCE(10);
      if (lookahead == '\'') ADVANCE(102);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(154);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '0') ADVANCE(139);
      if (lookahead == '<') ADVANCE(160);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(160);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '`') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '|') ADVANCE(58);
      if (lookahead == '}') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(155);
      if (lookahead == '&') ADVANCE(156);
      if (lookahead == '\'') ADVANCE(102);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '+') ADVANCE(149);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '0') ADVANCE(139);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(160);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '`') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == '}') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(16);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(155);
      if (lookahead == '&') ADVANCE(156);
      if (lookahead == '\'') ADVANCE(102);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(149);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '.') ADVANCE(63);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '0') ADVANCE(139);
      if (lookahead == '<') ADVANCE(160);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(160);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '`') ADVANCE(116);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == '}') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(80);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '[') ADVANCE(17);
      if (lookahead == '_') ADVANCE(135);
      if (lookahead == '}') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(8)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(136);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 9:
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(9)
      END_STATE();
    case 10:
      if (lookahead == '&') ADVANCE(153);
      END_STATE();
    case 11:
      if (lookahead == '\'') ADVANCE(102);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(11)
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(115);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 14:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead != 0) ADVANCE(14);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(15)
      END_STATE();
    case 16:
      if (lookahead == '=') ADVANCE(158);
      END_STATE();
    case 17:
      if (lookahead == ']') ADVANCE(79);
      END_STATE();
    case 18:
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(141);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(142);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 21:
      if (lookahead == 'a') ADVANCE(34);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 24:
      if (lookahead == 'b') ADVANCE(45);
      END_STATE();
    case 25:
      if (lookahead == 'c') ADVANCE(50);
      END_STATE();
    case 26:
      if (lookahead == 'c') ADVANCE(31);
      END_STATE();
    case 27:
      if (lookahead == 'd') ADVANCE(44);
      END_STATE();
    case 28:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'e') ADVANCE(94);
      END_STATE();
    case 30:
      if (lookahead == 'e') ADVANCE(93);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(75);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 33:
      if (lookahead == 'f') ADVANCE(23);
      END_STATE();
    case 34:
      if (lookahead == 'l') ADVANCE(46);
      END_STATE();
    case 35:
      if (lookahead == 'n') ADVANCE(158);
      END_STATE();
    case 36:
      if (lookahead == 'n') ADVANCE(158);
      if (lookahead == 's') ADVANCE(161);
      END_STATE();
    case 37:
      if (lookahead == 'n') ADVANCE(27);
      END_STATE();
    case 38:
      if (lookahead == 'n') ADVANCE(52);
      END_STATE();
    case 39:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 41:
      if (lookahead == 'r') ADVANCE(54);
      END_STATE();
    case 42:
      if (lookahead == 'r') ADVANCE(33);
      END_STATE();
    case 43:
      if (lookahead == 'r') ADVANCE(22);
      END_STATE();
    case 44:
      if (lookahead == 's') ADVANCE(85);
      END_STATE();
    case 45:
      if (lookahead == 's') ADVANCE(51);
      END_STATE();
    case 46:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 47:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 48:
      if (lookahead == 't') ADVANCE(28);
      END_STATE();
    case 49:
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 50:
      if (lookahead == 't') ADVANCE(73);
      END_STATE();
    case 51:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(32);
      END_STATE();
    case 53:
      if (lookahead == 'u') ADVANCE(57);
      if (lookahead == 'x') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(113);
      if (lookahead != 0) ADVANCE(109);
      END_STATE();
    case 54:
      if (lookahead == 'u') ADVANCE(29);
      END_STATE();
    case 55:
      if (lookahead == 'x') ADVANCE(48);
      END_STATE();
    case 56:
      if (lookahead == '{') ADVANCE(117);
      END_STATE();
    case 57:
      if (lookahead == '{') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 58:
      if (lookahead == '|') ADVANCE(152);
      END_STATE();
    case 59:
      if (lookahead == '}') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 60:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 61:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(141);
      END_STATE();
    case 62:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(142);
      END_STATE();
    case 63:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 64:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 65:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(69);
      END_STATE();
    case 66:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(109);
      END_STATE();
    case 67:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(59);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(66);
      END_STATE();
    case 70:
      if (eof) ADVANCE(72);
      if (lookahead == '!') ADVANCE(81);
      if (lookahead == '"') ADVANCE(95);
      if (lookahead == '$') ADVANCE(56);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(155);
      if (lookahead == '&') ADVANCE(156);
      if (lookahead == '\'') ADVANCE(102);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == ')') ADVANCE(84);
      if (lookahead == '+') ADVANCE(149);
      if (lookahead == ',') ADVANCE(92);
      if (lookahead == '-') ADVANCE(150);
      if (lookahead == '.') ADVANCE(89);
      if (lookahead == '/') ADVANCE(157);
      if (lookahead == '0') ADVANCE(139);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '<') ADVANCE(159);
      if (lookahead == '=') ADVANCE(16);
      if (lookahead == '>') ADVANCE(160);
      if (lookahead == '[') ADVANCE(90);
      if (lookahead == ']') ADVANCE(91);
      if (lookahead == '`') ADVANCE(116);
      if (lookahead == 'a') ADVANCE(24);
      if (lookahead == 'e') ADVANCE(55);
      if (lookahead == 'f') ADVANCE(21);
      if (lookahead == 'i') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(39);
      if (lookahead == 't') ADVANCE(41);
      if (lookahead == '{') ADVANCE(77);
      if (lookahead == '|') ADVANCE(151);
      if (lookahead == '}') ADVANCE(78);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(70)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(138);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(136);
      END_STATE();
    case 71:
      if (eof) ADVANCE(72);
      if (lookahead == '(') ADVANCE(83);
      if (lookahead == '/') ADVANCE(12);
      if (lookahead == '_') ADVANCE(135);
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'i') ADVANCE(126);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(71)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(136);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(anon_sym_interface);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(158);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'i') ADVANCE(35);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_simple_string_token1);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_simple_string_token1);
      if (lookahead == '*') ADVANCE(99);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(101);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_simple_string_token1);
      if (lookahead == '*') ADVANCE(98);
      if (lookahead == '/') ADVANCE(101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(99);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_simple_string_token1);
      if (lookahead == '*') ADVANCE(98);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(99);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_simple_string_token1);
      if (lookahead == '/') ADVANCE(97);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(101);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_simple_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(101);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_simple_string_token2);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_simple_string_token2);
      if (lookahead == '*') ADVANCE(106);
      if (lookahead == '/') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(108);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_simple_string_token2);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead == '/') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_simple_string_token2);
      if (lookahead == '*') ADVANCE(105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(106);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_simple_string_token2);
      if (lookahead == '/') ADVANCE(104);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(108);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_simple_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(108);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(96);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(103);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(109);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(112);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(115);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'a') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'a') ADVANCE(121);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'b') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'c') ADVANCE(123);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'c') ADVANCE(132);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'e') ADVANCE(76);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'e') ADVANCE(128);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'f') ADVANCE(119);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'n') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'r') ADVANCE(118);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'r') ADVANCE(125);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 's') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 't') ADVANCE(124);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 't') ADVANCE(127);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 't') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(134);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(133);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(134);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_snake_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(135);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_pascal_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(136);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == '_') ADVANCE(140);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(18);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(19);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(20);
      if (lookahead == '_') ADVANCE(140);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(147);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(138);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(61);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(141);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(62);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(142);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(137);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(143);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(147);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(148);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(60);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(145);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(144);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(146);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_additive_operator);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_additive_operator);
      if (lookahead == '>') ADVANCE(87);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_additive_operator);
      if (lookahead == '|') ADVANCE(152);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_disjunction_operator);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_conjuction_operator);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_unary_operator);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '&') ADVANCE(153);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '*') ADVANCE(14);
      if (lookahead == '/') ADVANCE(115);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_relational_operator);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '-') ADVANCE(88);
      if (lookahead == '=') ADVANCE(158);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '=') ADVANCE(158);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == 'n') ADVANCE(40);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 71},
  [2] = {.lex_state = 5},
  [3] = {.lex_state = 5},
  [4] = {.lex_state = 5},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 5},
  [12] = {.lex_state = 5},
  [13] = {.lex_state = 5},
  [14] = {.lex_state = 5},
  [15] = {.lex_state = 5},
  [16] = {.lex_state = 5},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 5},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 6},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 6},
  [27] = {.lex_state = 6},
  [28] = {.lex_state = 6},
  [29] = {.lex_state = 6},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 7},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 5},
  [56] = {.lex_state = 71},
  [57] = {.lex_state = 71},
  [58] = {.lex_state = 8},
  [59] = {.lex_state = 8},
  [60] = {.lex_state = 8},
  [61] = {.lex_state = 8},
  [62] = {.lex_state = 8},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 8},
  [65] = {.lex_state = 8},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 71},
  [70] = {.lex_state = 71},
  [71] = {.lex_state = 71},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 0, .external_lex_state = 2},
  [75] = {.lex_state = 71},
  [76] = {.lex_state = 71},
  [77] = {.lex_state = 71},
  [78] = {.lex_state = 71},
  [79] = {.lex_state = 71},
  [80] = {.lex_state = 71},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 0, .external_lex_state = 2},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 71},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 8},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 3},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 8},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 8},
  [99] = {.lex_state = 8},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 0, .external_lex_state = 2},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 8},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 0},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 0},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 0},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 0},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 15},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 15},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 0},
  [130] = {.lex_state = 0},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 0},
  [134] = {.lex_state = 0},
  [135] = {.lex_state = 0},
};

enum {
  ts_external_token__automatic_semicolon = 0,
  ts_external_token__template_chars = 1,
};

static TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token__automatic_semicolon] = sym__automatic_semicolon,
  [ts_external_token__template_chars] = sym__template_chars,
};

static bool ts_external_scanner_states[3][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token__automatic_semicolon] = true,
    [ts_external_token__template_chars] = true,
  },
  [2] = {
    [ts_external_token__template_chars] = true,
  },
};

static uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_BANG] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [anon_sym_LT_DASH] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [sym_pascal_identifier] = ACTIONS(1),
    [sym_integer] = ACTIONS(1),
    [sym_float] = ACTIONS(1),
    [sym_additive_operator] = ACTIONS(1),
    [sym_disjunction_operator] = ACTIONS(1),
    [sym_conjuction_operator] = ACTIONS(1),
    [sym_unary_operator] = ACTIONS(1),
    [sym_multiplicative_operator] = ACTIONS(1),
    [sym_relational_operator] = ACTIONS(1),
    [sym__automatic_semicolon] = ACTIONS(1),
    [sym__template_chars] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(126),
    [sym_block] = STATE(56),
    [sym_interface_definition] = STATE(77),
    [sym_decorator] = STATE(70),
    [aux_sym_program_repeat1] = STATE(56),
    [aux_sym_interface_definition_repeat1] = STATE(70),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_abstract] = ACTIONS(7),
    [anon_sym_interface] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_camel_identifier] = ACTIONS(11),
    [sym_snake_identifier] = ACTIONS(11),
    [sym_pascal_identifier] = ACTIONS(13),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(20), 1,
      anon_sym_not,
    ACTIONS(23), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      anon_sym_DQUOTE,
    ACTIONS(32), 1,
      anon_sym_SQUOTE,
    ACTIONS(35), 1,
      anon_sym_BQUOTE,
    ACTIONS(38), 1,
      sym_integer,
    ACTIONS(41), 1,
      sym_unary_operator,
    STATE(34), 1,
      sym_non_literal_factor,
    STATE(45), 1,
      sym_multiplicative_expression,
    STATE(46), 1,
      sym_additive_expression,
    STATE(47), 1,
      sym_relational_expression,
    STATE(48), 1,
      sym__arithmetic_expression,
    STATE(53), 1,
      sym_negation_expression,
    STATE(54), 1,
      sym_conjuction_expression,
    STATE(55), 1,
      sym_disjunction_expression,
    ACTIONS(18), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(26), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(2), 3,
      sym__expression,
      sym__boolean_expression,
      aux_sym_expression_args_repeat1,
    STATE(44), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(35), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [83] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 1,
      anon_sym_not,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(52), 1,
      anon_sym_COMMA,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_BQUOTE,
    ACTIONS(62), 1,
      sym_integer,
    ACTIONS(64), 1,
      sym_unary_operator,
    STATE(34), 1,
      sym_non_literal_factor,
    STATE(45), 1,
      sym_multiplicative_expression,
    STATE(46), 1,
      sym_additive_expression,
    STATE(47), 1,
      sym_relational_expression,
    STATE(48), 1,
      sym__arithmetic_expression,
    STATE(53), 1,
      sym_negation_expression,
    STATE(54), 1,
      sym_conjuction_expression,
    STATE(55), 1,
      sym_disjunction_expression,
    ACTIONS(46), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(54), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(2), 3,
      sym__expression,
      sym__boolean_expression,
      aux_sym_expression_args_repeat1,
    STATE(44), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(35), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [168] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 1,
      anon_sym_not,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_BQUOTE,
    ACTIONS(62), 1,
      sym_integer,
    ACTIONS(64), 1,
      sym_unary_operator,
    ACTIONS(68), 1,
      anon_sym_COMMA,
    STATE(34), 1,
      sym_non_literal_factor,
    STATE(45), 1,
      sym_multiplicative_expression,
    STATE(46), 1,
      sym_additive_expression,
    STATE(47), 1,
      sym_relational_expression,
    STATE(48), 1,
      sym__arithmetic_expression,
    STATE(53), 1,
      sym_negation_expression,
    STATE(54), 1,
      sym_conjuction_expression,
    STATE(55), 1,
      sym_disjunction_expression,
    ACTIONS(66), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(54), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(3), 3,
      sym__expression,
      sym__boolean_expression,
      aux_sym_expression_args_repeat1,
    STATE(44), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(35), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [253] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 1,
      anon_sym_not,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_BQUOTE,
    ACTIONS(62), 1,
      sym_integer,
    ACTIONS(64), 1,
      sym_unary_operator,
    ACTIONS(70), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym_non_literal_factor,
    STATE(45), 1,
      sym_multiplicative_expression,
    STATE(46), 1,
      sym_additive_expression,
    STATE(47), 1,
      sym_relational_expression,
    STATE(48), 1,
      sym__arithmetic_expression,
    STATE(53), 1,
      sym_negation_expression,
    STATE(54), 1,
      sym_conjuction_expression,
    STATE(55), 1,
      sym_disjunction_expression,
    STATE(123), 1,
      sym_expression_args,
    STATE(114), 2,
      sym__expression,
      sym__boolean_expression,
    ACTIONS(54), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(44), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(35), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [336] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 1,
      anon_sym_not,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_BQUOTE,
    ACTIONS(62), 1,
      sym_integer,
    ACTIONS(64), 1,
      sym_unary_operator,
    ACTIONS(72), 1,
      anon_sym_RBRACK,
    STATE(34), 1,
      sym_non_literal_factor,
    STATE(45), 1,
      sym_multiplicative_expression,
    STATE(46), 1,
      sym_additive_expression,
    STATE(47), 1,
      sym_relational_expression,
    STATE(48), 1,
      sym__arithmetic_expression,
    STATE(53), 1,
      sym_negation_expression,
    STATE(54), 1,
      sym_conjuction_expression,
    STATE(55), 1,
      sym_disjunction_expression,
    STATE(132), 1,
      sym_expression_args,
    STATE(114), 2,
      sym__expression,
      sym__boolean_expression,
    ACTIONS(54), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(44), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(35), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [419] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 1,
      anon_sym_not,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_BQUOTE,
    ACTIONS(62), 1,
      sym_integer,
    ACTIONS(64), 1,
      sym_unary_operator,
    ACTIONS(74), 1,
      anon_sym_RPAREN,
    STATE(34), 1,
      sym_non_literal_factor,
    STATE(45), 1,
      sym_multiplicative_expression,
    STATE(46), 1,
      sym_additive_expression,
    STATE(47), 1,
      sym_relational_expression,
    STATE(48), 1,
      sym__arithmetic_expression,
    STATE(53), 1,
      sym_negation_expression,
    STATE(54), 1,
      sym_conjuction_expression,
    STATE(55), 1,
      sym_disjunction_expression,
    STATE(120), 1,
      sym_expression_args,
    STATE(114), 2,
      sym__expression,
      sym__boolean_expression,
    ACTIONS(54), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(44), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(35), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [502] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 1,
      anon_sym_not,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_BQUOTE,
    ACTIONS(62), 1,
      sym_integer,
    ACTIONS(64), 1,
      sym_unary_operator,
    STATE(34), 1,
      sym_non_literal_factor,
    STATE(45), 1,
      sym_multiplicative_expression,
    STATE(46), 1,
      sym_additive_expression,
    STATE(47), 1,
      sym_relational_expression,
    STATE(48), 1,
      sym__arithmetic_expression,
    STATE(53), 1,
      sym_negation_expression,
    STATE(54), 1,
      sym_conjuction_expression,
    STATE(55), 1,
      sym_disjunction_expression,
    STATE(131), 1,
      sym_expression_args,
    STATE(114), 2,
      sym__expression,
      sym__boolean_expression,
    ACTIONS(54), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(44), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(35), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [582] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 1,
      anon_sym_not,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_BQUOTE,
    ACTIONS(62), 1,
      sym_integer,
    ACTIONS(64), 1,
      sym_unary_operator,
    STATE(34), 1,
      sym_non_literal_factor,
    STATE(45), 1,
      sym_multiplicative_expression,
    STATE(46), 1,
      sym_additive_expression,
    STATE(47), 1,
      sym_relational_expression,
    STATE(48), 1,
      sym__arithmetic_expression,
    STATE(53), 1,
      sym_negation_expression,
    STATE(54), 1,
      sym_conjuction_expression,
    STATE(55), 1,
      sym_disjunction_expression,
    STATE(121), 1,
      sym_expression_args,
    STATE(114), 2,
      sym__expression,
      sym__boolean_expression,
    ACTIONS(54), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(44), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(35), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [662] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 1,
      anon_sym_not,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_BQUOTE,
    ACTIONS(62), 1,
      sym_integer,
    ACTIONS(64), 1,
      sym_unary_operator,
    STATE(34), 1,
      sym_non_literal_factor,
    STATE(45), 1,
      sym_multiplicative_expression,
    STATE(46), 1,
      sym_additive_expression,
    STATE(47), 1,
      sym_relational_expression,
    STATE(48), 1,
      sym__arithmetic_expression,
    STATE(53), 1,
      sym_negation_expression,
    STATE(54), 1,
      sym_conjuction_expression,
    STATE(55), 1,
      sym_disjunction_expression,
    STATE(130), 1,
      sym_expression_args,
    STATE(114), 2,
      sym__expression,
      sym__boolean_expression,
    ACTIONS(54), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(44), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(35), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [742] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 1,
      anon_sym_not,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_BQUOTE,
    ACTIONS(62), 1,
      sym_integer,
    ACTIONS(64), 1,
      sym_unary_operator,
    STATE(34), 1,
      sym_non_literal_factor,
    STATE(45), 1,
      sym_multiplicative_expression,
    STATE(46), 1,
      sym_additive_expression,
    STATE(47), 1,
      sym_relational_expression,
    STATE(48), 1,
      sym__arithmetic_expression,
    STATE(53), 1,
      sym_negation_expression,
    STATE(54), 1,
      sym_conjuction_expression,
    STATE(55), 1,
      sym_disjunction_expression,
    STATE(133), 2,
      sym__expression,
      sym__boolean_expression,
    ACTIONS(54), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(44), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(35), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [819] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 1,
      anon_sym_not,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_BQUOTE,
    ACTIONS(62), 1,
      sym_integer,
    ACTIONS(64), 1,
      sym_unary_operator,
    STATE(34), 1,
      sym_non_literal_factor,
    STATE(45), 1,
      sym_multiplicative_expression,
    STATE(46), 1,
      sym_additive_expression,
    STATE(47), 1,
      sym_relational_expression,
    STATE(48), 1,
      sym__arithmetic_expression,
    STATE(51), 1,
      sym_conjuction_expression,
    STATE(53), 1,
      sym_negation_expression,
    ACTIONS(54), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(44), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(35), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [889] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 1,
      anon_sym_not,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_BQUOTE,
    ACTIONS(62), 1,
      sym_integer,
    ACTIONS(64), 1,
      sym_unary_operator,
    STATE(34), 1,
      sym_non_literal_factor,
    STATE(45), 1,
      sym_multiplicative_expression,
    STATE(46), 1,
      sym_additive_expression,
    STATE(47), 1,
      sym_relational_expression,
    STATE(48), 1,
      sym__arithmetic_expression,
    STATE(52), 1,
      sym_negation_expression,
    ACTIONS(54), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(44), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(35), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [956] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(48), 1,
      anon_sym_not,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_BQUOTE,
    ACTIONS(62), 1,
      sym_integer,
    ACTIONS(64), 1,
      sym_unary_operator,
    STATE(34), 1,
      sym_non_literal_factor,
    STATE(45), 1,
      sym_multiplicative_expression,
    STATE(46), 1,
      sym_additive_expression,
    STATE(47), 1,
      sym_relational_expression,
    STATE(48), 1,
      sym__arithmetic_expression,
    STATE(50), 1,
      sym_negation_expression,
    ACTIONS(54), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(44), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(35), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [1023] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_BQUOTE,
    ACTIONS(62), 1,
      sym_integer,
    ACTIONS(64), 1,
      sym_unary_operator,
    STATE(34), 1,
      sym_non_literal_factor,
    STATE(45), 1,
      sym_multiplicative_expression,
    STATE(46), 1,
      sym_additive_expression,
    STATE(49), 1,
      sym__arithmetic_expression,
    ACTIONS(54), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(44), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(35), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [1081] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_BQUOTE,
    ACTIONS(62), 1,
      sym_integer,
    ACTIONS(64), 1,
      sym_unary_operator,
    STATE(34), 1,
      sym_non_literal_factor,
    STATE(41), 1,
      sym_multiplicative_expression,
    ACTIONS(54), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(44), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(35), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [1133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(76), 16,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [1164] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(82), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(80), 16,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [1195] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(84), 16,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [1226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(90), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(88), 16,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [1257] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(56), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_BQUOTE,
    ACTIONS(64), 1,
      sym_unary_operator,
    ACTIONS(94), 1,
      sym_integer,
    STATE(37), 1,
      sym_non_literal_factor,
    ACTIONS(92), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(40), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(35), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [1306] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(96), 16,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [1337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(100), 16,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [1368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(104), 16,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [1399] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 1,
      anon_sym_LPAREN,
    ACTIONS(50), 1,
      anon_sym_LBRACK,
    ACTIONS(64), 1,
      sym_unary_operator,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      anon_sym_BQUOTE,
    ACTIONS(116), 1,
      sym_integer,
    STATE(30), 1,
      sym_non_literal_factor,
    ACTIONS(108), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(29), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(35), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [1448] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(120), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(118), 16,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [1479] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(124), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(122), 16,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [1510] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(126), 16,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [1541] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(130), 16,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [1572] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(132), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(130), 16,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [1603] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(134), 16,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [1634] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(138), 16,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [1665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(144), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(142), 16,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [1696] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_DASH_GT,
    ACTIONS(154), 1,
      anon_sym_LT_DASH,
    ACTIONS(156), 1,
      anon_sym_DOT,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 6,
      anon_sym_not,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(146), 12,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [1737] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(162), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(160), 16,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [1768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(166), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(164), 16,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [1799] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(152), 1,
      anon_sym_DASH_GT,
    ACTIONS(154), 1,
      anon_sym_LT_DASH,
    ACTIONS(156), 1,
      anon_sym_DOT,
    ACTIONS(158), 1,
      anon_sym_LBRACK,
    ACTIONS(170), 6,
      anon_sym_not,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(168), 12,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [1840] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(128), 5,
      anon_sym_not,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
    ACTIONS(126), 15,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [1868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(86), 5,
      anon_sym_not,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
    ACTIONS(84), 15,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [1896] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 5,
      anon_sym_not,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
    ACTIONS(168), 15,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [1924] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_multiplicative_operator,
    ACTIONS(174), 4,
      anon_sym_not,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
    ACTIONS(172), 15,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [1954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(140), 5,
      anon_sym_not,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
    ACTIONS(138), 15,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [1982] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(136), 5,
      anon_sym_not,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
    ACTIONS(134), 15,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2010] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(150), 5,
      anon_sym_not,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
    ACTIONS(146), 15,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2038] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 1,
      sym_multiplicative_operator,
    ACTIONS(180), 4,
      anon_sym_not,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
    ACTIONS(178), 15,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2068] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_additive_operator,
    ACTIONS(184), 3,
      anon_sym_not,
      sym_integer,
      sym_unary_operator,
    ACTIONS(182), 15,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [2097] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 1,
      sym_relational_operator,
    ACTIONS(190), 2,
      anon_sym_not,
      sym_integer,
    ACTIONS(188), 15,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_unary_operator,
  [2125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 2,
      anon_sym_not,
      sym_integer,
    ACTIONS(194), 16,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_unary_operator,
      sym_relational_operator,
  [2151] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 2,
      anon_sym_not,
      sym_integer,
    ACTIONS(198), 16,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_unary_operator,
      sym_relational_operator,
  [2177] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 1,
      sym_integer,
    ACTIONS(202), 16,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_not,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_unary_operator,
  [2202] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym_integer,
    ACTIONS(210), 1,
      sym_conjuction_operator,
    ACTIONS(206), 15,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_not,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_unary_operator,
  [2229] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(214), 1,
      sym_integer,
    ACTIONS(212), 16,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_not,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_unary_operator,
  [2254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym_integer,
    ACTIONS(216), 16,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_not,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_unary_operator,
  [2279] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(210), 1,
      sym_conjuction_operator,
    ACTIONS(222), 1,
      sym_integer,
    ACTIONS(220), 15,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_not,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_disjunction_operator,
      sym_unary_operator,
  [2306] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      sym_integer,
    ACTIONS(228), 1,
      sym_disjunction_operator,
    ACTIONS(224), 14,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_not,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_false,
      sym_true,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_float,
      sym_unary_operator,
  [2332] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_abstract,
    ACTIONS(9), 1,
      anon_sym_interface,
    ACTIONS(13), 1,
      sym_pascal_identifier,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    STATE(77), 1,
      sym_interface_definition,
    ACTIONS(11), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    STATE(57), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(70), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2363] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 1,
      ts_builtin_sym_end,
    ACTIONS(234), 1,
      anon_sym_abstract,
    ACTIONS(237), 1,
      anon_sym_interface,
    ACTIONS(243), 1,
      sym_pascal_identifier,
    STATE(77), 1,
      sym_interface_definition,
    ACTIONS(240), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    STATE(57), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(70), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2394] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    ACTIONS(250), 1,
      sym_snake_identifier,
    ACTIONS(248), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(65), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(85), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2416] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 1,
      anon_sym_RBRACE,
    ACTIONS(250), 1,
      sym_snake_identifier,
    ACTIONS(248), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(64), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(85), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2438] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_snake_identifier,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    ACTIONS(248), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(64), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(85), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2460] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_snake_identifier,
    ACTIONS(254), 1,
      anon_sym_RBRACE,
    ACTIONS(248), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(59), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(85), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2482] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_snake_identifier,
    ACTIONS(252), 1,
      anon_sym_RBRACE,
    ACTIONS(248), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(63), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(85), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2504] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_snake_identifier,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    ACTIONS(248), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(64), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(85), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2526] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    ACTIONS(263), 1,
      sym_snake_identifier,
    ACTIONS(260), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(64), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(85), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2548] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_snake_identifier,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    ACTIONS(248), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(64), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(85), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2570] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      sym_snake_identifier,
    ACTIONS(266), 1,
      anon_sym_RBRACE,
    ACTIONS(248), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(60), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(85), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2592] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_COLON,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      sym_snake_identifier,
    ACTIONS(268), 2,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(274), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [2613] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      sym_snake_identifier,
    ACTIONS(280), 1,
      anon_sym_COLON,
    ACTIONS(274), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    ACTIONS(278), 2,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
  [2634] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(287), 1,
      sym_pascal_identifier,
    ACTIONS(282), 2,
      anon_sym_abstract,
      anon_sym_interface,
    ACTIONS(284), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    STATE(69), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2653] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_pascal_identifier,
    ACTIONS(290), 1,
      anon_sym_abstract,
    ACTIONS(292), 1,
      anon_sym_interface,
    ACTIONS(11), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    STATE(69), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2674] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(294), 2,
      ts_builtin_sym_end,
      sym_pascal_identifier,
    ACTIONS(296), 4,
      anon_sym_abstract,
      anon_sym_interface,
      sym_camel_identifier,
      sym_snake_identifier,
  [2688] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 1,
      anon_sym_BQUOTE,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(298), 2,
      sym__template_chars,
      sym_escape_sequence,
    STATE(81), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [2706] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(306), 1,
      anon_sym_BQUOTE,
    ACTIONS(304), 2,
      sym__template_chars,
      sym_escape_sequence,
    STATE(82), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [2724] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(310), 1,
      anon_sym_BQUOTE,
    ACTIONS(308), 2,
      sym__template_chars,
      sym_escape_sequence,
    STATE(73), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [2742] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      sym_pascal_identifier,
    ACTIONS(312), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 4,
      anon_sym_abstract,
      anon_sym_interface,
      sym_camel_identifier,
      sym_snake_identifier,
  [2758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 2,
      ts_builtin_sym_end,
      sym_pascal_identifier,
    ACTIONS(316), 4,
      anon_sym_abstract,
      anon_sym_interface,
      sym_camel_identifier,
      sym_snake_identifier,
  [2772] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(318), 2,
      ts_builtin_sym_end,
      sym_pascal_identifier,
    ACTIONS(320), 4,
      anon_sym_abstract,
      anon_sym_interface,
      sym_camel_identifier,
      sym_snake_identifier,
  [2786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 2,
      ts_builtin_sym_end,
      sym_pascal_identifier,
    ACTIONS(324), 4,
      anon_sym_abstract,
      anon_sym_interface,
      sym_camel_identifier,
      sym_snake_identifier,
  [2800] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 2,
      ts_builtin_sym_end,
      sym_pascal_identifier,
    ACTIONS(328), 4,
      anon_sym_abstract,
      anon_sym_interface,
      sym_camel_identifier,
      sym_snake_identifier,
  [2814] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(330), 2,
      ts_builtin_sym_end,
      sym_pascal_identifier,
    ACTIONS(332), 4,
      anon_sym_abstract,
      anon_sym_interface,
      sym_camel_identifier,
      sym_snake_identifier,
  [2828] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(334), 1,
      anon_sym_BQUOTE,
    ACTIONS(304), 2,
      sym__template_chars,
      sym_escape_sequence,
    STATE(82), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [2846] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_BQUOTE,
    ACTIONS(341), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(336), 2,
      sym__template_chars,
      sym_escape_sequence,
    STATE(82), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [2864] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(347), 1,
      sym_snake_identifier,
    ACTIONS(344), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(83), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2879] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(354), 1,
      sym_snake_identifier,
    ACTIONS(350), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_pascal_identifier,
  [2894] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      sym_snake_identifier,
    ACTIONS(356), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(83), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2909] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 1,
      sym_pascal_identifier,
    ACTIONS(360), 4,
      anon_sym_abstract,
      anon_sym_interface,
      sym_camel_identifier,
      sym_snake_identifier,
  [2922] = 5,
    ACTIONS(364), 1,
      anon_sym_DQUOTE,
    ACTIONS(366), 1,
      aux_sym_simple_string_token1,
    ACTIONS(368), 1,
      sym_escape_sequence,
    ACTIONS(370), 1,
      sym_comment,
    STATE(92), 1,
      aux_sym_simple_string_repeat1,
  [2938] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      sym_snake_identifier,
    ACTIONS(372), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_pascal_identifier,
  [2950] = 5,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_SQUOTE,
    ACTIONS(378), 1,
      aux_sym_simple_string_token2,
    ACTIONS(380), 1,
      sym_escape_sequence,
    STATE(102), 1,
      aux_sym_simple_string_repeat2,
  [2966] = 5,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      aux_sym_simple_string_token1,
    ACTIONS(384), 1,
      sym_escape_sequence,
    STATE(101), 1,
      aux_sym_simple_string_repeat1,
  [2982] = 5,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(378), 1,
      aux_sym_simple_string_token2,
    ACTIONS(380), 1,
      sym_escape_sequence,
    ACTIONS(386), 1,
      anon_sym_SQUOTE,
    STATE(102), 1,
      aux_sym_simple_string_repeat2,
  [2998] = 5,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(382), 1,
      aux_sym_simple_string_token1,
    ACTIONS(384), 1,
      sym_escape_sequence,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    STATE(101), 1,
      aux_sym_simple_string_repeat1,
  [3014] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      sym_snake_identifier,
    STATE(88), 1,
      sym_type_identifier,
    ACTIONS(388), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3028] = 5,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_SQUOTE,
    ACTIONS(394), 1,
      aux_sym_simple_string_token2,
    ACTIONS(396), 1,
      sym_escape_sequence,
    STATE(89), 1,
      aux_sym_simple_string_repeat2,
  [3044] = 5,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(392), 1,
      anon_sym_DQUOTE,
    ACTIONS(398), 1,
      aux_sym_simple_string_token1,
    ACTIONS(400), 1,
      sym_escape_sequence,
    STATE(90), 1,
      aux_sym_simple_string_repeat1,
  [3060] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(276), 1,
      sym_snake_identifier,
    ACTIONS(274), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3074] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(404), 1,
      sym_snake_identifier,
    ACTIONS(402), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3086] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      sym_snake_identifier,
    STATE(97), 1,
      sym_type_identifier,
    ACTIONS(388), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3100] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(408), 1,
      sym_snake_identifier,
    ACTIONS(406), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3112] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_snake_identifier,
    ACTIONS(410), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3124] = 5,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(414), 1,
      anon_sym_DQUOTE,
    ACTIONS(416), 1,
      aux_sym_simple_string_token1,
    ACTIONS(419), 1,
      sym_escape_sequence,
    STATE(101), 1,
      aux_sym_simple_string_repeat1,
  [3140] = 5,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(422), 1,
      anon_sym_SQUOTE,
    ACTIONS(424), 1,
      aux_sym_simple_string_token2,
    ACTIONS(427), 1,
      sym_escape_sequence,
    STATE(102), 1,
      aux_sym_simple_string_repeat2,
  [3156] = 5,
    ACTIONS(364), 1,
      anon_sym_SQUOTE,
    ACTIONS(370), 1,
      sym_comment,
    ACTIONS(430), 1,
      aux_sym_simple_string_token2,
    ACTIONS(432), 1,
      sym_escape_sequence,
    STATE(91), 1,
      aux_sym_simple_string_repeat2,
  [3172] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(390), 1,
      sym_snake_identifier,
    STATE(100), 1,
      sym_type_identifier,
    ACTIONS(388), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3186] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 4,
      sym__template_chars,
      sym_escape_sequence,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [3196] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
    ACTIONS(438), 1,
      anon_sym_extends,
    STATE(128), 1,
      sym_extends,
  [3209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      sym_snake_identifier,
    ACTIONS(440), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_snake_identifier,
    ACTIONS(444), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      sym_snake_identifier,
    ACTIONS(448), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3242] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_snake_identifier,
    ACTIONS(362), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      sym_snake_identifier,
    ACTIONS(452), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3264] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(458), 1,
      sym_snake_identifier,
    ACTIONS(456), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(462), 1,
      sym_snake_identifier,
    ACTIONS(460), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3286] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(466), 1,
      anon_sym_COMMA,
    ACTIONS(464), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3297] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_extends,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
    STATE(124), 1,
      sym_extends,
  [3310] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(438), 1,
      anon_sym_extends,
    ACTIONS(470), 1,
      anon_sym_LBRACE,
    STATE(135), 1,
      sym_extends,
  [3323] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 1,
      sym_snake_identifier,
    ACTIONS(472), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3334] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3342] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3350] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_RPAREN,
  [3357] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_RPAREN,
  [3364] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_COLON,
  [3371] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_RBRACK,
  [3378] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_LBRACE,
  [3385] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      anon_sym_interface,
  [3392] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      ts_builtin_sym_end,
  [3399] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_interface,
  [3406] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      anon_sym_LBRACE,
  [3413] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_LBRACE,
  [3420] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
  [3427] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_RPAREN,
  [3434] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_RBRACK,
  [3441] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(502), 1,
      anon_sym_RBRACE,
  [3448] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      anon_sym_COLON,
  [3455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_LBRACE,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 83,
  [SMALL_STATE(4)] = 168,
  [SMALL_STATE(5)] = 253,
  [SMALL_STATE(6)] = 336,
  [SMALL_STATE(7)] = 419,
  [SMALL_STATE(8)] = 502,
  [SMALL_STATE(9)] = 582,
  [SMALL_STATE(10)] = 662,
  [SMALL_STATE(11)] = 742,
  [SMALL_STATE(12)] = 819,
  [SMALL_STATE(13)] = 889,
  [SMALL_STATE(14)] = 956,
  [SMALL_STATE(15)] = 1023,
  [SMALL_STATE(16)] = 1081,
  [SMALL_STATE(17)] = 1133,
  [SMALL_STATE(18)] = 1164,
  [SMALL_STATE(19)] = 1195,
  [SMALL_STATE(20)] = 1226,
  [SMALL_STATE(21)] = 1257,
  [SMALL_STATE(22)] = 1306,
  [SMALL_STATE(23)] = 1337,
  [SMALL_STATE(24)] = 1368,
  [SMALL_STATE(25)] = 1399,
  [SMALL_STATE(26)] = 1448,
  [SMALL_STATE(27)] = 1479,
  [SMALL_STATE(28)] = 1510,
  [SMALL_STATE(29)] = 1541,
  [SMALL_STATE(30)] = 1572,
  [SMALL_STATE(31)] = 1603,
  [SMALL_STATE(32)] = 1634,
  [SMALL_STATE(33)] = 1665,
  [SMALL_STATE(34)] = 1696,
  [SMALL_STATE(35)] = 1737,
  [SMALL_STATE(36)] = 1768,
  [SMALL_STATE(37)] = 1799,
  [SMALL_STATE(38)] = 1840,
  [SMALL_STATE(39)] = 1868,
  [SMALL_STATE(40)] = 1896,
  [SMALL_STATE(41)] = 1924,
  [SMALL_STATE(42)] = 1954,
  [SMALL_STATE(43)] = 1982,
  [SMALL_STATE(44)] = 2010,
  [SMALL_STATE(45)] = 2038,
  [SMALL_STATE(46)] = 2068,
  [SMALL_STATE(47)] = 2097,
  [SMALL_STATE(48)] = 2125,
  [SMALL_STATE(49)] = 2151,
  [SMALL_STATE(50)] = 2177,
  [SMALL_STATE(51)] = 2202,
  [SMALL_STATE(52)] = 2229,
  [SMALL_STATE(53)] = 2254,
  [SMALL_STATE(54)] = 2279,
  [SMALL_STATE(55)] = 2306,
  [SMALL_STATE(56)] = 2332,
  [SMALL_STATE(57)] = 2363,
  [SMALL_STATE(58)] = 2394,
  [SMALL_STATE(59)] = 2416,
  [SMALL_STATE(60)] = 2438,
  [SMALL_STATE(61)] = 2460,
  [SMALL_STATE(62)] = 2482,
  [SMALL_STATE(63)] = 2504,
  [SMALL_STATE(64)] = 2526,
  [SMALL_STATE(65)] = 2548,
  [SMALL_STATE(66)] = 2570,
  [SMALL_STATE(67)] = 2592,
  [SMALL_STATE(68)] = 2613,
  [SMALL_STATE(69)] = 2634,
  [SMALL_STATE(70)] = 2653,
  [SMALL_STATE(71)] = 2674,
  [SMALL_STATE(72)] = 2688,
  [SMALL_STATE(73)] = 2706,
  [SMALL_STATE(74)] = 2724,
  [SMALL_STATE(75)] = 2742,
  [SMALL_STATE(76)] = 2758,
  [SMALL_STATE(77)] = 2772,
  [SMALL_STATE(78)] = 2786,
  [SMALL_STATE(79)] = 2800,
  [SMALL_STATE(80)] = 2814,
  [SMALL_STATE(81)] = 2828,
  [SMALL_STATE(82)] = 2846,
  [SMALL_STATE(83)] = 2864,
  [SMALL_STATE(84)] = 2879,
  [SMALL_STATE(85)] = 2894,
  [SMALL_STATE(86)] = 2909,
  [SMALL_STATE(87)] = 2922,
  [SMALL_STATE(88)] = 2938,
  [SMALL_STATE(89)] = 2950,
  [SMALL_STATE(90)] = 2966,
  [SMALL_STATE(91)] = 2982,
  [SMALL_STATE(92)] = 2998,
  [SMALL_STATE(93)] = 3014,
  [SMALL_STATE(94)] = 3028,
  [SMALL_STATE(95)] = 3044,
  [SMALL_STATE(96)] = 3060,
  [SMALL_STATE(97)] = 3074,
  [SMALL_STATE(98)] = 3086,
  [SMALL_STATE(99)] = 3100,
  [SMALL_STATE(100)] = 3112,
  [SMALL_STATE(101)] = 3124,
  [SMALL_STATE(102)] = 3140,
  [SMALL_STATE(103)] = 3156,
  [SMALL_STATE(104)] = 3172,
  [SMALL_STATE(105)] = 3186,
  [SMALL_STATE(106)] = 3196,
  [SMALL_STATE(107)] = 3209,
  [SMALL_STATE(108)] = 3220,
  [SMALL_STATE(109)] = 3231,
  [SMALL_STATE(110)] = 3242,
  [SMALL_STATE(111)] = 3253,
  [SMALL_STATE(112)] = 3264,
  [SMALL_STATE(113)] = 3275,
  [SMALL_STATE(114)] = 3286,
  [SMALL_STATE(115)] = 3297,
  [SMALL_STATE(116)] = 3310,
  [SMALL_STATE(117)] = 3323,
  [SMALL_STATE(118)] = 3334,
  [SMALL_STATE(119)] = 3342,
  [SMALL_STATE(120)] = 3350,
  [SMALL_STATE(121)] = 3357,
  [SMALL_STATE(122)] = 3364,
  [SMALL_STATE(123)] = 3371,
  [SMALL_STATE(124)] = 3378,
  [SMALL_STATE(125)] = 3385,
  [SMALL_STATE(126)] = 3392,
  [SMALL_STATE(127)] = 3399,
  [SMALL_STATE(128)] = 3406,
  [SMALL_STATE(129)] = 3413,
  [SMALL_STATE(130)] = 3420,
  [SMALL_STATE(131)] = 3427,
  [SMALL_STATE(132)] = 3434,
  [SMALL_STATE(133)] = 3441,
  [SMALL_STATE(134)] = 3448,
  [SMALL_STATE(135)] = 3455,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(127),
  [9] = {.count = 1, .reusable = false}, SHIFT(108),
  [11] = {.count = 1, .reusable = false}, SHIFT(75),
  [13] = {.count = 1, .reusable = true}, SHIFT(75),
  [15] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(10),
  [18] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2),
  [20] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(14),
  [23] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(6),
  [26] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(44),
  [29] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(87),
  [32] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(103),
  [35] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(72),
  [38] = {.count = 2, .reusable = false}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(44),
  [41] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(25),
  [44] = {.count = 1, .reusable = true}, SHIFT(10),
  [46] = {.count = 1, .reusable = true}, REDUCE(sym_expression_args, 3),
  [48] = {.count = 1, .reusable = true}, SHIFT(14),
  [50] = {.count = 1, .reusable = true}, SHIFT(6),
  [52] = {.count = 1, .reusable = true}, SHIFT(118),
  [54] = {.count = 1, .reusable = true}, SHIFT(44),
  [56] = {.count = 1, .reusable = true}, SHIFT(87),
  [58] = {.count = 1, .reusable = true}, SHIFT(103),
  [60] = {.count = 1, .reusable = true}, SHIFT(72),
  [62] = {.count = 1, .reusable = false}, SHIFT(44),
  [64] = {.count = 1, .reusable = true}, SHIFT(25),
  [66] = {.count = 1, .reusable = true}, REDUCE(sym_expression_args, 2),
  [68] = {.count = 1, .reusable = true}, SHIFT(119),
  [70] = {.count = 1, .reusable = true}, SHIFT(23),
  [72] = {.count = 1, .reusable = true}, SHIFT(33),
  [74] = {.count = 1, .reusable = true}, SHIFT(18),
  [76] = {.count = 1, .reusable = true}, REDUCE(sym_right_arrow_accessor, 3),
  [78] = {.count = 1, .reusable = false}, REDUCE(sym_right_arrow_accessor, 3),
  [80] = {.count = 1, .reusable = true}, REDUCE(sym_function_call, 3),
  [82] = {.count = 1, .reusable = false}, REDUCE(sym_function_call, 3),
  [84] = {.count = 1, .reusable = true}, REDUCE(sym_template_string, 3),
  [86] = {.count = 1, .reusable = false}, REDUCE(sym_template_string, 3),
  [88] = {.count = 1, .reusable = true}, REDUCE(sym_function_call, 4),
  [90] = {.count = 1, .reusable = false}, REDUCE(sym_function_call, 4),
  [92] = {.count = 1, .reusable = true}, SHIFT(40),
  [94] = {.count = 1, .reusable = false}, SHIFT(40),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_list, 3),
  [98] = {.count = 1, .reusable = false}, REDUCE(sym_list, 3),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_array_accessor, 3),
  [102] = {.count = 1, .reusable = false}, REDUCE(sym_array_accessor, 3),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_dot_accessor, 3),
  [106] = {.count = 1, .reusable = false}, REDUCE(sym_dot_accessor, 3),
  [108] = {.count = 1, .reusable = true}, SHIFT(29),
  [110] = {.count = 1, .reusable = true}, SHIFT(95),
  [112] = {.count = 1, .reusable = true}, SHIFT(94),
  [114] = {.count = 1, .reusable = true}, SHIFT(74),
  [116] = {.count = 1, .reusable = false}, SHIFT(29),
  [118] = {.count = 1, .reusable = true}, REDUCE(sym_array_accessor, 4),
  [120] = {.count = 1, .reusable = false}, REDUCE(sym_array_accessor, 4),
  [122] = {.count = 1, .reusable = true}, REDUCE(sym_non_literal_factor, 3),
  [124] = {.count = 1, .reusable = false}, REDUCE(sym_non_literal_factor, 3),
  [126] = {.count = 1, .reusable = true}, REDUCE(sym_simple_string, 2),
  [128] = {.count = 1, .reusable = false}, REDUCE(sym_simple_string, 2),
  [130] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [132] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [134] = {.count = 1, .reusable = true}, REDUCE(sym_template_string, 2),
  [136] = {.count = 1, .reusable = false}, REDUCE(sym_template_string, 2),
  [138] = {.count = 1, .reusable = true}, REDUCE(sym_simple_string, 3),
  [140] = {.count = 1, .reusable = false}, REDUCE(sym_simple_string, 3),
  [142] = {.count = 1, .reusable = true}, REDUCE(sym_list, 2),
  [144] = {.count = 1, .reusable = false}, REDUCE(sym_list, 2),
  [146] = {.count = 1, .reusable = true}, REDUCE(sym_multiplicative_expression, 1),
  [148] = {.count = 1, .reusable = true}, SHIFT(7),
  [150] = {.count = 1, .reusable = false}, REDUCE(sym_multiplicative_expression, 1),
  [152] = {.count = 1, .reusable = true}, SHIFT(107),
  [154] = {.count = 1, .reusable = true}, SHIFT(113),
  [156] = {.count = 1, .reusable = false}, SHIFT(111),
  [158] = {.count = 1, .reusable = true}, SHIFT(5),
  [160] = {.count = 1, .reusable = true}, REDUCE(sym_non_literal_factor, 1),
  [162] = {.count = 1, .reusable = false}, REDUCE(sym_non_literal_factor, 1),
  [164] = {.count = 1, .reusable = true}, REDUCE(sym_left_arrow_accessor, 3),
  [166] = {.count = 1, .reusable = false}, REDUCE(sym_left_arrow_accessor, 3),
  [168] = {.count = 1, .reusable = true}, REDUCE(sym_multiplicative_expression, 3),
  [170] = {.count = 1, .reusable = false}, REDUCE(sym_multiplicative_expression, 3),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_additive_expression, 3),
  [174] = {.count = 1, .reusable = false}, REDUCE(sym_additive_expression, 3),
  [176] = {.count = 1, .reusable = false}, SHIFT(21),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_additive_expression, 1),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym_additive_expression, 1),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym__arithmetic_expression, 1),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym__arithmetic_expression, 1),
  [186] = {.count = 1, .reusable = false}, SHIFT(16),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym_negation_expression, 1),
  [190] = {.count = 1, .reusable = false}, REDUCE(sym_negation_expression, 1),
  [192] = {.count = 1, .reusable = true}, SHIFT(15),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_relational_expression, 1),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym_relational_expression, 1),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_relational_expression, 3),
  [200] = {.count = 1, .reusable = false}, REDUCE(sym_relational_expression, 3),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_negation_expression, 2),
  [204] = {.count = 1, .reusable = false}, REDUCE(sym_negation_expression, 2),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction_expression, 3),
  [208] = {.count = 1, .reusable = false}, REDUCE(sym_disjunction_expression, 3),
  [210] = {.count = 1, .reusable = true}, SHIFT(13),
  [212] = {.count = 1, .reusable = true}, REDUCE(sym_conjuction_expression, 3),
  [214] = {.count = 1, .reusable = false}, REDUCE(sym_conjuction_expression, 3),
  [216] = {.count = 1, .reusable = true}, REDUCE(sym_conjuction_expression, 1),
  [218] = {.count = 1, .reusable = false}, REDUCE(sym_conjuction_expression, 1),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction_expression, 1),
  [222] = {.count = 1, .reusable = false}, REDUCE(sym_disjunction_expression, 1),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym__boolean_expression, 1),
  [226] = {.count = 1, .reusable = false}, REDUCE(sym__boolean_expression, 1),
  [228] = {.count = 1, .reusable = true}, SHIFT(12),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [232] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [234] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(127),
  [237] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(108),
  [240] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(75),
  [243] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(75),
  [246] = {.count = 1, .reusable = true}, SHIFT(76),
  [248] = {.count = 1, .reusable = true}, SHIFT(68),
  [250] = {.count = 1, .reusable = false}, SHIFT(68),
  [252] = {.count = 1, .reusable = true}, SHIFT(79),
  [254] = {.count = 1, .reusable = true}, SHIFT(80),
  [256] = {.count = 1, .reusable = true}, SHIFT(78),
  [258] = {.count = 1, .reusable = true}, REDUCE(aux_sym_interface_definition_repeat2, 2),
  [260] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interface_definition_repeat2, 2), SHIFT_REPEAT(68),
  [263] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interface_definition_repeat2, 2), SHIFT_REPEAT(68),
  [266] = {.count = 1, .reusable = true}, SHIFT(71),
  [268] = {.count = 1, .reusable = true}, SHIFT(122),
  [270] = {.count = 1, .reusable = true}, SHIFT(104),
  [272] = {.count = 1, .reusable = true}, SHIFT(8),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_decorator, 1),
  [276] = {.count = 1, .reusable = false}, REDUCE(sym_decorator, 1),
  [278] = {.count = 1, .reusable = true}, SHIFT(134),
  [280] = {.count = 1, .reusable = true}, SHIFT(93),
  [282] = {.count = 1, .reusable = false}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [284] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(75),
  [287] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(75),
  [290] = {.count = 1, .reusable = false}, SHIFT(125),
  [292] = {.count = 1, .reusable = false}, SHIFT(112),
  [294] = {.count = 1, .reusable = true}, REDUCE(sym_interface_definition, 6),
  [296] = {.count = 1, .reusable = false}, REDUCE(sym_interface_definition, 6),
  [298] = {.count = 1, .reusable = true}, SHIFT(81),
  [300] = {.count = 1, .reusable = true}, SHIFT(43),
  [302] = {.count = 1, .reusable = true}, SHIFT(11),
  [304] = {.count = 1, .reusable = true}, SHIFT(82),
  [306] = {.count = 1, .reusable = true}, SHIFT(19),
  [308] = {.count = 1, .reusable = true}, SHIFT(73),
  [310] = {.count = 1, .reusable = true}, SHIFT(31),
  [312] = {.count = 1, .reusable = true}, SHIFT(9),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_interface_definition, 5),
  [316] = {.count = 1, .reusable = false}, REDUCE(sym_interface_definition, 5),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_block, 1),
  [320] = {.count = 1, .reusable = false}, REDUCE(sym_block, 1),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_interface_definition, 8),
  [324] = {.count = 1, .reusable = false}, REDUCE(sym_interface_definition, 8),
  [326] = {.count = 1, .reusable = true}, REDUCE(sym_interface_definition, 7),
  [328] = {.count = 1, .reusable = false}, REDUCE(sym_interface_definition, 7),
  [330] = {.count = 1, .reusable = true}, REDUCE(sym_interface_definition, 4),
  [332] = {.count = 1, .reusable = false}, REDUCE(sym_interface_definition, 4),
  [334] = {.count = 1, .reusable = true}, SHIFT(39),
  [336] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_string_repeat1, 2), SHIFT_REPEAT(82),
  [339] = {.count = 1, .reusable = true}, REDUCE(aux_sym_template_string_repeat1, 2),
  [341] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_string_repeat1, 2), SHIFT_REPEAT(11),
  [344] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(96),
  [347] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(96),
  [350] = {.count = 1, .reusable = true}, REDUCE(sym_type_identifier, 1),
  [352] = {.count = 1, .reusable = true}, SHIFT(99),
  [354] = {.count = 1, .reusable = false}, REDUCE(sym_type_identifier, 1),
  [356] = {.count = 1, .reusable = true}, SHIFT(67),
  [358] = {.count = 1, .reusable = false}, SHIFT(67),
  [360] = {.count = 1, .reusable = false}, REDUCE(sym_decorator, 4),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_decorator, 4),
  [364] = {.count = 1, .reusable = false}, SHIFT(38),
  [366] = {.count = 1, .reusable = true}, SHIFT(92),
  [368] = {.count = 1, .reusable = false}, SHIFT(92),
  [370] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [372] = {.count = 1, .reusable = true}, REDUCE(sym_interface_prop, 3),
  [374] = {.count = 1, .reusable = false}, REDUCE(sym_interface_prop, 3),
  [376] = {.count = 1, .reusable = false}, SHIFT(32),
  [378] = {.count = 1, .reusable = true}, SHIFT(102),
  [380] = {.count = 1, .reusable = false}, SHIFT(102),
  [382] = {.count = 1, .reusable = true}, SHIFT(101),
  [384] = {.count = 1, .reusable = false}, SHIFT(101),
  [386] = {.count = 1, .reusable = false}, SHIFT(42),
  [388] = {.count = 1, .reusable = true}, SHIFT(84),
  [390] = {.count = 1, .reusable = false}, SHIFT(84),
  [392] = {.count = 1, .reusable = false}, SHIFT(28),
  [394] = {.count = 1, .reusable = true}, SHIFT(89),
  [396] = {.count = 1, .reusable = false}, SHIFT(89),
  [398] = {.count = 1, .reusable = true}, SHIFT(90),
  [400] = {.count = 1, .reusable = false}, SHIFT(90),
  [402] = {.count = 1, .reusable = true}, REDUCE(sym_interface_prop, 5),
  [404] = {.count = 1, .reusable = false}, REDUCE(sym_interface_prop, 5),
  [406] = {.count = 1, .reusable = true}, REDUCE(sym_type_identifier, 2),
  [408] = {.count = 1, .reusable = false}, REDUCE(sym_type_identifier, 2),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_interface_prop, 4),
  [412] = {.count = 1, .reusable = false}, REDUCE(sym_interface_prop, 4),
  [414] = {.count = 1, .reusable = false}, REDUCE(aux_sym_simple_string_repeat1, 2),
  [416] = {.count = 2, .reusable = true}, REDUCE(aux_sym_simple_string_repeat1, 2), SHIFT_REPEAT(101),
  [419] = {.count = 2, .reusable = false}, REDUCE(aux_sym_simple_string_repeat1, 2), SHIFT_REPEAT(101),
  [422] = {.count = 1, .reusable = false}, REDUCE(aux_sym_simple_string_repeat2, 2),
  [424] = {.count = 2, .reusable = true}, REDUCE(aux_sym_simple_string_repeat2, 2), SHIFT_REPEAT(102),
  [427] = {.count = 2, .reusable = false}, REDUCE(aux_sym_simple_string_repeat2, 2), SHIFT_REPEAT(102),
  [430] = {.count = 1, .reusable = true}, SHIFT(91),
  [432] = {.count = 1, .reusable = false}, SHIFT(91),
  [434] = {.count = 1, .reusable = true}, REDUCE(sym_template_substitution, 3),
  [436] = {.count = 1, .reusable = true}, SHIFT(58),
  [438] = {.count = 1, .reusable = true}, SHIFT(109),
  [440] = {.count = 1, .reusable = true}, SHIFT(36),
  [442] = {.count = 1, .reusable = false}, SHIFT(36),
  [444] = {.count = 1, .reusable = true}, SHIFT(116),
  [446] = {.count = 1, .reusable = false}, SHIFT(116),
  [448] = {.count = 1, .reusable = true}, SHIFT(129),
  [450] = {.count = 1, .reusable = false}, SHIFT(129),
  [452] = {.count = 1, .reusable = true}, SHIFT(24),
  [454] = {.count = 1, .reusable = false}, SHIFT(24),
  [456] = {.count = 1, .reusable = true}, SHIFT(106),
  [458] = {.count = 1, .reusable = false}, SHIFT(106),
  [460] = {.count = 1, .reusable = true}, SHIFT(17),
  [462] = {.count = 1, .reusable = false}, SHIFT(17),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym_expression_args, 1),
  [466] = {.count = 1, .reusable = true}, SHIFT(4),
  [468] = {.count = 1, .reusable = true}, SHIFT(66),
  [470] = {.count = 1, .reusable = true}, SHIFT(61),
  [472] = {.count = 1, .reusable = true}, SHIFT(115),
  [474] = {.count = 1, .reusable = false}, SHIFT(115),
  [476] = {.count = 1, .reusable = true}, REDUCE(sym_expression_args, 4),
  [478] = {.count = 1, .reusable = true}, SHIFT(20),
  [480] = {.count = 1, .reusable = true}, SHIFT(86),
  [482] = {.count = 1, .reusable = true}, SHIFT(98),
  [484] = {.count = 1, .reusable = true}, SHIFT(26),
  [486] = {.count = 1, .reusable = true}, SHIFT(62),
  [488] = {.count = 1, .reusable = true}, SHIFT(117),
  [490] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [492] = {.count = 1, .reusable = true}, SHIFT(112),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_extends, 2),
  [496] = {.count = 1, .reusable = true}, SHIFT(27),
  [498] = {.count = 1, .reusable = true}, SHIFT(110),
  [500] = {.count = 1, .reusable = true}, SHIFT(22),
  [502] = {.count = 1, .reusable = true}, SHIFT(105),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_morph_external_scanner_create(void);
void tree_sitter_morph_external_scanner_destroy(void *);
bool tree_sitter_morph_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_morph_external_scanner_serialize(void *, char *);
void tree_sitter_morph_external_scanner_deserialize(void *, const char *, unsigned);

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
    .external_scanner = {
      (const bool *)ts_external_scanner_states,
      ts_external_scanner_symbol_map,
      tree_sitter_morph_external_scanner_create,
      tree_sitter_morph_external_scanner_destroy,
      tree_sitter_morph_external_scanner_scan,
      tree_sitter_morph_external_scanner_serialize,
      tree_sitter_morph_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
