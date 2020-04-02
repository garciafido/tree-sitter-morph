const PREC = {
  COMMENT: 1, // Prefer comments over regexes
  STRING: 2,  // In a string, prefer string characters over comments

  // this resolves a conflict between the usage of ':' in a lambda vs in a
  // typed parameter. In the case of a lambda, we don't allow typed parameters.
  lambda: -20,
  typed_parameter: -10,
  conditional: -10,

  parenthesized_expression: 10,
  not: 10,
  compare: 20,
  or: 100,
  and: 110,
  bitwise_or: 120,
  bitwise_and: 130,
  xor: 140,
  shift: 150,
  plus: 160,
  times: 170,
  unary: 180,
  power: 190,
  call: 200,

  primary: 210,

  morph_decorator: 1,
  node_decorator: 2,

};

module.exports = grammar({
  name: 'morph',

  externals: $ => [
    $._automatic_semicolon,
    $._template_chars
  ],

  extras: $ => [
    $.Comment,
    /[\s\uFEFF\u2060\u200B\u00A0]/
  ],

  conflicts: ($, previous) => previous.concat([
  ]),

  supertypes: $ => [
  ],

  inline: $ => [
  ],

  rules: {

    Module: $ => repeat($.Module_statements__list),

    // *****************
    // ** Statements **
    // *****************

    Module_statements__list: $ => choice(
      $.ImportStatement,
      $.NodeTypeDeclarationStatement,
      $.MorphismDeclarationStatement,
      $.SymbolDeclarationStatement,
      $.EnumDeclarationStatement,
      $.ConstantDeclarationStatement,
      $.FunctionDeclarationStatement,
      $.RuleDeclarationStatement,
      $.TypeDeclarationStatement,
    ),

    ImportStatement: $ => choice(
      $.ImportFromStatement,
      $.ImportModuleStatement,
    ),

    ImportFromStatement_path: $ => /[.]+_?/,
    ImportFromStatement_module: $ => $.Identifier,
    ImportFromStatement_items: $ => seq(
      $.Identifier,
      repeat(seq(",", $.Identifier)),
      optional(","),
    ),

    ImportFromStatement: $ => seq(
      "from",
      optional($.ImportFromStatement_path),
      $.ImportFromStatement_module,
      "import",
      $.ImportFromStatement_items,
    ),

    ImportModuleStatement_path: $ => /[.]+_?/,
    ImportModuleStatement_from: $ => $.Identifier,
    ImportModuleStatement: $ => seq(
      "import", optional($.ImportModuleStatement_path), $.ImportModuleStatement_from,
    ),

    NodeTypeDeclarationStatement_decorators__list: $ => prec(PREC.node_decorator, $.Decorator),
    NodeTypeDeclarationStatement_accessibility: $ => $.ModuleLevelAccessibilityModifier,
    NodeTypeDeclarationStatement_abstract: $ => "abstract",
    NodeTypeDeclarationStatement_name: $ => $.Identifier,
    NodeTypeDeclarationStatement_extends: $ => $.Extends,
    NodeTypeDeclarationStatement_members__list: $ => choice(
        $.NodeEdgeDeclaration,
        $.NodeStaticConstantDeclaration,
    ),

    NodeTypeDeclarationStatement: $ => seq(
      repeat($.NodeTypeDeclarationStatement_decorators__list),
      optional($.NodeTypeDeclarationStatement_accessibility),
      optional($.NodeTypeDeclarationStatement_abstract),
      "node",
      $.NodeTypeDeclarationStatement_name,
      optional($.NodeTypeDeclarationStatement_extends),
      "{", repeat($.NodeTypeDeclarationStatement_members__list), "}",
    ),

    Extends: $ => seq(
      "extends", $.Identifier
    ),

    Decorator_identifier: $ => $.DecoratorIdentifier,
    Decorator_parameters__list: $ => $.Expression,
    Decorator: $ => prec.left(seq(
      $.Decorator_identifier,
      optional(seq(
        "(",
          optional(seq(
            $.Decorator_parameters__list,
            repeat(seq(",", $.Decorator_parameters__list)),
            optional(","))),
        ")"))
      ),
    ),

    NodeEdgeDeclaration_name: $ => $.Identifier,
    NodeEdgeDeclaration_type: $ => $.Type,
    NodeEdgeDeclaration_decorators__list: $ => $.Decorator,
    NodeEdgeDeclaration_modifier: $ => $.NodeEdgeModifier,
    NodeEdgeDeclaration_initializer: $ => $.NodeEdgeInitializer,
    NodeEdgeDeclaration: $ => seq(
      repeat($.NodeEdgeDeclaration_decorators__list),
      $.NodeEdgeDeclaration_name,
      optional($.NodeEdgeDeclaration_modifier),
      "->",
      $.NodeEdgeDeclaration_type,
      optional($.NodeEdgeDeclaration_initializer),
    ),

    NodeEdgeModifier: $ => choice(
      $.NodeEdgeRequiredModifier,
      $.NodeEdgeArrayModifier,
    ),

    NodeEdgeRequiredModifier: $ => "!",

    NodeEdgeArrayModifier: $ => "[]",

    InitializerExpression: $ => $.Expression,

    NodeEdgeInitializer: $ => seq(
      "=", $.InitializerExpression,
    ),

    NodeStaticName: $ => $.Identifier,

    NodeStaticExpression: $ => $.Expression,

    NodeStaticConstantDeclaration: $ => seq(
      "static", $.NodeStaticName, "=", $.NodeStaticExpression,
    ),

    MorphismDeclarationStatement_decorators__list: $ => prec(PREC.morph_decorator, $.Decorator),
    MorphismDeclarationStatement_accessibility: $ => $.ModuleLevelAccessibilityModifier,
    MorphismDeclarationStatement_name: $ => $.Identifier,
    MorphismDeclarationStatement_source: $ => $.Expression,
    MorphismDeclarationStatement_members__list: $ => choice(
      $.MorphismMutationDeclaration,
      $.MorphismCreationDeclaration,
    ),

    MorphismDeclarationStatement: $ => seq(
      repeat($.MorphismDeclarationStatement_decorators__list),
      optional($.MorphismDeclarationStatement_accessibility),
      "morph",
      $.MorphismDeclarationStatement_name,
      "(",
      $.MorphismDeclarationStatement_source,
      ")",
      "{",
      repeat($.MorphismDeclarationStatement_members__list),
      "}",
    ),

    MorphismMutationDeclaration_name: $ => $.Identifier,
    MorphismMutationDeclaration_expression: $ => $.Expression,
    MorphismMutationDeclaration: $ => seq(
      $.MorphismMutationDeclaration_name,
      "->",
      $.MorphismMutationDeclaration_expression,
    ),

    MorphismCreationDeclaration_name: $ => $.Identifier,
    MorphismCreationDeclaration_expression: $ => $.Expression,
    MorphismCreationDeclaration: $ => seq(
      "new", $.MorphismCreationDeclaration_name, "->", $.MorphismCreationDeclaration_expression,
    ),

    SymbolDeclarationStatement_name: $ => $.Identifier,
    SymbolDeclarationStatement_accessibility: $ => $.ModuleLevelAccessibilityModifier,
    SymbolDeclarationStatement: $ => seq(
      optional($.SymbolDeclarationStatement_accessibility), "symbol", $.SymbolDeclarationStatement_name,
    ),

    EnumDeclarationStatement_name: $ => $.Identifier,
    EnumDeclarationStatement_values__list: $ => $.Identifier,
    EnumDeclarationStatement_accessibility: $ => $.ModuleLevelAccessibilityModifier,
    EnumDeclarationStatement: $ => seq(
      optional($.EnumDeclarationStatement_accessibility), "enum", $.EnumDeclarationStatement_name, "{", repeat($.EnumDeclarationStatement_values__list), "}",
    ),

    AssignmentSign: $ => "=",

    ConstantDeclarationStatement_name: $ => $.Identifier,
    ConstantDeclarationStatement_value: $ => $.Expression,
    ConstantDeclarationStatement_type: $ => $.TypeAnnotation,
    ConstantDeclarationStatement_accessibility: $ => $.ModuleLevelAccessibilityModifier,
    ConstantDeclarationStatement: $ => seq(
      optional($.ConstantDeclarationStatement_accessibility),
      "const",
      $.ConstantDeclarationStatement_name,
      optional($.ConstantDeclarationStatement_type),
      $.AssignmentSign,
      $.ConstantDeclarationStatement_value,
    ),

    TypeAnnotation: $ => seq(
      ":", $.Type,
    ),

    FunctionDeclarationStatement_name: $ => $.Identifier,
    FunctionDeclarationStatement_expression: $ => $.Expression,
    FunctionDeclarationStatement_accessibility: $ => $.ModuleLevelAccessibilityModifier,
    FunctionDeclarationStatement_type: $ => $.TypeAnnotation,
    FunctionDeclarationStatement_parameters__list: $ => $.FunctionParameter,
    FunctionDeclarationStatement_type_parameters: $ => $.TypeParameters,
    FunctionDeclarationStatement: $ => seq(
      optional($.FunctionDeclarationStatement_accessibility),
      "func",
      $.FunctionDeclarationStatement_name,
      optional($.FunctionDeclarationStatement_type_parameters),
      "(", optional(seq($.FunctionDeclarationStatement_parameters__list, repeat(seq(",", $.FunctionDeclarationStatement_parameters__list)), optional(","))), ")",
      optional($.FunctionDeclarationStatement_type),
      "=>",
      $.FunctionDeclarationStatement_expression,
    ),

    FunctionParameter_name: $ => $.Identifier,
    FunctionParameter_type: $ => $.TypeAnnotation,
    FunctionParameter: $ => seq(
      $.FunctionParameter_name, $.FunctionParameter_type,
    ),

    TypeParameters: $ => seq(
      "<", $.TypeParameter, repeat(seq(",", $.TypeParameter)), optional(","), ">",
    ),

    TypeParameterName: $ => $.Identifier,

    TypeParameter: $ => seq(
      $.TypeParameterName, optional($.TypeParameterConstraint),
    ),

    TypeParameterConstraint: $ => seq(
      "extends", $.Type,
    ),

    Type: $ => $.TypeUnion,

    TypeUnion_types__list: $ => $.SingleType,
    TypeUnion: $ => seq(
      $.TypeUnion_types__list, repeat(seq("|", $.TypeUnion_types__list)),
    ),

    TypeIdentifier: $ => $.Identifier,

    SingleType: $ => choice(
      $.TypeIdentifier,
      $.PredefinedType,
    ),

    PredefinedType: $ => choice(
      $.StringType,
      $.BooleanType,
      $.IntegerType,
      $.FloatType,
    ),

    StringType: $ => "string",

    BooleanType: $ => "boolean",

    IntegerType: $ => "integer",

    FloatType: $ => "float",

    RuleName: $ => $.Identifier,

    RuleDeclarationStatement_accessibility: $ => $.ModuleLevelAccessibilityModifier,
    RuleDeclarationStatement_parameters__list: $ => $.FunctionParameter,
    RuleDeclarationStatement: $ => seq(
      optional($.RuleDeclarationStatement_accessibility),
      "rule",
      $.RuleName,
      optional($.TypeParameters),
      "(", optional(seq($.RuleDeclarationStatement_parameters__list, repeat(seq(",", $.RuleDeclarationStatement_parameters__list)), optional(","))), ")",
      "=>",
      $.RuleExpression,
    ),

    Rule: $ => $.Expression,

    Message: $ => $.Expression,

    RuleExpression: $ => seq(
      $.Rule, optional(seq(":", $.Message)),
    ),

    TypeDeclarationStatement_accessibility: $ => $.ModuleLevelAccessibilityModifier,
    TypeDeclarationStatement_name: $ => $.TypeIdentifier,
    TypeDeclarationStatement_value: $ => $.Type,
    TypeDeclarationStatement: $ => seq(
      optional($.TypeDeclarationStatement_accessibility), "type", $.TypeDeclarationStatement_name, "=", $.TypeDeclarationStatement_value),

    ModuleLevelAccessibilityModifier: $ => choice(
      $.Public,
      $.Private,
      $.Protected,
    ),

    Public: $ => "public",

    Private: $ => "private",

    Protected: $ => "protected",

    // *****************
    // ** Expressions **
    // *****************

    Expression: $ => choice(
      $.RelationalExpression,
      $.Negation,
      $.BooleanExpression,
      $.PrimaryExpression,
      $.AnonymousFunction,
    ),

    EqualTo: $ => "==",
    NotEqualTo: $ => "!=",
    LessThan: $ => "<",
    LessThanEqualTo: $ => "<=",
    GraterThan: $ => ">",
    GreaterThanEqualTo: $ => ">=",
    Is: $ => "is",
    IsNot: $ => seq("is", "not"),

    RelationalExpression: $ => prec.left(PREC.compare, seq(
      $.PrimaryExpression,
      repeat1(seq(
        choice(
          $.EqualTo,
          $.NotEqualTo,
          $.LessThan,
          $.LessThanEqualTo,
          $.GraterThan,
          $.GreaterThanEqualTo,
          $.Is,
          $.IsNot,
        ),
        $.PrimaryExpression
      ))
    )),

    Negation_expression: $ => prec(PREC.not, $.Expression),
    Negation: $ => seq(
      "not",
      $.Negation_expression,
    ),

    Disjunction: $ => "or",
    Conjunction: $ => "and",

    BooleanConjunctionExpression_left: $ => prec.left(PREC.and+1, $.Expression),
    BooleanConjunctionExpression_right: $ => prec.left(PREC.and, $.Expression),
    BooleanDisjunctionExpression_left: $ => prec.left(PREC.or+1, $.Expression),
    BooleanDisjunctionExpression_right: $ => prec.left(PREC.or, $.Expression),

    BooleanExpression: $ => choice(
      prec.left(PREC.and, seq(
        $.BooleanConjunctionExpression_left,
        $.Conjunction,
        $.BooleanConjunctionExpression_right,
      )),
      prec.left(PREC.or, seq(
        $.BooleanDisjunctionExpression_left,
        $.Disjunction,
        $.BooleanDisjunctionExpression_right,
      ))
    ),

    PrimaryExpression: $ => prec(PREC.primary, choice(
      $.BinaryExpression,
      $.Identifier,
      $.Literal,
      $.UnaryFactor,
      $.List,
      $.Node,
      $.FunctionCallOrEdgeAccess,
      $.ChainedFunctionCallOrEdgeAccess,
      $.ParenthesizedExpression,
    )),


    Addition_left: $ => prec(PREC.plus+1, $.PrimaryExpression),
    Addition_right: $ => prec(PREC.plus, $.PrimaryExpression),
    Addition: $ => seq(
      $.Addition_left,
      "+",
      $.Addition_right,
    ),

    Subtraction_left: $ => prec(PREC.plus+1, $.PrimaryExpression),
    Subtraction_right: $ => prec(PREC.plus, $.PrimaryExpression),
    Subtraction: $ => seq(
      $.Subtraction_left,
      "-",
      $.Subtraction_right,
    ),

    Multiplication_left: $ => prec(PREC.times+1, $.PrimaryExpression),
    Multiplication_right: $ => prec(PREC.times, $.PrimaryExpression),
    Multiplication: $ => seq(
      $.Multiplication_left,
      "*",
      $.Multiplication_right,
    ),

    Division_left: $ => prec(PREC.times+1, $.PrimaryExpression),
    Division_right: $ => prec(PREC.times,$.PrimaryExpression),
    Division: $ => seq(
      $.Division_left,
      "/",
      $.Division_right,
    ),

    Modulus_left: $ => prec(PREC.times+1, $.PrimaryExpression),
    Modulus_right: $ => prec(PREC.times, $.PrimaryExpression),
    Modulus: $ => seq(
      $.Modulus_left,
      "%",
      $.Modulus_right,
    ),

    BitwiseDisjunction_left: $ => prec(PREC.bitwise_or+1, $.PrimaryExpression),
    BitwiseDisjunction_right: $ => prec(PREC.bitwise_or, $.PrimaryExpression),
    BitwiseDisjunction: $ => prec.left(seq(
      $.BitwiseDisjunction_left,
      "|",
      $.BitwiseDisjunction_right,
    )),

    BitwiseConjunction_left: $ => prec(PREC.times+1, $.PrimaryExpression),
    BitwiseConjunction_right: $ => prec(PREC.times, $.PrimaryExpression),
    BitwiseConjunction: $ => prec.left(seq(
      $.BitwiseConjunction_left,
      "&",
      $.BitwiseConjunction_right,
    )),

    ExclusiveDisjunction_left: $ => prec(PREC.times+1, $.PrimaryExpression),
    ExclusiveDisjunction_right: $ => prec(PREC.times, $.PrimaryExpression),
    ExclusiveDisjunction: $ => seq(
      $.ExclusiveDisjunction_left,
      "^",
      $.ExclusiveDisjunction_right,
    ),

    BinaryExpression: $ => choice(
      prec.left(PREC.plus, $.Addition),
      prec.left(PREC.plus, $.Subtraction),
      prec.left(PREC.times, $.Multiplication),
      prec.left(PREC.times, $.Division),
      prec.left(PREC.times, $.Modulus),
      prec.left(PREC.bitwise_or, $.BitwiseDisjunction),
      prec.left(PREC.bitwise_and, $.BitwiseConjunction),
      prec.left(PREC.xor, $.ExclusiveDisjunction),
    ),

    ParenthesizedExpression: $ => prec(PREC.parenthesized_expression, seq(
      "(",
      $.Expression,
      ")"
    )),

    PositiveSign: $ => "+",
    NegativeSign: $ => "-",

    UnaryFactor: $ => choice(
      $.PositiveFactor,
      $.NegativeFactor,
    ),

    PositiveFactor: $ => prec.left(PREC.unary, seq(
      $.PositiveSign,
      $.PrimaryExpression,
    )),

    NegativeFactor: $ => prec.left(PREC.unary, seq(
      $.NegativeSign,
      $.PrimaryExpression,
    )),

    Identifier: $ => choice(
      $.CamelIdentifier,
      $.SnakeIdentifier,
      $.PascalIdentifier,
    ),

    CamelIdentifier: $ => /[a-z][a-zA-Z0-9_]*/,

    SnakeIdentifier: $ => /[a-z_][a-z0-9_]*/,

    PascalIdentifier: $ => /[A-Z][a-zA-Z0-9_]*/,

    DecoratorIdentifier: $ => /[@][A-Za-z_][a-zA-Z0-9_]*/,

    FunctionCallOrEdgeAccess_expression: $ =>  $.CallableExpression,
    FunctionCallOrEdgeAccess_rule_parameters: $ => $.RuleParameters,
    FunctionCallOrEdgeAccess_function_call_parameters__list: $ => $.Expression,
    FunctionCallOrEdgeAccess_edge_access_parameters__list: $ => $.Expression,
    FunctionCallOrEdgeAccess: $ => {
      return seq(
        $.FunctionCallOrEdgeAccess_expression,
        optional($.FunctionCallOrEdgeAccess_rule_parameters),
        choice(
          seq("(", getCommaSeparatedList($.FunctionCallOrEdgeAccess_function_call_parameters__list), ")"),
          seq("[", getCommaSeparatedList($.FunctionCallOrEdgeAccess_edge_access_parameters__list, true), "]"),
        ),
      )
    },

    CallableName: $ => $.Identifier,

    CallableExpression: $ => choice(
      $.CallableName,
      $.FunctionCallOrEdgeAccess,
      $.ParenthesizedExpression,
    ),

    RuleParameters: $ => prec(PREC.call, seq(
      "<", $.RuleExpression, repeat(seq(",", $.RuleExpression)), optional(","), ">",
    )),

    //  This expression has no parameters allowed in its factors and the expression must yield a string
    // ListIndexAccess EdgeAccessParameter
    AccessExpression: $ => $.Expression,

    ListIndexAccess_EdgeAccessParameter: $ => seq(
      "[", $.AccessExpression, "]"
    ),

    AnonymousFunction_expression: $ => $.Expression,
    AnonymousFunction_return_type: $ => $.TypeAnnotation,
    AnonymousFunction_parameters__list: $ => $.Identifier,
    AnonymousFunction: $ => seq(
      "(", optional(seq($.AnonymousFunction_parameters__list, repeat(seq(",", $.AnonymousFunction_parameters__list)), optional(","))), ")",
      optional($.AnonymousFunction_return_type),
      "=>",
      $.AnonymousFunction_expression,
    ),

    ChainedFunctionCallOrEdgeAccess_expression: $ => $.PrimaryExpression,
    ChainedFunctionCallOrEdgeAccess_function_call_identifier: $ => $.Identifier,
    ChainedFunctionCallOrEdgeAccess_function_call_parameters__list: $ => $.Expression,
    ChainedFunctionCallOrEdgeAccess_edge_access_parameters__list: $ => $.Expression,
    ChainedFunctionCallOrEdgeAccess_rule_parameters: $ => $.RuleParameters,
    ChainedFunctionCallOrEdgeAccess: $ => prec(PREC.call, seq(
      $.ChainedFunctionCallOrEdgeAccess_expression,
      choice(
        seq(
          ".",
          $.ChainedFunctionCallOrEdgeAccess_function_call_identifier,
          optional($.ChainedFunctionCallOrEdgeAccess_rule_parameters),
          "(",
          getCommaSeparatedList($.ChainedFunctionCallOrEdgeAccess_function_call_parameters__list),
          ")",
        ),
        seq(
          "[",
          getCommaSeparatedList($.ChainedFunctionCallOrEdgeAccess_edge_access_parameters__list, true),
          "]",
        ),
      ),
    )),

    List_elements__list: $ => $.Expression,
    List: $ => prec(PREC.call, seq(
      "[", $.List_elements__list, "]",
    )),

    Node_type: $ => $.Identifier,
    Node_alias: $ => $.Identifier,
    Node_edges__list: $ => $.NodeEdge,
    Node: $ => seq(
      $.Node_type, optional(seq("as", $.Node_alias)), "{", repeat($.Node_edges__list), "}",
    ),

    NodeEdge_name: $ => $.Identifier,
    NodeEdge_value: $ => $.Expression,
    NodeEdge: $ => seq(
      $.NodeEdge_name, "->", $.NodeEdge_value,
    ),

    Literal: $ => choice(
      $.StringLiteral,
      $.StringTemplateLiteral,
      $.BooleanLiteral,
      $.NumberLiteral,
    ),

    BooleanLiteral: $ => choice(
      $.FalseLiteral,
      $.TrueLiteral,
    ),

    FalseLiteral: $ => "False",

    TrueLiteral: $ => "True",

    NumberLiteral: $ => choice(
      $.IntegerLiteral,
      $.FloatLiteral,
    ),

    StringLiteral: $ => choice(
      seq(
        '"',
        repeat(choice(
          token.immediate(prec(PREC.STRING, /[^"\\\n]+|\\\r?\n/)),
          $.EscapeSequence
        )),
        '"'
      ),
      seq(
        "'",
        repeat(choice(
          token.immediate(prec(PREC.STRING, /[^'\\\n]+|\\\r?\n/)),
          $.EscapeSequence
        )),
        "'"
      )),

    EscapeSequence: $ => token.immediate(seq(
      '\\',
      choice(
        /[^xu0-7]/,
        /[0-7]{1,3}/,
        /x[0-9a-fA-F]{2}/,
        /u[0-9a-fA-F]{4}/,
        /u{[0-9a-fA-F]+}/
      ))),

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    Comment: $ => prec(PREC.COMMENT, choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      ))),

    StringTemplateLiteral: $ => seq(
      '`',
      repeat(choice(
        $._template_chars,
        $.EscapeSequence,
        $.TemplateSubstitution,
      )),
      '`'
    ),

    TemplateSubstitution: $ => seq(
      '${',
      $.Expression,
      '}'
    ),

    IntegerLiteral: $ => token(choice(
      seq(
        choice('0x', '0X'),
        repeat1(/_?[A-Fa-f0-9]+/),
        optional(/[Ll]/)
      ),
      seq(
        choice('0o', '0O'),
        repeat1(/_?[0-7]+/),
        optional(/[Ll]/)
      ),
      seq(
        choice('0b', '0B'),
        repeat1(/_?[0-1]+/),
        optional(/[Ll]/)
      ),
      seq(
        repeat1(/[0-9]+_?/),
        choice(
          optional(/[Ll]/), // long numbers
          optional(/[jJ]/) // complex numbers
        )
      ))),

    FloatLiteral: $ => {
      const digits = repeat1(/[0-9]+_?/);
      const exponent = seq(/[eE][\+-]?/, digits);

      return token(seq(
        choice(
          seq(digits, '.', optional(digits), optional(exponent)),
          seq(optional(digits), '.', digits, optional(exponent)),
          seq(digits, exponent)
        ),
        optional(choice(/[Ll]/, /[jJ]/))
      ))
    },
  }
});

function getCommaSeparatedList(parametersRule, oneOrMore= false) {
  const list =
    prec.left(seq(
      parametersRule,
      repeat(seq(",", parametersRule)),
      optional(",")
    ));
  return oneOrMore ? list : optional(list);
}
