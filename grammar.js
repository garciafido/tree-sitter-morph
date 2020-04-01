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
    MorphismDeclarationStatement_from: $ => $.Expression,
    MorphismDeclarationStatement_member: $ => choice(
      $.MorphismMutationDeclaration,
      $.MorphismCreationDeclaration,
    ),

    MorphismDeclarationStatement: $ => seq(
      repeat($.MorphismDeclarationStatement_decorators__list),
      optional($.MorphismDeclarationStatement_accessibility),
      "morph",
      $.MorphismDeclarationStatement_name,
      "(",
      $.MorphismDeclarationStatement_from,
      ")",
      "{",
      $.MorphismDeclarationStatement_member,
      "}",
    ),

    MorphismMutationName: $ => $.Identifier,

    MorphismMutationExpression: $ => $.Expression,

    MorphismMutationDeclaration: $ => seq(
      $.MorphismMutationName,
      "->",
      $.MorphismMutationExpression,
    ),

    MorphismNewName: $ => $.Identifier,

    MorphismNewExpression: $ => $.Expression,

    MorphismCreationDeclaration: $ => seq(
      "new", $.MorphismNewName, "->", $.MorphismNewExpression,
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
    FunctionDeclarationStatement_signature: $ => $.FunctionSignature,
    FunctionDeclarationStatement_type_parameters: $ => $.TypeParameters,
    FunctionDeclarationStatement: $ => seq(
      optional($.FunctionDeclarationStatement_accessibility),
      "func",
      $.FunctionDeclarationStatement_name,
      optional($.FunctionDeclarationStatement_type_parameters),
      $.FunctionDeclarationStatement_signature,
      optional($.FunctionDeclarationStatement_type),
      "=>",
      $.FunctionDeclarationStatement_expression,
    ),

    FunctionSignature: $ => seq(
      "(", optional(seq($.FunctionParameter, repeat(seq(",", $.FunctionParameter)), optional(","))), ")",
    ),

    FunctionParameterName: $ => $.Identifier,

    FunctionParameter: $ => seq(
      $.FunctionParameterName, optional($.TypeAnnotation),
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
      $.SingleType, repeat(seq("|", $.SingleType)),
    ),

    TypeName: $ => $.Identifier,

    SingleType: $ => choice(
      $.TypeName,
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
    RuleDeclarationStatement: $ => seq(
      optional($.RuleDeclarationStatement_accessibility),
      "rule",
      $.RuleName,
      optional($.TypeParameters),
      $.FunctionSignature,
      "=>",
      $.RuleExpression,
    ),

    Rule: $ => $.Expression,

    Message: $ => $.Expression,

    RuleExpression: $ => seq(
      $.Rule, optional(seq(":", $.Message)),
    ),

    TypeDeclarationStatement_accessibility: $ => $.ModuleLevelAccessibilityModifier,
    TypeDeclarationStatement: $ => seq(
      optional($.TypeDeclarationStatement_accessibility), "type", $.TypeName, "=", $.Type),

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

//--------------------------------- ReVISANDO ------------------------------------------->>>>>------>>>>>>

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
      $.FunctionCallOrEdgeAccess,
      $.ChainedFunctionCallOrEdgeAccess,
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

    CallableName: $ => prec(PREC.call, $.Identifier),

    CallableExpression: $ => prec(PREC.call, choice(
      $.CallableName,
      $.FunctionCallOrEdgeAccess,
      $.ParenthesizedExpression,
    )),

    ChainedEdgeAccess: $ => prec.left(PREC.lambda, seq(
      $.PrimaryExpression, optional($.RuleParameters), $.ListIndexAccess_EdgeAccessParameter,
    )),

    RuleParameters: $ => prec(PREC.call, seq(
      "<", $.RuleExpression, repeat(seq(",", $.RuleExpression)), optional(","), ">",
    )),

    ParameterExpression: $ => $.Expression,

    FunctionCallParameters: $ => seq(
      "(", optional(seq($.ParameterExpression, repeat(seq(",", $.ParameterExpression)), optional(","))), ")",
    ),

    EdgeAccess: $ => seq(
      $.CallableExpression, optional($.RuleParameters), $.ListIndexAccess_EdgeAccessParameter,
    ),

    //  This expression has no parameters allowed in its factors and the expression must yield a string
    // ListIndexAccess EdgeAccessParameter
    AccessExpression: $ => $.Expression,

    ListIndexAccess_EdgeAccessParameter: $ => seq(
      "[", $.AccessExpression, "]"
    ),

    AnonymousFunctionName: $ => $.Expression,

    AnonymousFunction: $ => seq(
      $.AnonymousFunctionSignature, optional($.TypeAnnotation), "=>", $.AnonymousFunctionName,
    ),

    ParameterName: $ => $.Identifier,

    AnonymousFunctionSignature: $ => seq(
      "(", optional(seq($.ParameterName, repeat(seq(",", $.ParameterName)), optional(","))), ")",
    ),

    ChainedFunctionCallOrEdgeAccess: $ =>choice(
        $.ChainedFunctionCall,
        $.ChainedEdgeAccess,
    ),

    ChainedFunctionCall: $ => prec(PREC.call, seq(
      $.PrimaryExpression, ".", $.Identifier, optional($.RuleParameters), $.FunctionCallParameters,
    )),

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
