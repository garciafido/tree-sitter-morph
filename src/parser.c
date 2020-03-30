#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 11
#define STATE_COUNT 323
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 125
#define ALIAS_COUNT 0
#define TOKEN_COUNT 71
#define EXTERNAL_TOKEN_COUNT 2
#define FIELD_COUNT 4
#define MAX_ALIAS_SEQUENCE_LENGTH 10

enum {
  anon_sym_from = 1,
  anon_sym_DOT = 2,
  anon_sym_import = 3,
  anon_sym_COMMA = 4,
  anon_sym_abstract = 5,
  anon_sym_node = 6,
  anon_sym_extends = 7,
  anon_sym_LBRACE = 8,
  anon_sym_RBRACE = 9,
  anon_sym_DASH_GT = 10,
  sym_NodeEdgeRequiredModifier = 11,
  sym_NodeEdgeArrayModifier = 12,
  anon_sym_EQ = 13,
  anon_sym_static = 14,
  anon_sym_LPAREN = 15,
  anon_sym_RPAREN = 16,
  anon_sym_morph = 17,
  anon_sym_new = 18,
  anon_sym_symbol = 19,
  anon_sym_enum = 20,
  anon_sym_const = 21,
  anon_sym_func = 22,
  anon_sym_EQ_GT = 23,
  anon_sym_rule = 24,
  anon_sym_LT = 25,
  anon_sym_GT = 26,
  anon_sym_type = 27,
  sym_Export = 28,
  anon_sym_PIPE = 29,
  sym_StringType = 30,
  sym_BooleanType = 31,
  sym_IntegerType = 32,
  sym_FloatType = 33,
  anon_sym_COLON = 34,
  anon_sym_PLUS = 35,
  anon_sym_DASH = 36,
  sym_TimesOperator = 37,
  sym_DivideOperator = 38,
  sym_ModulusOperator = 39,
  sym_BitwiseAndOperator = 40,
  sym_XorOperator = 41,
  anon_sym_or = 42,
  anon_sym_and = 43,
  anon_sym_not = 44,
  anon_sym_EQ_EQ = 45,
  anon_sym_BANG_EQ = 46,
  anon_sym_LT_EQ = 47,
  anon_sym_GT_EQ = 48,
  anon_sym_is = 49,
  sym_CamelIdentifier = 50,
  sym_SnakeIdentifier = 51,
  sym_PascalIdentifier = 52,
  sym_DecoratorIdentifier = 53,
  anon_sym_LBRACK = 54,
  anon_sym_RBRACK = 55,
  anon_sym_as = 56,
  sym_FalseLiteral = 57,
  sym_TrueLiteral = 58,
  anon_sym_DQUOTE = 59,
  aux_sym_StringLiteral_token1 = 60,
  anon_sym_SQUOTE = 61,
  aux_sym_StringLiteral_token2 = 62,
  sym_EscapeSequence = 63,
  sym_comment = 64,
  anon_sym_BQUOTE = 65,
  anon_sym_DOLLAR_LBRACE = 66,
  sym_IntegerLiteral = 67,
  sym_FloatLiteral = 68,
  sym__automatic_semicolon = 69,
  sym__template_chars = 70,
  sym_Program = 71,
  sym_Statement = 72,
  sym_ImportFromStatement = 73,
  sym_ImportModuleStatement = 74,
  sym_NodeDeclarationStatement = 75,
  sym_NodeDeclarationMember = 76,
  sym_NodeEdgeDeclaration = 77,
  sym_NodeEdgeModifier = 78,
  sym_NodeEdgeInitializer = 79,
  sym_NodeStaticConstantDeclaration = 80,
  sym_Decorator = 81,
  sym_MorphismDeclarationStatement = 82,
  sym_MorphismDeclarationMember = 83,
  sym_MorphismMutationDeclaration = 84,
  sym_MorphismCreationDeclaration = 85,
  sym_SymbolDeclarationStatement = 86,
  sym_EnumDeclarationStatement = 87,
  sym_ConstantDeclarationStatement = 88,
  sym_FunctionDeclarationStatement = 89,
  sym_FunctionSignature = 90,
  sym_FunctionParameter = 91,
  sym_RuleDeclarationStatement = 92,
  sym_TypeParameters = 93,
  sym_TypeParameter = 94,
  sym_TypeParameterConstraint = 95,
  sym_TypeDeclarationStatement = 96,
  sym_Type = 97,
  sym_TypeUnion = 98,
  sym_SingleType = 99,
  sym_PredefinedType = 100,
  sym_TypeAnnotation = 101,
  sym_Expression = 102,
  sym__primary_expression = 103,
  sym_PlusOperator = 104,
  sym_MinusOperator = 105,
  sym_BitwiseOrOperator = 106,
  sym_BinaryExpression = 107,
  sym_RuleExpression = 108,
  sym_StringLiteral = 109,
  sym_StringTemplateLiteral = 110,
  sym_TemplateSubstitution = 111,
  aux_sym_Program_repeat1 = 112,
  aux_sym_ImportFromStatement_repeat1 = 113,
  aux_sym_ImportFromStatement_repeat2 = 114,
  aux_sym_NodeDeclarationStatement_repeat1 = 115,
  aux_sym_NodeDeclarationStatement_repeat2 = 116,
  aux_sym_Decorator_repeat1 = 117,
  aux_sym_EnumDeclarationStatement_repeat1 = 118,
  aux_sym_FunctionSignature_repeat1 = 119,
  aux_sym_TypeParameters_repeat1 = 120,
  aux_sym_TypeUnion_repeat1 = 121,
  aux_sym_StringLiteral_repeat1 = 122,
  aux_sym_StringLiteral_repeat2 = 123,
  aux_sym_StringTemplateLiteral_repeat1 = 124,
};

static const char *ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_from] = "from",
  [anon_sym_DOT] = ".",
  [anon_sym_import] = "import",
  [anon_sym_COMMA] = ",",
  [anon_sym_abstract] = "abstract",
  [anon_sym_node] = "node",
  [anon_sym_extends] = "extends",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_DASH_GT] = "->",
  [sym_NodeEdgeRequiredModifier] = "NodeEdgeRequiredModifier",
  [sym_NodeEdgeArrayModifier] = "NodeEdgeArrayModifier",
  [anon_sym_EQ] = "=",
  [anon_sym_static] = "static",
  [anon_sym_LPAREN] = "(",
  [anon_sym_RPAREN] = ")",
  [anon_sym_morph] = "morph",
  [anon_sym_new] = "new",
  [anon_sym_symbol] = "symbol",
  [anon_sym_enum] = "enum",
  [anon_sym_const] = "const",
  [anon_sym_func] = "func",
  [anon_sym_EQ_GT] = "=>",
  [anon_sym_rule] = "rule",
  [anon_sym_LT] = "<",
  [anon_sym_GT] = ">",
  [anon_sym_type] = "type",
  [sym_Export] = "Export",
  [anon_sym_PIPE] = "|",
  [sym_StringType] = "StringType",
  [sym_BooleanType] = "BooleanType",
  [sym_IntegerType] = "IntegerType",
  [sym_FloatType] = "FloatType",
  [anon_sym_COLON] = ":",
  [anon_sym_PLUS] = "+",
  [anon_sym_DASH] = "-",
  [sym_TimesOperator] = "TimesOperator",
  [sym_DivideOperator] = "DivideOperator",
  [sym_ModulusOperator] = "ModulusOperator",
  [sym_BitwiseAndOperator] = "BitwiseAndOperator",
  [sym_XorOperator] = "XorOperator",
  [anon_sym_or] = "or",
  [anon_sym_and] = "and",
  [anon_sym_not] = "not",
  [anon_sym_EQ_EQ] = "==",
  [anon_sym_BANG_EQ] = "!=",
  [anon_sym_LT_EQ] = "<=",
  [anon_sym_GT_EQ] = ">=",
  [anon_sym_is] = "is",
  [sym_CamelIdentifier] = "CamelIdentifier",
  [sym_SnakeIdentifier] = "SnakeIdentifier",
  [sym_PascalIdentifier] = "PascalIdentifier",
  [sym_DecoratorIdentifier] = "DecoratorIdentifier",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_as] = "as",
  [sym_FalseLiteral] = "FalseLiteral",
  [sym_TrueLiteral] = "TrueLiteral",
  [anon_sym_DQUOTE] = "\"",
  [aux_sym_StringLiteral_token1] = "StringLiteral_token1",
  [anon_sym_SQUOTE] = "'",
  [aux_sym_StringLiteral_token2] = "StringLiteral_token2",
  [sym_EscapeSequence] = "EscapeSequence",
  [sym_comment] = "comment",
  [anon_sym_BQUOTE] = "`",
  [anon_sym_DOLLAR_LBRACE] = "${",
  [sym_IntegerLiteral] = "IntegerLiteral",
  [sym_FloatLiteral] = "FloatLiteral",
  [sym__automatic_semicolon] = "_automatic_semicolon",
  [sym__template_chars] = "_template_chars",
  [sym_Program] = "Program",
  [sym_Statement] = "Statement",
  [sym_ImportFromStatement] = "ImportFromStatement",
  [sym_ImportModuleStatement] = "ImportModuleStatement",
  [sym_NodeDeclarationStatement] = "NodeDeclarationStatement",
  [sym_NodeDeclarationMember] = "NodeDeclarationMember",
  [sym_NodeEdgeDeclaration] = "NodeEdgeDeclaration",
  [sym_NodeEdgeModifier] = "NodeEdgeModifier",
  [sym_NodeEdgeInitializer] = "NodeEdgeInitializer",
  [sym_NodeStaticConstantDeclaration] = "NodeStaticConstantDeclaration",
  [sym_Decorator] = "Decorator",
  [sym_MorphismDeclarationStatement] = "MorphismDeclarationStatement",
  [sym_MorphismDeclarationMember] = "MorphismDeclarationMember",
  [sym_MorphismMutationDeclaration] = "MorphismMutationDeclaration",
  [sym_MorphismCreationDeclaration] = "MorphismCreationDeclaration",
  [sym_SymbolDeclarationStatement] = "SymbolDeclarationStatement",
  [sym_EnumDeclarationStatement] = "EnumDeclarationStatement",
  [sym_ConstantDeclarationStatement] = "ConstantDeclarationStatement",
  [sym_FunctionDeclarationStatement] = "FunctionDeclarationStatement",
  [sym_FunctionSignature] = "FunctionSignature",
  [sym_FunctionParameter] = "FunctionParameter",
  [sym_RuleDeclarationStatement] = "RuleDeclarationStatement",
  [sym_TypeParameters] = "TypeParameters",
  [sym_TypeParameter] = "TypeParameter",
  [sym_TypeParameterConstraint] = "TypeParameterConstraint",
  [sym_TypeDeclarationStatement] = "TypeDeclarationStatement",
  [sym_Type] = "Type",
  [sym_TypeUnion] = "TypeUnion",
  [sym_SingleType] = "SingleType",
  [sym_PredefinedType] = "PredefinedType",
  [sym_TypeAnnotation] = "TypeAnnotation",
  [sym_Expression] = "Expression",
  [sym__primary_expression] = "_primary_expression",
  [sym_PlusOperator] = "PlusOperator",
  [sym_MinusOperator] = "MinusOperator",
  [sym_BitwiseOrOperator] = "BitwiseOrOperator",
  [sym_BinaryExpression] = "BinaryExpression",
  [sym_RuleExpression] = "RuleExpression",
  [sym_StringLiteral] = "StringLiteral",
  [sym_StringTemplateLiteral] = "StringTemplateLiteral",
  [sym_TemplateSubstitution] = "TemplateSubstitution",
  [aux_sym_Program_repeat1] = "Program_repeat1",
  [aux_sym_ImportFromStatement_repeat1] = "ImportFromStatement_repeat1",
  [aux_sym_ImportFromStatement_repeat2] = "ImportFromStatement_repeat2",
  [aux_sym_NodeDeclarationStatement_repeat1] = "NodeDeclarationStatement_repeat1",
  [aux_sym_NodeDeclarationStatement_repeat2] = "NodeDeclarationStatement_repeat2",
  [aux_sym_Decorator_repeat1] = "Decorator_repeat1",
  [aux_sym_EnumDeclarationStatement_repeat1] = "EnumDeclarationStatement_repeat1",
  [aux_sym_FunctionSignature_repeat1] = "FunctionSignature_repeat1",
  [aux_sym_TypeParameters_repeat1] = "TypeParameters_repeat1",
  [aux_sym_TypeUnion_repeat1] = "TypeUnion_repeat1",
  [aux_sym_StringLiteral_repeat1] = "StringLiteral_repeat1",
  [aux_sym_StringLiteral_repeat2] = "StringLiteral_repeat2",
  [aux_sym_StringTemplateLiteral_repeat1] = "StringTemplateLiteral_repeat1",
};

static TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_from] = anon_sym_from,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_import] = anon_sym_import,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_abstract] = anon_sym_abstract,
  [anon_sym_node] = anon_sym_node,
  [anon_sym_extends] = anon_sym_extends,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_DASH_GT] = anon_sym_DASH_GT,
  [sym_NodeEdgeRequiredModifier] = sym_NodeEdgeRequiredModifier,
  [sym_NodeEdgeArrayModifier] = sym_NodeEdgeArrayModifier,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_static] = anon_sym_static,
  [anon_sym_LPAREN] = anon_sym_LPAREN,
  [anon_sym_RPAREN] = anon_sym_RPAREN,
  [anon_sym_morph] = anon_sym_morph,
  [anon_sym_new] = anon_sym_new,
  [anon_sym_symbol] = anon_sym_symbol,
  [anon_sym_enum] = anon_sym_enum,
  [anon_sym_const] = anon_sym_const,
  [anon_sym_func] = anon_sym_func,
  [anon_sym_EQ_GT] = anon_sym_EQ_GT,
  [anon_sym_rule] = anon_sym_rule,
  [anon_sym_LT] = anon_sym_LT,
  [anon_sym_GT] = anon_sym_GT,
  [anon_sym_type] = anon_sym_type,
  [sym_Export] = sym_Export,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [sym_StringType] = sym_StringType,
  [sym_BooleanType] = sym_BooleanType,
  [sym_IntegerType] = sym_IntegerType,
  [sym_FloatType] = sym_FloatType,
  [anon_sym_COLON] = anon_sym_COLON,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_TimesOperator] = sym_TimesOperator,
  [sym_DivideOperator] = sym_DivideOperator,
  [sym_ModulusOperator] = sym_ModulusOperator,
  [sym_BitwiseAndOperator] = sym_BitwiseAndOperator,
  [sym_XorOperator] = sym_XorOperator,
  [anon_sym_or] = anon_sym_or,
  [anon_sym_and] = anon_sym_and,
  [anon_sym_not] = anon_sym_not,
  [anon_sym_EQ_EQ] = anon_sym_EQ_EQ,
  [anon_sym_BANG_EQ] = anon_sym_BANG_EQ,
  [anon_sym_LT_EQ] = anon_sym_LT_EQ,
  [anon_sym_GT_EQ] = anon_sym_GT_EQ,
  [anon_sym_is] = anon_sym_is,
  [sym_CamelIdentifier] = sym_CamelIdentifier,
  [sym_SnakeIdentifier] = sym_SnakeIdentifier,
  [sym_PascalIdentifier] = sym_PascalIdentifier,
  [sym_DecoratorIdentifier] = sym_DecoratorIdentifier,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_as] = anon_sym_as,
  [sym_FalseLiteral] = sym_FalseLiteral,
  [sym_TrueLiteral] = sym_TrueLiteral,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [aux_sym_StringLiteral_token1] = aux_sym_StringLiteral_token1,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [aux_sym_StringLiteral_token2] = aux_sym_StringLiteral_token2,
  [sym_EscapeSequence] = sym_EscapeSequence,
  [sym_comment] = sym_comment,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [anon_sym_DOLLAR_LBRACE] = anon_sym_DOLLAR_LBRACE,
  [sym_IntegerLiteral] = sym_IntegerLiteral,
  [sym_FloatLiteral] = sym_FloatLiteral,
  [sym__automatic_semicolon] = sym__automatic_semicolon,
  [sym__template_chars] = sym__template_chars,
  [sym_Program] = sym_Program,
  [sym_Statement] = sym_Statement,
  [sym_ImportFromStatement] = sym_ImportFromStatement,
  [sym_ImportModuleStatement] = sym_ImportModuleStatement,
  [sym_NodeDeclarationStatement] = sym_NodeDeclarationStatement,
  [sym_NodeDeclarationMember] = sym_NodeDeclarationMember,
  [sym_NodeEdgeDeclaration] = sym_NodeEdgeDeclaration,
  [sym_NodeEdgeModifier] = sym_NodeEdgeModifier,
  [sym_NodeEdgeInitializer] = sym_NodeEdgeInitializer,
  [sym_NodeStaticConstantDeclaration] = sym_NodeStaticConstantDeclaration,
  [sym_Decorator] = sym_Decorator,
  [sym_MorphismDeclarationStatement] = sym_MorphismDeclarationStatement,
  [sym_MorphismDeclarationMember] = sym_MorphismDeclarationMember,
  [sym_MorphismMutationDeclaration] = sym_MorphismMutationDeclaration,
  [sym_MorphismCreationDeclaration] = sym_MorphismCreationDeclaration,
  [sym_SymbolDeclarationStatement] = sym_SymbolDeclarationStatement,
  [sym_EnumDeclarationStatement] = sym_EnumDeclarationStatement,
  [sym_ConstantDeclarationStatement] = sym_ConstantDeclarationStatement,
  [sym_FunctionDeclarationStatement] = sym_FunctionDeclarationStatement,
  [sym_FunctionSignature] = sym_FunctionSignature,
  [sym_FunctionParameter] = sym_FunctionParameter,
  [sym_RuleDeclarationStatement] = sym_RuleDeclarationStatement,
  [sym_TypeParameters] = sym_TypeParameters,
  [sym_TypeParameter] = sym_TypeParameter,
  [sym_TypeParameterConstraint] = sym_TypeParameterConstraint,
  [sym_TypeDeclarationStatement] = sym_TypeDeclarationStatement,
  [sym_Type] = sym_Type,
  [sym_TypeUnion] = sym_TypeUnion,
  [sym_SingleType] = sym_SingleType,
  [sym_PredefinedType] = sym_PredefinedType,
  [sym_TypeAnnotation] = sym_TypeAnnotation,
  [sym_Expression] = sym_Expression,
  [sym__primary_expression] = sym__primary_expression,
  [sym_PlusOperator] = sym_PlusOperator,
  [sym_MinusOperator] = sym_MinusOperator,
  [sym_BitwiseOrOperator] = sym_BitwiseOrOperator,
  [sym_BinaryExpression] = sym_BinaryExpression,
  [sym_RuleExpression] = sym_RuleExpression,
  [sym_StringLiteral] = sym_StringLiteral,
  [sym_StringTemplateLiteral] = sym_StringTemplateLiteral,
  [sym_TemplateSubstitution] = sym_TemplateSubstitution,
  [aux_sym_Program_repeat1] = aux_sym_Program_repeat1,
  [aux_sym_ImportFromStatement_repeat1] = aux_sym_ImportFromStatement_repeat1,
  [aux_sym_ImportFromStatement_repeat2] = aux_sym_ImportFromStatement_repeat2,
  [aux_sym_NodeDeclarationStatement_repeat1] = aux_sym_NodeDeclarationStatement_repeat1,
  [aux_sym_NodeDeclarationStatement_repeat2] = aux_sym_NodeDeclarationStatement_repeat2,
  [aux_sym_Decorator_repeat1] = aux_sym_Decorator_repeat1,
  [aux_sym_EnumDeclarationStatement_repeat1] = aux_sym_EnumDeclarationStatement_repeat1,
  [aux_sym_FunctionSignature_repeat1] = aux_sym_FunctionSignature_repeat1,
  [aux_sym_TypeParameters_repeat1] = aux_sym_TypeParameters_repeat1,
  [aux_sym_TypeUnion_repeat1] = aux_sym_TypeUnion_repeat1,
  [aux_sym_StringLiteral_repeat1] = aux_sym_StringLiteral_repeat1,
  [aux_sym_StringLiteral_repeat2] = aux_sym_StringLiteral_repeat2,
  [aux_sym_StringTemplateLiteral_repeat1] = aux_sym_StringTemplateLiteral_repeat1,
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
  [anon_sym_DASH_GT] = {
    .visible = true,
    .named = false,
  },
  [sym_NodeEdgeRequiredModifier] = {
    .visible = true,
    .named = true,
  },
  [sym_NodeEdgeArrayModifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_static] = {
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
  [anon_sym_morph] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_new] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_symbol] = {
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
  [anon_sym_func] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_rule] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_type] = {
    .visible = true,
    .named = false,
  },
  [sym_Export] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [sym_StringType] = {
    .visible = true,
    .named = true,
  },
  [sym_BooleanType] = {
    .visible = true,
    .named = true,
  },
  [sym_IntegerType] = {
    .visible = true,
    .named = true,
  },
  [sym_FloatType] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_TimesOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_DivideOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_ModulusOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_BitwiseAndOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_XorOperator] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_or] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_and] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_not] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_EQ_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_GT_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_is] = {
    .visible = true,
    .named = false,
  },
  [sym_CamelIdentifier] = {
    .visible = true,
    .named = true,
  },
  [sym_SnakeIdentifier] = {
    .visible = true,
    .named = true,
  },
  [sym_PascalIdentifier] = {
    .visible = true,
    .named = true,
  },
  [sym_DecoratorIdentifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_as] = {
    .visible = true,
    .named = false,
  },
  [sym_FalseLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_TrueLiteral] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_StringLiteral_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_StringLiteral_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_EscapeSequence] = {
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
  [sym_IntegerLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_FloatLiteral] = {
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
  [sym_Program] = {
    .visible = true,
    .named = true,
  },
  [sym_Statement] = {
    .visible = true,
    .named = true,
  },
  [sym_ImportFromStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_ImportModuleStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_NodeDeclarationStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_NodeDeclarationMember] = {
    .visible = true,
    .named = true,
  },
  [sym_NodeEdgeDeclaration] = {
    .visible = true,
    .named = true,
  },
  [sym_NodeEdgeModifier] = {
    .visible = true,
    .named = true,
  },
  [sym_NodeEdgeInitializer] = {
    .visible = true,
    .named = true,
  },
  [sym_NodeStaticConstantDeclaration] = {
    .visible = true,
    .named = true,
  },
  [sym_Decorator] = {
    .visible = true,
    .named = true,
  },
  [sym_MorphismDeclarationStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_MorphismDeclarationMember] = {
    .visible = true,
    .named = true,
  },
  [sym_MorphismMutationDeclaration] = {
    .visible = true,
    .named = true,
  },
  [sym_MorphismCreationDeclaration] = {
    .visible = true,
    .named = true,
  },
  [sym_SymbolDeclarationStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_EnumDeclarationStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_ConstantDeclarationStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_FunctionDeclarationStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_FunctionSignature] = {
    .visible = true,
    .named = true,
  },
  [sym_FunctionParameter] = {
    .visible = true,
    .named = true,
  },
  [sym_RuleDeclarationStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_TypeParameters] = {
    .visible = true,
    .named = true,
  },
  [sym_TypeParameter] = {
    .visible = true,
    .named = true,
  },
  [sym_TypeParameterConstraint] = {
    .visible = true,
    .named = true,
  },
  [sym_TypeDeclarationStatement] = {
    .visible = true,
    .named = true,
  },
  [sym_Type] = {
    .visible = true,
    .named = true,
  },
  [sym_TypeUnion] = {
    .visible = true,
    .named = true,
  },
  [sym_SingleType] = {
    .visible = true,
    .named = true,
  },
  [sym_PredefinedType] = {
    .visible = true,
    .named = true,
  },
  [sym_TypeAnnotation] = {
    .visible = true,
    .named = true,
  },
  [sym_Expression] = {
    .visible = true,
    .named = true,
  },
  [sym__primary_expression] = {
    .visible = false,
    .named = true,
  },
  [sym_PlusOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_MinusOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_BitwiseOrOperator] = {
    .visible = true,
    .named = true,
  },
  [sym_BinaryExpression] = {
    .visible = true,
    .named = true,
  },
  [sym_RuleExpression] = {
    .visible = true,
    .named = true,
  },
  [sym_StringLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_StringTemplateLiteral] = {
    .visible = true,
    .named = true,
  },
  [sym_TemplateSubstitution] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_Program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ImportFromStatement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_ImportFromStatement_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_NodeDeclarationStatement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_NodeDeclarationStatement_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_Decorator_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_EnumDeclarationStatement_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_FunctionSignature_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_TypeParameters_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_TypeUnion_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_StringLiteral_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_StringLiteral_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_StringTemplateLiteral_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_left = 1,
  field_name = 2,
  field_operator = 3,
  field_right = 4,
};

static const char *ts_field_names[] = {
  [0] = NULL,
  [field_left] = "left",
  [field_name] = "name",
  [field_operator] = "operator",
  [field_right] = "right",
};

static const TSFieldMapSlice ts_field_map_slices[4] = {
  [1] = {.index = 0, .length = 1},
  [2] = {.index = 1, .length = 1},
  [3] = {.index = 2, .length = 3},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_name, 1},
  [1] =
    {field_name, 2},
  [2] =
    {field_left, 0},
    {field_operator, 1},
    {field_right, 2},
};

