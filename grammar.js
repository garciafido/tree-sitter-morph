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
    $.ImportStatement,
    $.Identifier,
    $.Expression,
    $.PrimaryExpression,
    $.UnaryFactor,
    $.Statement,
    $.PositiveSign,
    $.NegativeSign,
    $.AssignmentSign,
    $.Extends,
  ],

  rules: {
    
    Program: $ => repeat($.Statement),

    // *****************
    // ** Statements **
    // *****************
    
    Statement: $ => choice(
      $.ImportStatement,
      $.NodeDeclarationStatement,
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

    PrefixedDots: $ => /[.]+_?/,
    ImportFrom: $ => $.Identifier,
    ImportItem: $ => $.Identifier,

    ImportFromStatement: $ => seq(
      "from",
      optional($.PrefixedDots),
      $.ImportFrom,
      "import",
      $.ImportItem,
      repeat(seq(",", $.ImportItem)),
      optional(","),
    ),

    ImportModuleStatement: $ => seq(
      "import", optional($.PrefixedDots), $.ImportFrom,
    ),

    NodeName: $ => $.Identifier,

    NodeDeclarationStatement: $ => seq(
      repeat($.Decorator),
      optional($.Export),
      optional("abstract"),
      "node",
      $.NodeName,
      optional($.Extends),
      "{", repeat($.NodeDeclarationMember), "}",
    ),

    ExtendsName: $ => $.Identifier,

    Extends: $ => seq(
      "extends", $.ExtendsName
    ),

    DecoratorArg: $ => $.Expression,

    Decorator: $ => prec.left(seq(
      $.DecoratorIdentifier,
      optional(seq(
        "(",
          optional(seq(
            $.DecoratorArg,
            repeat(seq(",", $.DecoratorArg)),
            optional(","))),
        ")"))
      ),
    ),

    NodeDeclarationMember: $ => choice(
        $.NodeEdgeDeclaration,
        $.NodeStaticConstantDeclaration,
    ),

    NodeEdgeName: $ => $.Identifier,

    NodeEdgeDeclaration: $ => seq(
      repeat($.Decorator),
      $.NodeEdgeName,
      optional($.NodeEdgeModifier),
      "->",
      $.Type,
      optional($.NodeEdgeInitializer),
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

//--------------------------------- ReVISANDO ------------------------------------------->>>>>------>>>>>>

    MorphismDeclarationStatement: $ => seq(
      repeat($.Decorator),
      optional($.Export),
      "morph",
      $.Identifier,
      "(",
      $.Expression,
      ")",
      "{",
      $.MorphismDeclarationMember,
      "}",
    ),

    MorphismDeclarationMember: $ => choice(
      $.MorphismMutationDeclaration,
      $.MorphismCreationDeclaration,
    ),

    MorphismMutationDeclaration: $ => seq(
      $.Identifier,
      "->",
      $.Expression,
    ),

    MorphismCreationDeclaration: $ => seq(
      "new", $.Identifier, "->", $.Expression,
    ),

    SymbolDeclarationStatement: $ => seq(
      optional($.Export), "symbol", $.Identifier,
    ),

    EnumDeclarationStatement: $ => seq(
      optional($.Export), "enum", $.Identifier, "{", repeat($.Identifier), "}",
    ),

    ConstantName: $ => $.Identifier,
    AssignmentSign: $ => "=",
    ConstantValue: $ => $.Expression,

    ConstantDeclarationStatement: $ => seq(
      optional($.Export),
      "const",
      $.ConstantName,
      optional($.TypeAnnotation),
      $.AssignmentSign,
      $.ConstantValue,
    ),

    FunctionDeclarationStatement: $ => seq(
      optional($.Export),
      "func",
      $.Identifier,
      optional($.TypeParameters),
      $.FunctionSignature,
      optional($.TypeAnnotation),
      "=>",
      $.Expression,
    ),

    FunctionSignature: $ => seq(
      "(", optional(seq($.FunctionParameter, repeat(seq(",", $.FunctionParameter)), optional(","))), ")",
    ),

    FunctionParameter: $ => seq(
      $.Identifier, optional($.TypeAnnotation),
    ),

    RuleDeclarationStatement: $ => seq(
      optional($.Export), "rule", $.Identifier, optional($.TypeParameters), $.FunctionSignature, "=>", $.RuleExpression,
    ),

    TypeParameters: $ => seq(
      "<", $.TypeParameter, repeat(seq(",", $.TypeParameter)), optional(","), ">",
    ),

    TypeParameter: $ => seq(
      $.Identifier, optional($.TypeParameterConstraint),
    ),

    TypeParameterConstraint: $ => seq(
      "extends", $.Type,
    ),

    TypeDeclarationStatement: $ => seq(
      optional($.Export), "type", $.Identifier, "=", $.Type),

    Export: $ => "export",

    Type: $ => choice(
        $.TypeUnion,
        $.SingleType,
    ),

    TypeUnion: $ => seq(
      $.SingleType, repeat1(seq("|", $.SingleType)),
    ),

    SingleType: $ => choice(
      $.Identifier,
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

    TypeAnnotation: $ => seq(
      ":", $.Type,
    ),
    
    // *****************
    // ** Expressions **
    // *****************

    // Expression: $ => $.BooleanExpression,

    Expression: $ => choice(
      $.RelationalExpression,
      $.Negation,
      $.BooleanExpression,
      // $.lambda,
      $.PrimaryExpression,
      // $.conditional_expression,
      // $.named_expression
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

    Negation: $ => prec(PREC.not, seq(
      "not",
      field('argument', $.Expression)
    )),

    Disjunction: $ => "or",
    Conjunction: $ => "and",

    BooleanExpression: $ => choice(
      prec.left(PREC.and, seq(
        field('left', $.Expression),
        field('operator', $.Conjunction),
        field('right', $.Expression)
      )),
      prec.left(PREC.or, seq(
        field('left', $.Expression),
        field('operator', $.Disjunction),
        field('right', $.Expression)
      ))
    ),

    Factor: $ => $.PrimaryExpression,

    PrimaryExpression: $ => choice(
      $.BinaryExpression,
      $.Identifier,
      $.StringLiteral,
      $.StringTemplateLiteral,
      $.TrueLiteral,
      $.FalseLiteral,
      $.IntegerLiteral,
      $.FloatLiteral,
      // $.keyword_identifier,
      // $.none,
      $.UnaryFactor,
      // $.attribute,
      // $.subscript,
      // $.call,
      // $.list,
      // $.list_comprehension,
      // $.dictionary,
      // $.dictionary_comprehension,
      // $.set,
      // $.set_comprehension,
      // $.tuple,
      $.ParenthesizedExpression,
      // $.generator_expression,
      // $.ellipsis
    ),

    Addition: $ => "+",
    Subtraction: $ => "-",
    Multiplication: $ => "*",
    Division: $ => "/",
    Modulus: $ => "%",
    BitwiseDisjunction: $ => "|",
    BitwiseConjunction: $ => "&",
    ExclusiveDisjunction: $ => "^",

    BinaryExpression: $ => choice(
      ...[
        [$.Addition, PREC.plus],
        [$.Subtraction, PREC.plus],
        [$.Multiplication, PREC.times],
        [$.Division, PREC.times],
        [$.Modulus, PREC.times],
        [$.BitwiseDisjunction, PREC.bitwise_or],
        [$.BitwiseConjunction, PREC.bitwise_and],
        [$.ExclusiveDisjunction, PREC.xor],
      ].map(([operator, precedence]) =>
        prec.left(precedence, seq(
          field('left', $.PrimaryExpression),
          field('operator', operator),
          field('right', $.PrimaryExpression)
        ))
      )
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

    // UnaryFactor: $ => prec(PREC.unary, seq(
    //   field('operator', choice($.Positive, $.Negative, $.Complement)),
    //   field('argument', $.PrimaryExpression)
    // )),

    // UnaryFactor: $ => prec(PREC.unary, seq(
    //   choice($.Positive, $.Negative, $.Complement),
    //   $.PrimaryExpression,
    // )),

    // BooleanExpression: $ => $.DisjunctionExpression,

    // DisjunctionExpression: $ => choice(
    //     $.Disjunction,
    //     $.ConjunctionExpression,
    // ),

    // Disjunction: $ => prec(PREC.or, seq(
    //   $.DisjunctionExpression, "or", $.ConjunctionExpression,
    // )),

    // ConjunctionExpression: $ => choice(
    //     $.Conjunction,
    //     $.NegationExpression,
    // ),

    // Conjunction: $ => prec(PREC.and, seq(
    //   $.ConjunctionExpression, "and", $.NegationExpression,
    // )),

    // NegationExpression: $ => choice(
    //     $.Negation,
    //     $.RelationalExpression,
    // ),

    // Negation: $ => seq(
    //   "not", $.NegationExpression,
    // ),

    // RelationalExpression: $ => choice(
    //     $.EqualTo,
    //     $.NotEqualTo,
    //     $.LessThan,
    //     $.LessThanEqualTo,
    //     $.GraterThan,
    //     $.GreaterThanEqualTo,
    //     $.Is,
    //     $.IsNot,
    //     // $.ArithmeticalExpression,
    // ),

    //
    // EqualTo: $ => seq(
    //   $.RelationalExpression, "==", $.ArithmeticalExpression,
    // ),
    //
    // NotEqualTo: $ => seq(
    //   $.RelationalExpression, "!=", $.ArithmeticalExpression,
    // ),
    //
    // LessThan: $ => seq(
    //   $.RelationalExpression, "<", $.ArithmeticalExpression,
    // ),
    //
    // LessThanEqualTo: $ => seq(
    //   $.RelationalExpression, "<=", $.ArithmeticalExpression,
    // ),
    //
    // GraterThan: $ => seq(
    //   $.RelationalExpression, ">", $.ArithmeticalExpression,
    // ),
    //
    // GreaterThanEqualTo: $ => seq(
    //   $.RelationalExpression, ">=", $.ArithmeticalExpression,
    // ),
    //
    // Is: $ => seq(
    //   $.RelationalExpression, "is", $.ArithmeticalExpression,
    // ),
    //
    // IsNot: $ => seq(
    //   $.RelationalExpression, "is not", $.ArithmeticalExpression,
    // ),

    // ArithmeticalExpression: $ => $.AdditiveExpression,

    // AdditiveExpression: $ => choice(
    //   $.Addition,
    //   $.Subtraction,
    //   $.BitwiseDisjunction,
    //   $.MultiplicativeExpression,
    // ),
    //
    // Addition: $ => prec(PREC.plus, seq(
    //   $.AdditiveExpression, "+", $.MultiplicativeExpression,
    // )),
    //
    // Subtraction: $ => prec(PREC.plus, seq(
    //   $.AdditiveExpression, "-", $.MultiplicativeExpression,
    // )),
    //
    // BitwiseDisjunction: $ => prec(PREC.bitwise_or, seq(
    //   $.AdditiveExpression, "|", $.MultiplicativeExpression,
    // )),
    //
    // MultiplicativeExpression: $ => choice(
    //   $.Multiplication,
    //   $.Division,
    //   $.BitwiseConjunction,
    //   $.Factor,
    // ),
    //
    // Multiplication: $ => prec.left(PREC.times, seq(
    //   $.MultiplicativeExpression, "*", $.Factor,
    // )),
    //
    // Division: $ => prec(PREC.times, seq(
    //   $.MultiplicativeExpression, "/", $.Factor,
    // )),
    //
    // BitwiseConjunction: $ => prec(PREC.bitwise_and, seq(
    //   $.MultiplicativeExpression, "&", $.Factor,
    // )),
    //

    // Factor: $ => choice(
    //   $.Identifier,
    //   $.FunctionCallOrEdgeAccess,
    //   $.AnonymousFunction,
    //   $.ChainedFunctionCallOrEdgeAccess,
    //   $.ListIndexAccess_EdgeAccessParameter,
    //   $.UnaryFactor,
    //   $.List,
    //   $.Node,
    //   $.Literal,
    // ),

    Identifier: $ => choice(
      $.CamelIdentifier,
      $.SnakeIdentifier,
      $.PascalIdentifier,
    ),

    CamelIdentifier: $ => /[a-z][a-zA-Z0-9_]*/,

    SnakeIdentifier: $ => /[a-z_][a-z0-9_]*/,

    PascalIdentifier: $ => /[A-Z][a-zA-Z0-9_]*/,

    DecoratorIdentifier: $ => /[@][A-Za-z_][a-zA-Z0-9_]*/,

    FunctionCallOrEdgeAccess: $ => choice(
      $.FunctionCall,
      $.EdgeAccess,
    ),

    FunctionCall: $ => seq(
      $.CallableExpression, optional($.RuleParameters), $.FunctionCallParameters,
    ),

    CallableExpression: $ =>  prec(PREC.call, choice(
      $.Identifier,
      $.FunctionCallOrEdgeAccess,
      $.ParenthesizedExpression,
    )),

    // ParenthesizedExpression: $ => seq(
    //   "(", $.Expression, ")",
    // ),

    RuleParameters: $ => seq(
      "<", $.RuleExpression, ">",
    ),

    RuleExpression: $ => seq(
      "<", $.Expression, optional(seq(":", $.Expression)), ">",
    ),

    FunctionCallParameters: $ => seq(
      "(", optional(seq($.Expression, repeat(seq(",", $.Expression)), optional(","))), ")",
    ),

    EdgeAccess: $ => seq(
      $.CallableExpression, optional($.RuleParameters), $.ListIndexAccess_EdgeAccessParameter,
    ),

    //  This expression has no parameters allowed in its factors and the expression must yield a string
    // ListIndexAccess EdgeAccessParameter
    ListIndexAccess_EdgeAccessParameter: $ => seq(
      "[", $.Expression, "]"
    ),

    AnonymousFunction: $ => seq(
      $.AnonymousFunctionSignature, optional($.TypeAnnotation), "=>", $.Expression,
    ),

    AnonymousFunctionSignature: $ => seq(
      "(", optional(seq($.Identifier, repeat(seq(",", $.Identifier)), optional(","))), ")",
    ),

    ChainedFunctionCallOrEdgeAccess: $ =>choice(
        $.ChainedFunctionCall,
        $.ChainedEdgeAccess,
    ),

    ChainedFunctionCall: $ => prec(PREC.call, seq(
      $.Factor, ".", $.Identifier, optional($.RuleParameters), $.FunctionCallParameters,
    )),

    ChainedEdgeAccess: $ => prec(PREC.call, seq(
      $.Factor, optional($.RuleParameters), $.ListIndexAccess_EdgeAccessParameter,
    )),

    // UnaryFactor: $ => choice(
    //     $.Positive,
    //     $.Negative,
    // ),
    //
    // Positive: $ => seq(
    //   "+", $.Factor,
    // ),
    //
    // Negative: $ => seq(
    //   "-", $.Factor,
    // ),

    List: $ => prec(PREC.call, seq(
      "[", $.Expression, "]",
    )),

    Node: $ => seq(
      $.Identifier, optional($.NodeAlias), "{", repeat($.NodeEdge), "}",
    ),

    NodeAlias: $ => seq(
      "as", $.Identifier,
    ),

    NodeEdge: $ => seq(
      $.Identifier, "->", $.Expression,
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


function commaSep1 (rule) {
  return sep1(rule, ",")
}

function sep1 (rule, separator) {
  return seq(rule, repeat(seq(separator, rule)))
}