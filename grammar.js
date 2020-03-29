const PREC = {
  COMMENT: 1, // Prefer comments over regexes
  STRING: 2,  // In a string, prefer string characters over comments

  FUNCTION_SIGNATURE: -1,
  FUNCTION_UNTYPED_SIGNATURE: -2,
  FUNCTION_PARAMETER: -3,
  FUNCTION_UNTYPED_PARAMETER: -4,

  NEGATION: 1,
  BOOL_EXPRESSION: 2,
  RELATIONAL: 10,

  DISJUNCTION: 24,
  CONJUNCTION: 25,

  ARITHMETIC_EXPRESSION: 50,
  ADDITIVE: 51,
  MUTILPLICATIVE: 60,

  FACTOR: 100,
};

module.exports = grammar({
  name: 'morph',

  externals: $ => [
    $._automatic_semicolon,
    $._template_chars
  ],

  extras: $ => [
    $.comment,
    /[\s\uFEFF\u2060\u200B\u00A0]/
  ],

  conflicts: ($, previous) => previous.concat([
  ]),

  supertypes: $ => [
    $._statement,
    $._import_statement,
    $._node_member,
    $._morph_member,
    $._predefined_type,
    $._expression,
    $._boolean_expression,
    $._comparison_operator,
    $._disjunction_expression,
    $._conjunction_expression,
    $._relational_expression,
    $._arithmetic_expression,
    $._additive_expression,
    $._multiplicative_expression,
    $._identifier,
    $._literal,
    $._number,
    $._string,
  ],

  inline: $ => [
  ],

  rules: {

    program: $ => repeat($._statement),

    _statement: $ => choice(
      $._import_statement,
      $.node_declaration_statement,
      $.morphism_declaration_statement,
      $.symbol_declaration_statement,
      $.enum_declaration_statement,
      $.constant_declaration_statement,
      $.function_declaration_statement,
      $.rule_declaration_statement,
      $.type_declaration_statement,
    ),

    _import_statement: $ => choice(
      $.import_from_statement,
      $.import_module_statement,
    ),

    import_from_statement: $ => seq(
      "from", repeat("."), $._identifier, "import", $._identifier, repeat(seq(",", $._identifier)),
    ),

    import_module_statement: $ => seq(
      "import", repeat("."), $._identifier,
    ),

    node_declaration_statement: $ => seq(
      repeat($.decorator),
      optional($.export),
      optional("abstract"),
      "node",
      $._identifier,
      optional($.extends),
      "{",
      repeat($._node_member),
      "}",
    ),

    decorator: $ => seq(
      $.decorator_identifier, optional(seq("(", optional($._expression), ")")),
    ),

    _node_member: $ => choice(
      $.node_edge_declaration,
      $.node_static_constant_declaration,
    ),

    node_edge_declaration: $ => seq(
      optional($.decorator), $._identifier, optional($.node_edge_modifier), "->", $.type, optional($.node_edge_initializer)
    ),

    node_edge_modifier: $ => choice(
      "!", "[]",
    ),

    node_edge_initializer: $ => seq(
      "=", $._expression,
    ),

    node_static_constant_declaration: $ => seq(
      "static", $._identifier, "=", $._expression,
    ),

    extends: $ => seq(
      "extends", $._identifier,
    ),

    morphism_declaration_statement: $ => seq(
      repeat($.decorator),
      optional($.export),
      "morph",
      $._identifier,
      "(", $._expression, ")",
      "{", repeat($._morph_member), "}",
    ),

    _morph_member: $ => choice(
      $.morph_mutation_declaration,
      $.morph_creation_declaration,
    ),

    morph_mutation_declaration: $ => seq(
      $._identifier, "->", $._expression,
    ),

    morph_creation_declaration: $ => seq(
      "new", $._identifier, "->", $._expression,
    ),

    symbol_declaration_statement: $ => seq(
      optional($.export), "symbol", $._identifier,
    ),

    enum_declaration_statement: $ => seq(
      optional($.export), "enum", $._identifier, "{", repeat($._identifier), "}",
    ),

    constant_declaration_statement: $ => seq(
      optional($.export), "const", $._identifier, optional($.type_annotation), "=", $._expression,
    ),

    function_declaration_statement: $ => seq(
      optional($.export),
      "func",
      $._identifier,
      optional($.type_parameters),
      $.function_signature,
      optional($.type_annotation),
      "=>",
      $._expression,
    ),

    function_signature: $ => prec.left(PREC.FUNCTION_SIGNATURE, seq(
      "(", optional(seq($.function_parameter, repeat(seq(",", $.function_parameter)))), ")",
    )),

    function_parameter: $ => prec.left(PREC.FUNCTION_PARAMETER, seq(
      $._identifier, optional($.type_annotation),
    )),

    rule_declaration_statement: $ => seq(
      optional($.export),
      "rule",
      $._identifier,
      optional($.type_parameters),
      $.function_signature,
      "=>",
      $.rule_expression,
    ),

    type_parameters: $ => seq(
      "<", $.single_type_parameter, repeat(seq("|", $.single_type_parameter)), ">",
    ),

    single_type_parameter: $ => seq(
      $._identifier, optional($.extends)
    ),

    type_declaration_statement: $ => seq(
      optional($.export), "type", $._identifier, "=", $.type,
    ),

    export: $ => "export",

    type: $ => seq(
      $.single_type, repeat(seq("|", $.single_type)),
    ),

    single_type: $ => seq(
      repeat($.decorator),
      choice(
        $._identifier,
        $._predefined_type,
      )
    ),

    _predefined_type: $ => choice(
      $.string_type,
      $.boolean_type,
      $.integer_type,
      $.float_type,
    ),

    string_type: $ => "string",

    boolean_type: $ => "boolean",

    integer_type: $ => "integer",

    float_type: $ => "float",

    type_annotation: $ => seq(
      ":", $.type,
    ),

    rule_parameters: $ => seq(
      "<", $.rule_expression, ">",
    ),

    rule_expression: $ => seq(
      $._expression, optional(seq(":", $._expression)),
    ),

    _expression: $ => $._boolean_expression,

    // _boolean_expression: $ => prec.left(PREC.BOOL_EXPRESSION, $._disjunction_expression),
    _boolean_expression: $ => $.factor,

    _disjunction_expression: $ => prec.left(PREC.DISJUNCTION, choice(
      $.disjunction,
      $._conjunction_expression,
    )),

    disjunction: $ => prec.left(PREC.DISJUNCTION, seq(
      $._disjunction_expression,
      "||",
      $._conjunction_expression
    )),

    _conjunction_expression: $ => prec.left(PREC.CONJUNCTION, choice(
      $.conjunction,
      $._relational_expression,
    )),

    conjunction: $ => prec.left(PREC.CONJUNCTION, seq(
      $._conjunction_expression,
      "&&",
      $._relational_expression,
    )),

    _relational_expression: $ => choice(
      $._comparison_operator,
      $.negation,
      $._arithmetic_expression,
    ),

    _comparison_operator: $ => prec.left(PREC.RELATIONAL, choice(
      $.equal_to,
      $.not_equal_to,
      $.less_than,
      $.less_than_equal_to,
      $.greater_than,
      $.greater_than_equal_to,
    )),

    negation: $ => prec.left(PREC.NEGATION, seq(
      "not", $._relational_expression,
    )),

    equal_to: $ => prec.left(PREC.RELATIONAL+1, seq(
      $._relational_expression,
      "==",
      $._arithmetic_expression,
    )),

    not_equal_to: $ => prec.left(PREC.RELATIONAL+1, seq(
      $._relational_expression,
      "!=",
      $._arithmetic_expression,
    )),

    less_than: $ => prec.left(PREC.RELATIONAL+1, seq(
      $._relational_expression,
      "<",
      $._arithmetic_expression,
    )),

    less_than_equal_to: $ => prec.left(PREC.RELATIONAL+1, seq(
      $._relational_expression,
      "<=",
      $._arithmetic_expression,
    )),

    greater_than: $ => prec.left(PREC.RELATIONAL+1, seq(
      $._relational_expression,
      ">",
      $._arithmetic_expression,
    )),

    greater_than_equal_to: $ => prec.left(PREC.RELATIONAL+1, seq(
      $._relational_expression,
      ">=",
      $._arithmetic_expression,
    )),

    is: $ => prec.left(PREC.FACTOR, seq(
      $._relational_expression,
      "is",
      $._arithmetic_expression,
    )),

    is_not: $ =>  prec.left(PREC.FACTOR, seq(
      $._relational_expression,
      seq("is", "not"),
      $._arithmetic_expression,
    )),

    _arithmetic_expression: $ => prec.left(PREC.ARITHMETIC_EXPRESSION, $._additive_expression),

    _additive_expression: $ => prec.left(PREC.ADDITIVE, choice(
      $.addition,
      $.subtraction,
      $.bitwise_disjunction,
      $._multiplicative_expression
    )),

    addition: $ => prec.left(PREC.ADDITIVE+1, seq(
      $._additive_expression,
      "+",
      $._multiplicative_expression,
    )),

    subtraction: $ => prec.left(PREC.ADDITIVE+1, seq(
      $._additive_expression,
      "-",
      $._multiplicative_expression,
    )),

    bitwise_disjunction: $ => prec.left(PREC.ADDITIVE+1, seq(
      $._additive_expression,
      "|",
      $._multiplicative_expression,
    )),

    _multiplicative_expression: $ => prec.left(PREC.MUTILPLICATIVE, choice(
      $.multiplication,
      $.division,
      $.bitwise_conjunction,
      $.factor,
    )),

    multiplication: $ => seq(
      $._multiplicative_expression,
      "*",
      $.factor,
    ),

    division: $ => seq(
      $._multiplicative_expression,
      "/",
      $.factor,
    ),

    bitwise_conjunction: $ => seq(
      $._multiplicative_expression,
      "&",
      $.factor,
    ),

    factor: $ => prec.left(PREC.FACTOR, choice(
      $._identifier,
      $.anonymous_function,
      $.list,
      $.function_call,
      seq($.factor, $.chained_call),
      $._literal,
      $.is,
      $.is_not,
      $.unaryfactor,
    )),

    callable_expression: $ => choice(
      $._identifier,
      $.function_call,
      seq("(", $._expression, ")"),
    ),

    anonymous_function: $ => seq(
      choice($.function_signature, $.function_untyped_signature), optional($.type_annotation), "=>", $._expression,
    ),

    function_untyped_signature: $ => prec.left(PREC.FUNCTION_UNTYPED_SIGNATURE, seq(
      "(", optional(seq($.function_untyped_parameter, repeat(seq(",", $.function_untyped_parameter)))), ")",
    )),

    function_untyped_parameter: $ => prec.left(PREC.FUNCTION_UNTYPED_PARAMETER, $._identifier),

    function_call: $ => seq(
      $.callable_expression,
      optional($.rule_parameters),
      choice($.array_accessor_args, $.function_call_args),
    ),

    chained_call: $ => choice(
      seq(
        '.',
        $._identifier,
        optional($.rule_parameters),
        $.function_call_args,
      ),
      seq(
        optional($.rule_parameters),
        $.array_accessor_args
      )
    ),

    function_call_args: $ => seq(
      "(",
      optional($.expression_list),
      ")",
    ),

    array_accessor_args: $ => seq(
      "[",
      $.expression_list,
      "]",
    ),

    unaryfactor: $ => choice(
      $.positive,
      $.negative
    ),

    positive: $ => seq(
      "+", $.factor,
    ),

    negative: $ => seq(
      "-", $.factor,
    ),

    list: $ => seq(
      "[", optional($.expression_list), "]"
    ),

    expression_list: $ => seq(
      $._expression,
      repeat(seq(",", $._expression)),
      optional(",")
    ),

    _identifier: $ => choice(
      $.camel_identifier,
      $.snake_identifier,
      $.pascal_identifier
    ),

    _literal: $ => choice(
      $._number,
      $.boolean_literal,
      $.graph_literal,
      $.ebnf_literal,
      $._string
    ),

    _number: $ => choice(
      $.integer,
      $.float
    ),

    boolean_literal: $ => choice(
      $.true,
      $.false,
    ),

    false: $ => "false",

    true: $ => "true",

    graph_literal: $ => seq(
      $._identifier,
      optional($.graph_literal_alias),
      "{", repeat($.graph_literal_property), "}",
    ),

    graph_literal_alias: $ => seq(
      "as", $._identifier,
    ),

    graph_literal_property: $ => seq(
      $._identifier, "->", $._expression,
    ),

    ebnf_literal: $ => seq(
      'ebnf`',
      repeat(choice(
        $._template_chars,
        $.escape_sequence,
        $.template_substitution,
      )),
      '`'
    ),

    _string: $ => choice(
      $.simple_string,
      $.template_string,
    ),

    simple_string: $ => choice(
      seq(
        '"',
        repeat(choice(
          token.immediate(prec(PREC.STRING, /[^"\\\n]+|\\\r?\n/)),
          $.escape_sequence
        )),
        '"'
      ),
      seq(
        "'",
        repeat(choice(
          token.immediate(prec(PREC.STRING, /[^'\\\n]+|\\\r?\n/)),
          $.escape_sequence
        )),
        "'"
      )),

    escape_sequence: $ => token.immediate(seq(
      '\\',
      choice(
        /[^xu0-7]/,
        /[0-7]{1,3}/,
        /x[0-9a-fA-F]{2}/,
        /u[0-9a-fA-F]{4}/,
        /u{[0-9a-fA-F]+}/
      ))),

    // http://stackoverflow.com/questions/13014947/regex-to-match-a-c-style-multiline-comment/36328890#36328890
    comment: $ => token(prec(PREC.COMMENT, choice(
      seq('//', /.*/),
      seq(
        '/*',
        /[^*]*\*+([^/*][^*]*\*+)*/,
        '/'
      )))),

    template_string: $ => seq(
      '`',
      repeat(choice(
        $._template_chars,
        $.escape_sequence,
        $.template_substitution,
      )),
      '`'
    ),

    template_substitution: $ => seq(
      '${',
      $._expression,
      '}'
    ),

    camel_identifier: $ => /[a-z][a-zA-Z0-9_]*/,

    snake_identifier: $ => /[a-z_][a-z0-9_]*/,

    pascal_identifier: $ => /[A-Z][a-zA-Z0-9_]*/,

    decorator_identifier: $ => /[@][A-Za-z_][a-zA-Z0-9_]*/,

    integer: $ => token(choice(
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

    float: $ => {
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