static TSSymbol ts_alias_sequences[4][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(120);
      if (lookahead == '!') ADVANCE(137);
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '$') ADVANCE(103);
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == '&') ADVANCE(185);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '(') ADVANCE(144);
      if (lookahead == ')') ADVANCE(145);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '+') ADVANCE(179);
      if (lookahead == ',') ADVANCE(127);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '0') ADVANCE(312);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '>') ADVANCE(164);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'F') ADVANCE(273);
      if (lookahead == 'T') ADVANCE(277);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == '\\') ADVANCE(97);
      if (lookahead == ']') ADVANCE(283);
      if (lookahead == '^') ADVANCE(186);
      if (lookahead == '`') ADVANCE(308);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '{') ADVANCE(133);
      if (lookahead == '|') ADVANCE(169);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(117)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(280);
      END_STATE();
    case 1:
      if (lookahead == '\n') SKIP(7)
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '/') ADVANCE(289);
      if (lookahead == '\\') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(292);
      if (lookahead != 0) ADVANCE(293);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(288);
      if (lookahead == '\r') ADVANCE(302);
      if (lookahead == 'u') ADVANCE(104);
      if (lookahead == 'x') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(305);
      if (lookahead != 0) ADVANCE(301);
      END_STATE();
    case 3:
      if (lookahead == '\n') SKIP(9)
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead == '\\') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(299);
      if (lookahead != 0) ADVANCE(300);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '\r') ADVANCE(303);
      if (lookahead == 'u') ADVANCE(104);
      if (lookahead == 'x') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(305);
      if (lookahead != 0) ADVANCE(301);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(136);
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '-') ADVANCE(16);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(312);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'F') ADVANCE(273);
      if (lookahead == 'T') ADVANCE(277);
      if (lookahead == '[') ADVANCE(18);
      if (lookahead == '_') ADVANCE(272);
      if (lookahead == '`') ADVANCE(308);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'e') ADVANCE(267);
      if (lookahead == 'm') ADVANCE(231);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(5)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(280);
      END_STATE();
    case 6:
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == ')') ADVANCE(145);
      if (lookahead == '.') ADVANCE(109);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '0') ADVANCE(312);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'F') ADVANCE(273);
      if (lookahead == 'T') ADVANCE(277);
      if (lookahead == '_') ADVANCE(272);
      if (lookahead == '`') ADVANCE(308);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(6)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(280);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 7:
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(7)
      END_STATE();
    case 8:
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == '&') ADVANCE(185);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '+') ADVANCE(179);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '=') ADVANCE(139);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == '^') ADVANCE(186);
      if (lookahead == '_') ADVANCE(272);
      if (lookahead == 's') ADVANCE(261);
      if (lookahead == '|') ADVANCE(169);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(8)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(280);
      END_STATE();
    case 9:
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '/') ADVANCE(11);
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
      if (lookahead == '(') ADVANCE(144);
      if (lookahead == ')') ADVANCE(145);
      if (lookahead == '.') ADVANCE(123);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == '_') ADVANCE(272);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(10)
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(280);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 11:
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(307);
      END_STATE();
    case 12:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead == '/') ADVANCE(306);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 13:
      if (lookahead == '*') ADVANCE(12);
      if (lookahead != 0) ADVANCE(13);
      END_STATE();
    case 14:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '_') ADVANCE(272);
      if (lookahead == 'b') ADVANCE(238);
      if (lookahead == 'f') ADVANCE(220);
      if (lookahead == 'i') ADVANCE(229);
      if (lookahead == 's') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(14)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(280);
      END_STATE();
    case 15:
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == '_') ADVANCE(272);
      if (lookahead == 'n') ADVANCE(209);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(15)
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(280);
      END_STATE();
    case 16:
      if (lookahead == '>') ADVANCE(135);
      END_STATE();
    case 17:
      if (lookahead == '>') ADVANCE(158);
      END_STATE();
    case 18:
      if (lookahead == ']') ADVANCE(138);
      END_STATE();
    case 19:
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(314);
      END_STATE();
    case 20:
      if (lookahead == '_') ADVANCE(108);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(315);
      END_STATE();
    case 21:
      if (lookahead == '_') ADVANCE(113);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      END_STATE();
    case 22:
      if (lookahead == 'a') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(48);
      END_STATE();
    case 23:
      if (lookahead == 'a') ADVANCE(31);
      END_STATE();
    case 24:
      if (lookahead == 'a') ADVANCE(59);
      END_STATE();
    case 25:
      if (lookahead == 'a') ADVANCE(90);
      END_STATE();
    case 26:
      if (lookahead == 'b') ADVANCE(86);
      END_STATE();
    case 27:
      if (lookahead == 'b') ADVANCE(86);
      if (lookahead == 'n') ADVANCE(32);
      if (lookahead == 's') ADVANCE(284);
      END_STATE();
    case 28:
      if (lookahead == 'b') ADVANCE(67);
      END_STATE();
    case 29:
      if (lookahead == 'c') ADVANCE(156);
      END_STATE();
    case 30:
      if (lookahead == 'c') ADVANCE(142);
      END_STATE();
    case 31:
      if (lookahead == 'c') ADVANCE(93);
      END_STATE();
    case 32:
      if (lookahead == 'd') ADVANCE(188);
      END_STATE();
    case 33:
      if (lookahead == 'd') ADVANCE(85);
      END_STATE();
    case 34:
      if (lookahead == 'd') ADVANCE(38);
      END_STATE();
    case 35:
      if (lookahead == 'd') ADVANCE(38);
      if (lookahead == 't') ADVANCE(189);
      END_STATE();
    case 36:
      if (lookahead == 'e') ADVANCE(100);
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 37:
      if (lookahead == 'e') ADVANCE(45);
      END_STATE();
    case 38:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 39:
      if (lookahead == 'e') ADVANCE(159);
      END_STATE();
    case 40:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 41:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 42:
      if (lookahead == 'e') ADVANCE(24);
      END_STATE();
    case 43:
      if (lookahead == 'e') ADVANCE(79);
      END_STATE();
    case 44:
      if (lookahead == 'g') ADVANCE(170);
      END_STATE();
    case 45:
      if (lookahead == 'g') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 'h') ADVANCE(146);
      END_STATE();
    case 47:
      if (lookahead == 'i') ADVANCE(30);
      END_STATE();
    case 48:
      if (lookahead == 'i') ADVANCE(62);
      END_STATE();
    case 49:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 50:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 51:
      if (lookahead == 'l') ADVANCE(65);
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 52:
      if (lookahead == 'l') ADVANCE(42);
      END_STATE();
    case 53:
      if (lookahead == 'm') ADVANCE(77);
      END_STATE();
    case 54:
      if (lookahead == 'm') ADVANCE(77);
      if (lookahead == 'n') ADVANCE(94);
      if (lookahead == 's') ADVANCE(194);
      END_STATE();
    case 55:
      if (lookahead == 'm') ADVANCE(28);
      END_STATE();
    case 56:
      if (lookahead == 'm') ADVANCE(152);
      END_STATE();
    case 57:
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 58:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 59:
      if (lookahead == 'n') ADVANCE(172);
      END_STATE();
    case 60:
      if (lookahead == 'n') ADVANCE(99);
      if (lookahead == 'x') ADVANCE(76);
      END_STATE();
    case 61:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 62:
      if (lookahead == 'n') ADVANCE(44);
      END_STATE();
    case 63:
      if (lookahead == 'n') ADVANCE(87);
      END_STATE();
    case 64:
      if (lookahead == 'o') ADVANCE(63);
      END_STATE();
    case 65:
      if (lookahead == 'o') ADVANCE(25);
      END_STATE();
    case 66:
      if (lookahead == 'o') ADVANCE(81);
      END_STATE();
    case 67:
      if (lookahead == 'o') ADVANCE(49);
      END_STATE();
    case 68:
      if (lookahead == 'o') ADVANCE(34);
      END_STATE();
    case 69:
      if (lookahead == 'o') ADVANCE(57);
      END_STATE();
    case 70:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 71:
      if (lookahead == 'o') ADVANCE(83);
      END_STATE();
    case 72:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 73:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 74:
      if (lookahead == 'p') ADVANCE(46);
      END_STATE();
    case 75:
      if (lookahead == 'p') ADVANCE(40);
      END_STATE();
    case 76:
      if (lookahead == 'p') ADVANCE(71);
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 77:
      if (lookahead == 'p') ADVANCE(73);
      END_STATE();
    case 78:
      if (lookahead == 'r') ADVANCE(187);
      END_STATE();
    case 79:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 80:
      if (lookahead == 'r') ADVANCE(23);
      END_STATE();
    case 81:
      if (lookahead == 'r') ADVANCE(74);
      END_STATE();
    case 82:
      if (lookahead == 'r') ADVANCE(69);
      if (lookahead == 'u') ADVANCE(58);
      END_STATE();
    case 83:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 84:
      if (lookahead == 'r') ADVANCE(92);
      END_STATE();
    case 85:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 86:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 87:
      if (lookahead == 's') ADVANCE(89);
      END_STATE();
    case 88:
      if (lookahead == 't') ADVANCE(22);
      if (lookahead == 'y') ADVANCE(55);
      END_STATE();
    case 89:
      if (lookahead == 't') ADVANCE(154);
      END_STATE();
    case 90:
      if (lookahead == 't') ADVANCE(176);
      END_STATE();
    case 91:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 92:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 93:
      if (lookahead == 't') ADVANCE(128);
      END_STATE();
    case 94:
      if (lookahead == 't') ADVANCE(37);
      END_STATE();
    case 95:
      if (lookahead == 't') ADVANCE(47);
      END_STATE();
    case 96:
      if (lookahead == 't') ADVANCE(80);
      END_STATE();
    case 97:
      if (lookahead == 'u') ADVANCE(104);
      if (lookahead == 'x') ADVANCE(115);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(305);
      if (lookahead != 0) ADVANCE(301);
      END_STATE();
    case 98:
      if (lookahead == 'u') ADVANCE(50);
      END_STATE();
    case 99:
      if (lookahead == 'u') ADVANCE(56);
      END_STATE();
    case 100:
      if (lookahead == 'w') ADVANCE(148);
      END_STATE();
    case 101:
      if (lookahead == 'y') ADVANCE(55);
      END_STATE();
    case 102:
      if (lookahead == 'y') ADVANCE(75);
      END_STATE();
    case 103:
      if (lookahead == '{') ADVANCE(309);
      END_STATE();
    case 104:
      if (lookahead == '{') ADVANCE(114);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(111);
      END_STATE();
    case 105:
      if (lookahead == '}') ADVANCE(301);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 106:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 107:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(314);
      END_STATE();
    case 108:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(315);
      END_STATE();
    case 109:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 110:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 111:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(115);
      END_STATE();
    case 112:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(301);
      END_STATE();
    case 113:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      END_STATE();
    case 114:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(105);
      END_STATE();
    case 115:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(112);
      END_STATE();
    case 116:
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 117:
      if (eof) ADVANCE(120);
      if (lookahead == '!') ADVANCE(137);
      if (lookahead == '"') ADVANCE(287);
      if (lookahead == '$') ADVANCE(103);
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == '&') ADVANCE(185);
      if (lookahead == '\'') ADVANCE(294);
      if (lookahead == '(') ADVANCE(144);
      if (lookahead == ')') ADVANCE(145);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '+') ADVANCE(179);
      if (lookahead == ',') ADVANCE(127);
      if (lookahead == '-') ADVANCE(181);
      if (lookahead == '.') ADVANCE(124);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == '0') ADVANCE(312);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '<') ADVANCE(162);
      if (lookahead == '=') ADVANCE(140);
      if (lookahead == '>') ADVANCE(164);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == 'F') ADVANCE(273);
      if (lookahead == 'T') ADVANCE(277);
      if (lookahead == '[') ADVANCE(282);
      if (lookahead == ']') ADVANCE(283);
      if (lookahead == '^') ADVANCE(186);
      if (lookahead == '`') ADVANCE(308);
      if (lookahead == 'a') ADVANCE(27);
      if (lookahead == 'b') ADVANCE(70);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(51);
      if (lookahead == 'i') ADVANCE(54);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(36);
      if (lookahead == 'o') ADVANCE(78);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == 's') ADVANCE(88);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '{') ADVANCE(133);
      if (lookahead == '|') ADVANCE(169);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(117)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(311);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(280);
      END_STATE();
    case 118:
      if (eof) ADVANCE(120);
      if (lookahead == '%') ADVANCE(184);
      if (lookahead == '&') ADVANCE(185);
      if (lookahead == '(') ADVANCE(144);
      if (lookahead == ')') ADVANCE(145);
      if (lookahead == '*') ADVANCE(182);
      if (lookahead == '+') ADVANCE(179);
      if (lookahead == ',') ADVANCE(127);
      if (lookahead == '-') ADVANCE(180);
      if (lookahead == '/') ADVANCE(183);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '<') ADVANCE(161);
      if (lookahead == '=') ADVANCE(141);
      if (lookahead == '>') ADVANCE(163);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == '^') ADVANCE(186);
      if (lookahead == 'a') ADVANCE(26);
      if (lookahead == 'c') ADVANCE(64);
      if (lookahead == 'e') ADVANCE(60);
      if (lookahead == 'f') ADVANCE(82);
      if (lookahead == 'i') ADVANCE(53);
      if (lookahead == 'm') ADVANCE(66);
      if (lookahead == 'n') ADVANCE(68);
      if (lookahead == 'r') ADVANCE(98);
      if (lookahead == 's') ADVANCE(101);
      if (lookahead == 't') ADVANCE(102);
      if (lookahead == '|') ADVANCE(169);
      if (lookahead == '}') ADVANCE(134);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(118)
      END_STATE();
    case 119:
      if (eof) ADVANCE(120);
      if (lookahead == '/') ADVANCE(11);
      if (lookahead == ':') ADVANCE(178);
      if (lookahead == '=') ADVANCE(17);
      if (lookahead == '@') ADVANCE(116);
      if (lookahead == '_') ADVANCE(272);
      if (lookahead == 'a') ADVANCE(199);
      if (lookahead == 'c') ADVANCE(233);
      if (lookahead == 'e') ADVANCE(227);
      if (lookahead == 'f') ADVANCE(250);
      if (lookahead == 'i') ADVANCE(224);
      if (lookahead == 'm') ADVANCE(231);
      if (lookahead == 'n') ADVANCE(232);
      if (lookahead == 'r') ADVANCE(264);
      if (lookahead == 's') ADVANCE(268);
      if (lookahead == 't') ADVANCE(269);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) SKIP(119)
      if (('b' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(280);
      END_STATE();
    case 120:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 121:
      ACCEPT_TOKEN(anon_sym_from);
      END_STATE();
    case 122:
      ACCEPT_TOKEN(anon_sym_from);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 123:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 124:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 125:
      ACCEPT_TOKEN(anon_sym_import);
      END_STATE();
    case 126:
      ACCEPT_TOKEN(anon_sym_import);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 127:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 128:
      ACCEPT_TOKEN(anon_sym_abstract);
      END_STATE();
    case 129:
      ACCEPT_TOKEN(anon_sym_abstract);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 130:
      ACCEPT_TOKEN(anon_sym_node);
      END_STATE();
    case 131:
      ACCEPT_TOKEN(anon_sym_node);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 132:
      ACCEPT_TOKEN(anon_sym_extends);
      END_STATE();
    case 133:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 134:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 135:
      ACCEPT_TOKEN(anon_sym_DASH_GT);
      END_STATE();
    case 136:
      ACCEPT_TOKEN(sym_NodeEdgeRequiredModifier);
      END_STATE();
    case 137:
      ACCEPT_TOKEN(sym_NodeEdgeRequiredModifier);
      if (lookahead == '=') ADVANCE(191);
      END_STATE();
    case 138:
      ACCEPT_TOKEN(sym_NodeEdgeArrayModifier);
      END_STATE();
    case 139:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 140:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '=') ADVANCE(190);
      if (lookahead == '>') ADVANCE(158);
      END_STATE();
    case 141:
      ACCEPT_TOKEN(anon_sym_EQ);
      if (lookahead == '>') ADVANCE(158);
      END_STATE();
    case 142:
      ACCEPT_TOKEN(anon_sym_static);
      END_STATE();
    case 143:
      ACCEPT_TOKEN(anon_sym_static);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 144:
      ACCEPT_TOKEN(anon_sym_LPAREN);
      END_STATE();
    case 145:
      ACCEPT_TOKEN(anon_sym_RPAREN);
      END_STATE();
    case 146:
      ACCEPT_TOKEN(anon_sym_morph);
      END_STATE();
    case 147:
      ACCEPT_TOKEN(anon_sym_morph);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 148:
      ACCEPT_TOKEN(anon_sym_new);
      END_STATE();
    case 149:
      ACCEPT_TOKEN(anon_sym_new);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 150:
      ACCEPT_TOKEN(anon_sym_symbol);
      END_STATE();
    case 151:
      ACCEPT_TOKEN(anon_sym_symbol);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 152:
      ACCEPT_TOKEN(anon_sym_enum);
      END_STATE();
    case 153:
      ACCEPT_TOKEN(anon_sym_enum);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 154:
      ACCEPT_TOKEN(anon_sym_const);
      END_STATE();
    case 155:
      ACCEPT_TOKEN(anon_sym_const);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 156:
      ACCEPT_TOKEN(anon_sym_func);
      END_STATE();
    case 157:
      ACCEPT_TOKEN(anon_sym_func);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 158:
      ACCEPT_TOKEN(anon_sym_EQ_GT);
      END_STATE();
    case 159:
      ACCEPT_TOKEN(anon_sym_rule);
      END_STATE();
    case 160:
      ACCEPT_TOKEN(anon_sym_rule);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 161:
      ACCEPT_TOKEN(anon_sym_LT);
      END_STATE();
    case 162:
      ACCEPT_TOKEN(anon_sym_LT);
      if (lookahead == '=') ADVANCE(192);
      END_STATE();
    case 163:
      ACCEPT_TOKEN(anon_sym_GT);
      END_STATE();
    case 164:
      ACCEPT_TOKEN(anon_sym_GT);
      if (lookahead == '=') ADVANCE(193);
      END_STATE();
    case 165:
      ACCEPT_TOKEN(anon_sym_type);
      END_STATE();
    case 166:
      ACCEPT_TOKEN(anon_sym_type);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 167:
      ACCEPT_TOKEN(sym_Export);
      END_STATE();
    case 168:
      ACCEPT_TOKEN(sym_Export);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 169:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 170:
      ACCEPT_TOKEN(sym_StringType);
      END_STATE();
    case 171:
      ACCEPT_TOKEN(sym_StringType);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 172:
      ACCEPT_TOKEN(sym_BooleanType);
      END_STATE();
    case 173:
      ACCEPT_TOKEN(sym_BooleanType);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 174:
      ACCEPT_TOKEN(sym_IntegerType);
      END_STATE();
    case 175:
      ACCEPT_TOKEN(sym_IntegerType);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 176:
      ACCEPT_TOKEN(sym_FloatType);
      END_STATE();
    case 177:
      ACCEPT_TOKEN(sym_FloatType);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 178:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 179:
      ACCEPT_TOKEN(anon_sym_PLUS);
      END_STATE();
    case 180:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 181:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead == '>') ADVANCE(135);
      END_STATE();
    case 182:
      ACCEPT_TOKEN(sym_TimesOperator);
      END_STATE();
    case 183:
      ACCEPT_TOKEN(sym_DivideOperator);
      if (lookahead == '*') ADVANCE(13);
      if (lookahead == '/') ADVANCE(307);
      END_STATE();
    case 184:
      ACCEPT_TOKEN(sym_ModulusOperator);
      END_STATE();
    case 185:
      ACCEPT_TOKEN(sym_BitwiseAndOperator);
      END_STATE();
    case 186:
      ACCEPT_TOKEN(sym_XorOperator);
      END_STATE();
    case 187:
      ACCEPT_TOKEN(anon_sym_or);
      END_STATE();
    case 188:
      ACCEPT_TOKEN(anon_sym_and);
      END_STATE();
    case 189:
      ACCEPT_TOKEN(anon_sym_not);
      END_STATE();
    case 190:
      ACCEPT_TOKEN(anon_sym_EQ_EQ);
      END_STATE();
    case 191:
      ACCEPT_TOKEN(anon_sym_BANG_EQ);
      END_STATE();
    case 192:
      ACCEPT_TOKEN(anon_sym_LT_EQ);
      END_STATE();
    case 193:
      ACCEPT_TOKEN(anon_sym_GT_EQ);
      END_STATE();
    case 194:
      ACCEPT_TOKEN(anon_sym_is);
      END_STATE();
    case 195:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'a') ADVANCE(203);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 196:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'a') ADVANCE(225);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 197:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'a') ADVANCE(258);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 198:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'a') ADVANCE(259);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 199:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'b') ADVANCE(252);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 200:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'b') ADVANCE(234);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 201:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'c') ADVANCE(157);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 202:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'c') ADVANCE(143);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 203:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'c') ADVANCE(255);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 204:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'd') ADVANCE(205);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 205:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'e') ADVANCE(131);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 206:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'e') ADVANCE(160);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 207:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'e') ADVANCE(166);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 208:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'e') ADVANCE(213);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 209:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'e') ADVANCE(266);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 210:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'e') ADVANCE(196);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 211:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'e') ADVANCE(246);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 212:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'g') ADVANCE(171);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 213:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'g') ADVANCE(211);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 214:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'h') ADVANCE(147);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 215:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'i') ADVANCE(202);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 216:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'i') ADVANCE(228);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 217:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'l') ADVANCE(151);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 218:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'l') ADVANCE(206);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 219:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'l') ADVANCE(210);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 220:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'l') ADVANCE(240);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 221:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'm') ADVANCE(153);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 222:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'm') ADVANCE(122);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 223:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'm') ADVANCE(200);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 224:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'm') ADVANCE(244);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 225:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'n') ADVANCE(173);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 226:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'n') ADVANCE(201);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 227:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'n') ADVANCE(265);
      if (lookahead == 'x') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 228:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'n') ADVANCE(212);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 229:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'n') ADVANCE(262);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 230:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'n') ADVANCE(253);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 231:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'o') ADVANCE(247);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 232:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'o') ADVANCE(204);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 233:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'o') ADVANCE(230);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 234:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'o') ADVANCE(217);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 235:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'o') ADVANCE(248);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 236:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'o') ADVANCE(251);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 237:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'o') ADVANCE(222);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 238:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'o') ADVANCE(239);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 239:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'o') ADVANCE(219);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 240:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'o') ADVANCE(198);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 241:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'p') ADVANCE(214);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 242:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'p') ADVANCE(207);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 243:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'p') ADVANCE(235);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'p') ADVANCE(236);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'r') ADVANCE(195);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'r') ADVANCE(175);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'r') ADVANCE(241);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'r') ADVANCE(254);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'r') ADVANCE(216);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'r') ADVANCE(237);
      if (lookahead == 'u') ADVANCE(226);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'r') ADVANCE(257);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 's') ADVANCE(260);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 's') ADVANCE(256);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 't') ADVANCE(168);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 't') ADVANCE(129);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 't') ADVANCE(155);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 't') ADVANCE(126);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 't') ADVANCE(215);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 't') ADVANCE(177);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 't') ADVANCE(245);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 't') ADVANCE(197);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 't') ADVANCE(208);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 't') ADVANCE(249);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'u') ADVANCE(218);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'u') ADVANCE(221);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'w') ADVANCE(149);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'x') ADVANCE(243);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'y') ADVANCE(223);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (lookahead == 'y') ADVANCE(242);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (('A' <= lookahead && lookahead <= 'Z')) ADVANCE(271);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(270);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_CamelIdentifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(271);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_SnakeIdentifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(272);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_PascalIdentifier);
      if (lookahead == 'a') ADVANCE(276);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(sym_PascalIdentifier);
      if (lookahead == 'e') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_PascalIdentifier);
      if (lookahead == 'e') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(sym_PascalIdentifier);
      if (lookahead == 'l') ADVANCE(278);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_PascalIdentifier);
      if (lookahead == 'r') ADVANCE(279);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(sym_PascalIdentifier);
      if (lookahead == 's') ADVANCE(275);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(sym_PascalIdentifier);
      if (lookahead == 'u') ADVANCE(274);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(sym_PascalIdentifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_DecoratorIdentifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(281);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == ']') ADVANCE(138);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_as);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(sym_FalseLiteral);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(sym_TrueLiteral);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(280);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(aux_sym_StringLiteral_token1);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(aux_sym_StringLiteral_token1);
      if (lookahead == '*') ADVANCE(291);
      if (lookahead == '/') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(293);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(aux_sym_StringLiteral_token1);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead == '/') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(291);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(aux_sym_StringLiteral_token1);
      if (lookahead == '*') ADVANCE(290);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(291);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(aux_sym_StringLiteral_token1);
      if (lookahead == '/') ADVANCE(289);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(293);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(aux_sym_StringLiteral_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(293);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_StringLiteral_token2);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_StringLiteral_token2);
      if (lookahead == '*') ADVANCE(298);
      if (lookahead == '/') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(300);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(aux_sym_StringLiteral_token2);
      if (lookahead == '*') ADVANCE(297);
      if (lookahead == '/') ADVANCE(300);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(298);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(aux_sym_StringLiteral_token2);
      if (lookahead == '*') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(298);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(aux_sym_StringLiteral_token2);
      if (lookahead == '/') ADVANCE(296);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ' ||
          lookahead == 160 ||
          lookahead == 8203 ||
          lookahead == 8288 ||
          lookahead == 65279) ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(300);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(aux_sym_StringLiteral_token2);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_EscapeSequence);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_EscapeSequence);
      if (lookahead == '\n') ADVANCE(288);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_EscapeSequence);
      if (lookahead == '\n') ADVANCE(295);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_EscapeSequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(301);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_EscapeSequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(304);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(307);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(anon_sym_DOLLAR_LBRACE);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_IntegerLiteral);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_IntegerLiteral);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == '_') ADVANCE(313);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_IntegerLiteral);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == 'B' ||
          lookahead == 'b') ADVANCE(19);
      if (lookahead == 'O' ||
          lookahead == 'o') ADVANCE(20);
      if (lookahead == 'X' ||
          lookahead == 'x') ADVANCE(21);
      if (lookahead == '_') ADVANCE(313);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_IntegerLiteral);
      if (lookahead == '.') ADVANCE(320);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_IntegerLiteral);
      if (lookahead == '_') ADVANCE(107);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(314);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(310);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_IntegerLiteral);
      if (lookahead == '_') ADVANCE(108);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_IntegerLiteral);
      if (lookahead == '_') ADVANCE(113);
      if (lookahead == 'L' ||
          lookahead == 'l') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_FloatLiteral);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_FloatLiteral);
      if (lookahead == '_') ADVANCE(320);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_FloatLiteral);
      if (lookahead == '_') ADVANCE(321);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_FloatLiteral);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(106);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(318);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_FloatLiteral);
      if (lookahead == 'J' ||
          lookahead == 'L' ||
          lookahead == 'j' ||
          lookahead == 'l') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(319);
      END_STATE();
    default:
      return false;
  }
}

static TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 118},
  [3] = {.lex_state = 118},
  [4] = {.lex_state = 118},
  [5] = {.lex_state = 118},
  [6] = {.lex_state = 118},
  [7] = {.lex_state = 118},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 118},
  [11] = {.lex_state = 118},
  [12] = {.lex_state = 118},
  [13] = {.lex_state = 118},
  [14] = {.lex_state = 118},
  [15] = {.lex_state = 118},
  [16] = {.lex_state = 118},
  [17] = {.lex_state = 118},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 118},
  [20] = {.lex_state = 118},
  [21] = {.lex_state = 118},
  [22] = {.lex_state = 119},
  [23] = {.lex_state = 8},
  [24] = {.lex_state = 8},
  [25] = {.lex_state = 8},
  [26] = {.lex_state = 8},
  [27] = {.lex_state = 8},
  [28] = {.lex_state = 8},
  [29] = {.lex_state = 119},
  [30] = {.lex_state = 119},
  [31] = {.lex_state = 6},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 6},
  [34] = {.lex_state = 6},
  [35] = {.lex_state = 6},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 6},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 6},
  [42] = {.lex_state = 6},
  [43] = {.lex_state = 6},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 6},
  [46] = {.lex_state = 6},
  [47] = {.lex_state = 6},
  [48] = {.lex_state = 6},
  [49] = {.lex_state = 6},
  [50] = {.lex_state = 6},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 6},
  [53] = {.lex_state = 6},
  [54] = {.lex_state = 6},
  [55] = {.lex_state = 6},
  [56] = {.lex_state = 6},
  [57] = {.lex_state = 6},
  [58] = {.lex_state = 6},
  [59] = {.lex_state = 6},
  [60] = {.lex_state = 6},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 6},
  [63] = {.lex_state = 8},
  [64] = {.lex_state = 6},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 8},
  [67] = {.lex_state = 8},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 6},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 8},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 6},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 6},
  [85] = {.lex_state = 6},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 6},
  [95] = {.lex_state = 6},
  [96] = {.lex_state = 6},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 6},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 0},
  [108] = {.lex_state = 8},
  [109] = {.lex_state = 8},
  [110] = {.lex_state = 8},
  [111] = {.lex_state = 8},
  [112] = {.lex_state = 8},
  [113] = {.lex_state = 8},
  [114] = {.lex_state = 8},
  [115] = {.lex_state = 8},
  [116] = {.lex_state = 8},
  [117] = {.lex_state = 8},
  [118] = {.lex_state = 8},
  [119] = {.lex_state = 8},
  [120] = {.lex_state = 8},
  [121] = {.lex_state = 14},
  [122] = {.lex_state = 14},
  [123] = {.lex_state = 14},
  [124] = {.lex_state = 14},
  [125] = {.lex_state = 14},
  [126] = {.lex_state = 14},
  [127] = {.lex_state = 14},
  [128] = {.lex_state = 6},
  [129] = {.lex_state = 6},
  [130] = {.lex_state = 6},
  [131] = {.lex_state = 8},
  [132] = {.lex_state = 0},
  [133] = {.lex_state = 14},
  [134] = {.lex_state = 8},
  [135] = {.lex_state = 8},
  [136] = {.lex_state = 14},
  [137] = {.lex_state = 8},
  [138] = {.lex_state = 8},
  [139] = {.lex_state = 8},
  [140] = {.lex_state = 8},
  [141] = {.lex_state = 8},
  [142] = {.lex_state = 8},
  [143] = {.lex_state = 15},
  [144] = {.lex_state = 15},
  [145] = {.lex_state = 8},
  [146] = {.lex_state = 0},
  [147] = {.lex_state = 0},
  [148] = {.lex_state = 15},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 0, .external_lex_state = 2},
  [151] = {.lex_state = 8},
  [152] = {.lex_state = 0, .external_lex_state = 2},
  [153] = {.lex_state = 8},
  [154] = {.lex_state = 8},
  [155] = {.lex_state = 0, .external_lex_state = 2},
  [156] = {.lex_state = 10},
  [157] = {.lex_state = 0, .external_lex_state = 2},
  [158] = {.lex_state = 8},
  [159] = {.lex_state = 8},
  [160] = {.lex_state = 0, .external_lex_state = 2},
  [161] = {.lex_state = 8},
  [162] = {.lex_state = 10},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 10},
  [165] = {.lex_state = 10},
  [166] = {.lex_state = 10},
  [167] = {.lex_state = 10},
  [168] = {.lex_state = 10},
  [169] = {.lex_state = 10},
  [170] = {.lex_state = 0},
  [171] = {.lex_state = 10},
  [172] = {.lex_state = 10},
  [173] = {.lex_state = 10},
  [174] = {.lex_state = 10},
  [175] = {.lex_state = 10},
  [176] = {.lex_state = 10},
  [177] = {.lex_state = 10},
  [178] = {.lex_state = 10},
  [179] = {.lex_state = 10},
  [180] = {.lex_state = 10},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 10},
  [183] = {.lex_state = 1},
  [184] = {.lex_state = 3},
  [185] = {.lex_state = 5},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 10},
  [188] = {.lex_state = 118},
  [189] = {.lex_state = 118},
  [190] = {.lex_state = 10},
  [191] = {.lex_state = 1},
  [192] = {.lex_state = 3},
  [193] = {.lex_state = 118},
  [194] = {.lex_state = 118},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 3},
  [197] = {.lex_state = 1},
  [198] = {.lex_state = 3},
  [199] = {.lex_state = 1},
  [200] = {.lex_state = 10},
  [201] = {.lex_state = 3},
  [202] = {.lex_state = 118},
  [203] = {.lex_state = 118},
  [204] = {.lex_state = 0, .external_lex_state = 2},
  [205] = {.lex_state = 5},
  [206] = {.lex_state = 10},
  [207] = {.lex_state = 10},
  [208] = {.lex_state = 10},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 10},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 10},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 10},
  [215] = {.lex_state = 10},
  [216] = {.lex_state = 10},
  [217] = {.lex_state = 10},
  [218] = {.lex_state = 118},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 10},
  [222] = {.lex_state = 10},
  [223] = {.lex_state = 10},
  [224] = {.lex_state = 10},
  [225] = {.lex_state = 5},
  [226] = {.lex_state = 119},
  [227] = {.lex_state = 10},
  [228] = {.lex_state = 10},
  [229] = {.lex_state = 10},
  [230] = {.lex_state = 10},
  [231] = {.lex_state = 10},
  [232] = {.lex_state = 10},
  [233] = {.lex_state = 10},
  [234] = {.lex_state = 10},
  [235] = {.lex_state = 10},
  [236] = {.lex_state = 118},
  [237] = {.lex_state = 10},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 10},
  [241] = {.lex_state = 10},
  [242] = {.lex_state = 119},
  [243] = {.lex_state = 10},
  [244] = {.lex_state = 10},
  [245] = {.lex_state = 5},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 10},
  [248] = {.lex_state = 10},
  [249] = {.lex_state = 10},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 118},
  [252] = {.lex_state = 119},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 119},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 118},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 118},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 118},
  [264] = {.lex_state = 118},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 118},
  [267] = {.lex_state = 118},
  [268] = {.lex_state = 119},
  [269] = {.lex_state = 118},
  [270] = {.lex_state = 119},
  [271] = {.lex_state = 119},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 5},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 0},
  [279] = {.lex_state = 5},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 0},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 5},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 119},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 5},
  [291] = {.lex_state = 5},
  [292] = {.lex_state = 0},
  [293] = {.lex_state = 5},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 5},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 119},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 118},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 5},
  [306] = {.lex_state = 119},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 119},
  [310] = {.lex_state = 119},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 5},
  [317] = {.lex_state = 119},
  [318] = {.lex_state = 5},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
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
    [anon_sym_from] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_import] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_abstract] = ACTIONS(1),
    [anon_sym_node] = ACTIONS(1),
    [anon_sym_extends] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_DASH_GT] = ACTIONS(1),
    [sym_NodeEdgeRequiredModifier] = ACTIONS(1),
    [sym_NodeEdgeArrayModifier] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_static] = ACTIONS(1),
    [anon_sym_LPAREN] = ACTIONS(1),
    [anon_sym_RPAREN] = ACTIONS(1),
    [anon_sym_morph] = ACTIONS(1),
    [anon_sym_new] = ACTIONS(1),
    [anon_sym_symbol] = ACTIONS(1),
    [anon_sym_enum] = ACTIONS(1),
    [anon_sym_const] = ACTIONS(1),
    [anon_sym_func] = ACTIONS(1),
    [anon_sym_EQ_GT] = ACTIONS(1),
    [anon_sym_rule] = ACTIONS(1),
    [anon_sym_LT] = ACTIONS(1),
    [anon_sym_GT] = ACTIONS(1),
    [anon_sym_type] = ACTIONS(1),
    [sym_Export] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [sym_StringType] = ACTIONS(1),
    [sym_BooleanType] = ACTIONS(1),
    [sym_IntegerType] = ACTIONS(1),
    [sym_FloatType] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_TimesOperator] = ACTIONS(1),
    [sym_DivideOperator] = ACTIONS(1),
    [sym_ModulusOperator] = ACTIONS(1),
    [sym_BitwiseAndOperator] = ACTIONS(1),
    [sym_XorOperator] = ACTIONS(1),
    [anon_sym_or] = ACTIONS(1),
    [anon_sym_and] = ACTIONS(1),
    [anon_sym_not] = ACTIONS(1),
    [anon_sym_EQ_EQ] = ACTIONS(1),
    [anon_sym_BANG_EQ] = ACTIONS(1),
    [anon_sym_LT_EQ] = ACTIONS(1),
    [anon_sym_GT_EQ] = ACTIONS(1),
    [anon_sym_is] = ACTIONS(1),
    [sym_PascalIdentifier] = ACTIONS(1),
    [sym_DecoratorIdentifier] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_as] = ACTIONS(1),
    [sym_FalseLiteral] = ACTIONS(1),
    [sym_TrueLiteral] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_EscapeSequence] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [anon_sym_DOLLAR_LBRACE] = ACTIONS(1),
    [sym_IntegerLiteral] = ACTIONS(1),
    [sym_FloatLiteral] = ACTIONS(1),
    [sym__automatic_semicolon] = ACTIONS(1),
    [sym__template_chars] = ACTIONS(1),
  },
  [1] = {
    [sym_Program] = STATE(312),
    [sym_Statement] = STATE(9),
    [sym_ImportFromStatement] = STATE(76),
    [sym_ImportModuleStatement] = STATE(76),
    [sym_NodeDeclarationStatement] = STATE(76),
    [sym_Decorator] = STATE(147),
    [sym_MorphismDeclarationStatement] = STATE(76),
    [sym_SymbolDeclarationStatement] = STATE(76),
    [sym_EnumDeclarationStatement] = STATE(76),
    [sym_ConstantDeclarationStatement] = STATE(76),
    [sym_FunctionDeclarationStatement] = STATE(76),
    [sym_RuleDeclarationStatement] = STATE(76),
    [sym_TypeDeclarationStatement] = STATE(76),
    [aux_sym_Program_repeat1] = STATE(9),
    [aux_sym_NodeDeclarationStatement_repeat1] = STATE(147),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_from] = ACTIONS(7),
    [anon_sym_import] = ACTIONS(9),
    [anon_sym_abstract] = ACTIONS(11),
    [anon_sym_node] = ACTIONS(13),
    [anon_sym_morph] = ACTIONS(15),
    [anon_sym_symbol] = ACTIONS(17),
    [anon_sym_enum] = ACTIONS(19),
    [anon_sym_const] = ACTIONS(21),
    [anon_sym_func] = ACTIONS(23),
    [anon_sym_rule] = ACTIONS(25),
    [anon_sym_type] = ACTIONS(27),
    [sym_Export] = ACTIONS(29),
    [sym_DecoratorIdentifier] = ACTIONS(31),
    [sym_comment] = ACTIONS(3),
  },
};

