#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 200
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 81
#define ALIAS_COUNT 0
#define TOKEN_COUNT 42
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
  sym_decorator_identifier = 31,
  sym_integer = 32,
  sym_float = 33,
  sym_additive_operator = 34,
  sym_disjunction_operator = 35,
  sym_conjuction_operator = 36,
  sym_unary_operator = 37,
  sym_multiplicative_operator = 38,
  sym_relational_operator = 39,
  sym__automatic_semicolon = 40,
  sym__template_chars = 41,
  sym_program = 42,
  sym_block = 43,
  sym_interface_definition = 44,
  sym_interface_prop = 45,
  sym_type_identifier = 46,
  sym_decorator = 47,
  sym_decorator_args = 48,
  sym_extends = 49,
  sym__expression = 50,
  sym__boolean_expression = 51,
  sym_disjunction_expression = 52,
  sym_conjuction_expression = 53,
  sym_negation_expression = 54,
  sym_relational_expression = 55,
  sym__arithmetic_expression = 56,
  sym_additive_expression = 57,
  sym_multiplicative_expression = 58,
  sym_non_literal_factor = 59,
  sym_left_arrow_accessor = 60,
  sym_right_arrow_accessor = 61,
  sym_dot_accessor = 62,
  sym_function_call = 63,
  sym_array_accessor = 64,
  sym_unary_expression = 65,
  sym_list = 66,
  sym_expression_args = 67,
  sym__literal = 68,
  sym__number = 69,
  sym__string = 70,
  sym_simple_string = 71,
  sym_template_string = 72,
  sym_template_substitution = 73,
  aux_sym_program_repeat1 = 74,
  aux_sym_interface_definition_repeat1 = 75,
  aux_sym_interface_definition_repeat2 = 76,
  aux_sym_expression_args_repeat1 = 77,
  aux_sym_simple_string_repeat1 = 78,
  aux_sym_simple_string_repeat2 = 79,
  aux_sym_template_string_repeat1 = 80,
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
  [sym_decorator_identifier] = "decorator_identifier",
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
  [sym_decorator_args] = "decorator_args",
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
  [sym_decorator_identifier] = sym_decorator_identifier,
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
  [sym_decorator_args] = sym_decorator_args,
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
  [sym_decorator_identifier] = {
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
  [sym_decorator_args] = {
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
      if (eof) ADVANCE(79);
      if (lookahead == '!') ADVANCE(86);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(167);
      if (lookahead == '&') ADVANCE(168);
      if (lookahead == '\'') ADVANCE(112);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '+') ADVANCE(161);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '0') ADVANCE(151);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '<') ADVANCE(171);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(172);
      if (lookahead == '@') ADVANCE(76);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == '\\') ADVANCE(59);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '`') ADVANCE(126);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(43);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(77)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(12)
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(110);
      if (lookahead != 0) ADVANCE(111);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(106);
      if (lookahead == '\r') ADVANCE(120);
      if (lookahead == 'u') ADVANCE(63);
      if (lookahead == 'x') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(123);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(14)
      if (lookahead == '\'') ADVANCE(112);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(117);
      if (lookahead != 0) ADVANCE(118);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(113);
      if (lookahead == '\r') ADVANCE(121);
      if (lookahead == 'u') ADVANCE(63);
      if (lookahead == 'x') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(123);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(112);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(166);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '0') ADVANCE(151);
      if (lookahead == '<') ADVANCE(172);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(172);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == '`') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '|') ADVANCE(64);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(167);
      if (lookahead == '&') ADVANCE(168);
      if (lookahead == '\'') ADVANCE(112);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '+') ADVANCE(161);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '0') ADVANCE(151);
      if (lookahead == '<') ADVANCE(171);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(172);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == '`') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(167);
      if (lookahead == '&') ADVANCE(168);
      if (lookahead == '\'') ADVANCE(112);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(161);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '0') ADVANCE(151);
      if (lookahead == '<') ADVANCE(172);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(172);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == '`') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'i') ADVANCE(132);
      if (lookahead == 'n') ADVANCE(136);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(7)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(167);
      if (lookahead == '&') ADVANCE(168);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '+') ADVANCE(161);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '.') ADVANCE(96);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '<') ADVANCE(171);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(172);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(8)
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(19);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(167);
      if (lookahead == '&') ADVANCE(168);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(161);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '<') ADVANCE(172);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(172);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(45);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '}') ADVANCE(83);
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
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '&') ADVANCE(13);
      if (lookahead == '\'') ADVANCE(112);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(166);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '0') ADVANCE(151);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == '`') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 'n') ADVANCE(135);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '|') ADVANCE(64);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      END_STATE();
    case 11:
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '\'') ADVANCE(112);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(166);
      if (lookahead == '.') ADVANCE(69);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '0') ADVANCE(151);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == '`') ADVANCE(126);
      if (lookahead == 'f') ADVANCE(128);
      if (lookahead == 't') ADVANCE(138);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(11)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      END_STATE();
    case 12:
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(12)
      END_STATE();
    case 13:
      if (lookahead == '&') ADVANCE(165);
      END_STATE();
    case 14:
      if (lookahead == '\'') ADVANCE(112);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(14)
      END_STATE();
    case 15:
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == '@') ADVANCE(76);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == '_') ADVANCE(146);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(15)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 16:
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(125);
      END_STATE();
    case 17:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead == '/') ADVANCE(124);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == '*') ADVANCE(17);
      if (lookahead != 0) ADVANCE(18);
      END_STATE();
    case 19:
      if (lookahead == '=') ADVANCE(170);
      END_STATE();
    case 20:
      if (lookahead == ']') ADVANCE(84);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(153);
      END_STATE();
    case 22:
      if (lookahead == '_') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(154);
      END_STATE();
    case 23:
      if (lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(38);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(28);
      END_STATE();
    case 26:
      if (lookahead == 'a') ADVANCE(29);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(50);
      END_STATE();
    case 28:
      if (lookahead == 'c') ADVANCE(55);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(34);
      END_STATE();
    case 30:
      if (lookahead == 'd') ADVANCE(49);
      END_STATE();
    case 31:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 32:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 33:
      if (lookahead == 'e') ADVANCE(101);
      END_STATE();
    case 34:
      if (lookahead == 'e') ADVANCE(81);
      END_STATE();
    case 35:
      if (lookahead == 'e') ADVANCE(47);
      END_STATE();
    case 36:
      if (lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 37:
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 38:
      if (lookahead == 'l') ADVANCE(51);
      END_STATE();
    case 39:
      if (lookahead == 'n') ADVANCE(170);
      END_STATE();
    case 40:
      if (lookahead == 'n') ADVANCE(170);
      if (lookahead == 's') ADVANCE(173);
      END_STATE();
    case 41:
      if (lookahead == 'n') ADVANCE(30);
      END_STATE();
    case 42:
      if (lookahead == 'n') ADVANCE(58);
      END_STATE();
    case 43:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 44:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 45:
      if (lookahead == 'o') ADVANCE(56);
      END_STATE();
    case 46:
      if (lookahead == 'r') ADVANCE(60);
      END_STATE();
    case 47:
      if (lookahead == 'r') ADVANCE(36);
      END_STATE();
    case 48:
      if (lookahead == 'r') ADVANCE(25);
      END_STATE();
    case 49:
      if (lookahead == 's') ADVANCE(90);
      END_STATE();
    case 50:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 51:
      if (lookahead == 's') ADVANCE(33);
      END_STATE();
    case 52:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 53:
      if (lookahead == 't') ADVANCE(31);
      END_STATE();
    case 54:
      if (lookahead == 't') ADVANCE(91);
      END_STATE();
    case 55:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 56:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 57:
      if (lookahead == 't') ADVANCE(48);
      END_STATE();
    case 58:
      if (lookahead == 't') ADVANCE(35);
      END_STATE();
    case 59:
      if (lookahead == 'u') ADVANCE(63);
      if (lookahead == 'x') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(123);
      if (lookahead != 0) ADVANCE(119);
      END_STATE();
    case 60:
      if (lookahead == 'u') ADVANCE(32);
      END_STATE();
    case 61:
      if (lookahead == 'x') ADVANCE(53);
      END_STATE();
    case 62:
      if (lookahead == '{') ADVANCE(127);
      END_STATE();
    case 63:
      if (lookahead == '{') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(71);
      END_STATE();
    case 64:
      if (lookahead == '|') ADVANCE(164);
      END_STATE();
    case 65:
      if (lookahead == '}') ADVANCE(119);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 66:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 67:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(153);
      END_STATE();
    case 68:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(154);
      END_STATE();
    case 69:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 70:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 71:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(75);
      END_STATE();
    case 72:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(119);
      END_STATE();
    case 73:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 74:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(65);
      END_STATE();
    case 75:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(72);
      END_STATE();
    case 76:
      if (lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 77:
      if (eof) ADVANCE(79);
      if (lookahead == '!') ADVANCE(86);
      if (lookahead == '"') ADVANCE(105);
      if (lookahead == '$') ADVANCE(62);
      if (lookahead == '%' ||
          lookahead == '*') ADVANCE(167);
      if (lookahead == '&') ADVANCE(168);
      if (lookahead == '\'') ADVANCE(112);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == ')') ADVANCE(89);
      if (lookahead == '+') ADVANCE(161);
      if (lookahead == ',') ADVANCE(100);
      if (lookahead == '-') ADVANCE(162);
      if (lookahead == '.') ADVANCE(97);
      if (lookahead == '/') ADVANCE(169);
      if (lookahead == '0') ADVANCE(151);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '<') ADVANCE(171);
      if (lookahead == '=') ADVANCE(19);
      if (lookahead == '>') ADVANCE(172);
      if (lookahead == '@') ADVANCE(76);
      if (lookahead == '[') ADVANCE(98);
      if (lookahead == ']') ADVANCE(99);
      if (lookahead == '`') ADVANCE(126);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'e') ADVANCE(61);
      if (lookahead == 'f') ADVANCE(24);
      if (lookahead == 'i') ADVANCE(40);
      if (lookahead == 'n') ADVANCE(43);
      if (lookahead == 't') ADVANCE(46);
      if (lookahead == '{') ADVANCE(82);
      if (lookahead == '|') ADVANCE(163);
      if (lookahead == '}') ADVANCE(83);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(77)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(150);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(147);
      END_STATE();
    case 78:
      if (eof) ADVANCE(79);
      if (lookahead == '!') ADVANCE(85);
      if (lookahead == '(') ADVANCE(88);
      if (lookahead == '/') ADVANCE(16);
      if (lookahead == ':') ADVANCE(87);
      if (lookahead == '@') ADVANCE(76);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'i') ADVANCE(42);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(78)
      END_STATE();
    case 79:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(anon_sym_interface);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(anon_sym_LBRACK_RBRACK);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(anon_sym_BANG);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(anon_sym_BANG);
      if (lookahead == '=') ADVANCE(170);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'i') ADVANCE(39);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(anon_sym_not);
      if (lookahead == 'i') ADVANCE(133);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(anon_sym_not);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(anon_sym_LT_DASH);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(sym_false);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(sym_true);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_simple_string_token1);
      END_STATE();
    case 107:
      ACCEPT_TOKEN(aux_sym_simple_string_token1);
      if (lookahead == '*') ADVANCE(109);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(111);
      END_STATE();
    case 108:
      ACCEPT_TOKEN(aux_sym_simple_string_token1);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead == '/') ADVANCE(111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(109);
      END_STATE();
    case 109:
      ACCEPT_TOKEN(aux_sym_simple_string_token1);
      if (lookahead == '*') ADVANCE(108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(109);
      END_STATE();
    case 110:
      ACCEPT_TOKEN(aux_sym_simple_string_token1);
      if (lookahead == '/') ADVANCE(107);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(111);
      END_STATE();
    case 111:
      ACCEPT_TOKEN(aux_sym_simple_string_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(111);
      END_STATE();
    case 112:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 113:
      ACCEPT_TOKEN(aux_sym_simple_string_token2);
      END_STATE();
    case 114:
      ACCEPT_TOKEN(aux_sym_simple_string_token2);
      if (lookahead == '*') ADVANCE(116);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(118);
      END_STATE();
    case 115:
      ACCEPT_TOKEN(aux_sym_simple_string_token2);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead == '/') ADVANCE(118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(116);
      END_STATE();
    case 116:
      ACCEPT_TOKEN(aux_sym_simple_string_token2);
      if (lookahead == '*') ADVANCE(115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(116);
      END_STATE();
    case 117:
      ACCEPT_TOKEN(aux_sym_simple_string_token2);
      if (lookahead == '/') ADVANCE(114);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(118);
      END_STATE();
    case 118:
      ACCEPT_TOKEN(aux_sym_simple_string_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(118);
      END_STATE();
    case 119:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(106);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n') ADVANCE(113);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(119);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(122);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(125);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'a') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'e') ADVANCE(104);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'e') ADVANCE(102);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'l') ADVANCE(139);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'n') ADVANCE(144);
      if (lookahead == 's') ADVANCE(134);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'n') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'n') ADVANCE(137);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'o') ADVANCE(141);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'o') ADVANCE(142);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'o') ADVANCE(140);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'r') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 's') ADVANCE(130);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 't') ADVANCE(144);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 't') ADVANCE(93);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 't') ADVANCE(92);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (lookahead == 'u') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(145);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(144);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(sym_camel_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(145);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(sym_snake_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(146);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(sym_pascal_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(147);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(sym_decorator_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(148);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(sym_integer);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == '_') ADVANCE(152);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(21);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(22);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(23);
      if (lookahead == '_') ADVANCE(152);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '.') ADVANCE(159);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(150);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(67);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(153);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(68);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(154);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(sym_integer);
      if (lookahead == '_') ADVANCE(73);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(149);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(155);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(sym_float);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(159);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == '_') ADVANCE(160);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(66);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(157);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(sym_float);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(156);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(158);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(sym_additive_operator);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(sym_additive_operator);
      if (lookahead == '>') ADVANCE(94);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(sym_additive_operator);
      if (lookahead == '|') ADVANCE(164);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(sym_disjunction_operator);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(sym_conjuction_operator);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(sym_unary_operator);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '&') ADVANCE(165);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(sym_multiplicative_operator);
      if (lookahead == '*') ADVANCE(18);
      if (lookahead == '/') ADVANCE(125);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_relational_operator);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '-') ADVANCE(95);
      if (lookahead == '=') ADVANCE(170);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == '=') ADVANCE(170);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_relational_operator);
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 78},
  [2] = {.lex_state = 10},
  [3] = {.lex_state = 10},
  [4] = {.lex_state = 10},
  [5] = {.lex_state = 10},
  [6] = {.lex_state = 10},
  [7] = {.lex_state = 10},
  [8] = {.lex_state = 10},
  [9] = {.lex_state = 10},
  [10] = {.lex_state = 10},
  [11] = {.lex_state = 10},
  [12] = {.lex_state = 10},
  [13] = {.lex_state = 10},
  [14] = {.lex_state = 10},
  [15] = {.lex_state = 10},
  [16] = {.lex_state = 10},
  [17] = {.lex_state = 10},
  [18] = {.lex_state = 10},
  [19] = {.lex_state = 10},
  [20] = {.lex_state = 10},
  [21] = {.lex_state = 10},
  [22] = {.lex_state = 11},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 11},
  [26] = {.lex_state = 11},
  [27] = {.lex_state = 11},
  [28] = {.lex_state = 11},
  [29] = {.lex_state = 11},
  [30] = {.lex_state = 6},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 6},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 6},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 6},
  [39] = {.lex_state = 6},
  [40] = {.lex_state = 6},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 6},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 7},
  [49] = {.lex_state = 7},
  [50] = {.lex_state = 7},
  [51] = {.lex_state = 7},
  [52] = {.lex_state = 7},
  [53] = {.lex_state = 7},
  [54] = {.lex_state = 7},
  [55] = {.lex_state = 7},
  [56] = {.lex_state = 7},
  [57] = {.lex_state = 10},
  [58] = {.lex_state = 10},
  [59] = {.lex_state = 5},
  [60] = {.lex_state = 10},
  [61] = {.lex_state = 5},
  [62] = {.lex_state = 5},
  [63] = {.lex_state = 10},
  [64] = {.lex_state = 10},
  [65] = {.lex_state = 10},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 8},
  [69] = {.lex_state = 8},
  [70] = {.lex_state = 8},
  [71] = {.lex_state = 8},
  [72] = {.lex_state = 8},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 8},
  [75] = {.lex_state = 8},
  [76] = {.lex_state = 8},
  [77] = {.lex_state = 8},
  [78] = {.lex_state = 8},
  [79] = {.lex_state = 8},
  [80] = {.lex_state = 8},
  [81] = {.lex_state = 8},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 8},
  [84] = {.lex_state = 9},
  [85] = {.lex_state = 78},
  [86] = {.lex_state = 9},
  [87] = {.lex_state = 15},
  [88] = {.lex_state = 9},
  [89] = {.lex_state = 15},
  [90] = {.lex_state = 9},
  [91] = {.lex_state = 15},
  [92] = {.lex_state = 9},
  [93] = {.lex_state = 9},
  [94] = {.lex_state = 15},
  [95] = {.lex_state = 15},
  [96] = {.lex_state = 9},
  [97] = {.lex_state = 9},
  [98] = {.lex_state = 15},
  [99] = {.lex_state = 78},
  [100] = {.lex_state = 15},
  [101] = {.lex_state = 15},
  [102] = {.lex_state = 15},
  [103] = {.lex_state = 9},
  [104] = {.lex_state = 9},
  [105] = {.lex_state = 9},
  [106] = {.lex_state = 9},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 15},
  [109] = {.lex_state = 0, .external_lex_state = 2},
  [110] = {.lex_state = 0, .external_lex_state = 2},
  [111] = {.lex_state = 15},
  [112] = {.lex_state = 0, .external_lex_state = 2},
  [113] = {.lex_state = 0, .external_lex_state = 2},
  [114] = {.lex_state = 0, .external_lex_state = 2},
  [115] = {.lex_state = 0, .external_lex_state = 2},
  [116] = {.lex_state = 0, .external_lex_state = 2},
  [117] = {.lex_state = 15},
  [118] = {.lex_state = 0, .external_lex_state = 2},
  [119] = {.lex_state = 0, .external_lex_state = 2},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 15},
  [122] = {.lex_state = 78},
  [123] = {.lex_state = 15},
  [124] = {.lex_state = 15},
  [125] = {.lex_state = 15},
  [126] = {.lex_state = 15},
  [127] = {.lex_state = 78},
  [128] = {.lex_state = 0},
  [129] = {.lex_state = 78},
  [130] = {.lex_state = 15},
  [131] = {.lex_state = 0, .external_lex_state = 2},
  [132] = {.lex_state = 1},
  [133] = {.lex_state = 3},
  [134] = {.lex_state = 3},
  [135] = {.lex_state = 3},
  [136] = {.lex_state = 1},
  [137] = {.lex_state = 1},
  [138] = {.lex_state = 3},
  [139] = {.lex_state = 1},
  [140] = {.lex_state = 3},
  [141] = {.lex_state = 78},
  [142] = {.lex_state = 15},
  [143] = {.lex_state = 1},
  [144] = {.lex_state = 3},
  [145] = {.lex_state = 1},
  [146] = {.lex_state = 78},
  [147] = {.lex_state = 3},
  [148] = {.lex_state = 78},
  [149] = {.lex_state = 15},
  [150] = {.lex_state = 78},
  [151] = {.lex_state = 15},
  [152] = {.lex_state = 78},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 78},
  [155] = {.lex_state = 15},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 1},
  [158] = {.lex_state = 3},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 15},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 15},
  [164] = {.lex_state = 15},
  [165] = {.lex_state = 78},
  [166] = {.lex_state = 78},
  [167] = {.lex_state = 15},
  [168] = {.lex_state = 15},
  [169] = {.lex_state = 15},
  [170] = {.lex_state = 15},
  [171] = {.lex_state = 78},
  [172] = {.lex_state = 78},
  [173] = {.lex_state = 15},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 15},
  [177] = {.lex_state = 15},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 78},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 0},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 78},
  [199] = {.lex_state = 0},
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
    [sym_decorator_identifier] = ACTIONS(1),
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
    [sym_program] = STATE(197),
    [sym_block] = STATE(99),
    [sym_interface_definition] = STATE(146),
    [sym_decorator] = STATE(127),
    [aux_sym_program_repeat1] = STATE(99),
    [aux_sym_interface_definition_repeat1] = STATE(127),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_abstract] = ACTIONS(7),
    [anon_sym_interface] = ACTIONS(9),
    [sym_comment] = ACTIONS(3),
    [sym_decorator_identifier] = ACTIONS(11),
  },
  [2] = {
    [sym__expression] = STATE(3),
    [sym__boolean_expression] = STATE(3),
    [sym_disjunction_expression] = STATE(65),
    [sym_conjuction_expression] = STATE(63),
    [sym_negation_expression] = STATE(57),
    [sym_relational_expression] = STATE(62),
    [sym__arithmetic_expression] = STATE(61),
    [sym_additive_expression] = STATE(56),
    [sym_multiplicative_expression] = STATE(52),
    [sym_non_literal_factor] = STATE(34),
    [sym_left_arrow_accessor] = STATE(32),
    [sym_right_arrow_accessor] = STATE(32),
    [sym_dot_accessor] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_array_accessor] = STATE(32),
    [sym_unary_expression] = STATE(32),
    [sym_list] = STATE(32),
    [sym__literal] = STATE(53),
    [sym__number] = STATE(53),
    [sym__string] = STATE(53),
    [sym_simple_string] = STATE(53),
    [sym_template_string] = STATE(53),
    [aux_sym_expression_args_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(15),
    [anon_sym_not] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(15),
    [anon_sym_COMMA] = ACTIONS(21),
    [sym_false] = ACTIONS(23),
    [sym_true] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [sym_camel_identifier] = ACTIONS(31),
    [sym_snake_identifier] = ACTIONS(31),
    [sym_pascal_identifier] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [sym_float] = ACTIONS(35),
    [sym_unary_operator] = ACTIONS(37),
  },
  [3] = {
    [sym__expression] = STATE(3),
    [sym__boolean_expression] = STATE(3),
    [sym_disjunction_expression] = STATE(65),
    [sym_conjuction_expression] = STATE(63),
    [sym_negation_expression] = STATE(57),
    [sym_relational_expression] = STATE(62),
    [sym__arithmetic_expression] = STATE(61),
    [sym_additive_expression] = STATE(56),
    [sym_multiplicative_expression] = STATE(52),
    [sym_non_literal_factor] = STATE(34),
    [sym_left_arrow_accessor] = STATE(32),
    [sym_right_arrow_accessor] = STATE(32),
    [sym_dot_accessor] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_array_accessor] = STATE(32),
    [sym_unary_expression] = STATE(32),
    [sym_list] = STATE(32),
    [sym__literal] = STATE(53),
    [sym__number] = STATE(53),
    [sym__string] = STATE(53),
    [sym_simple_string] = STATE(53),
    [sym_template_string] = STATE(53),
    [aux_sym_expression_args_repeat1] = STATE(3),
    [anon_sym_LPAREN] = ACTIONS(39),
    [anon_sym_RPAREN] = ACTIONS(42),
    [anon_sym_not] = ACTIONS(44),
    [anon_sym_LBRACK] = ACTIONS(47),
    [anon_sym_RBRACK] = ACTIONS(42),
    [anon_sym_COMMA] = ACTIONS(42),
    [sym_false] = ACTIONS(50),
    [sym_true] = ACTIONS(50),
    [anon_sym_DQUOTE] = ACTIONS(53),
    [anon_sym_SQUOTE] = ACTIONS(56),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(59),
    [sym_camel_identifier] = ACTIONS(62),
    [sym_snake_identifier] = ACTIONS(62),
    [sym_pascal_identifier] = ACTIONS(65),
    [sym_integer] = ACTIONS(50),
    [sym_float] = ACTIONS(68),
    [sym_unary_operator] = ACTIONS(71),
  },
  [4] = {
    [sym__expression] = STATE(2),
    [sym__boolean_expression] = STATE(2),
    [sym_disjunction_expression] = STATE(65),
    [sym_conjuction_expression] = STATE(63),
    [sym_negation_expression] = STATE(57),
    [sym_relational_expression] = STATE(62),
    [sym__arithmetic_expression] = STATE(61),
    [sym_additive_expression] = STATE(56),
    [sym_multiplicative_expression] = STATE(52),
    [sym_non_literal_factor] = STATE(34),
    [sym_left_arrow_accessor] = STATE(32),
    [sym_right_arrow_accessor] = STATE(32),
    [sym_dot_accessor] = STATE(32),
    [sym_function_call] = STATE(32),
    [sym_array_accessor] = STATE(32),
    [sym_unary_expression] = STATE(32),
    [sym_list] = STATE(32),
    [sym__literal] = STATE(53),
    [sym__number] = STATE(53),
    [sym__string] = STATE(53),
    [sym_simple_string] = STATE(53),
    [sym_template_string] = STATE(53),
    [aux_sym_expression_args_repeat1] = STATE(2),
    [anon_sym_LPAREN] = ACTIONS(13),
    [anon_sym_RPAREN] = ACTIONS(74),
    [anon_sym_not] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(19),
    [anon_sym_RBRACK] = ACTIONS(74),
    [anon_sym_COMMA] = ACTIONS(76),
    [sym_false] = ACTIONS(23),
    [sym_true] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(25),
    [anon_sym_SQUOTE] = ACTIONS(27),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [sym_camel_identifier] = ACTIONS(31),
    [sym_snake_identifier] = ACTIONS(31),
    [sym_pascal_identifier] = ACTIONS(33),
    [sym_integer] = ACTIONS(23),
    [sym_float] = ACTIONS(35),
    [sym_unary_operator] = ACTIONS(37),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_not,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(84), 1,
      anon_sym_RBRACK,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      anon_sym_BQUOTE,
    ACTIONS(96), 1,
      sym_pascal_identifier,
    ACTIONS(98), 1,
      sym_float,
    ACTIONS(100), 1,
      sym_unary_operator,
    STATE(57), 1,
      sym_negation_expression,
    STATE(83), 1,
      sym_non_literal_factor,
    STATE(93), 1,
      sym_multiplicative_expression,
    STATE(103), 1,
      sym_additive_expression,
    STATE(105), 1,
      sym_relational_expression,
    STATE(106), 1,
      sym__arithmetic_expression,
    STATE(107), 1,
      sym_conjuction_expression,
    STATE(128), 1,
      sym_disjunction_expression,
    STATE(188), 1,
      sym_expression_args,
    ACTIONS(94), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    STATE(174), 2,
      sym__expression,
      sym__boolean_expression,
    ACTIONS(86), 3,
      sym_false,
      sym_true,
      sym_integer,
    STATE(90), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(73), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [90] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_not,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      anon_sym_BQUOTE,
    ACTIONS(96), 1,
      sym_pascal_identifier,
    ACTIONS(98), 1,
      sym_float,
    ACTIONS(100), 1,
      sym_unary_operator,
    ACTIONS(102), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_negation_expression,
    STATE(83), 1,
      sym_non_literal_factor,
    STATE(93), 1,
      sym_multiplicative_expression,
    STATE(103), 1,
      sym_additive_expression,
    STATE(105), 1,
      sym_relational_expression,
    STATE(106), 1,
      sym__arithmetic_expression,
    STATE(107), 1,
      sym_conjuction_expression,
    STATE(128), 1,
      sym_disjunction_expression,
    STATE(187), 1,
      sym_expression_args,
    ACTIONS(94), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    STATE(174), 2,
      sym__expression,
      sym__boolean_expression,
    ACTIONS(86), 3,
      sym_false,
      sym_true,
      sym_integer,
    STATE(90), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(73), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [180] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_not,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      anon_sym_BQUOTE,
    ACTIONS(96), 1,
      sym_pascal_identifier,
    ACTIONS(98), 1,
      sym_float,
    ACTIONS(100), 1,
      sym_unary_operator,
    ACTIONS(104), 1,
      anon_sym_RBRACK,
    STATE(57), 1,
      sym_negation_expression,
    STATE(83), 1,
      sym_non_literal_factor,
    STATE(93), 1,
      sym_multiplicative_expression,
    STATE(103), 1,
      sym_additive_expression,
    STATE(105), 1,
      sym_relational_expression,
    STATE(106), 1,
      sym__arithmetic_expression,
    STATE(107), 1,
      sym_conjuction_expression,
    STATE(128), 1,
      sym_disjunction_expression,
    STATE(195), 1,
      sym_expression_args,
    ACTIONS(94), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    STATE(174), 2,
      sym__expression,
      sym__boolean_expression,
    ACTIONS(86), 3,
      sym_false,
      sym_true,
      sym_integer,
    STATE(90), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(73), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [270] = 25,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_not,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      anon_sym_BQUOTE,
    ACTIONS(96), 1,
      sym_pascal_identifier,
    ACTIONS(98), 1,
      sym_float,
    ACTIONS(100), 1,
      sym_unary_operator,
    ACTIONS(106), 1,
      anon_sym_RPAREN,
    STATE(57), 1,
      sym_negation_expression,
    STATE(83), 1,
      sym_non_literal_factor,
    STATE(93), 1,
      sym_multiplicative_expression,
    STATE(103), 1,
      sym_additive_expression,
    STATE(105), 1,
      sym_relational_expression,
    STATE(106), 1,
      sym__arithmetic_expression,
    STATE(107), 1,
      sym_conjuction_expression,
    STATE(128), 1,
      sym_disjunction_expression,
    STATE(183), 1,
      sym_expression_args,
    ACTIONS(94), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    STATE(174), 2,
      sym__expression,
      sym__boolean_expression,
    ACTIONS(86), 3,
      sym_false,
      sym_true,
      sym_integer,
    STATE(90), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(73), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [360] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_not,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      anon_sym_BQUOTE,
    ACTIONS(96), 1,
      sym_pascal_identifier,
    ACTIONS(98), 1,
      sym_float,
    ACTIONS(100), 1,
      sym_unary_operator,
    STATE(57), 1,
      sym_negation_expression,
    STATE(83), 1,
      sym_non_literal_factor,
    STATE(93), 1,
      sym_multiplicative_expression,
    STATE(103), 1,
      sym_additive_expression,
    STATE(105), 1,
      sym_relational_expression,
    STATE(106), 1,
      sym__arithmetic_expression,
    STATE(107), 1,
      sym_conjuction_expression,
    STATE(128), 1,
      sym_disjunction_expression,
    STATE(190), 1,
      sym_expression_args,
    ACTIONS(94), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    STATE(174), 2,
      sym__expression,
      sym__boolean_expression,
    ACTIONS(86), 3,
      sym_false,
      sym_true,
      sym_integer,
    STATE(90), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(73), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [447] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_not,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      anon_sym_BQUOTE,
    ACTIONS(96), 1,
      sym_pascal_identifier,
    ACTIONS(98), 1,
      sym_float,
    ACTIONS(100), 1,
      sym_unary_operator,
    STATE(57), 1,
      sym_negation_expression,
    STATE(83), 1,
      sym_non_literal_factor,
    STATE(93), 1,
      sym_multiplicative_expression,
    STATE(103), 1,
      sym_additive_expression,
    STATE(105), 1,
      sym_relational_expression,
    STATE(106), 1,
      sym__arithmetic_expression,
    STATE(107), 1,
      sym_conjuction_expression,
    STATE(128), 1,
      sym_disjunction_expression,
    STATE(185), 1,
      sym_expression_args,
    ACTIONS(94), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    STATE(174), 2,
      sym__expression,
      sym__boolean_expression,
    ACTIONS(86), 3,
      sym_false,
      sym_true,
      sym_integer,
    STATE(90), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(73), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [534] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_not,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      anon_sym_BQUOTE,
    ACTIONS(96), 1,
      sym_pascal_identifier,
    ACTIONS(98), 1,
      sym_float,
    ACTIONS(100), 1,
      sym_unary_operator,
    STATE(57), 1,
      sym_negation_expression,
    STATE(83), 1,
      sym_non_literal_factor,
    STATE(93), 1,
      sym_multiplicative_expression,
    STATE(103), 1,
      sym_additive_expression,
    STATE(105), 1,
      sym_relational_expression,
    STATE(106), 1,
      sym__arithmetic_expression,
    STATE(107), 1,
      sym_conjuction_expression,
    STATE(128), 1,
      sym_disjunction_expression,
    STATE(182), 1,
      sym_expression_args,
    ACTIONS(94), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    STATE(174), 2,
      sym__expression,
      sym__boolean_expression,
    ACTIONS(86), 3,
      sym_false,
      sym_true,
      sym_integer,
    STATE(90), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(73), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [621] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_not,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      anon_sym_BQUOTE,
    ACTIONS(96), 1,
      sym_pascal_identifier,
    ACTIONS(98), 1,
      sym_float,
    ACTIONS(100), 1,
      sym_unary_operator,
    STATE(57), 1,
      sym_negation_expression,
    STATE(83), 1,
      sym_non_literal_factor,
    STATE(93), 1,
      sym_multiplicative_expression,
    STATE(103), 1,
      sym_additive_expression,
    STATE(105), 1,
      sym_relational_expression,
    STATE(106), 1,
      sym__arithmetic_expression,
    STATE(107), 1,
      sym_conjuction_expression,
    STATE(128), 1,
      sym_disjunction_expression,
    STATE(191), 1,
      sym_expression_args,
    ACTIONS(94), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    STATE(174), 2,
      sym__expression,
      sym__boolean_expression,
    ACTIONS(86), 3,
      sym_false,
      sym_true,
      sym_integer,
    STATE(90), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(73), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [708] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_not,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      anon_sym_BQUOTE,
    ACTIONS(96), 1,
      sym_pascal_identifier,
    ACTIONS(98), 1,
      sym_float,
    ACTIONS(100), 1,
      sym_unary_operator,
    STATE(57), 1,
      sym_negation_expression,
    STATE(83), 1,
      sym_non_literal_factor,
    STATE(93), 1,
      sym_multiplicative_expression,
    STATE(103), 1,
      sym_additive_expression,
    STATE(105), 1,
      sym_relational_expression,
    STATE(106), 1,
      sym__arithmetic_expression,
    STATE(107), 1,
      sym_conjuction_expression,
    STATE(128), 1,
      sym_disjunction_expression,
    STATE(184), 1,
      sym_expression_args,
    ACTIONS(94), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    STATE(174), 2,
      sym__expression,
      sym__boolean_expression,
    ACTIONS(86), 3,
      sym_false,
      sym_true,
      sym_integer,
    STATE(90), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(73), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [795] = 24,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_not,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      anon_sym_BQUOTE,
    ACTIONS(96), 1,
      sym_pascal_identifier,
    ACTIONS(98), 1,
      sym_float,
    ACTIONS(100), 1,
      sym_unary_operator,
    STATE(57), 1,
      sym_negation_expression,
    STATE(83), 1,
      sym_non_literal_factor,
    STATE(93), 1,
      sym_multiplicative_expression,
    STATE(103), 1,
      sym_additive_expression,
    STATE(105), 1,
      sym_relational_expression,
    STATE(106), 1,
      sym__arithmetic_expression,
    STATE(107), 1,
      sym_conjuction_expression,
    STATE(128), 1,
      sym_disjunction_expression,
    STATE(194), 1,
      sym_expression_args,
    ACTIONS(94), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    STATE(174), 2,
      sym__expression,
      sym__boolean_expression,
    ACTIONS(86), 3,
      sym_false,
      sym_true,
      sym_integer,
    STATE(90), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(73), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [882] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_not,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      anon_sym_BQUOTE,
    ACTIONS(96), 1,
      sym_pascal_identifier,
    ACTIONS(98), 1,
      sym_float,
    ACTIONS(100), 1,
      sym_unary_operator,
    STATE(57), 1,
      sym_negation_expression,
    STATE(83), 1,
      sym_non_literal_factor,
    STATE(93), 1,
      sym_multiplicative_expression,
    STATE(103), 1,
      sym_additive_expression,
    STATE(105), 1,
      sym_relational_expression,
    STATE(106), 1,
      sym__arithmetic_expression,
    STATE(107), 1,
      sym_conjuction_expression,
    STATE(128), 1,
      sym_disjunction_expression,
    ACTIONS(94), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    STATE(193), 2,
      sym__expression,
      sym__boolean_expression,
    ACTIONS(86), 3,
      sym_false,
      sym_true,
      sym_integer,
    STATE(90), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(73), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [966] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_not,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      anon_sym_BQUOTE,
    ACTIONS(96), 1,
      sym_pascal_identifier,
    ACTIONS(98), 1,
      sym_float,
    ACTIONS(100), 1,
      sym_unary_operator,
    STATE(57), 1,
      sym_negation_expression,
    STATE(83), 1,
      sym_non_literal_factor,
    STATE(93), 1,
      sym_multiplicative_expression,
    STATE(103), 1,
      sym_additive_expression,
    STATE(105), 1,
      sym_relational_expression,
    STATE(106), 1,
      sym__arithmetic_expression,
    STATE(120), 1,
      sym_conjuction_expression,
    ACTIONS(94), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    ACTIONS(86), 3,
      sym_false,
      sym_true,
      sym_integer,
    STATE(90), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(73), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [1043] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym_pascal_identifier,
    ACTIONS(35), 1,
      sym_float,
    ACTIONS(37), 1,
      sym_unary_operator,
    STATE(34), 1,
      sym_non_literal_factor,
    STATE(52), 1,
      sym_multiplicative_expression,
    STATE(56), 1,
      sym_additive_expression,
    STATE(57), 1,
      sym_negation_expression,
    STATE(61), 1,
      sym__arithmetic_expression,
    STATE(62), 1,
      sym_relational_expression,
    STATE(64), 1,
      sym_conjuction_expression,
    ACTIONS(31), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    ACTIONS(23), 3,
      sym_false,
      sym_true,
      sym_integer,
    STATE(53), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(32), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [1120] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym_pascal_identifier,
    ACTIONS(35), 1,
      sym_float,
    ACTIONS(37), 1,
      sym_unary_operator,
    STATE(34), 1,
      sym_non_literal_factor,
    STATE(52), 1,
      sym_multiplicative_expression,
    STATE(56), 1,
      sym_additive_expression,
    STATE(58), 1,
      sym_negation_expression,
    STATE(61), 1,
      sym__arithmetic_expression,
    STATE(62), 1,
      sym_relational_expression,
    ACTIONS(31), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    ACTIONS(23), 3,
      sym_false,
      sym_true,
      sym_integer,
    STATE(53), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(32), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [1194] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_not,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      anon_sym_BQUOTE,
    ACTIONS(96), 1,
      sym_pascal_identifier,
    ACTIONS(98), 1,
      sym_float,
    ACTIONS(100), 1,
      sym_unary_operator,
    STATE(58), 1,
      sym_negation_expression,
    STATE(83), 1,
      sym_non_literal_factor,
    STATE(93), 1,
      sym_multiplicative_expression,
    STATE(103), 1,
      sym_additive_expression,
    STATE(105), 1,
      sym_relational_expression,
    STATE(106), 1,
      sym__arithmetic_expression,
    ACTIONS(94), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    ACTIONS(86), 3,
      sym_false,
      sym_true,
      sym_integer,
    STATE(90), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(73), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [1268] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(80), 1,
      anon_sym_not,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      anon_sym_BQUOTE,
    ACTIONS(96), 1,
      sym_pascal_identifier,
    ACTIONS(98), 1,
      sym_float,
    ACTIONS(100), 1,
      sym_unary_operator,
    STATE(60), 1,
      sym_negation_expression,
    STATE(83), 1,
      sym_non_literal_factor,
    STATE(93), 1,
      sym_multiplicative_expression,
    STATE(103), 1,
      sym_additive_expression,
    STATE(105), 1,
      sym_relational_expression,
    STATE(106), 1,
      sym__arithmetic_expression,
    ACTIONS(94), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    ACTIONS(86), 3,
      sym_false,
      sym_true,
      sym_integer,
    STATE(90), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(73), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [1342] = 20,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(17), 1,
      anon_sym_not,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym_pascal_identifier,
    ACTIONS(35), 1,
      sym_float,
    ACTIONS(37), 1,
      sym_unary_operator,
    STATE(34), 1,
      sym_non_literal_factor,
    STATE(52), 1,
      sym_multiplicative_expression,
    STATE(56), 1,
      sym_additive_expression,
    STATE(60), 1,
      sym_negation_expression,
    STATE(61), 1,
      sym__arithmetic_expression,
    STATE(62), 1,
      sym_relational_expression,
    ACTIONS(31), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    ACTIONS(23), 3,
      sym_false,
      sym_true,
      sym_integer,
    STATE(53), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(32), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [1416] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym_pascal_identifier,
    ACTIONS(35), 1,
      sym_float,
    ACTIONS(37), 1,
      sym_unary_operator,
    STATE(34), 1,
      sym_non_literal_factor,
    STATE(52), 1,
      sym_multiplicative_expression,
    STATE(56), 1,
      sym_additive_expression,
    STATE(59), 1,
      sym__arithmetic_expression,
    ACTIONS(31), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    ACTIONS(23), 3,
      sym_false,
      sym_true,
      sym_integer,
    STATE(53), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(32), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [1481] = 17,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      anon_sym_BQUOTE,
    ACTIONS(96), 1,
      sym_pascal_identifier,
    ACTIONS(98), 1,
      sym_float,
    ACTIONS(100), 1,
      sym_unary_operator,
    STATE(83), 1,
      sym_non_literal_factor,
    STATE(93), 1,
      sym_multiplicative_expression,
    STATE(103), 1,
      sym_additive_expression,
    STATE(104), 1,
      sym__arithmetic_expression,
    ACTIONS(94), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    ACTIONS(86), 3,
      sym_false,
      sym_true,
      sym_integer,
    STATE(90), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(73), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [1546] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym_pascal_identifier,
    ACTIONS(35), 1,
      sym_float,
    ACTIONS(37), 1,
      sym_unary_operator,
    STATE(34), 1,
      sym_non_literal_factor,
    STATE(55), 1,
      sym_multiplicative_expression,
    ACTIONS(31), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    ACTIONS(23), 3,
      sym_false,
      sym_true,
      sym_integer,
    STATE(53), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(32), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [1605] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      anon_sym_BQUOTE,
    ACTIONS(96), 1,
      sym_pascal_identifier,
    ACTIONS(98), 1,
      sym_float,
    ACTIONS(100), 1,
      sym_unary_operator,
    STATE(83), 1,
      sym_non_literal_factor,
    STATE(96), 1,
      sym_multiplicative_expression,
    ACTIONS(94), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    ACTIONS(86), 3,
      sym_false,
      sym_true,
      sym_integer,
    STATE(90), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(73), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [1664] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(33), 1,
      sym_pascal_identifier,
    ACTIONS(37), 1,
      sym_unary_operator,
    ACTIONS(110), 1,
      anon_sym_DQUOTE,
    ACTIONS(112), 1,
      anon_sym_SQUOTE,
    ACTIONS(114), 1,
      anon_sym_BQUOTE,
    ACTIONS(116), 1,
      sym_float,
    STATE(47), 1,
      sym_non_literal_factor,
    ACTIONS(31), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    ACTIONS(108), 3,
      sym_false,
      sym_true,
      sym_integer,
    STATE(46), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(32), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [1720] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(88), 1,
      anon_sym_DQUOTE,
    ACTIONS(90), 1,
      anon_sym_SQUOTE,
    ACTIONS(92), 1,
      anon_sym_BQUOTE,
    ACTIONS(96), 1,
      sym_pascal_identifier,
    ACTIONS(100), 1,
      sym_unary_operator,
    ACTIONS(120), 1,
      sym_float,
    STATE(78), 1,
      sym_non_literal_factor,
    ACTIONS(94), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    ACTIONS(118), 3,
      sym_false,
      sym_true,
      sym_integer,
    STATE(97), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(73), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [1776] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(78), 1,
      anon_sym_LPAREN,
    ACTIONS(82), 1,
      anon_sym_LBRACK,
    ACTIONS(96), 1,
      sym_pascal_identifier,
    ACTIONS(100), 1,
      sym_unary_operator,
    ACTIONS(124), 1,
      anon_sym_DQUOTE,
    ACTIONS(126), 1,
      anon_sym_SQUOTE,
    ACTIONS(128), 1,
      anon_sym_BQUOTE,
    ACTIONS(130), 1,
      sym_float,
    STATE(76), 1,
      sym_non_literal_factor,
    ACTIONS(94), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    ACTIONS(122), 3,
      sym_false,
      sym_true,
      sym_integer,
    STATE(71), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(73), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [1832] = 14,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_LBRACK,
    ACTIONS(25), 1,
      anon_sym_DQUOTE,
    ACTIONS(27), 1,
      anon_sym_SQUOTE,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym_pascal_identifier,
    ACTIONS(37), 1,
      sym_unary_operator,
    ACTIONS(134), 1,
      sym_float,
    STATE(33), 1,
      sym_non_literal_factor,
    ACTIONS(31), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    ACTIONS(132), 3,
      sym_false,
      sym_true,
      sym_integer,
    STATE(48), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(32), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [1888] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 11,
      anon_sym_not,
      anon_sym_DOT,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(136), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [1921] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 11,
      anon_sym_not,
      anon_sym_DOT,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(140), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [1954] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 11,
      anon_sym_not,
      anon_sym_DOT,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(144), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [1987] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      anon_sym_DASH_GT,
    ACTIONS(156), 1,
      anon_sym_LT_DASH,
    ACTIONS(158), 1,
      anon_sym_DOT,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(150), 10,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
    ACTIONS(152), 10,
      anon_sym_not,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
  [2030] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 1,
      anon_sym_LPAREN,
    ACTIONS(154), 1,
      anon_sym_DASH_GT,
    ACTIONS(156), 1,
      anon_sym_LT_DASH,
    ACTIONS(158), 1,
      anon_sym_DOT,
    ACTIONS(160), 1,
      anon_sym_LBRACK,
    ACTIONS(162), 10,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
    ACTIONS(164), 10,
      anon_sym_not,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
  [2073] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 11,
      anon_sym_not,
      anon_sym_DOT,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(166), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [2106] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 11,
      anon_sym_not,
      anon_sym_DOT,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(170), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [2139] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 11,
      anon_sym_not,
      anon_sym_DOT,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(174), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [2172] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 11,
      anon_sym_not,
      anon_sym_DOT,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(178), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [2205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 11,
      anon_sym_not,
      anon_sym_DOT,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(182), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [2238] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 11,
      anon_sym_not,
      anon_sym_DOT,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(186), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [2271] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 11,
      anon_sym_not,
      anon_sym_DOT,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(190), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [2304] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 11,
      anon_sym_not,
      anon_sym_DOT,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(194), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [2337] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 11,
      anon_sym_not,
      anon_sym_DOT,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(198), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [2370] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 11,
      anon_sym_not,
      anon_sym_DOT,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(202), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [2403] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 11,
      anon_sym_not,
      anon_sym_DOT,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(206), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [2436] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 11,
      anon_sym_not,
      anon_sym_DOT,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(210), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [2469] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 11,
      anon_sym_not,
      anon_sym_DOT,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(210), 14,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [2502] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 10,
      anon_sym_not,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(150), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [2532] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 10,
      anon_sym_not,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(202), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [2562] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 10,
      anon_sym_not,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(170), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [2592] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 10,
      anon_sym_not,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(136), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [2622] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym_multiplicative_operator,
    ACTIONS(216), 9,
      anon_sym_not,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_relational_operator,
    ACTIONS(214), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [2654] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 10,
      anon_sym_not,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(162), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [2684] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 10,
      anon_sym_not,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(198), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [2714] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 1,
      sym_multiplicative_operator,
    ACTIONS(222), 9,
      anon_sym_not,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_relational_operator,
    ACTIONS(220), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [2746] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 1,
      sym_additive_operator,
    ACTIONS(226), 8,
      anon_sym_not,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_unary_operator,
      sym_relational_operator,
    ACTIONS(224), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [2777] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 6,
      anon_sym_not,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
    ACTIONS(230), 14,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_unary_operator,
  [2805] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(236), 6,
      anon_sym_not,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
    ACTIONS(234), 14,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_unary_operator,
  [2833] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 7,
      anon_sym_not,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_relational_operator,
    ACTIONS(238), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_unary_operator,
  [2861] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 6,
      anon_sym_not,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
    ACTIONS(242), 14,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_unary_operator,
  [2889] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 7,
      anon_sym_not,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
      sym_relational_operator,
    ACTIONS(246), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_unary_operator,
  [2917] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(254), 1,
      sym_relational_operator,
    ACTIONS(252), 6,
      anon_sym_not,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
    ACTIONS(250), 13,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_unary_operator,
  [2947] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_conjuction_operator,
    ACTIONS(258), 6,
      anon_sym_not,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
    ACTIONS(256), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_unary_operator,
  [2976] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(260), 1,
      sym_conjuction_operator,
    ACTIONS(264), 6,
      anon_sym_not,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
    ACTIONS(262), 12,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_disjunction_operator,
      sym_unary_operator,
  [3005] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 1,
      sym_disjunction_operator,
    ACTIONS(268), 6,
      anon_sym_not,
      sym_false,
      sym_true,
      sym_camel_identifier,
      sym_snake_identifier,
      sym_integer,
    ACTIONS(266), 11,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_pascal_identifier,
      sym_float,
      sym_unary_operator,
  [3033] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 3,
      sym_additive_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(178), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [3055] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(176), 3,
      sym_additive_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(174), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [3077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 3,
      sym_additive_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(170), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [3099] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 3,
      sym_additive_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(202), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [3121] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 3,
      sym_additive_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(198), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [3143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 3,
      sym_additive_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(210), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [3165] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 3,
      sym_additive_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(136), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [3187] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 3,
      sym_additive_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(144), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [3209] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 3,
      sym_additive_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(182), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [3231] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 3,
      sym_additive_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(206), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [3253] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 3,
      sym_additive_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(210), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [3275] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 3,
      sym_additive_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(140), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [3297] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_DASH_GT,
    ACTIONS(276), 1,
      anon_sym_LT_DASH,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(152), 3,
      sym_additive_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(150), 6,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [3329] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(168), 3,
      sym_additive_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(166), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [3351] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(192), 3,
      sym_additive_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(190), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [3373] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(188), 3,
      sym_additive_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(186), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [3395] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 3,
      sym_additive_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(194), 11,
      anon_sym_RBRACE,
      anon_sym_LPAREN,
      anon_sym_RPAREN,
      anon_sym_DASH_GT,
      anon_sym_LT_DASH,
      anon_sym_DOT,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [3417] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 1,
      anon_sym_LPAREN,
    ACTIONS(274), 1,
      anon_sym_DASH_GT,
    ACTIONS(276), 1,
      anon_sym_LT_DASH,
    ACTIONS(278), 1,
      anon_sym_DOT,
    ACTIONS(280), 1,
      anon_sym_LBRACK,
    ACTIONS(164), 3,
      sym_additive_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(162), 6,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [3449] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(200), 2,
      sym_additive_operator,
      sym_multiplicative_operator,
    ACTIONS(198), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [3466] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(282), 1,
      ts_builtin_sym_end,
    ACTIONS(284), 1,
      anon_sym_abstract,
    ACTIONS(287), 1,
      anon_sym_interface,
    ACTIONS(290), 1,
      sym_decorator_identifier,
    STATE(146), 1,
      sym_interface_definition,
    STATE(85), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(127), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [3493] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 2,
      sym_additive_operator,
      sym_multiplicative_operator,
    ACTIONS(136), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [3510] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(293), 1,
      anon_sym_RBRACE,
    ACTIONS(298), 1,
      sym_snake_identifier,
    ACTIONS(301), 1,
      sym_decorator_identifier,
    ACTIONS(295), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(87), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(117), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [3535] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(172), 2,
      sym_additive_operator,
      sym_multiplicative_operator,
    ACTIONS(170), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [3552] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    ACTIONS(308), 1,
      sym_snake_identifier,
    ACTIONS(310), 1,
      sym_decorator_identifier,
    ACTIONS(306), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(91), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(117), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [3577] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 2,
      sym_additive_operator,
      sym_multiplicative_operator,
    ACTIONS(162), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [3594] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_snake_identifier,
    ACTIONS(310), 1,
      sym_decorator_identifier,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    ACTIONS(306), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(87), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(117), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [3619] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(204), 2,
      sym_additive_operator,
      sym_multiplicative_operator,
    ACTIONS(202), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [3636] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(216), 1,
      sym_additive_operator,
    ACTIONS(314), 1,
      sym_multiplicative_operator,
    ACTIONS(214), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [3655] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_snake_identifier,
    ACTIONS(310), 1,
      sym_decorator_identifier,
    ACTIONS(316), 1,
      anon_sym_RBRACE,
    ACTIONS(306), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(87), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(117), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [3680] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 1,
      anon_sym_RBRACE,
    ACTIONS(308), 1,
      sym_snake_identifier,
    ACTIONS(310), 1,
      sym_decorator_identifier,
    ACTIONS(306), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(87), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(117), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [3705] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 1,
      sym_additive_operator,
    ACTIONS(314), 1,
      sym_multiplicative_operator,
    ACTIONS(220), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [3724] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(152), 2,
      sym_additive_operator,
      sym_multiplicative_operator,
    ACTIONS(150), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [3741] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_snake_identifier,
    ACTIONS(310), 1,
      sym_decorator_identifier,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    ACTIONS(306), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(94), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(117), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [3766] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_abstract,
    ACTIONS(9), 1,
      anon_sym_interface,
    ACTIONS(11), 1,
      sym_decorator_identifier,
    ACTIONS(320), 1,
      ts_builtin_sym_end,
    STATE(146), 1,
      sym_interface_definition,
    STATE(85), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(127), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [3793] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_snake_identifier,
    ACTIONS(310), 1,
      sym_decorator_identifier,
    ACTIONS(312), 1,
      anon_sym_RBRACE,
    ACTIONS(306), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(102), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(117), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [3818] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_snake_identifier,
    ACTIONS(310), 1,
      sym_decorator_identifier,
    ACTIONS(322), 1,
      anon_sym_RBRACE,
    ACTIONS(306), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(95), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(117), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [3843] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 1,
      sym_snake_identifier,
    ACTIONS(310), 1,
      sym_decorator_identifier,
    ACTIONS(318), 1,
      anon_sym_RBRACE,
    ACTIONS(306), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(87), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(117), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [3868] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      sym_additive_operator,
    ACTIONS(224), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [3884] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [3897] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(326), 1,
      sym_relational_operator,
    ACTIONS(250), 6,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
  [3912] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 7,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
      sym_conjuction_operator,
      sym_relational_operator,
  [3925] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_conjuction_operator,
    ACTIONS(256), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
  [3939] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(332), 1,
      sym_snake_identifier,
    ACTIONS(334), 1,
      sym_decorator_identifier,
    ACTIONS(330), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(108), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [3957] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(339), 1,
      anon_sym_BQUOTE,
    ACTIONS(341), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(337), 2,
      sym__template_chars,
      sym_escape_sequence,
    STATE(113), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [3975] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(345), 1,
      anon_sym_BQUOTE,
    ACTIONS(343), 2,
      sym__template_chars,
      sym_escape_sequence,
    STATE(118), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [3993] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(351), 1,
      sym_snake_identifier,
    ACTIONS(347), 4,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_pascal_identifier,
      sym_decorator_identifier,
  [4009] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(355), 1,
      anon_sym_BQUOTE,
    ACTIONS(353), 2,
      sym__template_chars,
      sym_escape_sequence,
    STATE(116), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [4027] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(357), 1,
      anon_sym_BQUOTE,
    ACTIONS(343), 2,
      sym__template_chars,
      sym_escape_sequence,
    STATE(118), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [4045] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(361), 1,
      anon_sym_BQUOTE,
    ACTIONS(359), 2,
      sym__template_chars,
      sym_escape_sequence,
    STATE(110), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [4063] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(363), 1,
      anon_sym_BQUOTE,
    ACTIONS(343), 2,
      sym__template_chars,
      sym_escape_sequence,
    STATE(118), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [4081] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(365), 1,
      anon_sym_BQUOTE,
    ACTIONS(343), 2,
      sym__template_chars,
      sym_escape_sequence,
    STATE(118), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [4099] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 1,
      sym_decorator_identifier,
    ACTIONS(369), 1,
      sym_snake_identifier,
    ACTIONS(367), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(108), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [4117] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_BQUOTE,
    ACTIONS(376), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(371), 2,
      sym__template_chars,
      sym_escape_sequence,
    STATE(118), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [4135] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(341), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(381), 1,
      anon_sym_BQUOTE,
    ACTIONS(379), 2,
      sym__template_chars,
      sym_escape_sequence,
    STATE(115), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [4153] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(328), 1,
      sym_conjuction_operator,
    ACTIONS(262), 5,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
      sym_disjunction_operator,
  [4167] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(383), 1,
      anon_sym_LPAREN,
    ACTIONS(387), 1,
      sym_snake_identifier,
    STATE(149), 1,
      sym_decorator_args,
    ACTIONS(385), 3,
      sym_camel_identifier,
      sym_pascal_identifier,
      sym_decorator_identifier,
  [4185] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(389), 1,
      anon_sym_LPAREN,
    STATE(165), 1,
      sym_decorator_args,
    ACTIONS(385), 3,
      anon_sym_abstract,
      anon_sym_interface,
      sym_decorator_identifier,
  [4200] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(393), 1,
      sym_snake_identifier,
    ACTIONS(391), 4,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_pascal_identifier,
      sym_decorator_identifier,
  [4213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 1,
      sym_snake_identifier,
    ACTIONS(395), 4,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_pascal_identifier,
      sym_decorator_identifier,
  [4226] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(401), 1,
      sym_snake_identifier,
    ACTIONS(399), 4,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_pascal_identifier,
      sym_decorator_identifier,
  [4239] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(405), 1,
      sym_snake_identifier,
    ACTIONS(403), 4,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_pascal_identifier,
      sym_decorator_identifier,
  [4252] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      sym_decorator_identifier,
    ACTIONS(407), 1,
      anon_sym_abstract,
    ACTIONS(409), 1,
      anon_sym_interface,
    STATE(129), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [4269] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      sym_disjunction_operator,
    ACTIONS(266), 4,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
  [4282] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(413), 1,
      sym_decorator_identifier,
    ACTIONS(330), 2,
      anon_sym_abstract,
      anon_sym_interface,
    STATE(129), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [4297] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(418), 1,
      sym_snake_identifier,
    ACTIONS(416), 3,
      sym_camel_identifier,
      sym_pascal_identifier,
      sym_decorator_identifier,
  [4309] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(420), 4,
      sym__template_chars,
      sym_escape_sequence,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [4319] = 5,
    ACTIONS(422), 1,
      anon_sym_DQUOTE,
    ACTIONS(424), 1,
      aux_sym_simple_string_token1,
    ACTIONS(427), 1,
      sym_escape_sequence,
    ACTIONS(430), 1,
      sym_comment,
    STATE(132), 1,
      aux_sym_simple_string_repeat1,
  [4335] = 5,
    ACTIONS(430), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_SQUOTE,
    ACTIONS(434), 1,
      aux_sym_simple_string_token2,
    ACTIONS(437), 1,
      sym_escape_sequence,
    STATE(133), 1,
      aux_sym_simple_string_repeat2,
  [4351] = 5,
    ACTIONS(430), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_SQUOTE,
    ACTIONS(442), 1,
      aux_sym_simple_string_token2,
    ACTIONS(444), 1,
      sym_escape_sequence,
    STATE(133), 1,
      aux_sym_simple_string_repeat2,
  [4367] = 5,
    ACTIONS(430), 1,
      sym_comment,
    ACTIONS(442), 1,
      aux_sym_simple_string_token2,
    ACTIONS(444), 1,
      sym_escape_sequence,
    ACTIONS(446), 1,
      anon_sym_SQUOTE,
    STATE(133), 1,
      aux_sym_simple_string_repeat2,
  [4383] = 5,
    ACTIONS(430), 1,
      sym_comment,
    ACTIONS(446), 1,
      anon_sym_DQUOTE,
    ACTIONS(448), 1,
      aux_sym_simple_string_token1,
    ACTIONS(450), 1,
      sym_escape_sequence,
    STATE(132), 1,
      aux_sym_simple_string_repeat1,
  [4399] = 5,
    ACTIONS(430), 1,
      sym_comment,
    ACTIONS(440), 1,
      anon_sym_DQUOTE,
    ACTIONS(448), 1,
      aux_sym_simple_string_token1,
    ACTIONS(450), 1,
      sym_escape_sequence,
    STATE(132), 1,
      aux_sym_simple_string_repeat1,
  [4415] = 5,
    ACTIONS(430), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_SQUOTE,
    ACTIONS(454), 1,
      aux_sym_simple_string_token2,
    ACTIONS(456), 1,
      sym_escape_sequence,
    STATE(134), 1,
      aux_sym_simple_string_repeat2,
  [4431] = 5,
    ACTIONS(430), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_DQUOTE,
    ACTIONS(458), 1,
      aux_sym_simple_string_token1,
    ACTIONS(460), 1,
      sym_escape_sequence,
    STATE(137), 1,
      aux_sym_simple_string_repeat1,
  [4447] = 5,
    ACTIONS(430), 1,
      sym_comment,
    ACTIONS(442), 1,
      aux_sym_simple_string_token2,
    ACTIONS(444), 1,
      sym_escape_sequence,
    ACTIONS(462), 1,
      anon_sym_SQUOTE,
    STATE(133), 1,
      aux_sym_simple_string_repeat2,
  [4463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 4,
      ts_builtin_sym_end,
      anon_sym_abstract,
      anon_sym_interface,
      sym_decorator_identifier,
  [4473] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym_snake_identifier,
    STATE(126), 1,
      sym_type_identifier,
    ACTIONS(466), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [4487] = 5,
    ACTIONS(430), 1,
      sym_comment,
    ACTIONS(448), 1,
      aux_sym_simple_string_token1,
    ACTIONS(450), 1,
      sym_escape_sequence,
    ACTIONS(462), 1,
      anon_sym_DQUOTE,
    STATE(132), 1,
      aux_sym_simple_string_repeat1,
  [4503] = 5,
    ACTIONS(430), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_SQUOTE,
    ACTIONS(472), 1,
      aux_sym_simple_string_token2,
    ACTIONS(474), 1,
      sym_escape_sequence,
    STATE(140), 1,
      aux_sym_simple_string_repeat2,
  [4519] = 5,
    ACTIONS(430), 1,
      sym_comment,
    ACTIONS(470), 1,
      anon_sym_DQUOTE,
    ACTIONS(476), 1,
      aux_sym_simple_string_token1,
    ACTIONS(478), 1,
      sym_escape_sequence,
    STATE(143), 1,
      aux_sym_simple_string_repeat1,
  [4535] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 4,
      ts_builtin_sym_end,
      anon_sym_abstract,
      anon_sym_interface,
      sym_decorator_identifier,
  [4545] = 5,
    ACTIONS(430), 1,
      sym_comment,
    ACTIONS(442), 1,
      aux_sym_simple_string_token2,
    ACTIONS(444), 1,
      sym_escape_sequence,
    ACTIONS(482), 1,
      anon_sym_SQUOTE,
    STATE(133), 1,
      aux_sym_simple_string_repeat2,
  [4561] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 4,
      ts_builtin_sym_end,
      anon_sym_abstract,
      anon_sym_interface,
      sym_decorator_identifier,
  [4571] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      sym_snake_identifier,
    ACTIONS(486), 3,
      sym_camel_identifier,
      sym_pascal_identifier,
      sym_decorator_identifier,
  [4583] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 4,
      ts_builtin_sym_end,
      anon_sym_abstract,
      anon_sym_interface,
      sym_decorator_identifier,
  [4593] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym_snake_identifier,
    STATE(123), 1,
      sym_type_identifier,
    ACTIONS(466), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [4607] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 4,
      ts_builtin_sym_end,
      anon_sym_abstract,
      anon_sym_interface,
      sym_decorator_identifier,
  [4617] = 5,
    ACTIONS(430), 1,
      sym_comment,
    ACTIONS(448), 1,
      aux_sym_simple_string_token1,
    ACTIONS(450), 1,
      sym_escape_sequence,
    ACTIONS(482), 1,
      anon_sym_DQUOTE,
    STATE(132), 1,
      aux_sym_simple_string_repeat1,
  [4633] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 4,
      ts_builtin_sym_end,
      anon_sym_abstract,
      anon_sym_interface,
      sym_decorator_identifier,
  [4643] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym_snake_identifier,
    STATE(125), 1,
      sym_type_identifier,
    ACTIONS(466), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [4657] = 5,
    ACTIONS(430), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_SQUOTE,
    ACTIONS(498), 1,
      aux_sym_simple_string_token2,
    ACTIONS(500), 1,
      sym_escape_sequence,
    STATE(135), 1,
      aux_sym_simple_string_repeat2,
  [4673] = 5,
    ACTIONS(430), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_DQUOTE,
    ACTIONS(502), 1,
      aux_sym_simple_string_token1,
    ACTIONS(504), 1,
      sym_escape_sequence,
    STATE(136), 1,
      aux_sym_simple_string_repeat1,
  [4689] = 5,
    ACTIONS(430), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_SQUOTE,
    ACTIONS(508), 1,
      aux_sym_simple_string_token2,
    ACTIONS(510), 1,
      sym_escape_sequence,
    STATE(147), 1,
      aux_sym_simple_string_repeat2,
  [4705] = 5,
    ACTIONS(430), 1,
      sym_comment,
    ACTIONS(506), 1,
      anon_sym_DQUOTE,
    ACTIONS(512), 1,
      aux_sym_simple_string_token1,
    ACTIONS(514), 1,
      sym_escape_sequence,
    STATE(153), 1,
      aux_sym_simple_string_repeat1,
  [4721] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(516), 1,
      anon_sym_LBRACE,
    ACTIONS(518), 1,
      anon_sym_extends,
    STATE(180), 1,
      sym_extends,
  [4734] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(522), 1,
      sym_snake_identifier,
    ACTIONS(520), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [4745] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_extends,
    ACTIONS(524), 1,
      anon_sym_LBRACE,
    STATE(189), 1,
      sym_extends,
  [4758] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(528), 1,
      sym_snake_identifier,
    ACTIONS(526), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [4769] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(532), 1,
      sym_snake_identifier,
    ACTIONS(530), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [4780] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 3,
      anon_sym_abstract,
      anon_sym_interface,
      sym_decorator_identifier,
  [4789] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 3,
      anon_sym_abstract,
      anon_sym_interface,
      sym_decorator_identifier,
  [4798] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(536), 1,
      sym_snake_identifier,
    ACTIONS(534), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [4809] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(540), 1,
      sym_snake_identifier,
    ACTIONS(538), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [4820] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(544), 1,
      sym_snake_identifier,
    ACTIONS(542), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [4831] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      sym_snake_identifier,
    ACTIONS(546), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [4842] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_COLON,
    ACTIONS(550), 2,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
  [4853] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_COLON,
    ACTIONS(554), 2,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
  [4864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(560), 1,
      sym_snake_identifier,
    ACTIONS(558), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [4875] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    ACTIONS(562), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4886] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 1,
      anon_sym_extends,
    ACTIONS(566), 1,
      anon_sym_LBRACE,
    STATE(196), 1,
      sym_extends,
  [4899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(570), 1,
      sym_snake_identifier,
    ACTIONS(568), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [4910] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(574), 1,
      sym_snake_identifier,
    ACTIONS(572), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [4921] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4929] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [4937] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(524), 1,
      anon_sym_LBRACE,
  [4944] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(578), 1,
      anon_sym_interface,
  [4951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(580), 1,
      anon_sym_RPAREN,
  [4958] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_RPAREN,
  [4965] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(584), 1,
      anon_sym_RBRACK,
  [4972] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_RBRACK,
  [4979] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(556), 1,
      anon_sym_COLON,
  [4986] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_RPAREN,
  [4993] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(590), 1,
      anon_sym_RBRACK,
  [5000] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(566), 1,
      anon_sym_LBRACE,
  [5007] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      anon_sym_RPAREN,
  [5014] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_RPAREN,
  [5021] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(596), 1,
      anon_sym_LBRACE,
  [5028] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(598), 1,
      anon_sym_RBRACE,
  [5035] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(600), 1,
      anon_sym_RPAREN,
  [5042] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(602), 1,
      anon_sym_RBRACK,
  [5049] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_LBRACE,
  [5056] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(606), 1,
      ts_builtin_sym_end,
  [5063] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(409), 1,
      anon_sym_interface,
  [5070] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(608), 1,
      anon_sym_COLON,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 90,
  [SMALL_STATE(7)] = 180,
  [SMALL_STATE(8)] = 270,
  [SMALL_STATE(9)] = 360,
  [SMALL_STATE(10)] = 447,
  [SMALL_STATE(11)] = 534,
  [SMALL_STATE(12)] = 621,
  [SMALL_STATE(13)] = 708,
  [SMALL_STATE(14)] = 795,
  [SMALL_STATE(15)] = 882,
  [SMALL_STATE(16)] = 966,
  [SMALL_STATE(17)] = 1043,
  [SMALL_STATE(18)] = 1120,
  [SMALL_STATE(19)] = 1194,
  [SMALL_STATE(20)] = 1268,
  [SMALL_STATE(21)] = 1342,
  [SMALL_STATE(22)] = 1416,
  [SMALL_STATE(23)] = 1481,
  [SMALL_STATE(24)] = 1546,
  [SMALL_STATE(25)] = 1605,
  [SMALL_STATE(26)] = 1664,
  [SMALL_STATE(27)] = 1720,
  [SMALL_STATE(28)] = 1776,
  [SMALL_STATE(29)] = 1832,
  [SMALL_STATE(30)] = 1888,
  [SMALL_STATE(31)] = 1921,
  [SMALL_STATE(32)] = 1954,
  [SMALL_STATE(33)] = 1987,
  [SMALL_STATE(34)] = 2030,
  [SMALL_STATE(35)] = 2073,
  [SMALL_STATE(36)] = 2106,
  [SMALL_STATE(37)] = 2139,
  [SMALL_STATE(38)] = 2172,
  [SMALL_STATE(39)] = 2205,
  [SMALL_STATE(40)] = 2238,
  [SMALL_STATE(41)] = 2271,
  [SMALL_STATE(42)] = 2304,
  [SMALL_STATE(43)] = 2337,
  [SMALL_STATE(44)] = 2370,
  [SMALL_STATE(45)] = 2403,
  [SMALL_STATE(46)] = 2436,
  [SMALL_STATE(47)] = 2469,
  [SMALL_STATE(48)] = 2502,
  [SMALL_STATE(49)] = 2532,
  [SMALL_STATE(50)] = 2562,
  [SMALL_STATE(51)] = 2592,
  [SMALL_STATE(52)] = 2622,
  [SMALL_STATE(53)] = 2654,
  [SMALL_STATE(54)] = 2684,
  [SMALL_STATE(55)] = 2714,
  [SMALL_STATE(56)] = 2746,
  [SMALL_STATE(57)] = 2777,
  [SMALL_STATE(58)] = 2805,
  [SMALL_STATE(59)] = 2833,
  [SMALL_STATE(60)] = 2861,
  [SMALL_STATE(61)] = 2889,
  [SMALL_STATE(62)] = 2917,
  [SMALL_STATE(63)] = 2947,
  [SMALL_STATE(64)] = 2976,
  [SMALL_STATE(65)] = 3005,
  [SMALL_STATE(66)] = 3033,
  [SMALL_STATE(67)] = 3055,
  [SMALL_STATE(68)] = 3077,
  [SMALL_STATE(69)] = 3099,
  [SMALL_STATE(70)] = 3121,
  [SMALL_STATE(71)] = 3143,
  [SMALL_STATE(72)] = 3165,
  [SMALL_STATE(73)] = 3187,
  [SMALL_STATE(74)] = 3209,
  [SMALL_STATE(75)] = 3231,
  [SMALL_STATE(76)] = 3253,
  [SMALL_STATE(77)] = 3275,
  [SMALL_STATE(78)] = 3297,
  [SMALL_STATE(79)] = 3329,
  [SMALL_STATE(80)] = 3351,
  [SMALL_STATE(81)] = 3373,
  [SMALL_STATE(82)] = 3395,
  [SMALL_STATE(83)] = 3417,
  [SMALL_STATE(84)] = 3449,
  [SMALL_STATE(85)] = 3466,
  [SMALL_STATE(86)] = 3493,
  [SMALL_STATE(87)] = 3510,
  [SMALL_STATE(88)] = 3535,
  [SMALL_STATE(89)] = 3552,
  [SMALL_STATE(90)] = 3577,
  [SMALL_STATE(91)] = 3594,
  [SMALL_STATE(92)] = 3619,
  [SMALL_STATE(93)] = 3636,
  [SMALL_STATE(94)] = 3655,
  [SMALL_STATE(95)] = 3680,
  [SMALL_STATE(96)] = 3705,
  [SMALL_STATE(97)] = 3724,
  [SMALL_STATE(98)] = 3741,
  [SMALL_STATE(99)] = 3766,
  [SMALL_STATE(100)] = 3793,
  [SMALL_STATE(101)] = 3818,
  [SMALL_STATE(102)] = 3843,
  [SMALL_STATE(103)] = 3868,
  [SMALL_STATE(104)] = 3884,
  [SMALL_STATE(105)] = 3897,
  [SMALL_STATE(106)] = 3912,
  [SMALL_STATE(107)] = 3925,
  [SMALL_STATE(108)] = 3939,
  [SMALL_STATE(109)] = 3957,
  [SMALL_STATE(110)] = 3975,
  [SMALL_STATE(111)] = 3993,
  [SMALL_STATE(112)] = 4009,
  [SMALL_STATE(113)] = 4027,
  [SMALL_STATE(114)] = 4045,
  [SMALL_STATE(115)] = 4063,
  [SMALL_STATE(116)] = 4081,
  [SMALL_STATE(117)] = 4099,
  [SMALL_STATE(118)] = 4117,
  [SMALL_STATE(119)] = 4135,
  [SMALL_STATE(120)] = 4153,
  [SMALL_STATE(121)] = 4167,
  [SMALL_STATE(122)] = 4185,
  [SMALL_STATE(123)] = 4200,
  [SMALL_STATE(124)] = 4213,
  [SMALL_STATE(125)] = 4226,
  [SMALL_STATE(126)] = 4239,
  [SMALL_STATE(127)] = 4252,
  [SMALL_STATE(128)] = 4269,
  [SMALL_STATE(129)] = 4282,
  [SMALL_STATE(130)] = 4297,
  [SMALL_STATE(131)] = 4309,
  [SMALL_STATE(132)] = 4319,
  [SMALL_STATE(133)] = 4335,
  [SMALL_STATE(134)] = 4351,
  [SMALL_STATE(135)] = 4367,
  [SMALL_STATE(136)] = 4383,
  [SMALL_STATE(137)] = 4399,
  [SMALL_STATE(138)] = 4415,
  [SMALL_STATE(139)] = 4431,
  [SMALL_STATE(140)] = 4447,
  [SMALL_STATE(141)] = 4463,
  [SMALL_STATE(142)] = 4473,
  [SMALL_STATE(143)] = 4487,
  [SMALL_STATE(144)] = 4503,
  [SMALL_STATE(145)] = 4519,
  [SMALL_STATE(146)] = 4535,
  [SMALL_STATE(147)] = 4545,
  [SMALL_STATE(148)] = 4561,
  [SMALL_STATE(149)] = 4571,
  [SMALL_STATE(150)] = 4583,
  [SMALL_STATE(151)] = 4593,
  [SMALL_STATE(152)] = 4607,
  [SMALL_STATE(153)] = 4617,
  [SMALL_STATE(154)] = 4633,
  [SMALL_STATE(155)] = 4643,
  [SMALL_STATE(156)] = 4657,
  [SMALL_STATE(157)] = 4673,
  [SMALL_STATE(158)] = 4689,
  [SMALL_STATE(159)] = 4705,
  [SMALL_STATE(160)] = 4721,
  [SMALL_STATE(161)] = 4734,
  [SMALL_STATE(162)] = 4745,
  [SMALL_STATE(163)] = 4758,
  [SMALL_STATE(164)] = 4769,
  [SMALL_STATE(165)] = 4780,
  [SMALL_STATE(166)] = 4789,
  [SMALL_STATE(167)] = 4798,
  [SMALL_STATE(168)] = 4809,
  [SMALL_STATE(169)] = 4820,
  [SMALL_STATE(170)] = 4831,
  [SMALL_STATE(171)] = 4842,
  [SMALL_STATE(172)] = 4853,
  [SMALL_STATE(173)] = 4864,
  [SMALL_STATE(174)] = 4875,
  [SMALL_STATE(175)] = 4886,
  [SMALL_STATE(176)] = 4899,
  [SMALL_STATE(177)] = 4910,
  [SMALL_STATE(178)] = 4921,
  [SMALL_STATE(179)] = 4929,
  [SMALL_STATE(180)] = 4937,
  [SMALL_STATE(181)] = 4944,
  [SMALL_STATE(182)] = 4951,
  [SMALL_STATE(183)] = 4958,
  [SMALL_STATE(184)] = 4965,
  [SMALL_STATE(185)] = 4972,
  [SMALL_STATE(186)] = 4979,
  [SMALL_STATE(187)] = 4986,
  [SMALL_STATE(188)] = 4993,
  [SMALL_STATE(189)] = 5000,
  [SMALL_STATE(190)] = 5007,
  [SMALL_STATE(191)] = 5014,
  [SMALL_STATE(192)] = 5021,
  [SMALL_STATE(193)] = 5028,
  [SMALL_STATE(194)] = 5035,
  [SMALL_STATE(195)] = 5042,
  [SMALL_STATE(196)] = 5049,
  [SMALL_STATE(197)] = 5056,
  [SMALL_STATE(198)] = 5063,
  [SMALL_STATE(199)] = 5070,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(198),
  [9] = {.count = 1, .reusable = true}, SHIFT(163),
  [11] = {.count = 1, .reusable = true}, SHIFT(122),
  [13] = {.count = 1, .reusable = true}, SHIFT(9),
  [15] = {.count = 1, .reusable = true}, REDUCE(sym_expression_args, 3),
  [17] = {.count = 1, .reusable = false}, SHIFT(18),
  [19] = {.count = 1, .reusable = true}, SHIFT(5),
  [21] = {.count = 1, .reusable = true}, SHIFT(178),
  [23] = {.count = 1, .reusable = false}, SHIFT(53),
  [25] = {.count = 1, .reusable = true}, SHIFT(145),
  [27] = {.count = 1, .reusable = true}, SHIFT(144),
  [29] = {.count = 1, .reusable = true}, SHIFT(119),
  [31] = {.count = 1, .reusable = false}, SHIFT(32),
  [33] = {.count = 1, .reusable = true}, SHIFT(32),
  [35] = {.count = 1, .reusable = true}, SHIFT(53),
  [37] = {.count = 1, .reusable = true}, SHIFT(26),
  [39] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(9),
  [42] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2),
  [44] = {.count = 2, .reusable = false}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(18),
  [47] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(5),
  [50] = {.count = 2, .reusable = false}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(53),
  [53] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(145),
  [56] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(144),
  [59] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(119),
  [62] = {.count = 2, .reusable = false}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(32),
  [65] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(32),
  [68] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(53),
  [71] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(26),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym_expression_args, 2),
  [76] = {.count = 1, .reusable = true}, SHIFT(179),
  [78] = {.count = 1, .reusable = true}, SHIFT(14),
  [80] = {.count = 1, .reusable = false}, SHIFT(19),
  [82] = {.count = 1, .reusable = true}, SHIFT(7),
  [84] = {.count = 1, .reusable = true}, SHIFT(38),
  [86] = {.count = 1, .reusable = false}, SHIFT(90),
  [88] = {.count = 1, .reusable = true}, SHIFT(157),
  [90] = {.count = 1, .reusable = true}, SHIFT(156),
  [92] = {.count = 1, .reusable = true}, SHIFT(109),
  [94] = {.count = 1, .reusable = false}, SHIFT(73),
  [96] = {.count = 1, .reusable = true}, SHIFT(73),
  [98] = {.count = 1, .reusable = true}, SHIFT(90),
  [100] = {.count = 1, .reusable = true}, SHIFT(28),
  [102] = {.count = 1, .reusable = true}, SHIFT(82),
  [104] = {.count = 1, .reusable = true}, SHIFT(66),
  [106] = {.count = 1, .reusable = true}, SHIFT(42),
  [108] = {.count = 1, .reusable = false}, SHIFT(46),
  [110] = {.count = 1, .reusable = true}, SHIFT(139),
  [112] = {.count = 1, .reusable = true}, SHIFT(138),
  [114] = {.count = 1, .reusable = true}, SHIFT(114),
  [116] = {.count = 1, .reusable = true}, SHIFT(46),
  [118] = {.count = 1, .reusable = false}, SHIFT(97),
  [120] = {.count = 1, .reusable = true}, SHIFT(97),
  [122] = {.count = 1, .reusable = false}, SHIFT(71),
  [124] = {.count = 1, .reusable = true}, SHIFT(159),
  [126] = {.count = 1, .reusable = true}, SHIFT(158),
  [128] = {.count = 1, .reusable = true}, SHIFT(112),
  [130] = {.count = 1, .reusable = true}, SHIFT(71),
  [132] = {.count = 1, .reusable = false}, SHIFT(48),
  [134] = {.count = 1, .reusable = true}, SHIFT(48),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_template_string, 2),
  [138] = {.count = 1, .reusable = false}, REDUCE(sym_template_string, 2),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_left_arrow_accessor, 3),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym_left_arrow_accessor, 3),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_non_literal_factor, 1),
  [146] = {.count = 1, .reusable = false}, REDUCE(sym_non_literal_factor, 1),
  [148] = {.count = 1, .reusable = true}, SHIFT(8),
  [150] = {.count = 1, .reusable = true}, REDUCE(sym_multiplicative_expression, 3),
  [152] = {.count = 1, .reusable = false}, REDUCE(sym_multiplicative_expression, 3),
  [154] = {.count = 1, .reusable = true}, SHIFT(161),
  [156] = {.count = 1, .reusable = true}, SHIFT(177),
  [158] = {.count = 1, .reusable = false}, SHIFT(176),
  [160] = {.count = 1, .reusable = true}, SHIFT(13),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_multiplicative_expression, 1),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym_multiplicative_expression, 1),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_right_arrow_accessor, 3),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym_right_arrow_accessor, 3),
  [170] = {.count = 1, .reusable = true}, REDUCE(sym_simple_string, 3),
  [172] = {.count = 1, .reusable = false}, REDUCE(sym_simple_string, 3),
  [174] = {.count = 1, .reusable = true}, REDUCE(sym_dot_accessor, 3),
  [176] = {.count = 1, .reusable = false}, REDUCE(sym_dot_accessor, 3),
  [178] = {.count = 1, .reusable = true}, REDUCE(sym_list, 2),
  [180] = {.count = 1, .reusable = false}, REDUCE(sym_list, 2),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_array_accessor, 4),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym_array_accessor, 4),
  [186] = {.count = 1, .reusable = true}, REDUCE(sym_list, 3),
  [188] = {.count = 1, .reusable = false}, REDUCE(sym_list, 3),
  [190] = {.count = 1, .reusable = true}, REDUCE(sym_non_literal_factor, 3),
  [192] = {.count = 1, .reusable = false}, REDUCE(sym_non_literal_factor, 3),
  [194] = {.count = 1, .reusable = true}, REDUCE(sym_function_call, 3),
  [196] = {.count = 1, .reusable = false}, REDUCE(sym_function_call, 3),
  [198] = {.count = 1, .reusable = true}, REDUCE(sym_simple_string, 2),
  [200] = {.count = 1, .reusable = false}, REDUCE(sym_simple_string, 2),
  [202] = {.count = 1, .reusable = true}, REDUCE(sym_template_string, 3),
  [204] = {.count = 1, .reusable = false}, REDUCE(sym_template_string, 3),
  [206] = {.count = 1, .reusable = true}, REDUCE(sym_function_call, 4),
  [208] = {.count = 1, .reusable = false}, REDUCE(sym_function_call, 4),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [212] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_additive_expression, 1),
  [216] = {.count = 1, .reusable = false}, REDUCE(sym_additive_expression, 1),
  [218] = {.count = 1, .reusable = false}, SHIFT(29),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_additive_expression, 3),
  [222] = {.count = 1, .reusable = false}, REDUCE(sym_additive_expression, 3),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym__arithmetic_expression, 1),
  [226] = {.count = 1, .reusable = false}, REDUCE(sym__arithmetic_expression, 1),
  [228] = {.count = 1, .reusable = false}, SHIFT(24),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_conjuction_expression, 1),
  [232] = {.count = 1, .reusable = false}, REDUCE(sym_conjuction_expression, 1),
  [234] = {.count = 1, .reusable = true}, REDUCE(sym_negation_expression, 2),
  [236] = {.count = 1, .reusable = false}, REDUCE(sym_negation_expression, 2),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_relational_expression, 3),
  [240] = {.count = 1, .reusable = false}, REDUCE(sym_relational_expression, 3),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_conjuction_expression, 3),
  [244] = {.count = 1, .reusable = false}, REDUCE(sym_conjuction_expression, 3),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym_relational_expression, 1),
  [248] = {.count = 1, .reusable = false}, REDUCE(sym_relational_expression, 1),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_negation_expression, 1),
  [252] = {.count = 1, .reusable = false}, REDUCE(sym_negation_expression, 1),
  [254] = {.count = 1, .reusable = false}, SHIFT(22),
  [256] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction_expression, 1),
  [258] = {.count = 1, .reusable = false}, REDUCE(sym_disjunction_expression, 1),
  [260] = {.count = 1, .reusable = true}, SHIFT(21),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction_expression, 3),
  [264] = {.count = 1, .reusable = false}, REDUCE(sym_disjunction_expression, 3),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym__boolean_expression, 1),
  [268] = {.count = 1, .reusable = false}, REDUCE(sym__boolean_expression, 1),
  [270] = {.count = 1, .reusable = true}, SHIFT(17),
  [272] = {.count = 1, .reusable = true}, SHIFT(6),
  [274] = {.count = 1, .reusable = true}, SHIFT(170),
  [276] = {.count = 1, .reusable = true}, SHIFT(164),
  [278] = {.count = 1, .reusable = true}, SHIFT(168),
  [280] = {.count = 1, .reusable = true}, SHIFT(10),
  [282] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [284] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(198),
  [287] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(163),
  [290] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(122),
  [293] = {.count = 1, .reusable = true}, REDUCE(aux_sym_interface_definition_repeat2, 2),
  [295] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interface_definition_repeat2, 2), SHIFT_REPEAT(171),
  [298] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interface_definition_repeat2, 2), SHIFT_REPEAT(171),
  [301] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interface_definition_repeat2, 2), SHIFT_REPEAT(121),
  [304] = {.count = 1, .reusable = true}, SHIFT(148),
  [306] = {.count = 1, .reusable = true}, SHIFT(171),
  [308] = {.count = 1, .reusable = false}, SHIFT(171),
  [310] = {.count = 1, .reusable = true}, SHIFT(121),
  [312] = {.count = 1, .reusable = true}, SHIFT(154),
  [314] = {.count = 1, .reusable = false}, SHIFT(27),
  [316] = {.count = 1, .reusable = true}, SHIFT(150),
  [318] = {.count = 1, .reusable = true}, SHIFT(152),
  [320] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [322] = {.count = 1, .reusable = true}, SHIFT(141),
  [324] = {.count = 1, .reusable = false}, SHIFT(25),
  [326] = {.count = 1, .reusable = true}, SHIFT(23),
  [328] = {.count = 1, .reusable = true}, SHIFT(20),
  [330] = {.count = 1, .reusable = true}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [332] = {.count = 1, .reusable = false}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [334] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(121),
  [337] = {.count = 1, .reusable = true}, SHIFT(113),
  [339] = {.count = 1, .reusable = true}, SHIFT(86),
  [341] = {.count = 1, .reusable = true}, SHIFT(15),
  [343] = {.count = 1, .reusable = true}, SHIFT(118),
  [345] = {.count = 1, .reusable = true}, SHIFT(44),
  [347] = {.count = 1, .reusable = true}, REDUCE(sym_type_identifier, 1),
  [349] = {.count = 1, .reusable = true}, SHIFT(124),
  [351] = {.count = 1, .reusable = false}, REDUCE(sym_type_identifier, 1),
  [353] = {.count = 1, .reusable = true}, SHIFT(116),
  [355] = {.count = 1, .reusable = true}, SHIFT(72),
  [357] = {.count = 1, .reusable = true}, SHIFT(92),
  [359] = {.count = 1, .reusable = true}, SHIFT(110),
  [361] = {.count = 1, .reusable = true}, SHIFT(30),
  [363] = {.count = 1, .reusable = true}, SHIFT(49),
  [365] = {.count = 1, .reusable = true}, SHIFT(69),
  [367] = {.count = 1, .reusable = true}, SHIFT(172),
  [369] = {.count = 1, .reusable = false}, SHIFT(172),
  [371] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_string_repeat1, 2), SHIFT_REPEAT(118),
  [374] = {.count = 1, .reusable = true}, REDUCE(aux_sym_template_string_repeat1, 2),
  [376] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_string_repeat1, 2), SHIFT_REPEAT(15),
  [379] = {.count = 1, .reusable = true}, SHIFT(115),
  [381] = {.count = 1, .reusable = true}, SHIFT(51),
  [383] = {.count = 1, .reusable = true}, SHIFT(12),
  [385] = {.count = 1, .reusable = true}, REDUCE(sym_decorator, 1),
  [387] = {.count = 1, .reusable = false}, REDUCE(sym_decorator, 1),
  [389] = {.count = 1, .reusable = true}, SHIFT(11),
  [391] = {.count = 1, .reusable = true}, REDUCE(sym_interface_prop, 5),
  [393] = {.count = 1, .reusable = false}, REDUCE(sym_interface_prop, 5),
  [395] = {.count = 1, .reusable = true}, REDUCE(sym_type_identifier, 2),
  [397] = {.count = 1, .reusable = false}, REDUCE(sym_type_identifier, 2),
  [399] = {.count = 1, .reusable = true}, REDUCE(sym_interface_prop, 4),
  [401] = {.count = 1, .reusable = false}, REDUCE(sym_interface_prop, 4),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_interface_prop, 3),
  [405] = {.count = 1, .reusable = false}, REDUCE(sym_interface_prop, 3),
  [407] = {.count = 1, .reusable = true}, SHIFT(181),
  [409] = {.count = 1, .reusable = true}, SHIFT(167),
  [411] = {.count = 1, .reusable = true}, SHIFT(16),
  [413] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(122),
  [416] = {.count = 1, .reusable = true}, REDUCE(sym_decorator_args, 3),
  [418] = {.count = 1, .reusable = false}, REDUCE(sym_decorator_args, 3),
  [420] = {.count = 1, .reusable = true}, REDUCE(sym_template_substitution, 3),
  [422] = {.count = 1, .reusable = false}, REDUCE(aux_sym_simple_string_repeat1, 2),
  [424] = {.count = 2, .reusable = true}, REDUCE(aux_sym_simple_string_repeat1, 2), SHIFT_REPEAT(132),
  [427] = {.count = 2, .reusable = false}, REDUCE(aux_sym_simple_string_repeat1, 2), SHIFT_REPEAT(132),
  [430] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [432] = {.count = 1, .reusable = false}, REDUCE(aux_sym_simple_string_repeat2, 2),
  [434] = {.count = 2, .reusable = true}, REDUCE(aux_sym_simple_string_repeat2, 2), SHIFT_REPEAT(133),
  [437] = {.count = 2, .reusable = false}, REDUCE(aux_sym_simple_string_repeat2, 2), SHIFT_REPEAT(133),
  [440] = {.count = 1, .reusable = false}, SHIFT(36),
  [442] = {.count = 1, .reusable = true}, SHIFT(133),
  [444] = {.count = 1, .reusable = false}, SHIFT(133),
  [446] = {.count = 1, .reusable = false}, SHIFT(88),
  [448] = {.count = 1, .reusable = true}, SHIFT(132),
  [450] = {.count = 1, .reusable = false}, SHIFT(132),
  [452] = {.count = 1, .reusable = false}, SHIFT(43),
  [454] = {.count = 1, .reusable = true}, SHIFT(134),
  [456] = {.count = 1, .reusable = false}, SHIFT(134),
  [458] = {.count = 1, .reusable = true}, SHIFT(137),
  [460] = {.count = 1, .reusable = false}, SHIFT(137),
  [462] = {.count = 1, .reusable = false}, SHIFT(50),
  [464] = {.count = 1, .reusable = true}, REDUCE(sym_interface_definition, 4),
  [466] = {.count = 1, .reusable = true}, SHIFT(111),
  [468] = {.count = 1, .reusable = false}, SHIFT(111),
  [470] = {.count = 1, .reusable = false}, SHIFT(54),
  [472] = {.count = 1, .reusable = true}, SHIFT(140),
  [474] = {.count = 1, .reusable = false}, SHIFT(140),
  [476] = {.count = 1, .reusable = true}, SHIFT(143),
  [478] = {.count = 1, .reusable = false}, SHIFT(143),
  [480] = {.count = 1, .reusable = true}, REDUCE(sym_block, 1),
  [482] = {.count = 1, .reusable = false}, SHIFT(68),
  [484] = {.count = 1, .reusable = true}, REDUCE(sym_interface_definition, 5),
  [486] = {.count = 1, .reusable = true}, REDUCE(sym_decorator, 2),
  [488] = {.count = 1, .reusable = false}, REDUCE(sym_decorator, 2),
  [490] = {.count = 1, .reusable = true}, REDUCE(sym_interface_definition, 8),
  [492] = {.count = 1, .reusable = true}, REDUCE(sym_interface_definition, 7),
  [494] = {.count = 1, .reusable = true}, REDUCE(sym_interface_definition, 6),
  [496] = {.count = 1, .reusable = false}, SHIFT(84),
  [498] = {.count = 1, .reusable = true}, SHIFT(135),
  [500] = {.count = 1, .reusable = false}, SHIFT(135),
  [502] = {.count = 1, .reusable = true}, SHIFT(136),
  [504] = {.count = 1, .reusable = false}, SHIFT(136),
  [506] = {.count = 1, .reusable = false}, SHIFT(70),
  [508] = {.count = 1, .reusable = true}, SHIFT(147),
  [510] = {.count = 1, .reusable = false}, SHIFT(147),
  [512] = {.count = 1, .reusable = true}, SHIFT(153),
  [514] = {.count = 1, .reusable = false}, SHIFT(153),
  [516] = {.count = 1, .reusable = true}, SHIFT(101),
  [518] = {.count = 1, .reusable = true}, SHIFT(169),
  [520] = {.count = 1, .reusable = true}, SHIFT(31),
  [522] = {.count = 1, .reusable = false}, SHIFT(31),
  [524] = {.count = 1, .reusable = true}, SHIFT(89),
  [526] = {.count = 1, .reusable = true}, SHIFT(160),
  [528] = {.count = 1, .reusable = false}, SHIFT(160),
  [530] = {.count = 1, .reusable = true}, SHIFT(79),
  [532] = {.count = 1, .reusable = false}, SHIFT(79),
  [534] = {.count = 1, .reusable = true}, SHIFT(162),
  [536] = {.count = 1, .reusable = false}, SHIFT(162),
  [538] = {.count = 1, .reusable = true}, SHIFT(67),
  [540] = {.count = 1, .reusable = false}, SHIFT(67),
  [542] = {.count = 1, .reusable = true}, SHIFT(192),
  [544] = {.count = 1, .reusable = false}, SHIFT(192),
  [546] = {.count = 1, .reusable = true}, SHIFT(77),
  [548] = {.count = 1, .reusable = false}, SHIFT(77),
  [550] = {.count = 1, .reusable = true}, SHIFT(186),
  [552] = {.count = 1, .reusable = true}, SHIFT(142),
  [554] = {.count = 1, .reusable = true}, SHIFT(199),
  [556] = {.count = 1, .reusable = true}, SHIFT(155),
  [558] = {.count = 1, .reusable = true}, SHIFT(175),
  [560] = {.count = 1, .reusable = false}, SHIFT(175),
  [562] = {.count = 1, .reusable = true}, REDUCE(sym_expression_args, 1),
  [564] = {.count = 1, .reusable = true}, SHIFT(4),
  [566] = {.count = 1, .reusable = true}, SHIFT(100),
  [568] = {.count = 1, .reusable = true}, SHIFT(37),
  [570] = {.count = 1, .reusable = false}, SHIFT(37),
  [572] = {.count = 1, .reusable = true}, SHIFT(35),
  [574] = {.count = 1, .reusable = false}, SHIFT(35),
  [576] = {.count = 1, .reusable = true}, REDUCE(sym_expression_args, 4),
  [578] = {.count = 1, .reusable = true}, SHIFT(173),
  [580] = {.count = 1, .reusable = true}, SHIFT(166),
  [582] = {.count = 1, .reusable = true}, SHIFT(45),
  [584] = {.count = 1, .reusable = true}, SHIFT(39),
  [586] = {.count = 1, .reusable = true}, SHIFT(74),
  [588] = {.count = 1, .reusable = true}, SHIFT(75),
  [590] = {.count = 1, .reusable = true}, SHIFT(40),
  [592] = {.count = 1, .reusable = true}, SHIFT(41),
  [594] = {.count = 1, .reusable = true}, SHIFT(130),
  [596] = {.count = 1, .reusable = true}, REDUCE(sym_extends, 2),
  [598] = {.count = 1, .reusable = true}, SHIFT(131),
  [600] = {.count = 1, .reusable = true}, SHIFT(80),
  [602] = {.count = 1, .reusable = true}, SHIFT(81),
  [604] = {.count = 1, .reusable = true}, SHIFT(98),
  [606] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [608] = {.count = 1, .reusable = true}, SHIFT(151),
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
