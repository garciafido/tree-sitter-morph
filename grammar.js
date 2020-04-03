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
  callable: 210,

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
    // [$.ChainedNamedLambdaCallOrEdgeAccess_expression, $.Expression],
    // [$.RelationalExpression, $.ChainedNamedLambdaCallOrEdgeAccess_expression],
  ]),

  // conflicts: $ => [
  // ],

  supertypes: $ => [
  ],

  inline: $ => [
    // $.keyword_identifier,
  ],

  // word: $ => $.keywords,

  rules: {

    Module: $ => repeat(alias($.Statements, $.statements__list)),

    // keyword_identifier: $ => /[a-zA-Z_@][a-zA-Z0-9_]*/,

    // *****************
    // ** Statements **
    // *****************

    Statements: $ => choice(
      $.ImportStatement,
      $.NodeTypeDeclarationStatement,
      $.MorphismDeclarationStatement,
      $.SymbolDeclarationStatement,
      $.EnumDeclarationStatement,
      $.NamedLambdaDeclarationStatement,
      $.TypeDeclarationStatement,
    ),

    ImportStatement: $ => choice(
      $.ImportModuleStatement,
      $.ImportFromStatement,
    ),

    ImportModuleStatement: $ => seq(
      "import",
      optional(alias($.Path, $.path)),
      alias($.Identifier, $.from),
    ),

    Path: $ => /[.]+_?/,

    ImportFromStatement: $ => seq(
      "from",
      optional(alias($.Path, $.path)),
      alias($.Identifier, $.module),
      "import",
      commaSeparated(alias($.Identifier, $.items__list)),
    ),

    NodeTypeDeclarationStatementMembers: $ => $.NodeEdgeDeclaration,

    NodeTypeDeclarationStatement: $ => seq(
      repeat(alias($.Decorator, $.decorators__list)),
      optional(alias($.ModuleLevelAccessibilityModifier, $.accessibility)),
      optional(alias("abstract", $.abstract)),
      "node",
      alias($.Identifier, $.name),
      optional(seq("extends", alias($.Identifier, $.extends))),
      "{", repeat(alias($.NodeTypeDeclarationStatementMembers, $.members__list)), "}",
    ),

    Decorator: $ => prec.left(seq(
      alias($.DecoratorIdentifier, $.identifier),
      optional(seq("(", commaSeparated(alias($.Expression, $.parameters__list)), ")")),
      ),
    ),

    NodeEdgeDeclaration: $ => seq(
      repeat(alias($.Decorator, $.decorators__list)),
      alias($.Identifier, $.name),
      optional(alias($.NodeEdgeModifier, $.modifier)),
      "->",
      alias($.Type, $.type),
      optional(alias($.NodeEdgeInitializer, $.initializer)),
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

    MorphismDeclarationStatementMember: $ => choice(
      $.MorphismMutationDeclaration,
      $.MorphismCreationDeclaration,
    ),

    MorphismDeclarationStatement: $ => seq(
      repeat(alias($.Decorator, $.decorators__list)),
      optional(alias($.ModuleLevelAccessibilityModifier, $.accessibility)),
      "morph",
      alias($.Identifier, $.name),
      "mutates",
      alias($.Identifier, $.mutates),
      optional(seq(
        "(",
        "if",
        "->",
        alias($.Expression, $.filter),
        ")"
      )),
      "{",
      repeat(alias($.MorphismDeclarationStatementMember, $.members__list)),
      "}",
    ),

    MorphismMutationDeclaration: $ => seq(
      alias($.Identifier, $.name),
      "->",
      alias($.Expression, $.expression),
    ),

    MorphismCreationDeclaration: $ => seq(
      "new",
      alias($.Identifier, $.name),
      "->",
      alias($.Expression, $.expression),
    ),

    SymbolDeclarationStatement: $ => seq(
      optional(alias($.ModuleLevelAccessibilityModifier, $.accessibility)),
      "symbol",
      alias($.Identifier, $.name),
    ),

    EnumDeclarationStatement: $ => seq(
      optional(alias($.ModuleLevelAccessibilityModifier, $.accessibility)),
      "enum",
      alias($.Identifier, $.name),
      "{",
      repeat(alias($.Identifier, $.values__list)),
      "}",
    ),

    AssignmentSign: $ => "=",

    TypeAnnotation: $ => seq(
      ":", $.Type,
    ),

    NamedLambdaDeclarationStatement: $ => seq(
      optional(alias($.ModuleLevelAccessibilityModifier, $.accessibility)),
      "lambda",
      alias($.Identifier, $.name),
      optional(alias($.TypeParameters, $.type_parameters)),
      "(",
      commaSeparated(alias($.NamedLambdaParameter, $.parameters__list)),
      ")",
      optional(alias($.TypeAnnotation, $.type)),
      "=>",
      alias($.Expression, $.expression),
    ),

    NamedLambdaParameter: $ => seq(
      alias($.Identifier, $.name), alias($.TypeAnnotation, $.type),
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

    TypeUnion: $ => seq(
      alias($.SingleType, $.types__list), repeat(seq("|", alias($.SingleType, $.types__list))),
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

    TypeDeclarationStatement: $ => seq(
      optional(alias($.ModuleLevelAccessibilityModifier, $.accessibility)),
      "type",
      alias($.Identifier, $.name),
      "=",
      alias($.Type, $.value),
    ),

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

//---------  KKkkkkkkkk  ----------------------------------------------------------------->>>>>------------->>>>> Por aquí
    Negation: $ => seq(
      "not",
      alias($.Expression, $.expression),
    ),

    Disjunction: $ => "or",
    Conjunction: $ => "and",

    BooleanExpression: $ => choice(
      prec.left(PREC.and, seq(
        alias($.Expression, $.left),
        $.Conjunction,
        alias($.Expression, $.right),
      )),
      prec.left(PREC.or, seq(
        alias($.Expression, $.left),
        $.Disjunction,
        alias($.Expression, $.right),
      ))
    ),

    PrimaryExpression: $ => prec.left(choice(
      $.BinaryExpression,
      $.Identifier,
      $.Literal,
      $.UnaryFactor,
      $.List,
      $.Node,
      $.Lambda,
      $.ParenthesizedExpression,
      $.NamedLambdaCallOrEdgeAccess,
      $.ChainedNamedLambdaCallOrEdgeAccess,
    )),

    BinaryExpression: $ => choice(
      $.Addition,
      $.Subtraction,
      $.Multiplication,
      $.Division,
      $.Modulus,
      $.BitwiseDisjunction,
      $.BitwiseConjunction,
      $.ExclusiveDisjunction,
    ),

    Addition: $ => prec.left(PREC.plus, seq(
      alias($.PrimaryExpression, $.left),
      "+",
      alias($.PrimaryExpression, $.right),
    )),

    Subtraction: $ => prec.left(PREC.plus, seq(
      alias($.PrimaryExpression, $.left),
      "-",
      alias($.PrimaryExpression, $.right),
    )),

    Multiplication: $ => prec.left(PREC.times, seq(
      alias($.PrimaryExpression, $.left),
      "*",
      alias($.PrimaryExpression, $.right),
    )),

    Division: $ => prec.left(PREC.times, seq(
      alias($.PrimaryExpression, $.left),
      "/",
      alias($.PrimaryExpression, $.right),
    )),

    Modulus: $ => prec.left(PREC.times, seq(
      alias($.PrimaryExpression, $.left),
      "%",
      alias($.PrimaryExpression, $.right),
    )),

    BitwiseDisjunction: $ => prec.left(PREC.bitwise_or, seq(
      alias($.PrimaryExpression, $.left),
      "|",
      alias($.PrimaryExpression, $.right),
    )),

    BitwiseConjunction: $ => prec.left(PREC.bitwise_and, seq(
      alias($.PrimaryExpression, $.left),
      "&",
      alias($.PrimaryExpression, $.right),
    )),

    ExclusiveDisjunction: $ => prec.left(PREC.xor, seq(
      alias($.PrimaryExpression, $.left),
      "^",
      alias($.PrimaryExpression, $.right),
    )),

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

    NamedLambdaCallOrEdgeAccess: $ => {
      return seq(
        alias($.CallableExpression, $.expression),
        optional(alias($.RuleParameters, $.rule_parameters)),
        choice(
          seq("(", commaSeparated(alias($.Expression, $.function_call_parameters__list)), ")"),
          seq("[", commaSeparated1(alias($.Expression, $.edge_access_parameters__list)), "]"),
        ),
      )
    },

    CallableName: $ => prec(PREC.callable, $.Identifier),

    CallableExpression: $ => prec.left(PREC.callable, choice(
      $.CallableName,
      $.NamedLambdaCallOrEdgeAccess,
      $.ParenthesizedExpression,
    )),

    Message: $ => $.Expression,

    Rule: $ => $.Expression,

    RuleExpression: $ => seq(
      $.Rule, optional(seq(":", $.Message)),
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

    // Lambda_parameters__list: $ => prec(PREC.lambda, $.Identifier),
    Lambda: $ => prec(PREC.lambda, seq(
      "lambda",
      "(",
      commaSeparated(alias($.Identifier, $.parameters__list)),
      ")",
      optional(alias($.TypeAnnotation, $.return_type)),
      "=>",
      alias($.Expression, $.expression),
    )),

    ChainedNamedLambdaCallOrEdgeAccess: $ => prec(PREC.call, seq(
      alias($.PrimaryExpression, $.expression),
      choice(
        seq(
          ".",
          alias($.Identifier, $.function_call_identifier),
          optional(alias($.RuleParameters, $.rule_parameters)),
          "(",
          commaSeparated(alias($.Expression, $.function_call_parameters__list)),
          ")",
        ),
        seq(
          "[",
          commaSeparated1(alias($.Expression, $.edge_access_parameters__list)),
          "]",
        ),
      ),
    )),

    List: $ => prec(PREC.call, seq(
      "[", alias($.Expression, $.elements__list), "]",
    )),

    Node: $ => seq(
      alias($.Identifier, $.type),
      optional(seq("as", alias($.Identifier, $.alias))),
      "{",
      repeat(alias($.NodeEdge, $.edges__list)),
      "}",
    ),

    NodeEdge: $ => seq(
      alias($.Identifier, $.name), "->", alias($.Expression, $.value),
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

function commaSeparated (rule) {
  return optional(commaSeparated1(rule));
}

function commaSeparated1 (rule) {
  return commaSep1(rule)
}

function commaSep1 (rule) {
  return seq(rule, repeat(seq(",", rule)))
}
