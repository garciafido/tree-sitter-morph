#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 137
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 80
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
  sym_decorator_args = 47,
  sym_extends = 48,
  sym__expression = 49,
  sym__boolean_expression = 50,
  sym_disjunction_expression = 51,
  sym_conjuction_expression = 52,
  sym_negation_expression = 53,
  sym_relational_expression = 54,
  sym__arithmetic_expression = 55,
  sym_additive_expression = 56,
  sym_multiplicative_expression = 57,
  sym_non_literal_factor = 58,
  sym_left_arrow_accessor = 59,
  sym_right_arrow_accessor = 60,
  sym_dot_accessor = 61,
  sym_function_call = 62,
  sym_array_accessor = 63,
  sym_unary_expression = 64,
  sym_list = 65,
  sym_expression_args = 66,
  sym__literal = 67,
  sym__number = 68,
  sym__string = 69,
  sym_simple_string = 70,
  sym_template_string = 71,
  sym_template_substitution = 72,
  aux_sym_program_repeat1 = 73,
  aux_sym_interface_definition_repeat1 = 74,
  aux_sym_interface_definition_repeat2 = 75,
  aux_sym_expression_args_repeat1 = 76,
  aux_sym_simple_string_repeat1 = 77,
  aux_sym_simple_string_repeat2 = 78,
  aux_sym_template_string_repeat1 = 79,
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
  [25] = {.lex_state = 6},
  [26] = {.lex_state = 5},
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
  [37] = {.lex_state = 7},
  [38] = {.lex_state = 7},
  [39] = {.lex_state = 7},
  [40] = {.lex_state = 7},
  [41] = {.lex_state = 7},
  [42] = {.lex_state = 7},
  [43] = {.lex_state = 7},
  [44] = {.lex_state = 7},
  [45] = {.lex_state = 7},
  [46] = {.lex_state = 5},
  [47] = {.lex_state = 5},
  [48] = {.lex_state = 5},
  [49] = {.lex_state = 5},
  [50] = {.lex_state = 5},
  [51] = {.lex_state = 5},
  [52] = {.lex_state = 5},
  [53] = {.lex_state = 5},
  [54] = {.lex_state = 5},
  [55] = {.lex_state = 71},
  [56] = {.lex_state = 71},
  [57] = {.lex_state = 8},
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
  [68] = {.lex_state = 71},
  [69] = {.lex_state = 71},
  [70] = {.lex_state = 71},
  [71] = {.lex_state = 71},
  [72] = {.lex_state = 0, .external_lex_state = 2},
  [73] = {.lex_state = 0, .external_lex_state = 2},
  [74] = {.lex_state = 71},
  [75] = {.lex_state = 71},
  [76] = {.lex_state = 0, .external_lex_state = 2},
  [77] = {.lex_state = 71},
  [78] = {.lex_state = 71},
  [79] = {.lex_state = 71},
  [80] = {.lex_state = 0, .external_lex_state = 2},
  [81] = {.lex_state = 0, .external_lex_state = 2},
  [82] = {.lex_state = 8},
  [83] = {.lex_state = 71},
  [84] = {.lex_state = 8},
  [85] = {.lex_state = 8},
  [86] = {.lex_state = 71},
  [87] = {.lex_state = 8},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 0, .external_lex_state = 2},
  [90] = {.lex_state = 3},
  [91] = {.lex_state = 8},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 3},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 8},
  [97] = {.lex_state = 8},
  [98] = {.lex_state = 3},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 8},
  [101] = {.lex_state = 8},
  [102] = {.lex_state = 3},
  [103] = {.lex_state = 3},
  [104] = {.lex_state = 8},
  [105] = {.lex_state = 8},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 0},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 0},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 0},
  [120] = {.lex_state = 0},
  [121] = {.lex_state = 0},
  [122] = {.lex_state = 0},
  [123] = {.lex_state = 15},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 0},
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
  [136] = {.lex_state = 0},
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
    [sym_program] = STATE(128),
    [sym_block] = STATE(55),
    [sym_interface_definition] = STATE(74),
    [sym_decorator] = STATE(70),
    [aux_sym_program_repeat1] = STATE(55),
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
  [0] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_not,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(23), 1,
      anon_sym_COMMA,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym_integer,
    ACTIONS(35), 1,
      sym_unary_operator,
    STATE(35), 1,
      sym_non_literal_factor,
    STATE(37), 1,
      sym_multiplicative_expression,
    STATE(45), 1,
      sym_additive_expression,
    STATE(46), 1,
      sym_relational_expression,
    STATE(47), 1,
      sym__arithmetic_expression,
    STATE(50), 1,
      sym_negation_expression,
    STATE(53), 1,
      sym_conjuction_expression,
    STATE(54), 1,
      sym_disjunction_expression,
    ACTIONS(17), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(25), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(4), 3,
      sym__expression,
      sym__boolean_expression,
      aux_sym_expression_args_repeat1,
    STATE(43), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(36), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [85] = 23,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_not,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym_integer,
    ACTIONS(35), 1,
      sym_unary_operator,
    ACTIONS(39), 1,
      anon_sym_COMMA,
    STATE(35), 1,
      sym_non_literal_factor,
    STATE(37), 1,
      sym_multiplicative_expression,
    STATE(45), 1,
      sym_additive_expression,
    STATE(46), 1,
      sym_relational_expression,
    STATE(47), 1,
      sym__arithmetic_expression,
    STATE(50), 1,
      sym_negation_expression,
    STATE(53), 1,
      sym_conjuction_expression,
    STATE(54), 1,
      sym_disjunction_expression,
    ACTIONS(37), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
    ACTIONS(25), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(2), 3,
      sym__expression,
      sym__boolean_expression,
      aux_sym_expression_args_repeat1,
    STATE(43), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(36), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [170] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(41), 1,
      anon_sym_LPAREN,
    ACTIONS(46), 1,
      anon_sym_not,
    ACTIONS(49), 1,
      anon_sym_LBRACK,
    ACTIONS(55), 1,
      anon_sym_DQUOTE,
    ACTIONS(58), 1,
      anon_sym_SQUOTE,
    ACTIONS(61), 1,
      anon_sym_BQUOTE,
    ACTIONS(64), 1,
      sym_integer,
    ACTIONS(67), 1,
      sym_unary_operator,
    STATE(35), 1,
      sym_non_literal_factor,
    STATE(37), 1,
      sym_multiplicative_expression,
    STATE(45), 1,
      sym_additive_expression,
    STATE(46), 1,
      sym_relational_expression,
    STATE(47), 1,
      sym__arithmetic_expression,
    STATE(50), 1,
      sym_negation_expression,
    STATE(53), 1,
      sym_conjuction_expression,
    STATE(54), 1,
      sym_disjunction_expression,
    ACTIONS(44), 3,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
      anon_sym_COMMA,
    ACTIONS(52), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(4), 3,
      sym__expression,
      sym__boolean_expression,
      aux_sym_expression_args_repeat1,
    STATE(43), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(36), 7,
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
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_not,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym_integer,
    ACTIONS(35), 1,
      sym_unary_operator,
    ACTIONS(70), 1,
      anon_sym_RBRACK,
    STATE(35), 1,
      sym_non_literal_factor,
    STATE(37), 1,
      sym_multiplicative_expression,
    STATE(45), 1,
      sym_additive_expression,
    STATE(46), 1,
      sym_relational_expression,
    STATE(47), 1,
      sym__arithmetic_expression,
    STATE(50), 1,
      sym_negation_expression,
    STATE(53), 1,
      sym_conjuction_expression,
    STATE(54), 1,
      sym_disjunction_expression,
    STATE(122), 1,
      sym_expression_args,
    STATE(115), 2,
      sym__expression,
      sym__boolean_expression,
    ACTIONS(25), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(43), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(36), 7,
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
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_not,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym_integer,
    ACTIONS(35), 1,
      sym_unary_operator,
    ACTIONS(72), 1,
      anon_sym_RPAREN,
    STATE(35), 1,
      sym_non_literal_factor,
    STATE(37), 1,
      sym_multiplicative_expression,
    STATE(45), 1,
      sym_additive_expression,
    STATE(46), 1,
      sym_relational_expression,
    STATE(47), 1,
      sym__arithmetic_expression,
    STATE(50), 1,
      sym_negation_expression,
    STATE(53), 1,
      sym_conjuction_expression,
    STATE(54), 1,
      sym_disjunction_expression,
    STATE(131), 1,
      sym_expression_args,
    STATE(115), 2,
      sym__expression,
      sym__boolean_expression,
    ACTIONS(25), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(43), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(36), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [419] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_not,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym_integer,
    ACTIONS(35), 1,
      sym_unary_operator,
    STATE(35), 1,
      sym_non_literal_factor,
    STATE(37), 1,
      sym_multiplicative_expression,
    STATE(45), 1,
      sym_additive_expression,
    STATE(46), 1,
      sym_relational_expression,
    STATE(47), 1,
      sym__arithmetic_expression,
    STATE(50), 1,
      sym_negation_expression,
    STATE(53), 1,
      sym_conjuction_expression,
    STATE(54), 1,
      sym_disjunction_expression,
    STATE(132), 1,
      sym_expression_args,
    STATE(115), 2,
      sym__expression,
      sym__boolean_expression,
    ACTIONS(25), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(43), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(36), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [499] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_not,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym_integer,
    ACTIONS(35), 1,
      sym_unary_operator,
    STATE(35), 1,
      sym_non_literal_factor,
    STATE(37), 1,
      sym_multiplicative_expression,
    STATE(45), 1,
      sym_additive_expression,
    STATE(46), 1,
      sym_relational_expression,
    STATE(47), 1,
      sym__arithmetic_expression,
    STATE(50), 1,
      sym_negation_expression,
    STATE(53), 1,
      sym_conjuction_expression,
    STATE(54), 1,
      sym_disjunction_expression,
    STATE(121), 1,
      sym_expression_args,
    STATE(115), 2,
      sym__expression,
      sym__boolean_expression,
    ACTIONS(25), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(43), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(36), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [579] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_not,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym_integer,
    ACTIONS(35), 1,
      sym_unary_operator,
    STATE(35), 1,
      sym_non_literal_factor,
    STATE(37), 1,
      sym_multiplicative_expression,
    STATE(45), 1,
      sym_additive_expression,
    STATE(46), 1,
      sym_relational_expression,
    STATE(47), 1,
      sym__arithmetic_expression,
    STATE(50), 1,
      sym_negation_expression,
    STATE(53), 1,
      sym_conjuction_expression,
    STATE(54), 1,
      sym_disjunction_expression,
    STATE(136), 1,
      sym_expression_args,
    STATE(115), 2,
      sym__expression,
      sym__boolean_expression,
    ACTIONS(25), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(43), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(36), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [659] = 22,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_not,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym_integer,
    ACTIONS(35), 1,
      sym_unary_operator,
    STATE(35), 1,
      sym_non_literal_factor,
    STATE(37), 1,
      sym_multiplicative_expression,
    STATE(45), 1,
      sym_additive_expression,
    STATE(46), 1,
      sym_relational_expression,
    STATE(47), 1,
      sym__arithmetic_expression,
    STATE(50), 1,
      sym_negation_expression,
    STATE(53), 1,
      sym_conjuction_expression,
    STATE(54), 1,
      sym_disjunction_expression,
    STATE(130), 1,
      sym_expression_args,
    STATE(115), 2,
      sym__expression,
      sym__boolean_expression,
    ACTIONS(25), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(43), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(36), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [739] = 21,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_not,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym_integer,
    ACTIONS(35), 1,
      sym_unary_operator,
    STATE(35), 1,
      sym_non_literal_factor,
    STATE(37), 1,
      sym_multiplicative_expression,
    STATE(45), 1,
      sym_additive_expression,
    STATE(46), 1,
      sym_relational_expression,
    STATE(47), 1,
      sym__arithmetic_expression,
    STATE(50), 1,
      sym_negation_expression,
    STATE(53), 1,
      sym_conjuction_expression,
    STATE(54), 1,
      sym_disjunction_expression,
    STATE(129), 2,
      sym__expression,
      sym__boolean_expression,
    ACTIONS(25), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(43), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(36), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [816] = 19,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_not,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym_integer,
    ACTIONS(35), 1,
      sym_unary_operator,
    STATE(35), 1,
      sym_non_literal_factor,
    STATE(37), 1,
      sym_multiplicative_expression,
    STATE(45), 1,
      sym_additive_expression,
    STATE(46), 1,
      sym_relational_expression,
    STATE(47), 1,
      sym__arithmetic_expression,
    STATE(50), 1,
      sym_negation_expression,
    STATE(51), 1,
      sym_conjuction_expression,
    ACTIONS(25), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(43), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(36), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [886] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_not,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym_integer,
    ACTIONS(35), 1,
      sym_unary_operator,
    STATE(35), 1,
      sym_non_literal_factor,
    STATE(37), 1,
      sym_multiplicative_expression,
    STATE(45), 1,
      sym_additive_expression,
    STATE(46), 1,
      sym_relational_expression,
    STATE(47), 1,
      sym__arithmetic_expression,
    STATE(52), 1,
      sym_negation_expression,
    ACTIONS(25), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(43), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(36), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [953] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(19), 1,
      anon_sym_not,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym_integer,
    ACTIONS(35), 1,
      sym_unary_operator,
    STATE(35), 1,
      sym_non_literal_factor,
    STATE(37), 1,
      sym_multiplicative_expression,
    STATE(45), 1,
      sym_additive_expression,
    STATE(46), 1,
      sym_relational_expression,
    STATE(47), 1,
      sym__arithmetic_expression,
    STATE(49), 1,
      sym_negation_expression,
    ACTIONS(25), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(43), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(36), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [1020] = 15,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym_integer,
    ACTIONS(35), 1,
      sym_unary_operator,
    STATE(35), 1,
      sym_non_literal_factor,
    STATE(37), 1,
      sym_multiplicative_expression,
    STATE(45), 1,
      sym_additive_expression,
    STATE(48), 1,
      sym__arithmetic_expression,
    ACTIONS(25), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(43), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(36), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [1078] = 13,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(33), 1,
      sym_integer,
    ACTIONS(35), 1,
      sym_unary_operator,
    STATE(35), 1,
      sym_non_literal_factor,
    STATE(40), 1,
      sym_multiplicative_expression,
    ACTIONS(25), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(43), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(36), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [1130] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(74), 16,
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
  [1161] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(78), 16,
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
  [1192] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(84), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(82), 16,
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
  [1223] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(88), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(86), 16,
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
  [1254] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(27), 1,
      anon_sym_DQUOTE,
    ACTIONS(29), 1,
      anon_sym_SQUOTE,
    ACTIONS(31), 1,
      anon_sym_BQUOTE,
    ACTIONS(35), 1,
      sym_unary_operator,
    ACTIONS(92), 1,
      sym_integer,
    STATE(34), 1,
      sym_non_literal_factor,
    ACTIONS(90), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(39), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(36), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [1303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(94), 16,
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
  [1334] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(100), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(98), 16,
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
  [1365] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(102), 16,
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
  [1396] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(108), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(106), 16,
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
  [1427] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(15), 1,
      anon_sym_LPAREN,
    ACTIONS(21), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_unary_operator,
    ACTIONS(112), 1,
      anon_sym_DQUOTE,
    ACTIONS(114), 1,
      anon_sym_SQUOTE,
    ACTIONS(116), 1,
      anon_sym_BQUOTE,
    ACTIONS(118), 1,
      sym_integer,
    STATE(29), 1,
      sym_non_literal_factor,
    ACTIONS(110), 3,
      sym_false,
      sym_true,
      sym_float,
    STATE(28), 5,
      sym__literal,
      sym__number,
      sym__string,
      sym_simple_string,
      sym_template_string,
    STATE(36), 7,
      sym_left_arrow_accessor,
      sym_right_arrow_accessor,
      sym_dot_accessor,
      sym_function_call,
      sym_array_accessor,
      sym_unary_expression,
      sym_list,
  [1476] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(122), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(120), 16,
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
  [1507] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(124), 16,
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
  [1538] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(126), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(124), 16,
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
  [1569] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(130), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(128), 16,
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
  [1600] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(132), 16,
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
  [1631] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(136), 16,
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
  [1662] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(142), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(140), 16,
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
  [1693] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      anon_sym_DASH_GT,
    ACTIONS(152), 1,
      anon_sym_LT_DASH,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      anon_sym_LBRACK,
    ACTIONS(148), 6,
      anon_sym_not,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(144), 12,
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
  [1734] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(146), 1,
      anon_sym_LPAREN,
    ACTIONS(150), 1,
      anon_sym_DASH_GT,
    ACTIONS(152), 1,
      anon_sym_LT_DASH,
    ACTIONS(154), 1,
      anon_sym_DOT,
    ACTIONS(156), 1,
      anon_sym_LBRACK,
    ACTIONS(160), 6,
      anon_sym_not,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(158), 12,
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
  [1775] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(164), 7,
      anon_sym_not,
      anon_sym_DOT,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
      sym_relational_operator,
    ACTIONS(162), 16,
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
  [1806] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
      sym_multiplicative_operator,
    ACTIONS(168), 4,
      anon_sym_not,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
    ACTIONS(166), 15,
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
  [1836] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(76), 5,
      anon_sym_not,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
    ACTIONS(74), 15,
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
  [1864] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(148), 5,
      anon_sym_not,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
    ACTIONS(144), 15,
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
  [1892] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(170), 1,
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
  [1922] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(134), 5,
      anon_sym_not,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
    ACTIONS(132), 15,
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
  [1950] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(138), 5,
      anon_sym_not,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
    ACTIONS(136), 15,
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
  [1978] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(160), 5,
      anon_sym_not,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
    ACTIONS(158), 15,
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
  [2006] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(80), 5,
      anon_sym_not,
      sym_integer,
      sym_additive_operator,
      sym_unary_operator,
      sym_multiplicative_operator,
    ACTIONS(78), 15,
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
  [2034] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(180), 1,
      sym_additive_operator,
    ACTIONS(178), 3,
      anon_sym_not,
      sym_integer,
      sym_unary_operator,
    ACTIONS(176), 15,
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
  [2063] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(186), 1,
      sym_relational_operator,
    ACTIONS(184), 2,
      anon_sym_not,
      sym_integer,
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
      sym_unary_operator,
  [2091] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 2,
      anon_sym_not,
      sym_integer,
    ACTIONS(188), 16,
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
  [2117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 2,
      anon_sym_not,
      sym_integer,
    ACTIONS(192), 16,
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
  [2143] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(198), 1,
      sym_integer,
    ACTIONS(196), 16,
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
  [2168] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      sym_integer,
    ACTIONS(200), 16,
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
  [2193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(206), 1,
      sym_integer,
    ACTIONS(208), 1,
      sym_conjuction_operator,
    ACTIONS(204), 15,
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
  [2220] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(212), 1,
      sym_integer,
    ACTIONS(210), 16,
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
  [2245] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 1,
      sym_conjuction_operator,
    ACTIONS(216), 1,
      sym_integer,
    ACTIONS(214), 15,
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
  [2272] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 1,
      sym_integer,
    ACTIONS(222), 1,
      sym_disjunction_operator,
    ACTIONS(218), 14,
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
  [2298] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_abstract,
    ACTIONS(9), 1,
      anon_sym_interface,
    ACTIONS(13), 1,
      sym_pascal_identifier,
    ACTIONS(224), 1,
      ts_builtin_sym_end,
    STATE(74), 1,
      sym_interface_definition,
    ACTIONS(11), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    STATE(56), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(70), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2329] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(226), 1,
      ts_builtin_sym_end,
    ACTIONS(228), 1,
      anon_sym_abstract,
    ACTIONS(231), 1,
      anon_sym_interface,
    ACTIONS(237), 1,
      sym_pascal_identifier,
    STATE(74), 1,
      sym_interface_definition,
    ACTIONS(234), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    STATE(56), 2,
      sym_block,
      aux_sym_program_repeat1,
    STATE(70), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2360] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    ACTIONS(244), 1,
      sym_snake_identifier,
    ACTIONS(242), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(64), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(82), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2382] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 1,
      anon_sym_COLON,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      sym_snake_identifier,
    STATE(112), 1,
      sym_decorator_args,
    ACTIONS(246), 2,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
    ACTIONS(252), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [2406] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_snake_identifier,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    ACTIONS(242), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(57), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(82), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2428] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_snake_identifier,
    ACTIONS(258), 1,
      anon_sym_RBRACE,
    ACTIONS(242), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(61), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(82), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2450] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_snake_identifier,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    ACTIONS(242), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(64), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(82), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2472] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 1,
      anon_sym_RBRACE,
    ACTIONS(244), 1,
      sym_snake_identifier,
    ACTIONS(242), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(63), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(82), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2494] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_snake_identifier,
    ACTIONS(262), 1,
      anon_sym_RBRACE,
    ACTIONS(242), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(64), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(82), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2516] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 1,
      anon_sym_RBRACE,
    ACTIONS(269), 1,
      sym_snake_identifier,
    ACTIONS(266), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(64), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(82), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2538] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      sym_snake_identifier,
    ACTIONS(274), 1,
      anon_sym_COLON,
    STATE(112), 1,
      sym_decorator_args,
    ACTIONS(252), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    ACTIONS(272), 2,
      anon_sym_LBRACK_RBRACK,
      anon_sym_BANG,
  [2562] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_snake_identifier,
    ACTIONS(260), 1,
      anon_sym_RBRACE,
    ACTIONS(242), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(67), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(82), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2584] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 1,
      sym_snake_identifier,
    ACTIONS(256), 1,
      anon_sym_RBRACE,
    ACTIONS(242), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(64), 2,
      sym_interface_prop,
      aux_sym_interface_definition_repeat2,
    STATE(82), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2606] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 1,
      sym_pascal_identifier,
    ACTIONS(276), 1,
      anon_sym_LPAREN,
    STATE(86), 1,
      sym_decorator_args,
    ACTIONS(254), 4,
      anon_sym_abstract,
      anon_sym_interface,
      sym_camel_identifier,
      sym_snake_identifier,
  [2625] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(283), 1,
      sym_pascal_identifier,
    ACTIONS(278), 2,
      anon_sym_abstract,
      anon_sym_interface,
    ACTIONS(280), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    STATE(69), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2644] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(13), 1,
      sym_pascal_identifier,
    ACTIONS(286), 1,
      anon_sym_abstract,
    ACTIONS(288), 1,
      anon_sym_interface,
    ACTIONS(11), 2,
      sym_camel_identifier,
      sym_snake_identifier,
    STATE(69), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2665] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 2,
      ts_builtin_sym_end,
      sym_pascal_identifier,
    ACTIONS(292), 4,
      anon_sym_abstract,
      anon_sym_interface,
      sym_camel_identifier,
      sym_snake_identifier,
  [2679] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 1,
      anon_sym_BQUOTE,
    ACTIONS(298), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(294), 2,
      sym__template_chars,
      sym_escape_sequence,
    STATE(80), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [2697] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(302), 1,
      anon_sym_BQUOTE,
    ACTIONS(300), 2,
      sym__template_chars,
      sym_escape_sequence,
    STATE(72), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [2715] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 2,
      ts_builtin_sym_end,
      sym_pascal_identifier,
    ACTIONS(306), 4,
      anon_sym_abstract,
      anon_sym_interface,
      sym_camel_identifier,
      sym_snake_identifier,
  [2729] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 2,
      ts_builtin_sym_end,
      sym_pascal_identifier,
    ACTIONS(310), 4,
      anon_sym_abstract,
      anon_sym_interface,
      sym_camel_identifier,
      sym_snake_identifier,
  [2743] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(312), 1,
      anon_sym_BQUOTE,
    ACTIONS(294), 2,
      sym__template_chars,
      sym_escape_sequence,
    STATE(80), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [2761] = 3,
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
  [2775] = 3,
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
  [2789] = 3,
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
  [2803] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(329), 1,
      anon_sym_BQUOTE,
    ACTIONS(331), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(326), 2,
      sym__template_chars,
      sym_escape_sequence,
    STATE(80), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [2821] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(336), 1,
      anon_sym_BQUOTE,
    ACTIONS(334), 2,
      sym__template_chars,
      sym_escape_sequence,
    STATE(76), 2,
      sym_template_substitution,
      aux_sym_template_string_repeat1,
  [2839] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(340), 1,
      sym_snake_identifier,
    ACTIONS(338), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(84), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2854] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(344), 1,
      sym_pascal_identifier,
    ACTIONS(342), 4,
      anon_sym_abstract,
      anon_sym_interface,
      sym_camel_identifier,
      sym_snake_identifier,
  [2867] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(349), 1,
      sym_snake_identifier,
    ACTIONS(346), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
    STATE(84), 2,
      sym_decorator,
      aux_sym_interface_definition_repeat1,
  [2882] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 1,
      anon_sym_LPAREN,
    ACTIONS(254), 1,
      sym_snake_identifier,
    STATE(112), 1,
      sym_decorator_args,
    ACTIONS(252), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [2899] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym_pascal_identifier,
    ACTIONS(352), 4,
      anon_sym_abstract,
      anon_sym_interface,
      sym_camel_identifier,
      sym_snake_identifier,
  [2912] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(358), 1,
      anon_sym_LBRACK_RBRACK,
    ACTIONS(360), 1,
      sym_snake_identifier,
    ACTIONS(356), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_pascal_identifier,
  [2927] = 5,
    ACTIONS(362), 1,
      anon_sym_DQUOTE,
    ACTIONS(364), 1,
      aux_sym_simple_string_token1,
    ACTIONS(366), 1,
      sym_escape_sequence,
    ACTIONS(368), 1,
      sym_comment,
    STATE(92), 1,
      aux_sym_simple_string_repeat1,
  [2943] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 4,
      sym__template_chars,
      sym_escape_sequence,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [2953] = 5,
    ACTIONS(368), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_SQUOTE,
    ACTIONS(374), 1,
      aux_sym_simple_string_token2,
    ACTIONS(376), 1,
      sym_escape_sequence,
    STATE(102), 1,
      aux_sym_simple_string_repeat2,
  [2969] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(380), 1,
      sym_snake_identifier,
    ACTIONS(378), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_pascal_identifier,
  [2981] = 5,
    ACTIONS(368), 1,
      sym_comment,
    ACTIONS(372), 1,
      anon_sym_DQUOTE,
    ACTIONS(382), 1,
      aux_sym_simple_string_token1,
    ACTIONS(384), 1,
      sym_escape_sequence,
    STATE(93), 1,
      aux_sym_simple_string_repeat1,
  [2997] = 5,
    ACTIONS(368), 1,
      sym_comment,
    ACTIONS(386), 1,
      anon_sym_DQUOTE,
    ACTIONS(388), 1,
      aux_sym_simple_string_token1,
    ACTIONS(391), 1,
      sym_escape_sequence,
    STATE(93), 1,
      aux_sym_simple_string_repeat1,
  [3013] = 5,
    ACTIONS(368), 1,
      sym_comment,
    ACTIONS(374), 1,
      aux_sym_simple_string_token2,
    ACTIONS(376), 1,
      sym_escape_sequence,
    ACTIONS(394), 1,
      anon_sym_SQUOTE,
    STATE(102), 1,
      aux_sym_simple_string_repeat2,
  [3029] = 5,
    ACTIONS(368), 1,
      sym_comment,
    ACTIONS(382), 1,
      aux_sym_simple_string_token1,
    ACTIONS(384), 1,
      sym_escape_sequence,
    ACTIONS(394), 1,
      anon_sym_DQUOTE,
    STATE(93), 1,
      aux_sym_simple_string_repeat1,
  [3045] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym_snake_identifier,
    STATE(105), 1,
      sym_type_identifier,
    ACTIONS(396), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3059] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym_snake_identifier,
    STATE(91), 1,
      sym_type_identifier,
    ACTIONS(396), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3073] = 5,
    ACTIONS(368), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_SQUOTE,
    ACTIONS(402), 1,
      aux_sym_simple_string_token2,
    ACTIONS(404), 1,
      sym_escape_sequence,
    STATE(94), 1,
      aux_sym_simple_string_repeat2,
  [3089] = 5,
    ACTIONS(368), 1,
      sym_comment,
    ACTIONS(400), 1,
      anon_sym_DQUOTE,
    ACTIONS(406), 1,
      aux_sym_simple_string_token1,
    ACTIONS(408), 1,
      sym_escape_sequence,
    STATE(95), 1,
      aux_sym_simple_string_repeat1,
  [3105] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(412), 1,
      sym_snake_identifier,
    ACTIONS(410), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3117] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(416), 1,
      sym_snake_identifier,
    ACTIONS(414), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3129] = 5,
    ACTIONS(368), 1,
      sym_comment,
    ACTIONS(418), 1,
      anon_sym_SQUOTE,
    ACTIONS(420), 1,
      aux_sym_simple_string_token2,
    ACTIONS(423), 1,
      sym_escape_sequence,
    STATE(102), 1,
      aux_sym_simple_string_repeat2,
  [3145] = 5,
    ACTIONS(362), 1,
      anon_sym_SQUOTE,
    ACTIONS(368), 1,
      sym_comment,
    ACTIONS(426), 1,
      aux_sym_simple_string_token2,
    ACTIONS(428), 1,
      sym_escape_sequence,
    STATE(90), 1,
      aux_sym_simple_string_repeat2,
  [3161] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(398), 1,
      sym_snake_identifier,
    STATE(101), 1,
      sym_type_identifier,
    ACTIONS(396), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3175] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      sym_snake_identifier,
    ACTIONS(430), 3,
      anon_sym_RBRACE,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3187] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
    ACTIONS(436), 1,
      anon_sym_extends,
    STATE(126), 1,
      sym_extends,
  [3200] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_extends,
    ACTIONS(438), 1,
      anon_sym_LBRACE,
    STATE(124), 1,
      sym_extends,
  [3213] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(442), 1,
      sym_snake_identifier,
    ACTIONS(440), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3224] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 1,
      sym_snake_identifier,
    ACTIONS(444), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3235] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(450), 1,
      sym_snake_identifier,
    ACTIONS(448), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3246] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(436), 1,
      anon_sym_extends,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
    STATE(133), 1,
      sym_extends,
  [3259] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(352), 1,
      sym_snake_identifier,
    ACTIONS(354), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3270] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(456), 1,
      sym_snake_identifier,
    ACTIONS(454), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3281] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(342), 1,
      sym_snake_identifier,
    ACTIONS(344), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3292] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(460), 1,
      anon_sym_COMMA,
    ACTIONS(458), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3303] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(464), 1,
      sym_snake_identifier,
    ACTIONS(462), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3314] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(468), 1,
      sym_snake_identifier,
    ACTIONS(466), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3325] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(472), 1,
      sym_snake_identifier,
    ACTIONS(470), 2,
      sym_camel_identifier,
      sym_pascal_identifier,
  [3336] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(474), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3344] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 2,
      anon_sym_RPAREN,
      anon_sym_RBRACK,
  [3352] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(476), 1,
      anon_sym_RBRACK,
  [3359] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(478), 1,
      anon_sym_RBRACK,
  [3366] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(480), 1,
      anon_sym_interface,
  [3373] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(452), 1,
      anon_sym_LBRACE,
  [3380] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(482), 1,
      anon_sym_COLON,
  [3387] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(484), 1,
      anon_sym_LBRACE,
  [3394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(486), 1,
      anon_sym_interface,
  [3401] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(488), 1,
      ts_builtin_sym_end,
  [3408] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(490), 1,
      anon_sym_RBRACE,
  [3415] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(492), 1,
      anon_sym_RPAREN,
  [3422] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(494), 1,
      anon_sym_RPAREN,
  [3429] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(496), 1,
      anon_sym_RPAREN,
  [3436] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 1,
      anon_sym_LBRACE,
  [3443] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(498), 1,
      anon_sym_LBRACE,
  [3450] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 1,
      anon_sym_COLON,
  [3457] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(500), 1,
      anon_sym_RPAREN,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 85,
  [SMALL_STATE(4)] = 170,
  [SMALL_STATE(5)] = 253,
  [SMALL_STATE(6)] = 336,
  [SMALL_STATE(7)] = 419,
  [SMALL_STATE(8)] = 499,
  [SMALL_STATE(9)] = 579,
  [SMALL_STATE(10)] = 659,
  [SMALL_STATE(11)] = 739,
  [SMALL_STATE(12)] = 816,
  [SMALL_STATE(13)] = 886,
  [SMALL_STATE(14)] = 953,
  [SMALL_STATE(15)] = 1020,
  [SMALL_STATE(16)] = 1078,
  [SMALL_STATE(17)] = 1130,
  [SMALL_STATE(18)] = 1161,
  [SMALL_STATE(19)] = 1192,
  [SMALL_STATE(20)] = 1223,
  [SMALL_STATE(21)] = 1254,
  [SMALL_STATE(22)] = 1303,
  [SMALL_STATE(23)] = 1334,
  [SMALL_STATE(24)] = 1365,
  [SMALL_STATE(25)] = 1396,
  [SMALL_STATE(26)] = 1427,
  [SMALL_STATE(27)] = 1476,
  [SMALL_STATE(28)] = 1507,
  [SMALL_STATE(29)] = 1538,
  [SMALL_STATE(30)] = 1569,
  [SMALL_STATE(31)] = 1600,
  [SMALL_STATE(32)] = 1631,
  [SMALL_STATE(33)] = 1662,
  [SMALL_STATE(34)] = 1693,
  [SMALL_STATE(35)] = 1734,
  [SMALL_STATE(36)] = 1775,
  [SMALL_STATE(37)] = 1806,
  [SMALL_STATE(38)] = 1836,
  [SMALL_STATE(39)] = 1864,
  [SMALL_STATE(40)] = 1892,
  [SMALL_STATE(41)] = 1922,
  [SMALL_STATE(42)] = 1950,
  [SMALL_STATE(43)] = 1978,
  [SMALL_STATE(44)] = 2006,
  [SMALL_STATE(45)] = 2034,
  [SMALL_STATE(46)] = 2063,
  [SMALL_STATE(47)] = 2091,
  [SMALL_STATE(48)] = 2117,
  [SMALL_STATE(49)] = 2143,
  [SMALL_STATE(50)] = 2168,
  [SMALL_STATE(51)] = 2193,
  [SMALL_STATE(52)] = 2220,
  [SMALL_STATE(53)] = 2245,
  [SMALL_STATE(54)] = 2272,
  [SMALL_STATE(55)] = 2298,
  [SMALL_STATE(56)] = 2329,
  [SMALL_STATE(57)] = 2360,
  [SMALL_STATE(58)] = 2382,
  [SMALL_STATE(59)] = 2406,
  [SMALL_STATE(60)] = 2428,
  [SMALL_STATE(61)] = 2450,
  [SMALL_STATE(62)] = 2472,
  [SMALL_STATE(63)] = 2494,
  [SMALL_STATE(64)] = 2516,
  [SMALL_STATE(65)] = 2538,
  [SMALL_STATE(66)] = 2562,
  [SMALL_STATE(67)] = 2584,
  [SMALL_STATE(68)] = 2606,
  [SMALL_STATE(69)] = 2625,
  [SMALL_STATE(70)] = 2644,
  [SMALL_STATE(71)] = 2665,
  [SMALL_STATE(72)] = 2679,
  [SMALL_STATE(73)] = 2697,
  [SMALL_STATE(74)] = 2715,
  [SMALL_STATE(75)] = 2729,
  [SMALL_STATE(76)] = 2743,
  [SMALL_STATE(77)] = 2761,
  [SMALL_STATE(78)] = 2775,
  [SMALL_STATE(79)] = 2789,
  [SMALL_STATE(80)] = 2803,
  [SMALL_STATE(81)] = 2821,
  [SMALL_STATE(82)] = 2839,
  [SMALL_STATE(83)] = 2854,
  [SMALL_STATE(84)] = 2867,
  [SMALL_STATE(85)] = 2882,
  [SMALL_STATE(86)] = 2899,
  [SMALL_STATE(87)] = 2912,
  [SMALL_STATE(88)] = 2927,
  [SMALL_STATE(89)] = 2943,
  [SMALL_STATE(90)] = 2953,
  [SMALL_STATE(91)] = 2969,
  [SMALL_STATE(92)] = 2981,
  [SMALL_STATE(93)] = 2997,
  [SMALL_STATE(94)] = 3013,
  [SMALL_STATE(95)] = 3029,
  [SMALL_STATE(96)] = 3045,
  [SMALL_STATE(97)] = 3059,
  [SMALL_STATE(98)] = 3073,
  [SMALL_STATE(99)] = 3089,
  [SMALL_STATE(100)] = 3105,
  [SMALL_STATE(101)] = 3117,
  [SMALL_STATE(102)] = 3129,
  [SMALL_STATE(103)] = 3145,
  [SMALL_STATE(104)] = 3161,
  [SMALL_STATE(105)] = 3175,
  [SMALL_STATE(106)] = 3187,
  [SMALL_STATE(107)] = 3200,
  [SMALL_STATE(108)] = 3213,
  [SMALL_STATE(109)] = 3224,
  [SMALL_STATE(110)] = 3235,
  [SMALL_STATE(111)] = 3246,
  [SMALL_STATE(112)] = 3259,
  [SMALL_STATE(113)] = 3270,
  [SMALL_STATE(114)] = 3281,
  [SMALL_STATE(115)] = 3292,
  [SMALL_STATE(116)] = 3303,
  [SMALL_STATE(117)] = 3314,
  [SMALL_STATE(118)] = 3325,
  [SMALL_STATE(119)] = 3336,
  [SMALL_STATE(120)] = 3344,
  [SMALL_STATE(121)] = 3352,
  [SMALL_STATE(122)] = 3359,
  [SMALL_STATE(123)] = 3366,
  [SMALL_STATE(124)] = 3373,
  [SMALL_STATE(125)] = 3380,
  [SMALL_STATE(126)] = 3387,
  [SMALL_STATE(127)] = 3394,
  [SMALL_STATE(128)] = 3401,
  [SMALL_STATE(129)] = 3408,
  [SMALL_STATE(130)] = 3415,
  [SMALL_STATE(131)] = 3422,
  [SMALL_STATE(132)] = 3429,
  [SMALL_STATE(133)] = 3436,
  [SMALL_STATE(134)] = 3443,
  [SMALL_STATE(135)] = 3450,
  [SMALL_STATE(136)] = 3457,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_program, 0),
  [7] = {.count = 1, .reusable = false}, SHIFT(127),
  [9] = {.count = 1, .reusable = false}, SHIFT(117),
  [11] = {.count = 1, .reusable = false}, SHIFT(68),
  [13] = {.count = 1, .reusable = true}, SHIFT(68),
  [15] = {.count = 1, .reusable = true}, SHIFT(9),
  [17] = {.count = 1, .reusable = true}, REDUCE(sym_expression_args, 3),
  [19] = {.count = 1, .reusable = true}, SHIFT(13),
  [21] = {.count = 1, .reusable = true}, SHIFT(5),
  [23] = {.count = 1, .reusable = true}, SHIFT(119),
  [25] = {.count = 1, .reusable = true}, SHIFT(43),
  [27] = {.count = 1, .reusable = true}, SHIFT(88),
  [29] = {.count = 1, .reusable = true}, SHIFT(103),
  [31] = {.count = 1, .reusable = true}, SHIFT(81),
  [33] = {.count = 1, .reusable = false}, SHIFT(43),
  [35] = {.count = 1, .reusable = true}, SHIFT(26),
  [37] = {.count = 1, .reusable = true}, REDUCE(sym_expression_args, 2),
  [39] = {.count = 1, .reusable = true}, SHIFT(120),
  [41] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(9),
  [44] = {.count = 1, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2),
  [46] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(13),
  [49] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(5),
  [52] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(43),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(88),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(103),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(81),
  [64] = {.count = 2, .reusable = false}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(43),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_expression_args_repeat1, 2), SHIFT_REPEAT(26),
  [70] = {.count = 1, .reusable = true}, SHIFT(33),
  [72] = {.count = 1, .reusable = true}, SHIFT(22),
  [74] = {.count = 1, .reusable = true}, REDUCE(sym_simple_string, 2),
  [76] = {.count = 1, .reusable = false}, REDUCE(sym_simple_string, 2),
  [78] = {.count = 1, .reusable = true}, REDUCE(sym_template_string, 3),
  [80] = {.count = 1, .reusable = false}, REDUCE(sym_template_string, 3),
  [82] = {.count = 1, .reusable = true}, REDUCE(sym_function_call, 4),
  [84] = {.count = 1, .reusable = false}, REDUCE(sym_function_call, 4),
  [86] = {.count = 1, .reusable = true}, REDUCE(sym_array_accessor, 4),
  [88] = {.count = 1, .reusable = false}, REDUCE(sym_array_accessor, 4),
  [90] = {.count = 1, .reusable = true}, SHIFT(39),
  [92] = {.count = 1, .reusable = false}, SHIFT(39),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_function_call, 3),
  [96] = {.count = 1, .reusable = false}, REDUCE(sym_function_call, 3),
  [98] = {.count = 1, .reusable = true}, REDUCE(sym_non_literal_factor, 3),
  [100] = {.count = 1, .reusable = false}, REDUCE(sym_non_literal_factor, 3),
  [102] = {.count = 1, .reusable = true}, REDUCE(sym_dot_accessor, 3),
  [104] = {.count = 1, .reusable = false}, REDUCE(sym_dot_accessor, 3),
  [106] = {.count = 1, .reusable = true}, REDUCE(sym_right_arrow_accessor, 3),
  [108] = {.count = 1, .reusable = false}, REDUCE(sym_right_arrow_accessor, 3),
  [110] = {.count = 1, .reusable = true}, SHIFT(28),
  [112] = {.count = 1, .reusable = true}, SHIFT(99),
  [114] = {.count = 1, .reusable = true}, SHIFT(98),
  [116] = {.count = 1, .reusable = true}, SHIFT(73),
  [118] = {.count = 1, .reusable = false}, SHIFT(28),
  [120] = {.count = 1, .reusable = true}, REDUCE(sym_left_arrow_accessor, 3),
  [122] = {.count = 1, .reusable = false}, REDUCE(sym_left_arrow_accessor, 3),
  [124] = {.count = 1, .reusable = true}, REDUCE(sym_unary_expression, 2),
  [126] = {.count = 1, .reusable = false}, REDUCE(sym_unary_expression, 2),
  [128] = {.count = 1, .reusable = true}, REDUCE(sym_list, 3),
  [130] = {.count = 1, .reusable = false}, REDUCE(sym_list, 3),
  [132] = {.count = 1, .reusable = true}, REDUCE(sym_template_string, 2),
  [134] = {.count = 1, .reusable = false}, REDUCE(sym_template_string, 2),
  [136] = {.count = 1, .reusable = true}, REDUCE(sym_simple_string, 3),
  [138] = {.count = 1, .reusable = false}, REDUCE(sym_simple_string, 3),
  [140] = {.count = 1, .reusable = true}, REDUCE(sym_list, 2),
  [142] = {.count = 1, .reusable = false}, REDUCE(sym_list, 2),
  [144] = {.count = 1, .reusable = true}, REDUCE(sym_multiplicative_expression, 3),
  [146] = {.count = 1, .reusable = true}, SHIFT(6),
  [148] = {.count = 1, .reusable = false}, REDUCE(sym_multiplicative_expression, 3),
  [150] = {.count = 1, .reusable = true}, SHIFT(118),
  [152] = {.count = 1, .reusable = true}, SHIFT(108),
  [154] = {.count = 1, .reusable = false}, SHIFT(109),
  [156] = {.count = 1, .reusable = true}, SHIFT(8),
  [158] = {.count = 1, .reusable = true}, REDUCE(sym_multiplicative_expression, 1),
  [160] = {.count = 1, .reusable = false}, REDUCE(sym_multiplicative_expression, 1),
  [162] = {.count = 1, .reusable = true}, REDUCE(sym_non_literal_factor, 1),
  [164] = {.count = 1, .reusable = false}, REDUCE(sym_non_literal_factor, 1),
  [166] = {.count = 1, .reusable = true}, REDUCE(sym_additive_expression, 1),
  [168] = {.count = 1, .reusable = false}, REDUCE(sym_additive_expression, 1),
  [170] = {.count = 1, .reusable = false}, SHIFT(21),
  [172] = {.count = 1, .reusable = true}, REDUCE(sym_additive_expression, 3),
  [174] = {.count = 1, .reusable = false}, REDUCE(sym_additive_expression, 3),
  [176] = {.count = 1, .reusable = true}, REDUCE(sym__arithmetic_expression, 1),
  [178] = {.count = 1, .reusable = false}, REDUCE(sym__arithmetic_expression, 1),
  [180] = {.count = 1, .reusable = false}, SHIFT(16),
  [182] = {.count = 1, .reusable = true}, REDUCE(sym_negation_expression, 1),
  [184] = {.count = 1, .reusable = false}, REDUCE(sym_negation_expression, 1),
  [186] = {.count = 1, .reusable = true}, SHIFT(15),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym_relational_expression, 1),
  [190] = {.count = 1, .reusable = false}, REDUCE(sym_relational_expression, 1),
  [192] = {.count = 1, .reusable = true}, REDUCE(sym_relational_expression, 3),
  [194] = {.count = 1, .reusable = false}, REDUCE(sym_relational_expression, 3),
  [196] = {.count = 1, .reusable = true}, REDUCE(sym_conjuction_expression, 3),
  [198] = {.count = 1, .reusable = false}, REDUCE(sym_conjuction_expression, 3),
  [200] = {.count = 1, .reusable = true}, REDUCE(sym_conjuction_expression, 1),
  [202] = {.count = 1, .reusable = false}, REDUCE(sym_conjuction_expression, 1),
  [204] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction_expression, 3),
  [206] = {.count = 1, .reusable = false}, REDUCE(sym_disjunction_expression, 3),
  [208] = {.count = 1, .reusable = true}, SHIFT(14),
  [210] = {.count = 1, .reusable = true}, REDUCE(sym_negation_expression, 2),
  [212] = {.count = 1, .reusable = false}, REDUCE(sym_negation_expression, 2),
  [214] = {.count = 1, .reusable = true}, REDUCE(sym_disjunction_expression, 1),
  [216] = {.count = 1, .reusable = false}, REDUCE(sym_disjunction_expression, 1),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym__boolean_expression, 1),
  [220] = {.count = 1, .reusable = false}, REDUCE(sym__boolean_expression, 1),
  [222] = {.count = 1, .reusable = true}, SHIFT(12),
  [224] = {.count = 1, .reusable = true}, REDUCE(sym_program, 1),
  [226] = {.count = 1, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2),
  [228] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(127),
  [231] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(117),
  [234] = {.count = 2, .reusable = false}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(68),
  [237] = {.count = 2, .reusable = true}, REDUCE(aux_sym_program_repeat1, 2), SHIFT_REPEAT(68),
  [240] = {.count = 1, .reusable = true}, SHIFT(77),
  [242] = {.count = 1, .reusable = true}, SHIFT(58),
  [244] = {.count = 1, .reusable = false}, SHIFT(58),
  [246] = {.count = 1, .reusable = true}, SHIFT(135),
  [248] = {.count = 1, .reusable = true}, SHIFT(96),
  [250] = {.count = 1, .reusable = true}, SHIFT(7),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym_decorator, 1),
  [254] = {.count = 1, .reusable = false}, REDUCE(sym_decorator, 1),
  [256] = {.count = 1, .reusable = true}, SHIFT(71),
  [258] = {.count = 1, .reusable = true}, SHIFT(78),
  [260] = {.count = 1, .reusable = true}, SHIFT(79),
  [262] = {.count = 1, .reusable = true}, SHIFT(75),
  [264] = {.count = 1, .reusable = true}, REDUCE(aux_sym_interface_definition_repeat2, 2),
  [266] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interface_definition_repeat2, 2), SHIFT_REPEAT(58),
  [269] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interface_definition_repeat2, 2), SHIFT_REPEAT(58),
  [272] = {.count = 1, .reusable = true}, SHIFT(125),
  [274] = {.count = 1, .reusable = true}, SHIFT(104),
  [276] = {.count = 1, .reusable = true}, SHIFT(10),
  [278] = {.count = 1, .reusable = false}, REDUCE(aux_sym_interface_definition_repeat1, 2),
  [280] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(68),
  [283] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(68),
  [286] = {.count = 1, .reusable = false}, SHIFT(123),
  [288] = {.count = 1, .reusable = false}, SHIFT(113),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_interface_definition, 6),
  [292] = {.count = 1, .reusable = false}, REDUCE(sym_interface_definition, 6),
  [294] = {.count = 1, .reusable = true}, SHIFT(80),
  [296] = {.count = 1, .reusable = true}, SHIFT(18),
  [298] = {.count = 1, .reusable = true}, SHIFT(11),
  [300] = {.count = 1, .reusable = true}, SHIFT(72),
  [302] = {.count = 1, .reusable = true}, SHIFT(31),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_block, 1),
  [306] = {.count = 1, .reusable = false}, REDUCE(sym_block, 1),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_interface_definition, 8),
  [310] = {.count = 1, .reusable = false}, REDUCE(sym_interface_definition, 8),
  [312] = {.count = 1, .reusable = true}, SHIFT(44),
  [314] = {.count = 1, .reusable = true}, REDUCE(sym_interface_definition, 7),
  [316] = {.count = 1, .reusable = false}, REDUCE(sym_interface_definition, 7),
  [318] = {.count = 1, .reusable = true}, REDUCE(sym_interface_definition, 4),
  [320] = {.count = 1, .reusable = false}, REDUCE(sym_interface_definition, 4),
  [322] = {.count = 1, .reusable = true}, REDUCE(sym_interface_definition, 5),
  [324] = {.count = 1, .reusable = false}, REDUCE(sym_interface_definition, 5),
  [326] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_string_repeat1, 2), SHIFT_REPEAT(80),
  [329] = {.count = 1, .reusable = true}, REDUCE(aux_sym_template_string_repeat1, 2),
  [331] = {.count = 2, .reusable = true}, REDUCE(aux_sym_template_string_repeat1, 2), SHIFT_REPEAT(11),
  [334] = {.count = 1, .reusable = true}, SHIFT(76),
  [336] = {.count = 1, .reusable = true}, SHIFT(41),
  [338] = {.count = 1, .reusable = true}, SHIFT(65),
  [340] = {.count = 1, .reusable = false}, SHIFT(65),
  [342] = {.count = 1, .reusable = false}, REDUCE(sym_decorator_args, 3),
  [344] = {.count = 1, .reusable = true}, REDUCE(sym_decorator_args, 3),
  [346] = {.count = 2, .reusable = true}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(85),
  [349] = {.count = 2, .reusable = false}, REDUCE(aux_sym_interface_definition_repeat1, 2), SHIFT_REPEAT(85),
  [352] = {.count = 1, .reusable = false}, REDUCE(sym_decorator, 2),
  [354] = {.count = 1, .reusable = true}, REDUCE(sym_decorator, 2),
  [356] = {.count = 1, .reusable = true}, REDUCE(sym_type_identifier, 1),
  [358] = {.count = 1, .reusable = true}, SHIFT(100),
  [360] = {.count = 1, .reusable = false}, REDUCE(sym_type_identifier, 1),
  [362] = {.count = 1, .reusable = false}, SHIFT(38),
  [364] = {.count = 1, .reusable = true}, SHIFT(92),
  [366] = {.count = 1, .reusable = false}, SHIFT(92),
  [368] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_template_substitution, 3),
  [372] = {.count = 1, .reusable = false}, SHIFT(42),
  [374] = {.count = 1, .reusable = true}, SHIFT(102),
  [376] = {.count = 1, .reusable = false}, SHIFT(102),
  [378] = {.count = 1, .reusable = true}, REDUCE(sym_interface_prop, 5),
  [380] = {.count = 1, .reusable = false}, REDUCE(sym_interface_prop, 5),
  [382] = {.count = 1, .reusable = true}, SHIFT(93),
  [384] = {.count = 1, .reusable = false}, SHIFT(93),
  [386] = {.count = 1, .reusable = false}, REDUCE(aux_sym_simple_string_repeat1, 2),
  [388] = {.count = 2, .reusable = true}, REDUCE(aux_sym_simple_string_repeat1, 2), SHIFT_REPEAT(93),
  [391] = {.count = 2, .reusable = false}, REDUCE(aux_sym_simple_string_repeat1, 2), SHIFT_REPEAT(93),
  [394] = {.count = 1, .reusable = false}, SHIFT(32),
  [396] = {.count = 1, .reusable = true}, SHIFT(87),
  [398] = {.count = 1, .reusable = false}, SHIFT(87),
  [400] = {.count = 1, .reusable = false}, SHIFT(17),
  [402] = {.count = 1, .reusable = true}, SHIFT(94),
  [404] = {.count = 1, .reusable = false}, SHIFT(94),
  [406] = {.count = 1, .reusable = true}, SHIFT(95),
  [408] = {.count = 1, .reusable = false}, SHIFT(95),
  [410] = {.count = 1, .reusable = true}, REDUCE(sym_type_identifier, 2),
  [412] = {.count = 1, .reusable = false}, REDUCE(sym_type_identifier, 2),
  [414] = {.count = 1, .reusable = true}, REDUCE(sym_interface_prop, 4),
  [416] = {.count = 1, .reusable = false}, REDUCE(sym_interface_prop, 4),
  [418] = {.count = 1, .reusable = false}, REDUCE(aux_sym_simple_string_repeat2, 2),
  [420] = {.count = 2, .reusable = true}, REDUCE(aux_sym_simple_string_repeat2, 2), SHIFT_REPEAT(102),
  [423] = {.count = 2, .reusable = false}, REDUCE(aux_sym_simple_string_repeat2, 2), SHIFT_REPEAT(102),
  [426] = {.count = 1, .reusable = true}, SHIFT(90),
  [428] = {.count = 1, .reusable = false}, SHIFT(90),
  [430] = {.count = 1, .reusable = true}, REDUCE(sym_interface_prop, 3),
  [432] = {.count = 1, .reusable = false}, REDUCE(sym_interface_prop, 3),
  [434] = {.count = 1, .reusable = true}, SHIFT(59),
  [436] = {.count = 1, .reusable = true}, SHIFT(110),
  [438] = {.count = 1, .reusable = true}, SHIFT(60),
  [440] = {.count = 1, .reusable = true}, SHIFT(25),
  [442] = {.count = 1, .reusable = false}, SHIFT(25),
  [444] = {.count = 1, .reusable = true}, SHIFT(24),
  [446] = {.count = 1, .reusable = false}, SHIFT(24),
  [448] = {.count = 1, .reusable = true}, SHIFT(134),
  [450] = {.count = 1, .reusable = false}, SHIFT(134),
  [452] = {.count = 1, .reusable = true}, SHIFT(66),
  [454] = {.count = 1, .reusable = true}, SHIFT(111),
  [456] = {.count = 1, .reusable = false}, SHIFT(111),
  [458] = {.count = 1, .reusable = true}, REDUCE(sym_expression_args, 1),
  [460] = {.count = 1, .reusable = true}, SHIFT(3),
  [462] = {.count = 1, .reusable = true}, SHIFT(106),
  [464] = {.count = 1, .reusable = false}, SHIFT(106),
  [466] = {.count = 1, .reusable = true}, SHIFT(107),
  [468] = {.count = 1, .reusable = false}, SHIFT(107),
  [470] = {.count = 1, .reusable = true}, SHIFT(27),
  [472] = {.count = 1, .reusable = false}, SHIFT(27),
  [474] = {.count = 1, .reusable = true}, REDUCE(sym_expression_args, 4),
  [476] = {.count = 1, .reusable = true}, SHIFT(20),
  [478] = {.count = 1, .reusable = true}, SHIFT(30),
  [480] = {.count = 1, .reusable = true}, SHIFT(116),
  [482] = {.count = 1, .reusable = true}, SHIFT(97),
  [484] = {.count = 1, .reusable = true}, SHIFT(62),
  [486] = {.count = 1, .reusable = true}, SHIFT(113),
  [488] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [490] = {.count = 1, .reusable = true}, SHIFT(89),
  [492] = {.count = 1, .reusable = true}, SHIFT(83),
  [494] = {.count = 1, .reusable = true}, SHIFT(19),
  [496] = {.count = 1, .reusable = true}, SHIFT(114),
  [498] = {.count = 1, .reusable = true}, REDUCE(sym_extends, 2),
  [500] = {.count = 1, .reusable = true}, SHIFT(23),
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