static uint16_t ts_small_parse_table[] = {
  [0] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      sym_DivideOperator,
    ACTIONS(45), 1,
      sym_BitwiseAndOperator,
    ACTIONS(47), 1,
      sym_XorOperator,
    STATE(84), 1,
      sym_BitwiseOrOperator,
    ACTIONS(41), 2,
      sym_TimesOperator,
      sym_ModulusOperator,
    STATE(98), 2,
      sym_PlusOperator,
      sym_MinusOperator,
    ACTIONS(33), 19,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_GT,
      anon_sym_type,
      sym_Export,
      anon_sym_COLON,
      sym_DecoratorIdentifier,
  [54] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      sym_DivideOperator,
    ACTIONS(45), 1,
      sym_BitwiseAndOperator,
    ACTIONS(47), 1,
      sym_XorOperator,
    STATE(84), 1,
      sym_BitwiseOrOperator,
    ACTIONS(41), 2,
      sym_TimesOperator,
      sym_ModulusOperator,
    STATE(98), 2,
      sym_PlusOperator,
      sym_MinusOperator,
    ACTIONS(49), 20,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_GT,
      anon_sym_type,
      sym_Export,
      anon_sym_PIPE,
      anon_sym_COLON,
      sym_DecoratorIdentifier,
  [106] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(43), 1,
      sym_DivideOperator,
    STATE(84), 1,
      sym_BitwiseOrOperator,
    ACTIONS(41), 2,
      sym_TimesOperator,
      sym_ModulusOperator,
    STATE(98), 2,
      sym_PlusOperator,
      sym_MinusOperator,
    ACTIONS(49), 24,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_GT,
      anon_sym_type,
      sym_Export,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_BitwiseAndOperator,
      sym_XorOperator,
      sym_DecoratorIdentifier,
  [150] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      sym_DivideOperator,
    STATE(84), 1,
      sym_BitwiseOrOperator,
    ACTIONS(41), 2,
      sym_TimesOperator,
      sym_ModulusOperator,
    STATE(98), 2,
      sym_PlusOperator,
      sym_MinusOperator,
    ACTIONS(49), 22,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_GT,
      anon_sym_type,
      sym_Export,
      anon_sym_PIPE,
      anon_sym_COLON,
      sym_BitwiseAndOperator,
      sym_XorOperator,
      sym_DecoratorIdentifier,
  [198] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(43), 1,
      sym_DivideOperator,
    ACTIONS(47), 1,
      sym_XorOperator,
    STATE(84), 1,
      sym_BitwiseOrOperator,
    ACTIONS(41), 2,
      sym_TimesOperator,
      sym_ModulusOperator,
    STATE(98), 2,
      sym_PlusOperator,
      sym_MinusOperator,
    ACTIONS(49), 21,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_GT,
      anon_sym_type,
      sym_Export,
      anon_sym_PIPE,
      anon_sym_COLON,
      sym_BitwiseAndOperator,
      sym_DecoratorIdentifier,
  [248] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(51), 1,
      sym_DivideOperator,
    STATE(84), 1,
      sym_BitwiseOrOperator,
    STATE(98), 2,
      sym_PlusOperator,
      sym_MinusOperator,
    ACTIONS(49), 26,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_GT,
      anon_sym_type,
      sym_Export,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_TimesOperator,
      sym_ModulusOperator,
      sym_BitwiseAndOperator,
      sym_XorOperator,
      sym_DecoratorIdentifier,
  [290] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(53), 1,
      ts_builtin_sym_end,
    ACTIONS(55), 1,
      anon_sym_from,
    ACTIONS(58), 1,
      anon_sym_import,
    ACTIONS(61), 1,
      anon_sym_abstract,
    ACTIONS(64), 1,
      anon_sym_node,
    ACTIONS(67), 1,
      anon_sym_morph,
    ACTIONS(70), 1,
      anon_sym_symbol,
    ACTIONS(73), 1,
      anon_sym_enum,
    ACTIONS(76), 1,
      anon_sym_const,
    ACTIONS(79), 1,
      anon_sym_func,
    ACTIONS(82), 1,
      anon_sym_rule,
    ACTIONS(85), 1,
      anon_sym_type,
    ACTIONS(88), 1,
      sym_Export,
    ACTIONS(91), 1,
      sym_DecoratorIdentifier,
    STATE(8), 2,
      sym_Statement,
      aux_sym_Program_repeat1,
    STATE(147), 2,
      sym_Decorator,
      aux_sym_NodeDeclarationStatement_repeat1,
    STATE(76), 10,
      sym_ImportFromStatement,
      sym_ImportModuleStatement,
      sym_NodeDeclarationStatement,
      sym_MorphismDeclarationStatement,
      sym_SymbolDeclarationStatement,
      sym_EnumDeclarationStatement,
      sym_ConstantDeclarationStatement,
      sym_FunctionDeclarationStatement,
      sym_RuleDeclarationStatement,
      sym_TypeDeclarationStatement,
  [356] = 18,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_from,
    ACTIONS(9), 1,
      anon_sym_import,
    ACTIONS(11), 1,
      anon_sym_abstract,
    ACTIONS(13), 1,
      anon_sym_node,
    ACTIONS(15), 1,
      anon_sym_morph,
    ACTIONS(17), 1,
      anon_sym_symbol,
    ACTIONS(19), 1,
      anon_sym_enum,
    ACTIONS(21), 1,
      anon_sym_const,
    ACTIONS(23), 1,
      anon_sym_func,
    ACTIONS(25), 1,
      anon_sym_rule,
    ACTIONS(27), 1,
      anon_sym_type,
    ACTIONS(29), 1,
      sym_Export,
    ACTIONS(31), 1,
      sym_DecoratorIdentifier,
    ACTIONS(94), 1,
      ts_builtin_sym_end,
    STATE(8), 2,
      sym_Statement,
      aux_sym_Program_repeat1,
    STATE(147), 2,
      sym_Decorator,
      aux_sym_NodeDeclarationStatement_repeat1,
    STATE(76), 10,
      sym_ImportFromStatement,
      sym_ImportModuleStatement,
      sym_NodeDeclarationStatement,
      sym_MorphismDeclarationStatement,
      sym_SymbolDeclarationStatement,
      sym_EnumDeclarationStatement,
      sym_ConstantDeclarationStatement,
      sym_FunctionDeclarationStatement,
      sym_RuleDeclarationStatement,
      sym_TypeDeclarationStatement,
  [422] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 1,
      sym_DivideOperator,
    ACTIONS(96), 26,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_GT,
      anon_sym_type,
      sym_Export,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_TimesOperator,
      sym_ModulusOperator,
      sym_BitwiseAndOperator,
      sym_XorOperator,
      sym_DecoratorIdentifier,
  [457] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 1,
      sym_DivideOperator,
    ACTIONS(100), 26,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_GT,
      anon_sym_type,
      sym_Export,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_TimesOperator,
      sym_ModulusOperator,
      sym_BitwiseAndOperator,
      sym_XorOperator,
      sym_DecoratorIdentifier,
  [492] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 1,
      sym_DivideOperator,
    ACTIONS(104), 26,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_GT,
      anon_sym_type,
      sym_Export,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_TimesOperator,
      sym_ModulusOperator,
      sym_BitwiseAndOperator,
      sym_XorOperator,
      sym_DecoratorIdentifier,
  [527] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 1,
      sym_DivideOperator,
    ACTIONS(108), 26,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_RBRACE,
      anon_sym_RPAREN,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_GT,
      anon_sym_type,
      sym_Export,
      anon_sym_PIPE,
      anon_sym_COLON,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_TimesOperator,
      sym_ModulusOperator,
      sym_BitwiseAndOperator,
      sym_XorOperator,
      sym_DecoratorIdentifier,
  [562] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_EQ,
    ACTIONS(116), 1,
      anon_sym_PIPE,
    STATE(14), 1,
      aux_sym_TypeUnion_repeat1,
    ACTIONS(112), 18,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_RPAREN,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_EQ_GT,
      anon_sym_rule,
      anon_sym_GT,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [595] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(121), 1,
      anon_sym_EQ,
    ACTIONS(123), 1,
      anon_sym_PIPE,
    STATE(14), 1,
      aux_sym_TypeUnion_repeat1,
    ACTIONS(119), 18,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_RPAREN,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_EQ_GT,
      anon_sym_rule,
      anon_sym_GT,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [628] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(123), 1,
      anon_sym_PIPE,
    ACTIONS(127), 1,
      anon_sym_EQ,
    STATE(15), 1,
      aux_sym_TypeUnion_repeat1,
    ACTIONS(125), 18,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_RPAREN,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_EQ_GT,
      anon_sym_rule,
      anon_sym_GT,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [661] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      anon_sym_EQ,
    ACTIONS(112), 19,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_RPAREN,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_EQ_GT,
      anon_sym_rule,
      anon_sym_GT,
      anon_sym_type,
      sym_Export,
      anon_sym_PIPE,
      sym_DecoratorIdentifier,
  [689] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(133), 1,
      sym_DecoratorIdentifier,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    ACTIONS(141), 1,
      sym_FloatLiteral,
    STATE(246), 1,
      sym_Expression,
    ACTIONS(129), 4,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      sym_Export,
    STATE(2), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(131), 6,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [731] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 1,
      anon_sym_EQ,
    ACTIONS(143), 19,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_RPAREN,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_EQ_GT,
      anon_sym_rule,
      anon_sym_GT,
      anon_sym_type,
      sym_Export,
      anon_sym_PIPE,
      sym_DecoratorIdentifier,
  [759] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 1,
      anon_sym_EQ,
    ACTIONS(147), 19,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_RPAREN,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_EQ_GT,
      anon_sym_rule,
      anon_sym_GT,
      anon_sym_type,
      sym_Export,
      anon_sym_PIPE,
      sym_DecoratorIdentifier,
  [787] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 1,
      anon_sym_EQ,
    ACTIONS(125), 18,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_RPAREN,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_EQ_GT,
      anon_sym_rule,
      anon_sym_GT,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [814] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_PascalIdentifier,
    ACTIONS(151), 2,
      ts_builtin_sym_end,
      sym_DecoratorIdentifier,
    ACTIONS(155), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(153), 12,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
  [843] = 11,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      sym_DivideOperator,
    ACTIONS(163), 1,
      sym_BitwiseAndOperator,
    ACTIONS(165), 1,
      sym_XorOperator,
    STATE(75), 1,
      sym_BitwiseOrOperator,
    ACTIONS(159), 2,
      sym_TimesOperator,
      sym_ModulusOperator,
    STATE(85), 2,
      sym_PlusOperator,
      sym_MinusOperator,
    ACTIONS(51), 3,
      anon_sym_static,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(49), 4,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
  [884] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(161), 1,
      sym_DivideOperator,
    STATE(75), 1,
      sym_BitwiseOrOperator,
    ACTIONS(159), 2,
      sym_TimesOperator,
      sym_ModulusOperator,
    STATE(85), 2,
      sym_PlusOperator,
      sym_MinusOperator,
    ACTIONS(51), 3,
      anon_sym_static,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(49), 8,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_BitwiseAndOperator,
      sym_XorOperator,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
  [917] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      sym_DivideOperator,
    STATE(75), 1,
      sym_BitwiseOrOperator,
    ACTIONS(159), 2,
      sym_TimesOperator,
      sym_ModulusOperator,
    STATE(85), 2,
      sym_PlusOperator,
      sym_MinusOperator,
    ACTIONS(51), 3,
      anon_sym_static,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(49), 6,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      sym_BitwiseAndOperator,
      sym_XorOperator,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
  [954] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      sym_DivideOperator,
    ACTIONS(165), 1,
      sym_XorOperator,
    STATE(75), 1,
      sym_BitwiseOrOperator,
    ACTIONS(159), 2,
      sym_TimesOperator,
      sym_ModulusOperator,
    STATE(85), 2,
      sym_PlusOperator,
      sym_MinusOperator,
    ACTIONS(51), 3,
      anon_sym_static,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(49), 5,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      sym_BitwiseAndOperator,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
  [993] = 5,
    ACTIONS(3), 1,
      sym_comment,
    STATE(75), 1,
      sym_BitwiseOrOperator,
    STATE(85), 2,
      sym_PlusOperator,
      sym_MinusOperator,
    ACTIONS(51), 4,
      anon_sym_static,
      sym_DivideOperator,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(49), 10,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_TimesOperator,
      sym_ModulusOperator,
      sym_BitwiseAndOperator,
      sym_XorOperator,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
  [1022] = 12,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(35), 1,
      anon_sym_PIPE,
    ACTIONS(37), 1,
      anon_sym_PLUS,
    ACTIONS(39), 1,
      anon_sym_DASH,
    ACTIONS(161), 1,
      sym_DivideOperator,
    ACTIONS(163), 1,
      sym_BitwiseAndOperator,
    ACTIONS(165), 1,
      sym_XorOperator,
    STATE(75), 1,
      sym_BitwiseOrOperator,
    ACTIONS(159), 2,
      sym_TimesOperator,
      sym_ModulusOperator,
    STATE(85), 2,
      sym_PlusOperator,
      sym_MinusOperator,
    ACTIONS(33), 3,
      anon_sym_RBRACE,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
    ACTIONS(167), 3,
      anon_sym_static,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
  [1065] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_PascalIdentifier,
    ACTIONS(155), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(169), 2,
      ts_builtin_sym_end,
      sym_DecoratorIdentifier,
    ACTIONS(171), 12,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
  [1094] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(157), 1,
      sym_PascalIdentifier,
    ACTIONS(155), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(173), 2,
      ts_builtin_sym_end,
      sym_DecoratorIdentifier,
    ACTIONS(175), 12,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
  [1123] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      sym_Expression,
    ACTIONS(141), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(2), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(131), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [1159] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_ImportFromStatement_repeat2,
    ACTIONS(179), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [1185] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      sym_Expression,
    ACTIONS(141), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(2), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(131), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [1221] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    ACTIONS(186), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      sym_Expression,
    ACTIONS(141), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(2), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(131), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [1257] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    ACTIONS(141), 1,
      sym_FloatLiteral,
    STATE(220), 1,
      sym_Expression,
    ACTIONS(129), 2,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
    ACTIONS(133), 2,
      sym_CamelIdentifier,
      sym_DecoratorIdentifier,
    ACTIONS(131), 3,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
    STATE(2), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
  [1295] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(190), 1,
      anon_sym_COMMA,
    STATE(38), 1,
      aux_sym_ImportFromStatement_repeat2,
    ACTIONS(188), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [1321] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    ACTIONS(192), 1,
      anon_sym_RPAREN,
    STATE(261), 1,
      sym_Expression,
    ACTIONS(141), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(2), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(131), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [1357] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_ImportFromStatement_repeat2,
    ACTIONS(151), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [1383] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(194), 1,
      anon_sym_COMMA,
    STATE(40), 1,
      aux_sym_ImportFromStatement_repeat2,
    ACTIONS(151), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [1409] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(196), 1,
      anon_sym_COMMA,
    STATE(32), 1,
      aux_sym_ImportFromStatement_repeat2,
    ACTIONS(169), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [1435] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    STATE(277), 1,
      sym_Expression,
    ACTIONS(141), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(2), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(131), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [1468] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    STATE(302), 1,
      sym_Expression,
    ACTIONS(141), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(2), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(131), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [1501] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      anon_sym_BQUOTE,
    STATE(161), 1,
      sym_Expression,
    ACTIONS(198), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(28), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(200), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [1534] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(179), 15,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_COMMA,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [1555] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    STATE(300), 1,
      sym_Expression,
    ACTIONS(141), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(2), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(131), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [1588] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    STATE(68), 1,
      sym_Expression,
    ACTIONS(141), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(2), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(131), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [1621] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    STATE(87), 1,
      sym_Expression,
    ACTIONS(141), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(2), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(131), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [1654] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    STATE(263), 1,
      sym_Expression,
    ACTIONS(141), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(2), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(131), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [1687] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    STATE(261), 1,
      sym_Expression,
    ACTIONS(141), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(2), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(131), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [1720] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    STATE(74), 1,
      sym_Expression,
    ACTIONS(141), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(2), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(131), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [1753] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      anon_sym_BQUOTE,
    STATE(151), 1,
      sym_Expression,
    ACTIONS(198), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(28), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(200), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [1786] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    STATE(303), 1,
      sym_Expression,
    ACTIONS(141), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(2), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(131), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [1819] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    STATE(102), 1,
      sym_Expression,
    ACTIONS(141), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(2), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(131), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [1852] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    STATE(282), 1,
      sym_Expression,
    ACTIONS(141), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(2), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(131), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [1885] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    STATE(104), 1,
      sym_Expression,
    ACTIONS(141), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(2), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(131), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [1918] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    STATE(105), 1,
      sym_Expression,
    ACTIONS(141), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(2), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(131), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [1951] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    STATE(61), 1,
      sym_Expression,
    ACTIONS(141), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(2), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(131), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [1984] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    STATE(86), 1,
      sym_Expression,
    ACTIONS(141), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(2), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(131), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [2017] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    STATE(315), 1,
      sym_Expression,
    ACTIONS(141), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(2), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(131), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [2050] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    STATE(296), 1,
      sym_Expression,
    ACTIONS(141), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(2), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(131), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [2083] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(208), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [2103] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      anon_sym_BQUOTE,
    ACTIONS(210), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(27), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(212), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [2133] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(106), 4,
      anon_sym_static,
      sym_DivideOperator,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(104), 10,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_TimesOperator,
      sym_ModulusOperator,
      sym_BitwiseAndOperator,
      sym_XorOperator,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
  [2155] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    ACTIONS(214), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(7), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(216), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [2185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(218), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [2205] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(102), 4,
      anon_sym_static,
      sym_DivideOperator,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(100), 10,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_TimesOperator,
      sym_ModulusOperator,
      sym_BitwiseAndOperator,
      sym_XorOperator,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
  [2227] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 4,
      anon_sym_static,
      sym_DivideOperator,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(108), 10,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_TimesOperator,
      sym_ModulusOperator,
      sym_BitwiseAndOperator,
      sym_XorOperator,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
  [2249] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(220), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [2269] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(222), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [2289] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    ACTIONS(224), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(5), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(226), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [2319] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(228), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [2339] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(230), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [2359] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(98), 4,
      anon_sym_static,
      sym_DivideOperator,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(96), 10,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_PLUS,
      anon_sym_DASH,
      sym_TimesOperator,
      sym_ModulusOperator,
      sym_BitwiseAndOperator,
      sym_XorOperator,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
  [2381] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(232), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [2401] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      anon_sym_BQUOTE,
    ACTIONS(234), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(23), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(236), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [2431] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(238), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [2451] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(240), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [2471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(242), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [2491] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(244), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [2511] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(246), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [2531] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(248), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [2551] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(250), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [2571] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(252), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [2591] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    ACTIONS(254), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(3), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(256), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [2621] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      anon_sym_BQUOTE,
    ACTIONS(258), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(24), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(260), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [2651] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(262), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [2671] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(264), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [2691] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(266), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [2711] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(268), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [2731] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(270), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [2751] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(272), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [2771] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(274), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [2791] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(276), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [2811] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      anon_sym_BQUOTE,
    ACTIONS(278), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(25), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(280), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [2841] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(202), 1,
      anon_sym_DQUOTE,
    ACTIONS(204), 1,
      anon_sym_SQUOTE,
    ACTIONS(206), 1,
      anon_sym_BQUOTE,
    ACTIONS(282), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(26), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(284), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [2871] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    ACTIONS(286), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(6), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(288), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [2901] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(290), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [2921] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(135), 1,
      anon_sym_DQUOTE,
    ACTIONS(137), 1,
      anon_sym_SQUOTE,
    ACTIONS(139), 1,
      anon_sym_BQUOTE,
    ACTIONS(292), 2,
      sym_CamelIdentifier,
      sym_FloatLiteral,
    STATE(4), 4,
      sym__primary_expression,
      sym_BinaryExpression,
      sym_StringLiteral,
      sym_StringTemplateLiteral,
    ACTIONS(294), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [2951] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(296), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [2971] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(298), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [2991] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(300), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [3011] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(302), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [3031] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(304), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [3051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(306), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [3071] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(308), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [3091] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(310), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [3111] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(312), 14,
      ts_builtin_sym_end,
      anon_sym_from,
      anon_sym_import,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      anon_sym_symbol,
      anon_sym_enum,
      anon_sym_const,
      anon_sym_func,
      anon_sym_rule,
      anon_sym_type,
      sym_Export,
      sym_DecoratorIdentifier,
  [3131] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 1,
      anon_sym_static,
    ACTIONS(320), 1,
      sym_PascalIdentifier,
    ACTIONS(322), 1,
      sym_DecoratorIdentifier,
    ACTIONS(318), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    STATE(114), 2,
      sym_NodeDeclarationMember,
      aux_sym_NodeDeclarationStatement_repeat2,
    STATE(154), 2,
      sym_NodeEdgeDeclaration,
      sym_NodeStaticConstantDeclaration,
    STATE(162), 2,
      sym_Decorator,
      aux_sym_NodeDeclarationStatement_repeat1,
  [3163] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(324), 1,
      anon_sym_RBRACE,
    ACTIONS(326), 1,
      anon_sym_static,
    ACTIONS(332), 1,
      sym_PascalIdentifier,
    ACTIONS(335), 1,
      sym_DecoratorIdentifier,
    ACTIONS(329), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    STATE(109), 2,
      sym_NodeDeclarationMember,
      aux_sym_NodeDeclarationStatement_repeat2,
    STATE(154), 2,
      sym_NodeEdgeDeclaration,
      sym_NodeStaticConstantDeclaration,
    STATE(162), 2,
      sym_Decorator,
      aux_sym_NodeDeclarationStatement_repeat1,
  [3195] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_static,
    ACTIONS(320), 1,
      sym_PascalIdentifier,
    ACTIONS(322), 1,
      sym_DecoratorIdentifier,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    ACTIONS(318), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    STATE(118), 2,
      sym_NodeDeclarationMember,
      aux_sym_NodeDeclarationStatement_repeat2,
    STATE(154), 2,
      sym_NodeEdgeDeclaration,
      sym_NodeStaticConstantDeclaration,
    STATE(162), 2,
      sym_Decorator,
      aux_sym_NodeDeclarationStatement_repeat1,
  [3227] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_static,
    ACTIONS(320), 1,
      sym_PascalIdentifier,
    ACTIONS(322), 1,
      sym_DecoratorIdentifier,
    ACTIONS(340), 1,
      anon_sym_RBRACE,
    ACTIONS(318), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    STATE(117), 2,
      sym_NodeDeclarationMember,
      aux_sym_NodeDeclarationStatement_repeat2,
    STATE(154), 2,
      sym_NodeEdgeDeclaration,
      sym_NodeStaticConstantDeclaration,
    STATE(162), 2,
      sym_Decorator,
      aux_sym_NodeDeclarationStatement_repeat1,
  [3259] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_static,
    ACTIONS(320), 1,
      sym_PascalIdentifier,
    ACTIONS(322), 1,
      sym_DecoratorIdentifier,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    ACTIONS(318), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    STATE(113), 2,
      sym_NodeDeclarationMember,
      aux_sym_NodeDeclarationStatement_repeat2,
    STATE(154), 2,
      sym_NodeEdgeDeclaration,
      sym_NodeStaticConstantDeclaration,
    STATE(162), 2,
      sym_Decorator,
      aux_sym_NodeDeclarationStatement_repeat1,
  [3291] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(314), 1,
      anon_sym_RBRACE,
    ACTIONS(316), 1,
      anon_sym_static,
    ACTIONS(320), 1,
      sym_PascalIdentifier,
    ACTIONS(322), 1,
      sym_DecoratorIdentifier,
    ACTIONS(318), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    STATE(109), 2,
      sym_NodeDeclarationMember,
      aux_sym_NodeDeclarationStatement_repeat2,
    STATE(154), 2,
      sym_NodeEdgeDeclaration,
      sym_NodeStaticConstantDeclaration,
    STATE(162), 2,
      sym_Decorator,
      aux_sym_NodeDeclarationStatement_repeat1,
  [3323] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_static,
    ACTIONS(320), 1,
      sym_PascalIdentifier,
    ACTIONS(322), 1,
      sym_DecoratorIdentifier,
    ACTIONS(338), 1,
      anon_sym_RBRACE,
    ACTIONS(318), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    STATE(109), 2,
      sym_NodeDeclarationMember,
      aux_sym_NodeDeclarationStatement_repeat2,
    STATE(154), 2,
      sym_NodeEdgeDeclaration,
      sym_NodeStaticConstantDeclaration,
    STATE(162), 2,
      sym_Decorator,
      aux_sym_NodeDeclarationStatement_repeat1,
  [3355] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_static,
    ACTIONS(320), 1,
      sym_PascalIdentifier,
    ACTIONS(322), 1,
      sym_DecoratorIdentifier,
    ACTIONS(342), 1,
      anon_sym_RBRACE,
    ACTIONS(318), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    STATE(109), 2,
      sym_NodeDeclarationMember,
      aux_sym_NodeDeclarationStatement_repeat2,
    STATE(154), 2,
      sym_NodeEdgeDeclaration,
      sym_NodeStaticConstantDeclaration,
    STATE(162), 2,
      sym_Decorator,
      aux_sym_NodeDeclarationStatement_repeat1,
  [3387] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_static,
    ACTIONS(320), 1,
      sym_PascalIdentifier,
    ACTIONS(322), 1,
      sym_DecoratorIdentifier,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    ACTIONS(318), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    STATE(120), 2,
      sym_NodeDeclarationMember,
      aux_sym_NodeDeclarationStatement_repeat2,
    STATE(154), 2,
      sym_NodeEdgeDeclaration,
      sym_NodeStaticConstantDeclaration,
    STATE(162), 2,
      sym_Decorator,
      aux_sym_NodeDeclarationStatement_repeat1,
  [3419] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_static,
    ACTIONS(320), 1,
      sym_PascalIdentifier,
    ACTIONS(322), 1,
      sym_DecoratorIdentifier,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    ACTIONS(318), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    STATE(109), 2,
      sym_NodeDeclarationMember,
      aux_sym_NodeDeclarationStatement_repeat2,
    STATE(154), 2,
      sym_NodeEdgeDeclaration,
      sym_NodeStaticConstantDeclaration,
    STATE(162), 2,
      sym_Decorator,
      aux_sym_NodeDeclarationStatement_repeat1,
  [3451] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_static,
    ACTIONS(320), 1,
      sym_PascalIdentifier,
    ACTIONS(322), 1,
      sym_DecoratorIdentifier,
    ACTIONS(344), 1,
      anon_sym_RBRACE,
    ACTIONS(318), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    STATE(109), 2,
      sym_NodeDeclarationMember,
      aux_sym_NodeDeclarationStatement_repeat2,
    STATE(154), 2,
      sym_NodeEdgeDeclaration,
      sym_NodeStaticConstantDeclaration,
    STATE(162), 2,
      sym_Decorator,
      aux_sym_NodeDeclarationStatement_repeat1,
  [3483] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_static,
    ACTIONS(320), 1,
      sym_PascalIdentifier,
    ACTIONS(322), 1,
      sym_DecoratorIdentifier,
    ACTIONS(346), 1,
      anon_sym_RBRACE,
    ACTIONS(318), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    STATE(115), 2,
      sym_NodeDeclarationMember,
      aux_sym_NodeDeclarationStatement_repeat2,
    STATE(154), 2,
      sym_NodeEdgeDeclaration,
      sym_NodeStaticConstantDeclaration,
    STATE(162), 2,
      sym_Decorator,
      aux_sym_NodeDeclarationStatement_repeat1,
  [3515] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(316), 1,
      anon_sym_static,
    ACTIONS(320), 1,
      sym_PascalIdentifier,
    ACTIONS(322), 1,
      sym_DecoratorIdentifier,
    ACTIONS(348), 1,
      anon_sym_RBRACE,
    ACTIONS(318), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    STATE(109), 2,
      sym_NodeDeclarationMember,
      aux_sym_NodeDeclarationStatement_repeat2,
    STATE(154), 2,
      sym_NodeEdgeDeclaration,
      sym_NodeStaticConstantDeclaration,
    STATE(162), 2,
      sym_Decorator,
      aux_sym_NodeDeclarationStatement_repeat1,
  [3547] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym_PascalIdentifier,
    STATE(16), 1,
      sym_SingleType,
    STATE(20), 1,
      sym_PredefinedType,
    STATE(21), 1,
      sym_TypeUnion,
    STATE(78), 1,
      sym_Type,
    ACTIONS(352), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(350), 4,
      sym_StringType,
      sym_BooleanType,
      sym_IntegerType,
      sym_FloatType,
  [3576] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym_PascalIdentifier,
    STATE(16), 1,
      sym_SingleType,
    STATE(20), 1,
      sym_PredefinedType,
    STATE(21), 1,
      sym_TypeUnion,
    STATE(103), 1,
      sym_Type,
    ACTIONS(352), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(350), 4,
      sym_StringType,
      sym_BooleanType,
      sym_IntegerType,
      sym_FloatType,
  [3605] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym_PascalIdentifier,
    STATE(16), 1,
      sym_SingleType,
    STATE(20), 1,
      sym_PredefinedType,
    STATE(21), 1,
      sym_TypeUnion,
    STATE(188), 1,
      sym_Type,
    ACTIONS(352), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(350), 4,
      sym_StringType,
      sym_BooleanType,
      sym_IntegerType,
      sym_FloatType,
  [3634] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_PascalIdentifier,
    STATE(135), 1,
      sym_SingleType,
    STATE(137), 1,
      sym_PredefinedType,
    STATE(141), 1,
      sym_Type,
    STATE(145), 1,
      sym_TypeUnion,
    ACTIONS(358), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(356), 4,
      sym_StringType,
      sym_BooleanType,
      sym_IntegerType,
      sym_FloatType,
  [3663] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym_PascalIdentifier,
    STATE(16), 1,
      sym_SingleType,
    STATE(20), 1,
      sym_PredefinedType,
    STATE(21), 1,
      sym_TypeUnion,
    STATE(256), 1,
      sym_Type,
    ACTIONS(352), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(350), 4,
      sym_StringType,
      sym_BooleanType,
      sym_IntegerType,
      sym_FloatType,
  [3692] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_PascalIdentifier,
    STATE(135), 1,
      sym_SingleType,
    STATE(137), 1,
      sym_PredefinedType,
    STATE(140), 1,
      sym_Type,
    STATE(145), 1,
      sym_TypeUnion,
    ACTIONS(358), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(356), 4,
      sym_StringType,
      sym_BooleanType,
      sym_IntegerType,
      sym_FloatType,
  [3721] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_PascalIdentifier,
    STATE(135), 1,
      sym_SingleType,
    STATE(137), 1,
      sym_PredefinedType,
    STATE(138), 1,
      sym_Type,
    STATE(145), 1,
      sym_TypeUnion,
    ACTIONS(358), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(356), 4,
      sym_StringType,
      sym_BooleanType,
      sym_IntegerType,
      sym_FloatType,
  [3750] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(362), 5,
      sym_CamelIdentifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_FloatLiteral,
    ACTIONS(364), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [3768] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(366), 5,
      sym_CamelIdentifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_FloatLiteral,
    ACTIONS(368), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [3786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(370), 5,
      sym_CamelIdentifier,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      anon_sym_BQUOTE,
      sym_FloatLiteral,
    ACTIONS(372), 5,
      sym_SnakeIdentifier,
      sym_PascalIdentifier,
      sym_FalseLiteral,
      sym_TrueLiteral,
      sym_IntegerLiteral,
  [3804] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_PIPE,
    STATE(134), 1,
      aux_sym_TypeUnion_repeat1,
    ACTIONS(121), 3,
      anon_sym_static,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(119), 4,
      anon_sym_RBRACE,
      anon_sym_EQ,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
  [3825] = 10,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(376), 1,
      anon_sym_abstract,
    ACTIONS(378), 1,
      anon_sym_node,
    ACTIONS(380), 1,
      anon_sym_morph,
    ACTIONS(382), 1,
      anon_sym_symbol,
    ACTIONS(384), 1,
      anon_sym_enum,
    ACTIONS(386), 1,
      anon_sym_const,
    ACTIONS(388), 1,
      anon_sym_func,
    ACTIONS(390), 1,
      anon_sym_rule,
    ACTIONS(392), 1,
      anon_sym_type,
  [3856] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(354), 1,
      sym_PascalIdentifier,
    STATE(17), 1,
      sym_SingleType,
    STATE(20), 1,
      sym_PredefinedType,
    ACTIONS(352), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(350), 4,
      sym_StringType,
      sym_BooleanType,
      sym_IntegerType,
      sym_FloatType,
  [3879] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(394), 1,
      anon_sym_PIPE,
    STATE(134), 1,
      aux_sym_TypeUnion_repeat1,
    ACTIONS(114), 3,
      anon_sym_static,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(112), 4,
      anon_sym_RBRACE,
      anon_sym_EQ,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
  [3900] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(374), 1,
      anon_sym_PIPE,
    STATE(131), 1,
      aux_sym_TypeUnion_repeat1,
    ACTIONS(127), 3,
      anon_sym_static,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(125), 4,
      anon_sym_RBRACE,
      anon_sym_EQ,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
  [3921] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(360), 1,
      sym_PascalIdentifier,
    STATE(137), 1,
      sym_PredefinedType,
    STATE(139), 1,
      sym_SingleType,
    ACTIONS(358), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(356), 4,
      sym_StringType,
      sym_BooleanType,
      sym_IntegerType,
      sym_FloatType,
  [3944] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(149), 3,
      anon_sym_static,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(147), 5,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_PIPE,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
  [3960] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_EQ,
    STATE(153), 1,
      sym_NodeEdgeInitializer,
    ACTIONS(397), 3,
      anon_sym_RBRACE,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
    ACTIONS(401), 3,
      anon_sym_static,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
  [3980] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 3,
      anon_sym_static,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(112), 5,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_PIPE,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
  [3996] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_EQ,
    STATE(159), 1,
      sym_NodeEdgeInitializer,
    ACTIONS(403), 3,
      anon_sym_RBRACE,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
    ACTIONS(405), 3,
      anon_sym_static,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
  [4016] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(399), 1,
      anon_sym_EQ,
    STATE(158), 1,
      sym_NodeEdgeInitializer,
    ACTIONS(407), 3,
      anon_sym_RBRACE,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
    ACTIONS(409), 3,
      anon_sym_static,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
  [4036] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(145), 3,
      anon_sym_static,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(143), 5,
      anon_sym_RBRACE,
      anon_sym_EQ,
      anon_sym_PIPE,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
  [4052] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_new,
    ACTIONS(415), 1,
      sym_PascalIdentifier,
    STATE(287), 1,
      sym_MorphismDeclarationMember,
    ACTIONS(413), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    STATE(284), 2,
      sym_MorphismMutationDeclaration,
      sym_MorphismCreationDeclaration,
  [4073] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_new,
    ACTIONS(415), 1,
      sym_PascalIdentifier,
    STATE(301), 1,
      sym_MorphismDeclarationMember,
    ACTIONS(413), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    STATE(284), 2,
      sym_MorphismMutationDeclaration,
      sym_MorphismCreationDeclaration,
  [4094] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(127), 3,
      anon_sym_static,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    ACTIONS(125), 4,
      anon_sym_RBRACE,
      anon_sym_EQ,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
  [4109] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(419), 1,
      sym_DecoratorIdentifier,
    STATE(146), 2,
      sym_Decorator,
      aux_sym_NodeDeclarationStatement_repeat1,
    ACTIONS(417), 4,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      sym_Export,
  [4126] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(31), 1,
      sym_DecoratorIdentifier,
    ACTIONS(376), 1,
      anon_sym_abstract,
    ACTIONS(378), 1,
      anon_sym_node,
    ACTIONS(380), 1,
      anon_sym_morph,
    ACTIONS(422), 1,
      sym_Export,
    STATE(146), 2,
      sym_Decorator,
      aux_sym_NodeDeclarationStatement_repeat1,
  [4149] = 6,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(411), 1,
      anon_sym_new,
    ACTIONS(415), 1,
      sym_PascalIdentifier,
    STATE(281), 1,
      sym_MorphismDeclarationMember,
    ACTIONS(413), 2,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
    STATE(284), 2,
      sym_MorphismMutationDeclaration,
      sym_MorphismCreationDeclaration,
  [4170] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(426), 1,
      anon_sym_LPAREN,
    ACTIONS(424), 5,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      sym_Export,
      sym_DecoratorIdentifier,
  [4184] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(430), 1,
      anon_sym_BQUOTE,
    ACTIONS(432), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(428), 2,
      sym__template_chars,
      sym_EscapeSequence,
    STATE(155), 2,
      sym_TemplateSubstitution,
      aux_sym_StringTemplateLiteral_repeat1,
  [4202] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(434), 3,
      anon_sym_RBRACE,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
    ACTIONS(436), 3,
      anon_sym_static,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
  [4216] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(441), 1,
      anon_sym_BQUOTE,
    ACTIONS(443), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(438), 2,
      sym__template_chars,
      sym_EscapeSequence,
    STATE(152), 2,
      sym_TemplateSubstitution,
      aux_sym_StringTemplateLiteral_repeat1,
  [4234] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(407), 3,
      anon_sym_RBRACE,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
    ACTIONS(409), 3,
      anon_sym_static,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
  [4248] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(446), 3,
      anon_sym_RBRACE,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
    ACTIONS(448), 3,
      anon_sym_static,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
  [4262] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(452), 1,
      anon_sym_BQUOTE,
    ACTIONS(450), 2,
      sym__template_chars,
      sym_EscapeSequence,
    STATE(152), 2,
      sym_TemplateSubstitution,
      aux_sym_StringTemplateLiteral_repeat1,
  [4280] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(454), 1,
      sym_SnakeIdentifier,
    ACTIONS(456), 1,
      sym_DecoratorIdentifier,
    ACTIONS(417), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
    STATE(156), 2,
      sym_Decorator,
      aux_sym_NodeDeclarationStatement_repeat1,
  [4298] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(461), 1,
      anon_sym_BQUOTE,
    ACTIONS(459), 2,
      sym__template_chars,
      sym_EscapeSequence,
    STATE(160), 2,
      sym_TemplateSubstitution,
      aux_sym_StringTemplateLiteral_repeat1,
  [4316] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(463), 3,
      anon_sym_RBRACE,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
    ACTIONS(465), 3,
      anon_sym_static,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
  [4330] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(397), 3,
      anon_sym_RBRACE,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
    ACTIONS(401), 3,
      anon_sym_static,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
  [4344] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(432), 1,
      anon_sym_DOLLAR_LBRACE,
    ACTIONS(467), 1,
      anon_sym_BQUOTE,
    ACTIONS(450), 2,
      sym__template_chars,
      sym_EscapeSequence,
    STATE(152), 2,
      sym_TemplateSubstitution,
      aux_sym_StringTemplateLiteral_repeat1,
  [4362] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(469), 3,
      anon_sym_RBRACE,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
    ACTIONS(471), 3,
      anon_sym_static,
      sym_CamelIdentifier,
      sym_SnakeIdentifier,
  [4376] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(322), 1,
      sym_DecoratorIdentifier,
    ACTIONS(475), 1,
      sym_SnakeIdentifier,
    ACTIONS(473), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
    STATE(156), 2,
      sym_Decorator,
      aux_sym_NodeDeclarationStatement_repeat1,
  [4394] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(477), 5,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      sym_Export,
      sym_DecoratorIdentifier,
  [4405] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(479), 1,
      anon_sym_RBRACE,
    ACTIONS(484), 1,
      sym_SnakeIdentifier,
    STATE(164), 1,
      aux_sym_EnumDeclarationStatement_repeat1,
    ACTIONS(481), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [4422] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(487), 1,
      anon_sym_DOT,
    ACTIONS(491), 1,
      sym_SnakeIdentifier,
    STATE(169), 1,
      aux_sym_ImportFromStatement_repeat1,
    ACTIONS(489), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [4439] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_GT,
    ACTIONS(497), 1,
      sym_SnakeIdentifier,
    STATE(259), 1,
      sym_TypeParameter,
    ACTIONS(495), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [4456] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
    ACTIONS(503), 1,
      sym_SnakeIdentifier,
    STATE(164), 1,
      aux_sym_EnumDeclarationStatement_repeat1,
    ACTIONS(501), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [4473] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(505), 1,
      anon_sym_DOT,
    ACTIONS(510), 1,
      sym_SnakeIdentifier,
    STATE(168), 1,
      aux_sym_ImportFromStatement_repeat1,
    ACTIONS(508), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [4490] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_DOT,
    ACTIONS(516), 1,
      sym_SnakeIdentifier,
    STATE(168), 1,
      aux_sym_ImportFromStatement_repeat1,
    ACTIONS(514), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [4507] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(518), 5,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      sym_Export,
      sym_DecoratorIdentifier,
  [4518] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(520), 1,
      anon_sym_RBRACE,
    ACTIONS(524), 1,
      sym_SnakeIdentifier,
    STATE(167), 1,
      aux_sym_EnumDeclarationStatement_repeat1,
    ACTIONS(522), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [4535] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
    ACTIONS(530), 1,
      sym_SnakeIdentifier,
    STATE(255), 1,
      sym_FunctionParameter,
    ACTIONS(528), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [4552] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(503), 1,
      sym_SnakeIdentifier,
    ACTIONS(532), 1,
      anon_sym_RBRACE,
    STATE(164), 1,
      aux_sym_EnumDeclarationStatement_repeat1,
    ACTIONS(501), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [4569] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_SnakeIdentifier,
    ACTIONS(534), 1,
      anon_sym_RPAREN,
    STATE(250), 1,
      sym_FunctionParameter,
    ACTIONS(528), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [4586] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(512), 1,
      anon_sym_DOT,
    ACTIONS(538), 1,
      sym_SnakeIdentifier,
    STATE(168), 1,
      aux_sym_ImportFromStatement_repeat1,
    ACTIONS(536), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [4603] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_SnakeIdentifier,
    ACTIONS(540), 1,
      anon_sym_RPAREN,
    STATE(255), 1,
      sym_FunctionParameter,
    ACTIONS(528), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [4620] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(499), 1,
      anon_sym_RBRACE,
    ACTIONS(544), 1,
      sym_SnakeIdentifier,
    STATE(173), 1,
      aux_sym_EnumDeclarationStatement_repeat1,
    ACTIONS(542), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [4637] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_SnakeIdentifier,
    ACTIONS(546), 1,
      anon_sym_GT,
    STATE(259), 1,
      sym_TypeParameter,
    ACTIONS(495), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [4654] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(548), 1,
      anon_sym_LPAREN,
    ACTIONS(550), 1,
      sym_SnakeIdentifier,
    ACTIONS(424), 3,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
  [4669] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(552), 1,
      anon_sym_DOT,
    ACTIONS(556), 1,
      sym_SnakeIdentifier,
    STATE(175), 1,
      aux_sym_ImportFromStatement_repeat1,
    ACTIONS(554), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [4686] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(558), 5,
      anon_sym_abstract,
      anon_sym_node,
      anon_sym_morph,
      sym_Export,
      sym_DecoratorIdentifier,
  [4697] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(530), 1,
      sym_SnakeIdentifier,
    STATE(255), 1,
      sym_FunctionParameter,
    ACTIONS(528), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [4711] = 5,
    ACTIONS(560), 1,
      anon_sym_DQUOTE,
    ACTIONS(562), 1,
      aux_sym_StringLiteral_token1,
    ACTIONS(564), 1,
      sym_EscapeSequence,
    ACTIONS(566), 1,
      sym_comment,
    STATE(195), 1,
      aux_sym_StringLiteral_repeat1,
  [4727] = 5,
    ACTIONS(566), 1,
      sym_comment,
    ACTIONS(568), 1,
      anon_sym_SQUOTE,
    ACTIONS(570), 1,
      aux_sym_StringLiteral_token2,
    ACTIONS(573), 1,
      sym_EscapeSequence,
    STATE(184), 1,
      aux_sym_StringLiteral_repeat2,
  [4743] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_DASH_GT,
    STATE(293), 1,
      sym_NodeEdgeModifier,
    ACTIONS(578), 2,
      sym_NodeEdgeRequiredModifier,
      sym_NodeEdgeArrayModifier,
  [4757] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_COLON,
    STATE(272), 1,
      sym_TypeAnnotation,
    ACTIONS(580), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [4771] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_SnakeIdentifier,
    STATE(259), 1,
      sym_TypeParameter,
    ACTIONS(495), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [4785] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(586), 1,
      anon_sym_EQ,
    ACTIONS(584), 3,
      anon_sym_COMMA,
      anon_sym_RPAREN,
      anon_sym_EQ_GT,
  [4797] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_LPAREN,
    ACTIONS(590), 1,
      anon_sym_LT,
    STATE(252), 1,
      sym_FunctionSignature,
    STATE(258), 1,
      sym_TypeParameters,
  [4813] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(592), 1,
      sym_SnakeIdentifier,
    ACTIONS(477), 3,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
  [4825] = 5,
    ACTIONS(566), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_DQUOTE,
    ACTIONS(596), 1,
      aux_sym_StringLiteral_token1,
    ACTIONS(598), 1,
      sym_EscapeSequence,
    STATE(197), 1,
      aux_sym_StringLiteral_repeat1,
  [4841] = 5,
    ACTIONS(566), 1,
      sym_comment,
    ACTIONS(594), 1,
      anon_sym_SQUOTE,
    ACTIONS(600), 1,
      aux_sym_StringLiteral_token2,
    ACTIONS(602), 1,
      sym_EscapeSequence,
    STATE(198), 1,
      aux_sym_StringLiteral_repeat2,
  [4857] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_LPAREN,
    ACTIONS(590), 1,
      anon_sym_LT,
    STATE(274), 1,
      sym_TypeParameters,
    STATE(288), 1,
      sym_FunctionSignature,
  [4873] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_LPAREN,
    ACTIONS(590), 1,
      anon_sym_LT,
    STATE(257), 1,
      sym_TypeParameters,
    STATE(317), 1,
      sym_FunctionSignature,
  [4889] = 5,
    ACTIONS(566), 1,
      sym_comment,
    ACTIONS(604), 1,
      anon_sym_DQUOTE,
    ACTIONS(606), 1,
      aux_sym_StringLiteral_token1,
    ACTIONS(609), 1,
      sym_EscapeSequence,
    STATE(195), 1,
      aux_sym_StringLiteral_repeat1,
  [4905] = 5,
    ACTIONS(560), 1,
      anon_sym_SQUOTE,
    ACTIONS(566), 1,
      sym_comment,
    ACTIONS(612), 1,
      aux_sym_StringLiteral_token2,
    ACTIONS(614), 1,
      sym_EscapeSequence,
    STATE(184), 1,
      aux_sym_StringLiteral_repeat2,
  [4921] = 5,
    ACTIONS(562), 1,
      aux_sym_StringLiteral_token1,
    ACTIONS(564), 1,
      sym_EscapeSequence,
    ACTIONS(566), 1,
      sym_comment,
    ACTIONS(616), 1,
      anon_sym_DQUOTE,
    STATE(195), 1,
      aux_sym_StringLiteral_repeat1,
  [4937] = 5,
    ACTIONS(566), 1,
      sym_comment,
    ACTIONS(612), 1,
      aux_sym_StringLiteral_token2,
    ACTIONS(614), 1,
      sym_EscapeSequence,
    ACTIONS(616), 1,
      anon_sym_SQUOTE,
    STATE(184), 1,
      aux_sym_StringLiteral_repeat2,
  [4953] = 5,
    ACTIONS(566), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_DQUOTE,
    ACTIONS(620), 1,
      aux_sym_StringLiteral_token1,
    ACTIONS(622), 1,
      sym_EscapeSequence,
    STATE(183), 1,
      aux_sym_StringLiteral_repeat1,
  [4969] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(497), 1,
      sym_SnakeIdentifier,
    STATE(251), 1,
      sym_TypeParameter,
    ACTIONS(495), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [4983] = 5,
    ACTIONS(566), 1,
      sym_comment,
    ACTIONS(618), 1,
      anon_sym_SQUOTE,
    ACTIONS(624), 1,
      aux_sym_StringLiteral_token2,
    ACTIONS(626), 1,
      sym_EscapeSequence,
    STATE(196), 1,
      aux_sym_StringLiteral_repeat2,
  [4999] = 5,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_LPAREN,
    ACTIONS(590), 1,
      anon_sym_LT,
    STATE(242), 1,
      sym_FunctionSignature,
    STATE(273), 1,
      sym_TypeParameters,
  [5015] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(630), 1,
      anon_sym_extends,
    STATE(269), 1,
      sym_TypeParameterConstraint,
    ACTIONS(628), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [5029] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(632), 4,
      sym__template_chars,
      sym_EscapeSequence,
      anon_sym_BQUOTE,
      anon_sym_DOLLAR_LBRACE,
  [5039] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(634), 1,
      anon_sym_DASH_GT,
    STATE(279), 1,
      sym_NodeEdgeModifier,
    ACTIONS(578), 2,
      sym_NodeEdgeRequiredModifier,
      sym_NodeEdgeArrayModifier,
  [5053] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(636), 1,
      sym_SnakeIdentifier,
    ACTIONS(518), 3,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
  [5065] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(638), 1,
      sym_SnakeIdentifier,
    ACTIONS(558), 3,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
      sym_DecoratorIdentifier,
  [5077] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(642), 1,
      sym_SnakeIdentifier,
    ACTIONS(640), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5088] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(177), 1,
      anon_sym_RPAREN,
    ACTIONS(644), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      aux_sym_Decorator_repeat1,
  [5101] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(648), 1,
      sym_SnakeIdentifier,
    ACTIONS(646), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5112] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(184), 1,
      anon_sym_RPAREN,
    ACTIONS(650), 1,
      anon_sym_COMMA,
    STATE(219), 1,
      aux_sym_Decorator_repeat1,
  [5125] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(654), 1,
      sym_SnakeIdentifier,
    ACTIONS(652), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5136] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(656), 1,
      anon_sym_COMMA,
    ACTIONS(659), 1,
      anon_sym_RPAREN,
    STATE(213), 1,
      aux_sym_FunctionSignature_repeat1,
  [5149] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(663), 1,
      sym_SnakeIdentifier,
    ACTIONS(661), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5160] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(667), 1,
      sym_SnakeIdentifier,
    ACTIONS(665), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5171] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(671), 1,
      sym_SnakeIdentifier,
    ACTIONS(669), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5182] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(675), 1,
      sym_SnakeIdentifier,
    ACTIONS(673), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5193] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(677), 1,
      anon_sym_COMMA,
    ACTIONS(680), 1,
      anon_sym_GT,
    STATE(218), 1,
      aux_sym_TypeParameters_repeat1,
  [5206] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(682), 1,
      anon_sym_COMMA,
    ACTIONS(685), 1,
      anon_sym_RPAREN,
    STATE(219), 1,
      aux_sym_Decorator_repeat1,
  [5219] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(687), 1,
      anon_sym_COMMA,
    ACTIONS(689), 1,
      anon_sym_RPAREN,
    STATE(211), 1,
      aux_sym_Decorator_repeat1,
  [5232] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(693), 1,
      sym_SnakeIdentifier,
    ACTIONS(691), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5243] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(697), 1,
      sym_SnakeIdentifier,
    ACTIONS(695), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5254] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(701), 1,
      sym_SnakeIdentifier,
    ACTIONS(699), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5265] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(705), 1,
      sym_SnakeIdentifier,
    ACTIONS(703), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5276] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_COLON,
    ACTIONS(707), 1,
      anon_sym_EQ,
    STATE(291), 1,
      sym_TypeAnnotation,
  [5289] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_COLON,
    ACTIONS(709), 1,
      anon_sym_EQ_GT,
    STATE(306), 1,
      sym_TypeAnnotation,
  [5302] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(713), 1,
      sym_SnakeIdentifier,
    ACTIONS(711), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5313] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(717), 1,
      sym_SnakeIdentifier,
    ACTIONS(715), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5324] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(721), 1,
      sym_SnakeIdentifier,
    ACTIONS(719), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5335] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(725), 1,
      sym_SnakeIdentifier,
    ACTIONS(723), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5346] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(729), 1,
      sym_SnakeIdentifier,
    ACTIONS(727), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5357] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(733), 1,
      sym_SnakeIdentifier,
    ACTIONS(731), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5368] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(737), 1,
      sym_SnakeIdentifier,
    ACTIONS(735), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5379] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(155), 1,
      sym_SnakeIdentifier,
    ACTIONS(157), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5390] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(741), 1,
      sym_SnakeIdentifier,
    ACTIONS(739), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5401] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(493), 1,
      anon_sym_GT,
    ACTIONS(743), 1,
      anon_sym_COMMA,
    STATE(218), 1,
      aux_sym_TypeParameters_repeat1,
  [5414] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(747), 1,
      sym_SnakeIdentifier,
    ACTIONS(745), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5425] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(749), 1,
      anon_sym_abstract,
    ACTIONS(751), 1,
      anon_sym_node,
    ACTIONS(753), 1,
      anon_sym_morph,
  [5438] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(526), 1,
      anon_sym_RPAREN,
    ACTIONS(755), 1,
      anon_sym_COMMA,
    STATE(213), 1,
      aux_sym_FunctionSignature_repeat1,
  [5451] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(759), 1,
      sym_SnakeIdentifier,
    ACTIONS(757), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5462] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(763), 1,
      sym_SnakeIdentifier,
    ACTIONS(761), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5473] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_COLON,
    ACTIONS(765), 1,
      anon_sym_EQ_GT,
    STATE(309), 1,
      sym_TypeAnnotation,
  [5486] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(769), 1,
      sym_SnakeIdentifier,
    ACTIONS(767), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5497] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(773), 1,
      sym_SnakeIdentifier,
    ACTIONS(771), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5508] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_COLON,
    ACTIONS(775), 1,
      anon_sym_EQ,
    STATE(318), 1,
      sym_TypeAnnotation,
  [5521] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(777), 1,
      anon_sym_COMMA,
    ACTIONS(779), 1,
      anon_sym_RPAREN,
    STATE(209), 1,
      aux_sym_Decorator_repeat1,
  [5534] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(783), 1,
      sym_SnakeIdentifier,
    ACTIONS(781), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5545] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(787), 1,
      sym_SnakeIdentifier,
    ACTIONS(785), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5556] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(791), 1,
      sym_SnakeIdentifier,
    ACTIONS(789), 2,
      sym_CamelIdentifier,
      sym_PascalIdentifier,
  [5567] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(793), 1,
      anon_sym_COMMA,
    ACTIONS(795), 1,
      anon_sym_RPAREN,
    STATE(239), 1,
      aux_sym_FunctionSignature_repeat1,
  [5580] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(797), 1,
      anon_sym_COMMA,
    ACTIONS(799), 1,
      anon_sym_GT,
    STATE(236), 1,
      aux_sym_TypeParameters_repeat1,
  [5593] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(582), 1,
      anon_sym_COLON,
    ACTIONS(801), 1,
      anon_sym_EQ_GT,
    STATE(299), 1,
      sym_TypeAnnotation,
  [5606] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(803), 1,
      anon_sym_extends,
    ACTIONS(805), 1,
      anon_sym_LBRACE,
  [5616] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(807), 2,
      anon_sym_EQ_GT,
      anon_sym_COLON,
  [5624] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(659), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5632] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(809), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [5640] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_LPAREN,
    STATE(310), 1,
      sym_FunctionSignature,
  [5650] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_LPAREN,
    STATE(226), 1,
      sym_FunctionSignature,
  [5660] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(680), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [5668] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(811), 1,
      anon_sym_extends,
    ACTIONS(813), 1,
      anon_sym_LBRACE,
  [5678] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(685), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5686] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(815), 1,
      anon_sym_extends,
    ACTIONS(817), 1,
      anon_sym_LBRACE,
  [5696] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(819), 1,
      anon_sym_GT,
    ACTIONS(821), 1,
      anon_sym_COLON,
  [5706] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_LT,
    STATE(92), 1,
      sym_RuleExpression,
  [5716] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(825), 1,
      anon_sym_extends,
    ACTIONS(827), 1,
      anon_sym_LBRACE,
  [5726] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_LT,
    STATE(99), 1,
      sym_RuleExpression,
  [5736] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(823), 1,
      anon_sym_LT,
    STATE(82), 1,
      sym_RuleExpression,
  [5746] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(829), 2,
      anon_sym_EQ_GT,
      anon_sym_COLON,
  [5754] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(831), 2,
      anon_sym_COMMA,
      anon_sym_GT,
  [5762] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(833), 2,
      anon_sym_EQ_GT,
      anon_sym_COLON,
  [5770] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(835), 2,
      anon_sym_EQ_GT,
      anon_sym_COLON,
  [5778] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(837), 2,
      anon_sym_COMMA,
      anon_sym_RPAREN,
  [5786] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_LPAREN,
    STATE(252), 1,
      sym_FunctionSignature,
  [5796] = 3,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(588), 1,
      anon_sym_LPAREN,
    STATE(317), 1,
      sym_FunctionSignature,
  [5806] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(839), 1,
      anon_sym_EQ,
  [5813] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(841), 1,
      anon_sym_LPAREN,
  [5820] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(843), 1,
      anon_sym_RBRACE,
  [5827] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(845), 1,
      anon_sym_LPAREN,
  [5834] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(576), 1,
      anon_sym_DASH_GT,
  [5841] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(847), 1,
      anon_sym_node,
  [5848] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(849), 1,
      anon_sym_RBRACE,
  [5855] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(851), 1,
      anon_sym_RBRACE,
  [5862] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(853), 1,
      anon_sym_EQ,
  [5869] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(855), 1,
      anon_sym_RBRACE,
  [5876] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(857), 1,
      anon_sym_LBRACE,
  [5883] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(859), 1,
      anon_sym_LPAREN,
  [5890] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(861), 1,
      anon_sym_RBRACE,
  [5897] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(863), 1,
      anon_sym_EQ_GT,
  [5904] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(865), 1,
      anon_sym_LPAREN,
  [5911] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(867), 1,
      anon_sym_DASH_GT,
  [5918] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(869), 1,
      anon_sym_EQ,
  [5925] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(871), 1,
      anon_sym_LBRACE,
  [5932] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(873), 1,
      anon_sym_DASH_GT,
  [5939] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(875), 1,
      anon_sym_import,
  [5946] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(877), 1,
      anon_sym_DASH_GT,
  [5953] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(879), 1,
      anon_sym_RPAREN,
  [5960] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(813), 1,
      anon_sym_LBRACE,
  [5967] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(817), 1,
      anon_sym_LBRACE,
  [5974] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(709), 1,
      anon_sym_EQ_GT,
  [5981] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(881), 1,
      anon_sym_RPAREN,
  [5988] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(883), 1,
      anon_sym_RBRACE,
  [5995] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(885), 1,
      anon_sym_RPAREN,
  [6002] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(887), 1,
      anon_sym_GT,
  [6009] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(751), 1,
      anon_sym_node,
  [6016] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(889), 1,
      anon_sym_EQ,
  [6023] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(891), 1,
      anon_sym_EQ_GT,
  [6030] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(893), 1,
      anon_sym_LBRACE,
  [6037] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(895), 1,
      anon_sym_LPAREN,
  [6044] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(801), 1,
      anon_sym_EQ_GT,
  [6051] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(897), 1,
      anon_sym_EQ_GT,
  [6058] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(899), 1,
      anon_sym_import,
  [6065] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(901), 1,
      ts_builtin_sym_end,
  [6072] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(903), 1,
      anon_sym_LBRACE,
  [6079] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(905), 1,
      anon_sym_LBRACE,
  [6086] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(907), 1,
      anon_sym_RBRACE,
  [6093] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(909), 1,
      anon_sym_DASH_GT,
  [6100] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(911), 1,
      anon_sym_EQ_GT,
  [6107] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(913), 1,
      anon_sym_EQ,
  [6114] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(915), 1,
      anon_sym_LBRACE,
  [6121] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(917), 1,
      anon_sym_LPAREN,
  [6128] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(919), 1,
      anon_sym_LBRACE,
  [6135] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(378), 1,
      anon_sym_node,
};

static uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 54,
  [SMALL_STATE(4)] = 106,
  [SMALL_STATE(5)] = 150,
  [SMALL_STATE(6)] = 198,
  [SMALL_STATE(7)] = 248,
  [SMALL_STATE(8)] = 290,
  [SMALL_STATE(9)] = 356,
  [SMALL_STATE(10)] = 422,
  [SMALL_STATE(11)] = 457,
  [SMALL_STATE(12)] = 492,
  [SMALL_STATE(13)] = 527,
  [SMALL_STATE(14)] = 562,
  [SMALL_STATE(15)] = 595,
  [SMALL_STATE(16)] = 628,
  [SMALL_STATE(17)] = 661,
  [SMALL_STATE(18)] = 689,
  [SMALL_STATE(19)] = 731,
  [SMALL_STATE(20)] = 759,
  [SMALL_STATE(21)] = 787,
  [SMALL_STATE(22)] = 814,
  [SMALL_STATE(23)] = 843,
  [SMALL_STATE(24)] = 884,
  [SMALL_STATE(25)] = 917,
  [SMALL_STATE(26)] = 954,
  [SMALL_STATE(27)] = 993,
  [SMALL_STATE(28)] = 1022,
  [SMALL_STATE(29)] = 1065,
  [SMALL_STATE(30)] = 1094,
  [SMALL_STATE(31)] = 1123,
  [SMALL_STATE(32)] = 1159,
  [SMALL_STATE(33)] = 1185,
  [SMALL_STATE(34)] = 1221,
  [SMALL_STATE(35)] = 1257,
  [SMALL_STATE(36)] = 1295,
  [SMALL_STATE(37)] = 1321,
  [SMALL_STATE(38)] = 1357,
  [SMALL_STATE(39)] = 1383,
  [SMALL_STATE(40)] = 1409,
  [SMALL_STATE(41)] = 1435,
  [SMALL_STATE(42)] = 1468,
  [SMALL_STATE(43)] = 1501,
  [SMALL_STATE(44)] = 1534,
  [SMALL_STATE(45)] = 1555,
  [SMALL_STATE(46)] = 1588,
  [SMALL_STATE(47)] = 1621,
  [SMALL_STATE(48)] = 1654,
  [SMALL_STATE(49)] = 1687,
  [SMALL_STATE(50)] = 1720,
  [SMALL_STATE(51)] = 1753,
  [SMALL_STATE(52)] = 1786,
  [SMALL_STATE(53)] = 1819,
  [SMALL_STATE(54)] = 1852,
  [SMALL_STATE(55)] = 1885,
  [SMALL_STATE(56)] = 1918,
  [SMALL_STATE(57)] = 1951,
  [SMALL_STATE(58)] = 1984,
  [SMALL_STATE(59)] = 2017,
  [SMALL_STATE(60)] = 2050,
  [SMALL_STATE(61)] = 2083,
  [SMALL_STATE(62)] = 2103,
  [SMALL_STATE(63)] = 2133,
  [SMALL_STATE(64)] = 2155,
  [SMALL_STATE(65)] = 2185,
  [SMALL_STATE(66)] = 2205,
  [SMALL_STATE(67)] = 2227,
  [SMALL_STATE(68)] = 2249,
  [SMALL_STATE(69)] = 2269,
  [SMALL_STATE(70)] = 2289,
  [SMALL_STATE(71)] = 2319,
  [SMALL_STATE(72)] = 2339,
  [SMALL_STATE(73)] = 2359,
  [SMALL_STATE(74)] = 2381,
  [SMALL_STATE(75)] = 2401,
  [SMALL_STATE(76)] = 2431,
  [SMALL_STATE(77)] = 2451,
  [SMALL_STATE(78)] = 2471,
  [SMALL_STATE(79)] = 2491,
  [SMALL_STATE(80)] = 2511,
  [SMALL_STATE(81)] = 2531,
  [SMALL_STATE(82)] = 2551,
  [SMALL_STATE(83)] = 2571,
  [SMALL_STATE(84)] = 2591,
  [SMALL_STATE(85)] = 2621,
  [SMALL_STATE(86)] = 2651,
  [SMALL_STATE(87)] = 2671,
  [SMALL_STATE(88)] = 2691,
  [SMALL_STATE(89)] = 2711,
  [SMALL_STATE(90)] = 2731,
  [SMALL_STATE(91)] = 2751,
  [SMALL_STATE(92)] = 2771,
  [SMALL_STATE(93)] = 2791,
  [SMALL_STATE(94)] = 2811,
  [SMALL_STATE(95)] = 2841,
  [SMALL_STATE(96)] = 2871,
  [SMALL_STATE(97)] = 2901,
  [SMALL_STATE(98)] = 2921,
  [SMALL_STATE(99)] = 2951,
  [SMALL_STATE(100)] = 2971,
  [SMALL_STATE(101)] = 2991,
  [SMALL_STATE(102)] = 3011,
  [SMALL_STATE(103)] = 3031,
  [SMALL_STATE(104)] = 3051,
  [SMALL_STATE(105)] = 3071,
  [SMALL_STATE(106)] = 3091,
  [SMALL_STATE(107)] = 3111,
  [SMALL_STATE(108)] = 3131,
  [SMALL_STATE(109)] = 3163,
  [SMALL_STATE(110)] = 3195,
  [SMALL_STATE(111)] = 3227,
  [SMALL_STATE(112)] = 3259,
  [SMALL_STATE(113)] = 3291,
  [SMALL_STATE(114)] = 3323,
  [SMALL_STATE(115)] = 3355,
  [SMALL_STATE(116)] = 3387,
  [SMALL_STATE(117)] = 3419,
  [SMALL_STATE(118)] = 3451,
  [SMALL_STATE(119)] = 3483,
  [SMALL_STATE(120)] = 3515,
  [SMALL_STATE(121)] = 3547,
  [SMALL_STATE(122)] = 3576,
  [SMALL_STATE(123)] = 3605,
  [SMALL_STATE(124)] = 3634,
  [SMALL_STATE(125)] = 3663,
  [SMALL_STATE(126)] = 3692,
  [SMALL_STATE(127)] = 3721,
  [SMALL_STATE(128)] = 3750,
  [SMALL_STATE(129)] = 3768,
  [SMALL_STATE(130)] = 3786,
  [SMALL_STATE(131)] = 3804,
  [SMALL_STATE(132)] = 3825,
  [SMALL_STATE(133)] = 3856,
  [SMALL_STATE(134)] = 3879,
  [SMALL_STATE(135)] = 3900,
  [SMALL_STATE(136)] = 3921,
  [SMALL_STATE(137)] = 3944,
  [SMALL_STATE(138)] = 3960,
  [SMALL_STATE(139)] = 3980,
  [SMALL_STATE(140)] = 3996,
  [SMALL_STATE(141)] = 4016,
  [SMALL_STATE(142)] = 4036,
  [SMALL_STATE(143)] = 4052,
  [SMALL_STATE(144)] = 4073,
  [SMALL_STATE(145)] = 4094,
  [SMALL_STATE(146)] = 4109,
  [SMALL_STATE(147)] = 4126,
  [SMALL_STATE(148)] = 4149,
  [SMALL_STATE(149)] = 4170,
  [SMALL_STATE(150)] = 4184,
  [SMALL_STATE(151)] = 4202,
  [SMALL_STATE(152)] = 4216,
  [SMALL_STATE(153)] = 4234,
  [SMALL_STATE(154)] = 4248,
  [SMALL_STATE(155)] = 4262,
  [SMALL_STATE(156)] = 4280,
  [SMALL_STATE(157)] = 4298,
  [SMALL_STATE(158)] = 4316,
  [SMALL_STATE(159)] = 4330,
  [SMALL_STATE(160)] = 4344,
  [SMALL_STATE(161)] = 4362,
  [SMALL_STATE(162)] = 4376,
  [SMALL_STATE(163)] = 4394,
  [SMALL_STATE(164)] = 4405,
  [SMALL_STATE(165)] = 4422,
  [SMALL_STATE(166)] = 4439,
  [SMALL_STATE(167)] = 4456,
  [SMALL_STATE(168)] = 4473,
  [SMALL_STATE(169)] = 4490,
  [SMALL_STATE(170)] = 4507,
  [SMALL_STATE(171)] = 4518,
  [SMALL_STATE(172)] = 4535,
  [SMALL_STATE(173)] = 4552,
  [SMALL_STATE(174)] = 4569,
  [SMALL_STATE(175)] = 4586,
  [SMALL_STATE(176)] = 4603,
  [SMALL_STATE(177)] = 4620,
  [SMALL_STATE(178)] = 4637,
  [SMALL_STATE(179)] = 4654,
  [SMALL_STATE(180)] = 4669,
  [SMALL_STATE(181)] = 4686,
  [SMALL_STATE(182)] = 4697,
  [SMALL_STATE(183)] = 4711,
  [SMALL_STATE(184)] = 4727,
  [SMALL_STATE(185)] = 4743,
  [SMALL_STATE(186)] = 4757,
  [SMALL_STATE(187)] = 4771,
  [SMALL_STATE(188)] = 4785,
  [SMALL_STATE(189)] = 4797,
  [SMALL_STATE(190)] = 4813,
  [SMALL_STATE(191)] = 4825,
  [SMALL_STATE(192)] = 4841,
  [SMALL_STATE(193)] = 4857,
  [SMALL_STATE(194)] = 4873,
  [SMALL_STATE(195)] = 4889,
  [SMALL_STATE(196)] = 4905,
  [SMALL_STATE(197)] = 4921,
  [SMALL_STATE(198)] = 4937,
  [SMALL_STATE(199)] = 4953,
  [SMALL_STATE(200)] = 4969,
  [SMALL_STATE(201)] = 4983,
  [SMALL_STATE(202)] = 4999,
  [SMALL_STATE(203)] = 5015,
  [SMALL_STATE(204)] = 5029,
  [SMALL_STATE(205)] = 5039,
  [SMALL_STATE(206)] = 5053,
  [SMALL_STATE(207)] = 5065,
  [SMALL_STATE(208)] = 5077,
  [SMALL_STATE(209)] = 5088,
  [SMALL_STATE(210)] = 5101,
  [SMALL_STATE(211)] = 5112,
  [SMALL_STATE(212)] = 5125,
  [SMALL_STATE(213)] = 5136,
  [SMALL_STATE(214)] = 5149,
  [SMALL_STATE(215)] = 5160,
  [SMALL_STATE(216)] = 5171,
  [SMALL_STATE(217)] = 5182,
  [SMALL_STATE(218)] = 5193,
  [SMALL_STATE(219)] = 5206,
  [SMALL_STATE(220)] = 5219,
  [SMALL_STATE(221)] = 5232,
  [SMALL_STATE(222)] = 5243,
  [SMALL_STATE(223)] = 5254,
  [SMALL_STATE(224)] = 5265,
  [SMALL_STATE(225)] = 5276,
  [SMALL_STATE(226)] = 5289,
  [SMALL_STATE(227)] = 5302,
  [SMALL_STATE(228)] = 5313,
  [SMALL_STATE(229)] = 5324,
  [SMALL_STATE(230)] = 5335,
  [SMALL_STATE(231)] = 5346,
  [SMALL_STATE(232)] = 5357,
  [SMALL_STATE(233)] = 5368,
  [SMALL_STATE(234)] = 5379,
  [SMALL_STATE(235)] = 5390,
  [SMALL_STATE(236)] = 5401,
  [SMALL_STATE(237)] = 5414,
  [SMALL_STATE(238)] = 5425,
  [SMALL_STATE(239)] = 5438,
  [SMALL_STATE(240)] = 5451,
  [SMALL_STATE(241)] = 5462,
  [SMALL_STATE(242)] = 5473,
  [SMALL_STATE(243)] = 5486,
  [SMALL_STATE(244)] = 5497,
  [SMALL_STATE(245)] = 5508,
  [SMALL_STATE(246)] = 5521,
  [SMALL_STATE(247)] = 5534,
  [SMALL_STATE(248)] = 5545,
  [SMALL_STATE(249)] = 5556,
  [SMALL_STATE(250)] = 5567,
  [SMALL_STATE(251)] = 5580,
  [SMALL_STATE(252)] = 5593,
  [SMALL_STATE(253)] = 5606,
  [SMALL_STATE(254)] = 5616,
  [SMALL_STATE(255)] = 5624,
  [SMALL_STATE(256)] = 5632,
  [SMALL_STATE(257)] = 5640,
  [SMALL_STATE(258)] = 5650,
  [SMALL_STATE(259)] = 5660,
  [SMALL_STATE(260)] = 5668,
  [SMALL_STATE(261)] = 5678,
  [SMALL_STATE(262)] = 5686,
  [SMALL_STATE(263)] = 5696,
  [SMALL_STATE(264)] = 5706,
  [SMALL_STATE(265)] = 5716,
  [SMALL_STATE(266)] = 5726,
  [SMALL_STATE(267)] = 5736,
  [SMALL_STATE(268)] = 5746,
  [SMALL_STATE(269)] = 5754,
  [SMALL_STATE(270)] = 5762,
  [SMALL_STATE(271)] = 5770,
  [SMALL_STATE(272)] = 5778,
  [SMALL_STATE(273)] = 5786,
  [SMALL_STATE(274)] = 5796,
  [SMALL_STATE(275)] = 5806,
  [SMALL_STATE(276)] = 5813,
  [SMALL_STATE(277)] = 5820,
  [SMALL_STATE(278)] = 5827,
  [SMALL_STATE(279)] = 5834,
  [SMALL_STATE(280)] = 5841,
  [SMALL_STATE(281)] = 5848,
  [SMALL_STATE(282)] = 5855,
  [SMALL_STATE(283)] = 5862,
  [SMALL_STATE(284)] = 5869,
  [SMALL_STATE(285)] = 5876,
  [SMALL_STATE(286)] = 5883,
  [SMALL_STATE(287)] = 5890,
  [SMALL_STATE(288)] = 5897,
  [SMALL_STATE(289)] = 5904,
  [SMALL_STATE(290)] = 5911,
  [SMALL_STATE(291)] = 5918,
  [SMALL_STATE(292)] = 5925,
  [SMALL_STATE(293)] = 5932,
  [SMALL_STATE(294)] = 5939,
  [SMALL_STATE(295)] = 5946,
  [SMALL_STATE(296)] = 5953,
  [SMALL_STATE(297)] = 5960,
  [SMALL_STATE(298)] = 5967,
  [SMALL_STATE(299)] = 5974,
  [SMALL_STATE(300)] = 5981,
  [SMALL_STATE(301)] = 5988,
  [SMALL_STATE(302)] = 5995,
  [SMALL_STATE(303)] = 6002,
  [SMALL_STATE(304)] = 6009,
  [SMALL_STATE(305)] = 6016,
  [SMALL_STATE(306)] = 6023,
  [SMALL_STATE(307)] = 6030,
  [SMALL_STATE(308)] = 6037,
  [SMALL_STATE(309)] = 6044,
  [SMALL_STATE(310)] = 6051,
  [SMALL_STATE(311)] = 6058,
  [SMALL_STATE(312)] = 6065,
  [SMALL_STATE(313)] = 6072,
  [SMALL_STATE(314)] = 6079,
  [SMALL_STATE(315)] = 6086,
  [SMALL_STATE(316)] = 6093,
  [SMALL_STATE(317)] = 6100,
  [SMALL_STATE(318)] = 6107,
  [SMALL_STATE(319)] = 6114,
  [SMALL_STATE(320)] = 6121,
  [SMALL_STATE(321)] = 6128,
  [SMALL_STATE(322)] = 6135,
};

