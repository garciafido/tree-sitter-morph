const PREC = {
  COMMENT: 1, // Prefer comments over regexes
  STRING: 2,  // In a string, prefer string characters over comments
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
    [$.factor, $.callable_expression],
    [$.factor, $.function_signature, $.function_untyped_signature],
    [$.function_signature, $.function_untyped_signature],
    [$.factor, $.function_parameter, $.function_untyped_parameter],
    [$.function_parameter, $.function_untyped_parameter],
    [$.positive, $.factor],
    [$.negative, $.factor],
    [$.disjunction, $._boolean_expression],
    [$.conjunction, $.disjunction],
    [$.conjunction, $._disjunction_expression],
    [$._negation_expression, $.less_than],
    [$._negation_expression, $.less_than_equal_to],
    [$._negation_expression, $.greater_than],
    [$._negation_expression, $.greater_than_equal_to],
    [$._negation_expression, $.equal_to],
    [$._negation_expression, $.not_equal_to],
    [$.is_not, $.is, $._negation_expression],
    [$.bitwise_disjunction, $._arithmetic_expression],
    [$.addition, $._arithmetic_expression],
    [$.subtraction, $._arithmetic_expression],
    [$.multiplication, $._additive_expression],
    [$.division, $._additive_expression],
    [$.bitwise_conjunction, $._additive_expression],
    [$.factor, $._multiplicative_expression],
    [$.multiplication, $.bitwise_disjunction],
    [$.division, $.bitwise_disjunction],
    [$.bitwise_disjunction, $.bitwise_conjunction],
    [$.multiplication, $.addition],
    [$.division, $.addition],
    [$.bitwise_conjunction, $.addition],
    [$.multiplication, $.subtraction],
    [$.division, $.subtraction],
    [$.bitwise_conjunction, $.subtraction],
    [$.factor, $.multiplication],
    [$.factor, $.division],
    [$.factor, $.bitwise_conjunction],
  ]),

  supertypes: $ => [
    $._statement,
    $._import_statement,
    $._node_member,
    $._morph_member,
    $._predefined_type,
    $._expression,
    $._boolean_expression,
    $._disjunction_expression,
    $._conjunction_expression,
    $._negation_expression,
    $._relational_expression,
    $._arithmetic_expression,
    $._additive_expression,
    $._multiplicative_expression,
    $._literal,
    $._number,
    $._string,
  ],

  inline: $ => [
    $._statement,
    $._import_statement,
    $._node_member,
    $._morph_member,
    $._predefined_type,
    $._expression,
    $._boolean_expression,
    $._disjunction_expression,
    $._conjunction_expression,
    $._negation_expression,
    $._relational_expression,
    $._arithmetic_expression,
    $._additive_expression,
    $._multiplicative_expression,
    $.identifier,
    $._literal,
    $._number,
    $._string,
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
      "from", repeat("."), $.identifier, "import", $.identifier, repeat(seq(",", $.identifier)),
    ),

    import_module_statement: $ => seq(
      "import", repeat("."), $.identifier,
    ),

    node_declaration_statement: $ => seq(
      repeat($.decorator),
      optional($.export),
      optional("abstract"),
      "node",
      $.node_declaration_identifier,
      optional(seq("extends", $.identifier)),
      "{",
      repeat($._node_member),
      "}",
    ),

    node_declaration_identifier: $ => $.identifier,

    decorator: $ => seq(
      $.decorator_identifier, optional(seq("(", optional($._expression), ")")),
    ),

    _node_member: $ => choice(
      $.node_edge_declaration,
      $.node_static_constant_declaration,
    ),

    node_edge_declaration: $ => seq(
      optional($.decorator), $.identifier, optional($.node_edge_modifier), "->", $.type, optional($.node_edge_initializer)
    ),

    node_edge_modifier: $ => choice(
      "!", "[]",
    ),

    node_edge_initializer: $ => seq(
      "=", $._expression,
    ),

    node_static_constant_declaration: $ => seq(
      "static", $.identifier, "=", $._expression,
    ),

    morphism_declaration_statement: $ => seq(
      repeat($.decorator),
      optional($.export),
      "morph",
      $.identifier,
      "(", $._expression, ")",
      "{", repeat($._morph_member), "}",
    ),

    _morph_member: $ => choice(
      $.morph_mutation_declaration,
      $.morph_creation_declaration,
    ),

    morph_mutation_declaration: $ => seq(
      $.identifier, "->", $._expression,
    ),

    morph_creation_declaration: $ => seq(
      "new", $.identifier, "->", $._expression,
    ),

    symbol_declaration_statement: $ => seq(
      optional($.export), "symbol", $.identifier,
    ),

    enum_declaration_statement: $ => seq(
      optional($.export), "enum", $.identifier, "{", repeat($.identifier), "}",
    ),

    constant_declaration_statement: $ => seq(
      optional($.export), "const", $.identifier, optional($.type_annotation), "=", $._expression,
    ),

    function_declaration_statement: $ => seq(
      optional($.export),
      "func",
      $.identifier,
      optional($.type_parameters),
      $.function_signature,
      optional($.type_annotation),
      "=>",
      $._expression,
    ),

    function_signature: $ => seq(
      "(", optional(seq($.function_parameter, repeat(seq(",", $.function_parameter)))), ")",
    ),

    function_parameter: $ => seq(
      $.identifier, optional($.type_annotation),
    ),

    rule_declaration_statement: $ => seq(
      optional($.export),
      "rule",
      $.identifier,
      optional($.type_parameters),
      $.function_signature,
      "=>",
      $.rule_expression,
    ),

    type_parameters: $ => seq(
      "<", $.single_type_parameter, repeat(seq("|", $.single_type_parameter)), ">",
    ),

    single_type_parameter: $ => seq(
      $.identifier, optional(seq("extends", $.identifier))
    ),

    type_declaration_statement: $ => seq(
      optional($.export), "type", $.identifier, "=", $.type,
    ),

    export: $ => "export",

    type: $ => seq(
      $.single_type, repeat(seq("|", $.single_type)),
    ),

    single_type: $ => seq(
      repeat($.decorator),
      choice(
        $.identifier,
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

    _boolean_expression: $ => $._disjunction_expression,

    _disjunction_expression: $ => choice(
      $.disjunction,
      $._conjunction_expression,
    ),

    disjunction: $ => seq(
      $._disjunction_expression,
      "||",
      $._conjunction_expression
    ),

    _conjunction_expression: $ => choice(
      $.conjunction,
      $._negation_expression,
    ),

    conjunction: $ => seq(
      $._conjunction_expression,
      "&&",
      $._negation_expression,
    ),

    _negation_expression: $ => choice(
      $.negation,
      $._relational_expression,
    ),

    negation: $ => seq(
      "not", $._negation_expression,
    ),

    _relational_expression: $ => choice(
      $.equal_to,
      $.not_equal_to,
      $.less_than,
      $.less_than_equal_to,
      $.greater_than,
      $.greater_than_equal_to,
      $.is,
      $.is_not,
      $._arithmetic_expression,
    ),

    equal_to: $ => seq(
      $._relational_expression,
      "==",
      $._arithmetic_expression,
    ),

    not_equal_to: $ => seq(
      $._relational_expression,
      "!=",
      $._arithmetic_expression,
    ),

    less_than: $ => seq(
      $._relational_expression,
      "<",
      $._arithmetic_expression,
    ),

    less_than_equal_to: $ => seq(
      $._relational_expression,
      "<=",
      $._arithmetic_expression,
    ),

    greater_than: $ => seq(
      $._relational_expression,
      ">",
      $._arithmetic_expression,
    ),

    greater_than_equal_to: $ => seq(
      $._relational_expression,
      ">=",
      $._arithmetic_expression,
    ),

    is: $ => seq(
      $._relational_expression,
      "is",
      $._arithmetic_expression,
    ),

    is_not: $ => seq(
      $._relational_expression,
      seq("is", "not"),
      $._arithmetic_expression,
    ),

    _arithmetic_expression: $ => $._additive_expression,

    _additive_expression: $ => choice(
      $.addition,
      $.subtraction,
      $.bitwise_disjunction,
      $._multiplicative_expression
    ),

    addition: $ => seq(
      $._additive_expression,
      "+",
      $._multiplicative_expression,
    ),

    subtraction: $ => seq(
      $._additive_expression,
      "-",
      $._multiplicative_expression,
    ),

    bitwise_disjunction: $ => seq(
      $._additive_expression,
      "|",
      $._multiplicative_expression,
    ),

    _multiplicative_expression: $ => choice(
      $.multiplication,
      $.division,
      $.bitwise_conjunction,
      $.factor,
    ),

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

    factor: $ => choice(
      $.identifier,
      $.anonymous_function,
      $.list,
      $.function_call,
      seq($.factor, $.chained_call),
      $.unaryfactor,
      $._literal,
    ),

    callable_expression: $ => choice(
      $.identifier,
      $.function_call,
      seq("(", $._expression, ")"),
    ),

    anonymous_function: $ => seq(
      choice($.function_signature, $.function_untyped_signature), optional($.type_annotation), "=>", $._expression,
    ),

    function_untyped_signature: $ => seq(
      "(", optional(seq($.function_untyped_parameter, repeat(seq(",", $.function_untyped_parameter)))), ")",
    ),

    function_untyped_parameter: $ => $.identifier,

    function_call: $ => seq(
      $.callable_expression,
      optional($.rule_parameters),
      choice($.array_accessor_args, $.function_call_args),
    ),

    chained_call: $ => choice(
      seq(
        '.',
        $.identifier,
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

    identifier: $ => choice(
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
      $.identifier,
      optional($.graph_literal_alias),
      "{", repeat($.graph_literal_property), "}",
    ),

    graph_literal_alias: $ => seq(
      "as", $.identifier,
    ),

    graph_literal_property: $ => seq(
      $.identifier, "->", $._expression,
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

    camel_identifier: $ => token(/[a-z][a-zA-Z0-9_]*/),

    snake_identifier: $ => token(/[a-z_][a-z0-9_]*/),

    pascal_identifier: $ => token(/[A-Z][a-zA-Z0-9_]*/),

    decorator_identifier: $ => token(/[@][A-Za-z_][a-zA-Z0-9_]*/),

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

