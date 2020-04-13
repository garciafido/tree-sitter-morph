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
  alias: 175,
  unary: 180,
  power: 190,
  call: 200,

  callable: 210,
  primary: 220,

  tuple_expression_field: 1,
  expression_field: 1,
  identifier_field: 2,

  token: 1000,

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

  // conflicts: ($, previous) => previous.concat([
  // ]),

  conflicts: $ => [
    [$.FieldForIdentifier, $.FieldForTypeParameter],
    [$.AnonymousFunction, $.Tuple],
    [$.FieldForPath, $.FieldForIdentifier],
    [$.In, $.NotIn],
    [$.Is, $.IsNot],
  ],

  inline: $ => [
  ],

  word: $ => $.Identifier,

  rules: {

    Module: $ => repeat(alias($.Declaration, $.declarations__list)),
    // ******************
    // ** Declarations **
    // ******************

    Declaration: $ => choice(
      $.ImportDeclaration,
      $.NodeTypeDeclaration,
      $.MorphismDeclaration,
      $.SymbolDeclaration,
      $.EnumDeclaration,
      $.NamedFunctionDeclaration,
      $.TypeDeclaration,
    ),

    ImportDeclaration: $ => choice(
      $.ImportModuleDeclaration,
      $.ImportFromDeclaration,
    ),

    ImportModuleDeclaration: $ => seq(
      "import",
      optional(alias($.FieldForPath, $.path)),
      alias($.FieldForIdentifier, $.from),
    ),

    Path: $ => token(repeat1(".")),

    ImportFromDeclaration: $ => prec.left(seq(
      "from",
      optional(alias($.FieldForPath, $.path)),
      alias($.FieldForIdentifier, $.module),
      "import",
      seq(alias($.FieldForIdentifier, $.items__list), repeat(seq(",", alias($.FieldForIdentifier, $.items__list)))),
    )),

    NodeTypeDeclarationMembers: $ => $.NodeEdgeTypeDeclaration,

    NodeTypeDeclaration: $ => seq(
      repeat(alias($.Decorator, $.decorators__list)),
      optional(alias($.ModuleLevelAccessibilityModifier, $.accessibility)),
      optional(alias("abstract", $.abstract)),
      choice("class", alias("proxy", $.proxy)),
      alias($.FieldForIdentifier, $.identifier),
      optional(alias($.FieldForNodeTypeParameters, $.type_parameters)),
      optional(seq("extends", alias($.FieldForIdentifier, $.extends))),
      "{", repeat(alias($.NodeTypeDeclarationMembers, $.members__list)), "}",
    ),

    Decorator: $ => prec.left(seq(
      alias($.DecoIdent, $.identifier),
      optional(seq("(", commaSeparated(alias($.FieldForExpression, $.parameters__list)), ")")),
      ),
    ),

    DecoIdent: $ => $.DecoratorIdentifier,

    NodeEdgeTypeDeclaration: $ => seq(
      repeat(alias($.Decorator, $.decorators__list)),
      alias($.FieldForIdentifier, $.identifier),
      optional(alias($.NodeEdgeModifier, $.modifier)),
      ":",
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

    MorphismDeclarationMember: $ => choice(
      $.MorphismMutationDeclaration,
      $.MorphismCreationDeclaration,
    ),

    MorphismDeclaration: $ => seq(
      repeat(alias($.Decorator, $.decorators__list)),
      optional(alias($.ModuleLevelAccessibilityModifier, $.accessibility)),
      "morph",
      alias($.FieldForIdentifier, $.identifier),
      "mutates",
      alias($.FieldForIdentifier, $.mutates),
      optional(seq(
        "if",
        "(",
        alias($.FieldForExpression, $.filter),
        ")"
      )),
      "{",
      repeat(alias($.MorphismDeclarationMember, $.members__list)),
      "}",
    ),

    MorphismMutationDeclaration: $ => seq(
      alias($.FieldForIdentifier, $.identifier),
      ":",
      alias($.FieldForExpression, $.expression),
    ),

    MorphismCreationDeclaration: $ => seq(
      "new",
      alias($.FieldForIdentifier, $.identifier),
      ":",
      alias($.FieldForExpression, $.expression),
    ),

    SymbolDeclaration: $ => seq(
      optional(alias($.ModuleLevelAccessibilityModifier, $.accessibility)),
      "symbol",
      alias($.FieldForIdentifier, $.identifier),
    ),

    EnumDeclaration: $ => seq(
      optional(alias($.ModuleLevelAccessibilityModifier, $.accessibility)),
      "enum",
      alias($.FieldForIdentifier, $.name),
      "{",
      repeat(alias($.FieldForIdentifier, $.values__list)),
      "}",
    ),

    AssignmentSign: $ => "=",

    TypeAnnotation: $ => seq(
      ":", $.Type,
    ),

    NamedFunctionDeclaration: $ => seq(
      optional(alias($.ModuleLevelAccessibilityModifier, $.accessibility)),
      "function",
      alias($.FieldForIdentifier, $.identifier),
      optional(alias($.FieldForTypeParameters, $.type_parameters)),
      "(",
      optional(seq(
        alias($.FieldForExpression, $.parameters__list),
        choice(
          ",",
          repeat(seq(",", alias($.FieldForExpression, $.parameters__list))),
        ),
      )),
      ")",
      optional(alias($.FieldForReturnType, $.return_type)),
      "=>",
      seq(alias($.FieldForExpression, $.expression)),
    ),

    TypeParameters: $ => seq(
      "<",
      alias($.FieldForTypeParameter, $.type_parameters__list),
      repeat(seq(",", alias($.FieldForTypeParameter, $.type_parameters__list))),
      optional(","), ">",
    ),

    TypeParameter: $ => seq(
      alias($.FieldForIdentifier, $.name),
      optional(alias($.TypeParameterConstraint, $.constraint)),
    ),

    NodeTypeParameters: $ => seq(
      "<",
      alias($.FieldForNodeTypeParameter, $.type_parameters__list),
      repeat(seq(",", alias($.FieldForNodeTypeParameter, $.type_parameters__list))),
      optional(","), ">",
    ),

    NodeTypeParameter: $ => seq(
      alias($.FieldForIdentifier, $.name),
      optional(alias($.TypeParameterConstraint, $.constraint)),
    ),

    TypeParameterConstraint: $ => seq(
      "extends", $.Type,
    ),

    Type: $ => $.TypeUnion,

    TypeUnion: $ => prec.left(seq(
      alias($.SingleType, $.types__list), repeat(seq("|", alias($.SingleType, $.types__list))),
    )),

    TypeIdentifier: $ => seq(
      alias($.Identifier, $.identifier),
      optional(seq(
        "<",
        alias($.Type, $.parameters__list),
        repeat(seq(",", alias($.Type, $.parameters__list))),
        optional(","),
        ">",
      )),

    ),

    SingleType: $ => choice(
      $.TypeIdentifier,
      $.PredefinedType,
      $.ParameterizedFunctionType,
    ),

    ParameterizedFunctionType: $ => seq(
      "(",
      optional(seq(
        alias($.Type, $.parameters__list),
        repeat(seq(",", alias($.Type, $.parameters__list),)),
        optional(","))
      ),
      ")",
      "=>",
      alias($.Type, $.return_type),
    ),

    PredefinedType: $ => choice(
      $.StringType,
      $.BooleanType,
      $.IntegerType,
      $.FloatType,
      $.CharType,
      $.NodeType,
      $.FunctionType,
    ),

    StringType: $ => "string",

    BooleanType: $ => "boolean",

    IntegerType: $ => "integer",

    FloatType: $ => "float",

    CharType: $ => "char",

    NodeType: $ => "class",

    FunctionType: $ => "function",

    TypeDeclaration: $ => seq(
      optional(alias($.ModuleLevelAccessibilityModifier, $.accessibility)),
      "type",
      alias($.FieldForIdentifier, $.identifier),
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
      $.BooleanExpression,
      $.PrimaryExpression,
    ),

    Negation: $ => prec.left(PREC.not, seq(
      "not",
      alias($.FieldForExpression, $.expression),
    )),

    EqualTo: $ => "==",
    NotEqualTo: $ => "!=",
    LessThan: $ => "<",
    LessThanEqualTo: $ => "<=",
    GraterThan: $ => ">",
    GreaterThanEqualTo: $ => ">=",
    Is: $ => "is",
    IsNot: $ => seq("is", "not"),
    In: $ => "in",
    NotIn: $ => seq("not", "in"),

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
          $.In,
          $.NotIn,
          $.Is,
          $.IsNot,
        ),
        $.PrimaryExpression
      ))
    )),

    Disjunction: $ => "or",
    Conjunction: $ => "and",

    BooleanExpression: $ => choice(
      $.Negation,
      prec.left(PREC.and, seq(
        alias($.FieldForExpression, $.left),
        $.Conjunction,
        alias($.FieldForExpression, $.right),
      )),
      prec.left(PREC.or, seq(
        alias($.FieldForExpression, $.left),
        $.Disjunction,
        alias($.FieldForExpression, $.right),
      )),
    ),

    PrimaryExpression: $ => prec(PREC.primary, choice(
      $.BinaryExpression,
      $.Identifier,
      $.Literal,
      $.UnaryFactor,
      $.List,
      $.Tuple,
      $.Node,
      $.AnonymousFunction,
      $.ParenthesizedExpression,
      $.Call,
      $.FluentCall,
      $.ConditionalExpression,
      $.Negation,
    )),

    ConditionalExpression: $ => prec.left(PREC.conditional, seq(
      alias($.PrimaryExpression, $.condition),
      "?",
      alias($.PrimaryExpression, $.true_value),
      ":",
      alias($.PrimaryExpression, $.false_value),
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
      $.AliasExpression,
      $.FluentAssertion,
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

    FluentAssertion: $ => prec.left(PREC.alias, seq(
      alias($.PrimaryExpression, $.expression),
      ":",
      alias(seq($.PrimaryExpression, optional(":")),$.assertion),
    )),

    AliasExpression: $ => prec.left(PREC.alias, seq(
      alias($.PrimaryExpression, $.value),
      "as",
      alias($.PrimaryExpression, $.alias),
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
      $.FieldForExpression,
      ")"
    )),

    Tuple: $ => seq(
      "(",
      alias($.FieldForExpression, $.elements__list),
      choice(
        ",",
        repeat(seq(",", alias($.FieldForExpression, $.elements__list))),
      ),
      ")",
    ),

    AnonymousFunction: $ => seq(
      "(",
      optional(seq(
        alias($.FieldForExpression, $.parameters__list),
        choice(
          ",",
          repeat(seq(",", alias($.FieldForExpression, $.parameters__list))),
        ),
      )),
      ")",
      optional(alias($.TypeAnnotation, $.return_type)),
      "=>",
      seq(alias($.FieldForExpression, $.expression)),
    ),

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

    Identifier: $ => token(/[a-zA-Z_][a-zA-Z0-9_]*/),

    // CamelIdentifier: $ => /[a-z][a-zA-Z0-9_]*/,
    //
    // SnakeIdentifier: $ => /[a-z_][a-z0-9_]*/,
    //
    // PascalIdentifier: $ => /[A-Z][a-zA-Z0-9_]*/,

    DecoratorIdentifier: $ => /[@][A-Za-z_][a-zA-Z0-9_]*/,

    Call: $ => {
      return seq(
        alias($.CallableExpression, $.expression),
        choice(
          seq("(", commaSeparated(alias($.FieldForExpression, $.parenthesis_parameters__list)), ")"),
          seq("[", commaSeparated1(alias($.FieldForExpression, $.bracket_parameters__list)), "]"),
        ),
      )
    },

    CallableName: $ => $.Identifier,

    CallableExpression: $ => prec.left(PREC.callable, choice(
      $.CallableName,
      $.Call,
      $.ParenthesizedExpression,
      $.Literal,
    )),

    Message: $ => $.Expression,

    FluentCall: $ => prec(PREC.call, seq(
      alias($.PrimaryExpression, $.expression),
      choice(
        seq(
          ".",
          alias($.CallableExpression, $.parenthesis_callee),
          optional(seq(
            "(",
            commaSeparated(alias($.FieldForExpression, $.parenthesis_parameters__list)),
            ")",
          )),
        ),
        seq(
          "[",
          commaSeparated1(alias($.FieldForExpression, $.bracket_parameters__list)),
          "]",
        ),
      ),
    )),

    List: $ => prec(PREC.call, seq(
      "[", optional(alias($.FieldForExpression, $.elements__list)), "]",
    )),

    Node: $ => seq(
      "{",
      commaSeparated(alias($.FieldForNodeEdge, $.edges__list)),
      "}",
    ),

    NodeEdge: $ => seq(
      alias($.FieldForIdentifier, $.identifier), "=", alias($.FieldForExpression, $.value),
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

    // *******************
    // ** Fields tricky **
    // *******************

    FieldForIdentifier: $ => choice(
      $.Identifier,
      $.ImpossibleRule,
    ),

    FieldForExpression: $ => prec(PREC.expression_field, choice(
      $.Expression,
      $.ImpossibleRule,
    )),

    FieldForFilter: $ =>  prec(PREC.identifier_field, choice(
      $.Expression,
      $.ImpossibleRule,
    )),

    FieldForPath: $ => choice(
      $.Path,
      $.ImpossibleRule,
    ),

    FieldForTypeParameters: $ => choice(
      $.TypeParameters,
      $.ImpossibleRule,
    ),

    FieldForTypeParameter: $ => choice(
      $.TypeParameter,
      $.ImpossibleRule,
    ),

    FieldForNodeTypeParameters: $ => choice(
      $.TypeParameters,
      $.ImpossibleRule,
    ),

    FieldForNodeTypeParameter: $ => choice(
      $.TypeParameter,
      $.ImpossibleRule,
    ),

    FieldForReturnType: $ => choice(
      $.Type,
      $.ImpossibleRule,
    ),

    FieldForNodeEdge: $ => choice(
      $.NodeEdge,
      $.ImpossibleRule,
    ),

    ImpossibleRule: $ => alias("a212b9d3-86e1-495f-87e3-9e69bf678412", $.impossible),
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