static TSParseActionEntry ts_parse_actions[] = {
  [0] = {.count = 0, .reusable = false},
  [1] = {.count = 1, .reusable = false}, RECOVER(),
  [3] = {.count = 1, .reusable = true}, SHIFT_EXTRA(),
  [5] = {.count = 1, .reusable = true}, REDUCE(sym_Program, 0),
  [7] = {.count = 1, .reusable = true}, SHIFT(180),
  [9] = {.count = 1, .reusable = true}, SHIFT(165),
  [11] = {.count = 1, .reusable = true}, SHIFT(322),
  [13] = {.count = 1, .reusable = true}, SHIFT(210),
  [15] = {.count = 1, .reusable = true}, SHIFT(214),
  [17] = {.count = 1, .reusable = true}, SHIFT(215),
  [19] = {.count = 1, .reusable = true}, SHIFT(216),
  [21] = {.count = 1, .reusable = true}, SHIFT(217),
  [23] = {.count = 1, .reusable = true}, SHIFT(221),
  [25] = {.count = 1, .reusable = true}, SHIFT(222),
  [27] = {.count = 1, .reusable = true}, SHIFT(223),
  [29] = {.count = 1, .reusable = true}, SHIFT(132),
  [31] = {.count = 1, .reusable = true}, SHIFT(149),
  [33] = {.count = 1, .reusable = true}, REDUCE(sym_Expression, 1),
  [35] = {.count = 1, .reusable = true}, SHIFT(128),
  [37] = {.count = 1, .reusable = true}, SHIFT(129),
  [39] = {.count = 1, .reusable = true}, SHIFT(130),
  [41] = {.count = 1, .reusable = true}, SHIFT(64),
  [43] = {.count = 1, .reusable = false}, SHIFT(64),
  [45] = {.count = 1, .reusable = true}, SHIFT(96),
  [47] = {.count = 1, .reusable = true}, SHIFT(70),
  [49] = {.count = 1, .reusable = true}, REDUCE(sym_BinaryExpression, 3, .production_id = 3),
  [51] = {.count = 1, .reusable = false}, REDUCE(sym_BinaryExpression, 3, .production_id = 3),
  [53] = {.count = 1, .reusable = true}, REDUCE(aux_sym_Program_repeat1, 2),
  [55] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Program_repeat1, 2), SHIFT_REPEAT(180),
  [58] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Program_repeat1, 2), SHIFT_REPEAT(165),
  [61] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Program_repeat1, 2), SHIFT_REPEAT(322),
  [64] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Program_repeat1, 2), SHIFT_REPEAT(210),
  [67] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Program_repeat1, 2), SHIFT_REPEAT(214),
  [70] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Program_repeat1, 2), SHIFT_REPEAT(215),
  [73] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Program_repeat1, 2), SHIFT_REPEAT(216),
  [76] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Program_repeat1, 2), SHIFT_REPEAT(217),
  [79] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Program_repeat1, 2), SHIFT_REPEAT(221),
  [82] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Program_repeat1, 2), SHIFT_REPEAT(222),
  [85] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Program_repeat1, 2), SHIFT_REPEAT(223),
  [88] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Program_repeat1, 2), SHIFT_REPEAT(132),
  [91] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Program_repeat1, 2), SHIFT_REPEAT(149),
  [94] = {.count = 1, .reusable = true}, REDUCE(sym_Program, 1),
  [96] = {.count = 1, .reusable = true}, REDUCE(sym_StringTemplateLiteral, 3),
  [98] = {.count = 1, .reusable = false}, REDUCE(sym_StringTemplateLiteral, 3),
  [100] = {.count = 1, .reusable = true}, REDUCE(sym_StringLiteral, 2),
  [102] = {.count = 1, .reusable = false}, REDUCE(sym_StringLiteral, 2),
  [104] = {.count = 1, .reusable = true}, REDUCE(sym_StringTemplateLiteral, 2),
  [106] = {.count = 1, .reusable = false}, REDUCE(sym_StringTemplateLiteral, 2),
  [108] = {.count = 1, .reusable = true}, REDUCE(sym_StringLiteral, 3),
  [110] = {.count = 1, .reusable = false}, REDUCE(sym_StringLiteral, 3),
  [112] = {.count = 1, .reusable = true}, REDUCE(aux_sym_TypeUnion_repeat1, 2),
  [114] = {.count = 1, .reusable = false}, REDUCE(aux_sym_TypeUnion_repeat1, 2),
  [116] = {.count = 2, .reusable = true}, REDUCE(aux_sym_TypeUnion_repeat1, 2), SHIFT_REPEAT(133),
  [119] = {.count = 1, .reusable = true}, REDUCE(sym_TypeUnion, 2),
  [121] = {.count = 1, .reusable = false}, REDUCE(sym_TypeUnion, 2),
  [123] = {.count = 1, .reusable = true}, SHIFT(133),
  [125] = {.count = 1, .reusable = true}, REDUCE(sym_Type, 1),
  [127] = {.count = 1, .reusable = false}, REDUCE(sym_Type, 1),
  [129] = {.count = 1, .reusable = false}, REDUCE(sym_Decorator, 2),
  [131] = {.count = 1, .reusable = false}, SHIFT(2),
  [133] = {.count = 1, .reusable = true}, REDUCE(sym_Decorator, 2),
  [135] = {.count = 1, .reusable = true}, SHIFT(199),
  [137] = {.count = 1, .reusable = true}, SHIFT(201),
  [139] = {.count = 1, .reusable = true}, SHIFT(157),
  [141] = {.count = 1, .reusable = true}, SHIFT(2),
  [143] = {.count = 1, .reusable = true}, REDUCE(sym_PredefinedType, 1),
  [145] = {.count = 1, .reusable = false}, REDUCE(sym_PredefinedType, 1),
  [147] = {.count = 1, .reusable = true}, REDUCE(sym_SingleType, 1),
  [149] = {.count = 1, .reusable = false}, REDUCE(sym_SingleType, 1),
  [151] = {.count = 1, .reusable = true}, REDUCE(sym_ImportFromStatement, 5),
  [153] = {.count = 1, .reusable = false}, REDUCE(sym_ImportFromStatement, 5),
  [155] = {.count = 1, .reusable = false}, SHIFT(44),
  [157] = {.count = 1, .reusable = true}, SHIFT(44),
  [159] = {.count = 1, .reusable = true}, SHIFT(62),
  [161] = {.count = 1, .reusable = false}, SHIFT(62),
  [163] = {.count = 1, .reusable = true}, SHIFT(95),
  [165] = {.count = 1, .reusable = true}, SHIFT(94),
  [167] = {.count = 1, .reusable = false}, REDUCE(sym_Expression, 1),
  [169] = {.count = 1, .reusable = true}, REDUCE(sym_ImportFromStatement, 6),
  [171] = {.count = 1, .reusable = false}, REDUCE(sym_ImportFromStatement, 6),
  [173] = {.count = 1, .reusable = true}, REDUCE(sym_ImportFromStatement, 7),
  [175] = {.count = 1, .reusable = false}, REDUCE(sym_ImportFromStatement, 7),
  [177] = {.count = 1, .reusable = true}, SHIFT(181),
  [179] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ImportFromStatement_repeat2, 2),
  [181] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ImportFromStatement_repeat2, 2), SHIFT_REPEAT(234),
  [184] = {.count = 1, .reusable = true}, SHIFT(207),
  [186] = {.count = 1, .reusable = true}, SHIFT(163),
  [188] = {.count = 1, .reusable = true}, REDUCE(sym_ImportFromStatement, 4),
  [190] = {.count = 1, .reusable = true}, SHIFT(22),
  [192] = {.count = 1, .reusable = true}, SHIFT(190),
  [194] = {.count = 1, .reusable = true}, SHIFT(29),
  [196] = {.count = 1, .reusable = true}, SHIFT(30),
  [198] = {.count = 1, .reusable = true}, SHIFT(28),
  [200] = {.count = 1, .reusable = false}, SHIFT(28),
  [202] = {.count = 1, .reusable = true}, SHIFT(191),
  [204] = {.count = 1, .reusable = true}, SHIFT(192),
  [206] = {.count = 1, .reusable = true}, SHIFT(150),
  [208] = {.count = 1, .reusable = true}, REDUCE(sym_FunctionDeclarationStatement, 5),
  [210] = {.count = 1, .reusable = true}, SHIFT(27),
  [212] = {.count = 1, .reusable = false}, SHIFT(27),
  [214] = {.count = 1, .reusable = true}, SHIFT(7),
  [216] = {.count = 1, .reusable = false}, SHIFT(7),
  [218] = {.count = 1, .reusable = true}, REDUCE(sym_ImportModuleStatement, 3),
  [220] = {.count = 1, .reusable = true}, REDUCE(sym_FunctionDeclarationStatement, 7),
  [222] = {.count = 1, .reusable = true}, REDUCE(sym_SymbolDeclarationStatement, 2),
  [224] = {.count = 1, .reusable = true}, SHIFT(5),
  [226] = {.count = 1, .reusable = false}, SHIFT(5),
  [228] = {.count = 1, .reusable = true}, REDUCE(sym_NodeDeclarationStatement, 6),
  [230] = {.count = 1, .reusable = true}, REDUCE(sym_RuleExpression, 3),
  [232] = {.count = 1, .reusable = true}, REDUCE(sym_FunctionDeclarationStatement, 6),
  [234] = {.count = 1, .reusable = true}, SHIFT(23),
  [236] = {.count = 1, .reusable = false}, SHIFT(23),
  [238] = {.count = 1, .reusable = true}, REDUCE(sym_Statement, 1),
  [240] = {.count = 1, .reusable = true}, REDUCE(sym_ImportModuleStatement, 2),
  [242] = {.count = 1, .reusable = true}, REDUCE(sym_TypeDeclarationStatement, 5),
  [244] = {.count = 1, .reusable = true}, REDUCE(sym_SymbolDeclarationStatement, 3),
  [246] = {.count = 1, .reusable = true}, REDUCE(sym_MorphismDeclarationStatement, 10),
  [248] = {.count = 1, .reusable = true}, REDUCE(sym_NodeDeclarationStatement, 10),
  [250] = {.count = 1, .reusable = true}, REDUCE(sym_RuleDeclarationStatement, 6),
  [252] = {.count = 1, .reusable = true}, REDUCE(sym_EnumDeclarationStatement, 6),
  [254] = {.count = 1, .reusable = true}, SHIFT(3),
  [256] = {.count = 1, .reusable = false}, SHIFT(3),
  [258] = {.count = 1, .reusable = true}, SHIFT(24),
  [260] = {.count = 1, .reusable = false}, SHIFT(24),
  [262] = {.count = 1, .reusable = true}, REDUCE(sym_ConstantDeclarationStatement, 5, .production_id = 2),
  [264] = {.count = 1, .reusable = true}, REDUCE(sym_ConstantDeclarationStatement, 6, .production_id = 2),
  [266] = {.count = 1, .reusable = true}, REDUCE(sym_MorphismDeclarationStatement, 9),
  [268] = {.count = 1, .reusable = true}, REDUCE(sym_NodeDeclarationStatement, 9),
  [270] = {.count = 1, .reusable = true}, REDUCE(sym_RuleExpression, 5),
  [272] = {.count = 1, .reusable = true}, REDUCE(sym_NodeDeclarationStatement, 5),
  [274] = {.count = 1, .reusable = true}, REDUCE(sym_RuleDeclarationStatement, 5),
  [276] = {.count = 1, .reusable = true}, REDUCE(sym_NodeDeclarationStatement, 4),
  [278] = {.count = 1, .reusable = true}, SHIFT(25),
  [280] = {.count = 1, .reusable = false}, SHIFT(25),
  [282] = {.count = 1, .reusable = true}, SHIFT(26),
  [284] = {.count = 1, .reusable = false}, SHIFT(26),
  [286] = {.count = 1, .reusable = true}, SHIFT(6),
  [288] = {.count = 1, .reusable = false}, SHIFT(6),
  [290] = {.count = 1, .reusable = true}, REDUCE(sym_NodeDeclarationStatement, 7),
  [292] = {.count = 1, .reusable = true}, SHIFT(4),
  [294] = {.count = 1, .reusable = false}, SHIFT(4),
  [296] = {.count = 1, .reusable = true}, REDUCE(sym_RuleDeclarationStatement, 7),
  [298] = {.count = 1, .reusable = true}, REDUCE(sym_EnumDeclarationStatement, 4),
  [300] = {.count = 1, .reusable = true}, REDUCE(sym_NodeDeclarationStatement, 8),
  [302] = {.count = 1, .reusable = true}, REDUCE(sym_ConstantDeclarationStatement, 4, .production_id = 1),
  [304] = {.count = 1, .reusable = true}, REDUCE(sym_TypeDeclarationStatement, 4),
  [306] = {.count = 1, .reusable = true}, REDUCE(sym_FunctionDeclarationStatement, 8),
  [308] = {.count = 1, .reusable = true}, REDUCE(sym_ConstantDeclarationStatement, 5, .production_id = 1),
  [310] = {.count = 1, .reusable = true}, REDUCE(sym_MorphismDeclarationStatement, 8),
  [312] = {.count = 1, .reusable = true}, REDUCE(sym_EnumDeclarationStatement, 5),
  [314] = {.count = 1, .reusable = true}, SHIFT(97),
  [316] = {.count = 1, .reusable = false}, SHIFT(249),
  [318] = {.count = 1, .reusable = false}, SHIFT(205),
  [320] = {.count = 1, .reusable = true}, SHIFT(205),
  [322] = {.count = 1, .reusable = true}, SHIFT(179),
  [324] = {.count = 1, .reusable = true}, REDUCE(aux_sym_NodeDeclarationStatement_repeat2, 2),
  [326] = {.count = 2, .reusable = false}, REDUCE(aux_sym_NodeDeclarationStatement_repeat2, 2), SHIFT_REPEAT(249),
  [329] = {.count = 2, .reusable = false}, REDUCE(aux_sym_NodeDeclarationStatement_repeat2, 2), SHIFT_REPEAT(205),
  [332] = {.count = 2, .reusable = true}, REDUCE(aux_sym_NodeDeclarationStatement_repeat2, 2), SHIFT_REPEAT(205),
  [335] = {.count = 2, .reusable = true}, REDUCE(aux_sym_NodeDeclarationStatement_repeat2, 2), SHIFT_REPEAT(179),
  [338] = {.count = 1, .reusable = true}, SHIFT(101),
  [340] = {.count = 1, .reusable = true}, SHIFT(93),
  [342] = {.count = 1, .reusable = true}, SHIFT(71),
  [344] = {.count = 1, .reusable = true}, SHIFT(89),
  [346] = {.count = 1, .reusable = true}, SHIFT(91),
  [348] = {.count = 1, .reusable = true}, SHIFT(81),
  [350] = {.count = 1, .reusable = false}, SHIFT(19),
  [352] = {.count = 1, .reusable = false}, SHIFT(20),
  [354] = {.count = 1, .reusable = true}, SHIFT(20),
  [356] = {.count = 1, .reusable = false}, SHIFT(142),
  [358] = {.count = 1, .reusable = false}, SHIFT(137),
  [360] = {.count = 1, .reusable = true}, SHIFT(137),
  [362] = {.count = 1, .reusable = true}, REDUCE(sym_BitwiseOrOperator, 1),
  [364] = {.count = 1, .reusable = false}, REDUCE(sym_BitwiseOrOperator, 1),
  [366] = {.count = 1, .reusable = true}, REDUCE(sym_PlusOperator, 1),
  [368] = {.count = 1, .reusable = false}, REDUCE(sym_PlusOperator, 1),
  [370] = {.count = 1, .reusable = true}, REDUCE(sym_MinusOperator, 1),
  [372] = {.count = 1, .reusable = false}, REDUCE(sym_MinusOperator, 1),
  [374] = {.count = 1, .reusable = true}, SHIFT(136),
  [376] = {.count = 1, .reusable = true}, SHIFT(304),
  [378] = {.count = 1, .reusable = true}, SHIFT(224),
  [380] = {.count = 1, .reusable = true}, SHIFT(227),
  [382] = {.count = 1, .reusable = true}, SHIFT(228),
  [384] = {.count = 1, .reusable = true}, SHIFT(229),
  [386] = {.count = 1, .reusable = true}, SHIFT(231),
  [388] = {.count = 1, .reusable = true}, SHIFT(233),
  [390] = {.count = 1, .reusable = true}, SHIFT(235),
  [392] = {.count = 1, .reusable = true}, SHIFT(237),
  [394] = {.count = 2, .reusable = true}, REDUCE(aux_sym_TypeUnion_repeat1, 2), SHIFT_REPEAT(136),
  [397] = {.count = 1, .reusable = true}, REDUCE(sym_NodeEdgeDeclaration, 4),
  [399] = {.count = 1, .reusable = true}, SHIFT(51),
  [401] = {.count = 1, .reusable = false}, REDUCE(sym_NodeEdgeDeclaration, 4),
  [403] = {.count = 1, .reusable = true}, REDUCE(sym_NodeEdgeDeclaration, 3),
  [405] = {.count = 1, .reusable = false}, REDUCE(sym_NodeEdgeDeclaration, 3),
  [407] = {.count = 1, .reusable = true}, REDUCE(sym_NodeEdgeDeclaration, 5),
  [409] = {.count = 1, .reusable = false}, REDUCE(sym_NodeEdgeDeclaration, 5),
  [411] = {.count = 1, .reusable = false}, SHIFT(243),
  [413] = {.count = 1, .reusable = false}, SHIFT(290),
  [415] = {.count = 1, .reusable = true}, SHIFT(290),
  [417] = {.count = 1, .reusable = true}, REDUCE(aux_sym_NodeDeclarationStatement_repeat1, 2),
  [419] = {.count = 2, .reusable = true}, REDUCE(aux_sym_NodeDeclarationStatement_repeat1, 2), SHIFT_REPEAT(149),
  [422] = {.count = 1, .reusable = true}, SHIFT(238),
  [424] = {.count = 1, .reusable = true}, REDUCE(sym_Decorator, 1),
  [426] = {.count = 1, .reusable = true}, SHIFT(18),
  [428] = {.count = 1, .reusable = true}, SHIFT(155),
  [430] = {.count = 1, .reusable = true}, SHIFT(63),
  [432] = {.count = 1, .reusable = true}, SHIFT(59),
  [434] = {.count = 1, .reusable = true}, REDUCE(sym_NodeEdgeInitializer, 2),
  [436] = {.count = 1, .reusable = false}, REDUCE(sym_NodeEdgeInitializer, 2),
  [438] = {.count = 2, .reusable = true}, REDUCE(aux_sym_StringTemplateLiteral_repeat1, 2), SHIFT_REPEAT(152),
  [441] = {.count = 1, .reusable = true}, REDUCE(aux_sym_StringTemplateLiteral_repeat1, 2),
  [443] = {.count = 2, .reusable = true}, REDUCE(aux_sym_StringTemplateLiteral_repeat1, 2), SHIFT_REPEAT(59),
  [446] = {.count = 1, .reusable = true}, REDUCE(sym_NodeDeclarationMember, 1),
  [448] = {.count = 1, .reusable = false}, REDUCE(sym_NodeDeclarationMember, 1),
  [450] = {.count = 1, .reusable = true}, SHIFT(152),
  [452] = {.count = 1, .reusable = true}, SHIFT(73),
  [454] = {.count = 1, .reusable = false}, REDUCE(aux_sym_NodeDeclarationStatement_repeat1, 2),
  [456] = {.count = 2, .reusable = true}, REDUCE(aux_sym_NodeDeclarationStatement_repeat1, 2), SHIFT_REPEAT(179),
  [459] = {.count = 1, .reusable = true}, SHIFT(160),
  [461] = {.count = 1, .reusable = true}, SHIFT(12),
  [463] = {.count = 1, .reusable = true}, REDUCE(sym_NodeEdgeDeclaration, 6),
  [465] = {.count = 1, .reusable = false}, REDUCE(sym_NodeEdgeDeclaration, 6),
  [467] = {.count = 1, .reusable = true}, SHIFT(10),
  [469] = {.count = 1, .reusable = true}, REDUCE(sym_NodeStaticConstantDeclaration, 4),
  [471] = {.count = 1, .reusable = false}, REDUCE(sym_NodeStaticConstantDeclaration, 4),
  [473] = {.count = 1, .reusable = true}, SHIFT(185),
  [475] = {.count = 1, .reusable = false}, SHIFT(185),
  [477] = {.count = 1, .reusable = true}, REDUCE(sym_Decorator, 6),
  [479] = {.count = 1, .reusable = true}, REDUCE(aux_sym_EnumDeclarationStatement_repeat1, 2),
  [481] = {.count = 2, .reusable = true}, REDUCE(aux_sym_EnumDeclarationStatement_repeat1, 2), SHIFT_REPEAT(164),
  [484] = {.count = 2, .reusable = false}, REDUCE(aux_sym_EnumDeclarationStatement_repeat1, 2), SHIFT_REPEAT(164),
  [487] = {.count = 1, .reusable = true}, SHIFT(169),
  [489] = {.count = 1, .reusable = true}, SHIFT(77),
  [491] = {.count = 1, .reusable = false}, SHIFT(77),
  [493] = {.count = 1, .reusable = true}, SHIFT(320),
  [495] = {.count = 1, .reusable = true}, SHIFT(203),
  [497] = {.count = 1, .reusable = false}, SHIFT(203),
  [499] = {.count = 1, .reusable = true}, SHIFT(107),
  [501] = {.count = 1, .reusable = true}, SHIFT(164),
  [503] = {.count = 1, .reusable = false}, SHIFT(164),
  [505] = {.count = 2, .reusable = true}, REDUCE(aux_sym_ImportFromStatement_repeat1, 2), SHIFT_REPEAT(168),
  [508] = {.count = 1, .reusable = true}, REDUCE(aux_sym_ImportFromStatement_repeat1, 2),
  [510] = {.count = 1, .reusable = false}, REDUCE(aux_sym_ImportFromStatement_repeat1, 2),
  [512] = {.count = 1, .reusable = true}, SHIFT(168),
  [514] = {.count = 1, .reusable = true}, SHIFT(65),
  [516] = {.count = 1, .reusable = false}, SHIFT(65),
  [518] = {.count = 1, .reusable = true}, REDUCE(sym_Decorator, 4),
  [520] = {.count = 1, .reusable = true}, SHIFT(100),
  [522] = {.count = 1, .reusable = true}, SHIFT(167),
  [524] = {.count = 1, .reusable = false}, SHIFT(167),
  [526] = {.count = 1, .reusable = true}, SHIFT(268),
  [528] = {.count = 1, .reusable = true}, SHIFT(186),
  [530] = {.count = 1, .reusable = false}, SHIFT(186),
  [532] = {.count = 1, .reusable = true}, SHIFT(83),
  [534] = {.count = 1, .reusable = true}, SHIFT(271),
  [536] = {.count = 1, .reusable = true}, SHIFT(294),
  [538] = {.count = 1, .reusable = false}, SHIFT(294),
  [540] = {.count = 1, .reusable = true}, SHIFT(254),
  [542] = {.count = 1, .reusable = true}, SHIFT(173),
  [544] = {.count = 1, .reusable = false}, SHIFT(173),
  [546] = {.count = 1, .reusable = true}, SHIFT(278),
  [548] = {.count = 1, .reusable = true}, SHIFT(35),
  [550] = {.count = 1, .reusable = false}, REDUCE(sym_Decorator, 1),
  [552] = {.count = 1, .reusable = true}, SHIFT(175),
  [554] = {.count = 1, .reusable = true}, SHIFT(311),
  [556] = {.count = 1, .reusable = false}, SHIFT(311),
  [558] = {.count = 1, .reusable = true}, REDUCE(sym_Decorator, 5),
  [560] = {.count = 1, .reusable = false}, SHIFT(13),
  [562] = {.count = 1, .reusable = true}, SHIFT(195),
  [564] = {.count = 1, .reusable = false}, SHIFT(195),
  [566] = {.count = 1, .reusable = false}, SHIFT_EXTRA(),
  [568] = {.count = 1, .reusable = false}, REDUCE(aux_sym_StringLiteral_repeat2, 2),
  [570] = {.count = 2, .reusable = true}, REDUCE(aux_sym_StringLiteral_repeat2, 2), SHIFT_REPEAT(184),
  [573] = {.count = 2, .reusable = false}, REDUCE(aux_sym_StringLiteral_repeat2, 2), SHIFT_REPEAT(184),
  [576] = {.count = 1, .reusable = true}, SHIFT(127),
  [578] = {.count = 1, .reusable = true}, SHIFT(295),
  [580] = {.count = 1, .reusable = true}, REDUCE(sym_FunctionParameter, 1),
  [582] = {.count = 1, .reusable = true}, SHIFT(123),
  [584] = {.count = 1, .reusable = true}, REDUCE(sym_TypeAnnotation, 2),
  [586] = {.count = 1, .reusable = false}, REDUCE(sym_TypeAnnotation, 2),
  [588] = {.count = 1, .reusable = true}, SHIFT(174),
  [590] = {.count = 1, .reusable = true}, SHIFT(200),
  [592] = {.count = 1, .reusable = false}, REDUCE(sym_Decorator, 6),
  [594] = {.count = 1, .reusable = false}, SHIFT(66),
  [596] = {.count = 1, .reusable = true}, SHIFT(197),
  [598] = {.count = 1, .reusable = false}, SHIFT(197),
  [600] = {.count = 1, .reusable = true}, SHIFT(198),
  [602] = {.count = 1, .reusable = false}, SHIFT(198),
  [604] = {.count = 1, .reusable = false}, REDUCE(aux_sym_StringLiteral_repeat1, 2),
  [606] = {.count = 2, .reusable = true}, REDUCE(aux_sym_StringLiteral_repeat1, 2), SHIFT_REPEAT(195),
  [609] = {.count = 2, .reusable = false}, REDUCE(aux_sym_StringLiteral_repeat1, 2), SHIFT_REPEAT(195),
  [612] = {.count = 1, .reusable = true}, SHIFT(184),
  [614] = {.count = 1, .reusable = false}, SHIFT(184),
  [616] = {.count = 1, .reusable = false}, SHIFT(67),
  [618] = {.count = 1, .reusable = false}, SHIFT(11),
  [620] = {.count = 1, .reusable = true}, SHIFT(183),
  [622] = {.count = 1, .reusable = false}, SHIFT(183),
  [624] = {.count = 1, .reusable = true}, SHIFT(196),
  [626] = {.count = 1, .reusable = false}, SHIFT(196),
  [628] = {.count = 1, .reusable = true}, REDUCE(sym_TypeParameter, 1),
  [630] = {.count = 1, .reusable = true}, SHIFT(125),
  [632] = {.count = 1, .reusable = true}, REDUCE(sym_TemplateSubstitution, 3),
  [634] = {.count = 1, .reusable = true}, SHIFT(126),
  [636] = {.count = 1, .reusable = false}, REDUCE(sym_Decorator, 4),
  [638] = {.count = 1, .reusable = false}, REDUCE(sym_Decorator, 5),
  [640] = {.count = 1, .reusable = true}, SHIFT(39),
  [642] = {.count = 1, .reusable = false}, SHIFT(39),
  [644] = {.count = 1, .reusable = true}, SHIFT(34),
  [646] = {.count = 1, .reusable = true}, SHIFT(265),
  [648] = {.count = 1, .reusable = false}, SHIFT(265),
  [650] = {.count = 1, .reusable = true}, SHIFT(37),
  [652] = {.count = 1, .reusable = true}, SHIFT(260),
  [654] = {.count = 1, .reusable = false}, SHIFT(260),
  [656] = {.count = 2, .reusable = true}, REDUCE(aux_sym_FunctionSignature_repeat1, 2), SHIFT_REPEAT(182),
  [659] = {.count = 1, .reusable = true}, REDUCE(aux_sym_FunctionSignature_repeat1, 2),
  [661] = {.count = 1, .reusable = true}, SHIFT(308),
  [663] = {.count = 1, .reusable = false}, SHIFT(308),
  [665] = {.count = 1, .reusable = true}, SHIFT(69),
  [667] = {.count = 1, .reusable = false}, SHIFT(69),
  [669] = {.count = 1, .reusable = true}, SHIFT(307),
  [671] = {.count = 1, .reusable = false}, SHIFT(307),
  [673] = {.count = 1, .reusable = true}, SHIFT(225),
  [675] = {.count = 1, .reusable = false}, SHIFT(225),
  [677] = {.count = 2, .reusable = true}, REDUCE(aux_sym_TypeParameters_repeat1, 2), SHIFT_REPEAT(187),
  [680] = {.count = 1, .reusable = true}, REDUCE(aux_sym_TypeParameters_repeat1, 2),
  [682] = {.count = 2, .reusable = true}, REDUCE(aux_sym_Decorator_repeat1, 2), SHIFT_REPEAT(49),
  [685] = {.count = 1, .reusable = true}, REDUCE(aux_sym_Decorator_repeat1, 2),
  [687] = {.count = 1, .reusable = true}, SHIFT(33),
  [689] = {.count = 1, .reusable = true}, SHIFT(206),
  [691] = {.count = 1, .reusable = true}, SHIFT(202),
  [693] = {.count = 1, .reusable = false}, SHIFT(202),
  [695] = {.count = 1, .reusable = true}, SHIFT(193),
  [697] = {.count = 1, .reusable = false}, SHIFT(193),
  [699] = {.count = 1, .reusable = true}, SHIFT(305),
  [701] = {.count = 1, .reusable = false}, SHIFT(305),
  [703] = {.count = 1, .reusable = true}, SHIFT(253),
  [705] = {.count = 1, .reusable = false}, SHIFT(253),
  [707] = {.count = 1, .reusable = true}, SHIFT(53),
  [709] = {.count = 1, .reusable = true}, SHIFT(46),
  [711] = {.count = 1, .reusable = true}, SHIFT(286),
  [713] = {.count = 1, .reusable = false}, SHIFT(286),
  [715] = {.count = 1, .reusable = true}, SHIFT(79),
  [717] = {.count = 1, .reusable = false}, SHIFT(79),
  [719] = {.count = 1, .reusable = true}, SHIFT(285),
  [721] = {.count = 1, .reusable = false}, SHIFT(285),
  [723] = {.count = 1, .reusable = true}, SHIFT(314),
  [725] = {.count = 1, .reusable = false}, SHIFT(314),
  [727] = {.count = 1, .reusable = true}, SHIFT(245),
  [729] = {.count = 1, .reusable = false}, SHIFT(245),
  [731] = {.count = 1, .reusable = true}, SHIFT(321),
  [733] = {.count = 1, .reusable = false}, SHIFT(321),
  [735] = {.count = 1, .reusable = true}, SHIFT(189),
  [737] = {.count = 1, .reusable = false}, SHIFT(189),
  [739] = {.count = 1, .reusable = true}, SHIFT(194),
  [741] = {.count = 1, .reusable = false}, SHIFT(194),
  [743] = {.count = 1, .reusable = true}, SHIFT(178),
  [745] = {.count = 1, .reusable = true}, SHIFT(283),
  [747] = {.count = 1, .reusable = false}, SHIFT(283),
  [749] = {.count = 1, .reusable = true}, SHIFT(280),
  [751] = {.count = 1, .reusable = true}, SHIFT(244),
  [753] = {.count = 1, .reusable = true}, SHIFT(247),
  [755] = {.count = 1, .reusable = true}, SHIFT(176),
  [757] = {.count = 1, .reusable = true}, SHIFT(36),
  [759] = {.count = 1, .reusable = false}, SHIFT(36),
  [761] = {.count = 1, .reusable = true}, SHIFT(298),
  [763] = {.count = 1, .reusable = false}, SHIFT(298),
  [765] = {.count = 1, .reusable = true}, SHIFT(57),
  [767] = {.count = 1, .reusable = true}, SHIFT(316),
  [769] = {.count = 1, .reusable = false}, SHIFT(316),
  [771] = {.count = 1, .reusable = true}, SHIFT(262),
  [773] = {.count = 1, .reusable = false}, SHIFT(262),
  [775] = {.count = 1, .reusable = true}, SHIFT(58),
  [777] = {.count = 1, .reusable = true}, SHIFT(31),
  [779] = {.count = 1, .reusable = true}, SHIFT(170),
  [781] = {.count = 1, .reusable = true}, SHIFT(289),
  [783] = {.count = 1, .reusable = false}, SHIFT(289),
  [785] = {.count = 1, .reusable = true}, SHIFT(297),
  [787] = {.count = 1, .reusable = false}, SHIFT(297),
  [789] = {.count = 1, .reusable = true}, SHIFT(275),
  [791] = {.count = 1, .reusable = false}, SHIFT(275),
  [793] = {.count = 1, .reusable = true}, SHIFT(172),
  [795] = {.count = 1, .reusable = true}, SHIFT(270),
  [797] = {.count = 1, .reusable = true}, SHIFT(166),
  [799] = {.count = 1, .reusable = true}, SHIFT(276),
  [801] = {.count = 1, .reusable = true}, SHIFT(50),
  [803] = {.count = 1, .reusable = true}, SHIFT(248),
  [805] = {.count = 1, .reusable = true}, SHIFT(119),
  [807] = {.count = 1, .reusable = true}, REDUCE(sym_FunctionSignature, 5),
  [809] = {.count = 1, .reusable = true}, REDUCE(sym_TypeParameterConstraint, 2),
  [811] = {.count = 1, .reusable = true}, SHIFT(232),
  [813] = {.count = 1, .reusable = true}, SHIFT(108),
  [815] = {.count = 1, .reusable = true}, SHIFT(230),
  [817] = {.count = 1, .reusable = true}, SHIFT(112),
  [819] = {.count = 1, .reusable = true}, SHIFT(72),
  [821] = {.count = 1, .reusable = true}, SHIFT(52),
  [823] = {.count = 1, .reusable = true}, SHIFT(48),
  [825] = {.count = 1, .reusable = true}, SHIFT(241),
  [827] = {.count = 1, .reusable = true}, SHIFT(111),
  [829] = {.count = 1, .reusable = true}, REDUCE(sym_FunctionSignature, 4),
  [831] = {.count = 1, .reusable = true}, REDUCE(sym_TypeParameter, 2),
  [833] = {.count = 1, .reusable = true}, REDUCE(sym_FunctionSignature, 3),
  [835] = {.count = 1, .reusable = true}, REDUCE(sym_FunctionSignature, 2),
  [837] = {.count = 1, .reusable = true}, REDUCE(sym_FunctionParameter, 2),
  [839] = {.count = 1, .reusable = true}, SHIFT(43),
  [841] = {.count = 1, .reusable = true}, REDUCE(sym_TypeParameters, 3),
  [843] = {.count = 1, .reusable = true}, REDUCE(sym_MorphismMutationDeclaration, 3),
  [845] = {.count = 1, .reusable = true}, REDUCE(sym_TypeParameters, 5),
  [847] = {.count = 1, .reusable = true}, SHIFT(212),
  [849] = {.count = 1, .reusable = true}, SHIFT(80),
  [851] = {.count = 1, .reusable = true}, REDUCE(sym_MorphismCreationDeclaration, 4),
  [853] = {.count = 1, .reusable = true}, SHIFT(121),
  [855] = {.count = 1, .reusable = true}, REDUCE(sym_MorphismDeclarationMember, 1),
  [857] = {.count = 1, .reusable = true}, SHIFT(177),
  [859] = {.count = 1, .reusable = true}, SHIFT(42),
  [861] = {.count = 1, .reusable = true}, SHIFT(106),
  [863] = {.count = 1, .reusable = true}, SHIFT(264),
  [865] = {.count = 1, .reusable = true}, SHIFT(45),
  [867] = {.count = 1, .reusable = true}, SHIFT(41),
  [869] = {.count = 1, .reusable = true}, SHIFT(56),
  [871] = {.count = 1, .reusable = true}, SHIFT(143),
  [873] = {.count = 1, .reusable = true}, SHIFT(124),
  [875] = {.count = 1, .reusable = true}, SHIFT(208),
  [877] = {.count = 1, .reusable = true}, REDUCE(sym_NodeEdgeModifier, 1),
  [879] = {.count = 1, .reusable = true}, SHIFT(292),
  [881] = {.count = 1, .reusable = true}, SHIFT(319),
  [883] = {.count = 1, .reusable = true}, SHIFT(88),
  [885] = {.count = 1, .reusable = true}, SHIFT(313),
  [887] = {.count = 1, .reusable = true}, SHIFT(90),
  [889] = {.count = 1, .reusable = true}, SHIFT(122),
  [891] = {.count = 1, .reusable = true}, SHIFT(55),
  [893] = {.count = 1, .reusable = true}, SHIFT(171),
  [895] = {.count = 1, .reusable = true}, SHIFT(60),
  [897] = {.count = 1, .reusable = true}, SHIFT(266),
  [899] = {.count = 1, .reusable = true}, SHIFT(240),
  [901] = {.count = 1, .reusable = true},  ACCEPT_INPUT(),
  [903] = {.count = 1, .reusable = true}, SHIFT(144),
  [905] = {.count = 1, .reusable = true}, SHIFT(110),
  [907] = {.count = 1, .reusable = true}, SHIFT(204),
  [909] = {.count = 1, .reusable = true}, SHIFT(54),
  [911] = {.count = 1, .reusable = true}, SHIFT(267),
  [913] = {.count = 1, .reusable = true}, SHIFT(47),
  [915] = {.count = 1, .reusable = true}, SHIFT(148),
  [917] = {.count = 1, .reusable = true}, REDUCE(sym_TypeParameters, 4),
  [919] = {.count = 1, .reusable = true}, SHIFT(116),
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
    .field_names = ts_field_names,
    .field_map_slices = (const TSFieldMapSlice *)ts_field_map_slices,
    .field_map_entries = (const TSFieldMapEntry *)ts_field_map_entries,
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
