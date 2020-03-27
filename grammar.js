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
    [$.disjunction, $.boolean_expression],
    [$.conjunction, $.disjunction],
    [$.conjunction, $.disjunction_expression],
    [$.negation_expression, $.less_than],
    [$.negation_expression, $.less_than_equal_to],
    [$.negation_expression, $.greater_than],
    [$.negation_expression, $.greater_than_equal_to],
    [$.negation_expression, $.equal_to],
    [$.negation_expression, $.not_equal_to],
    [$.is_not, $.is, $.negation_expression],
    [$.bitwise_disjunction, $.arithmetic_expression],
    [$.addition, $.arithmetic_expression],
    [$.subtraction, $.arithmetic_expression],
    [$.multiplication, $.additive_expression],
    [$.division, $.additive_expression],
    [$.bitwise_conjunction, $.additive_expression],
    [$.factor, $.multiplicative_expression],
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
  //
  // supertypes: $ => [
  // ],
  //
  // inline: $ => [
  // ],

  rules: {

    program: $ => repeat($.statement),

    statement: $ => choice(
      $.import_statement,
      $.node_declaration_statement,
      $.morphism_declaration_statement,
      $.symbol_declaration_statement,
      $.enum_declaration_statement,
      $.constant_declaration_statement,
      $.function_declaration_statement,
      $.rule_declaration_statement,
      $.type_declaration_statement,
    ),

    import_statement: $ => choice(
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
      $.identifier,
      optional(seq("extends", $.identifier)),
      "{",
      repeat($.node_member),
      "}",
    ),

    decorator: $ => seq(
      $.decorator_identifier, optional(seq("(", $.expression, ")")),
    ),

    node_member: $ => choice(
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
      "=", $.expression,
    ),

    node_static_constant_declaration: $ => seq(
      "static", $.identifier, "=", $.expression,
    ),

    morphism_declaration_statement: $ => seq(
      repeat($.decorator),
      optional($.export),
      "morph",
      $.identifier,
      "(", $.expression, ")",
      "{", repeat($.morph_member), "}",
    ),

    morph_member: $ => choice(
      $.morph_mutation_declaration,
      $.morph_creation_declaration,
    ),

    morph_mutation_declaration: $ => seq(
      $.identifier, "->", $.expression,
    ),

    morph_creation_declaration: $ => seq(
      "new", $.identifier, "->", $.expression,
    ),

    symbol_declaration_statement: $ => seq(
      optional($.export), "symbol", $.identifier,
    ),

    enum_declaration_statement: $ => seq(
      optional($.export), "enum", $.identifier, "{", repeat($.identifier), "}",
    ),

    constant_declaration_statement: $ => seq(
      optional($.export), "const", $.identifier, optional($.type_annotation), "=", $.expression,
    ),

    function_declaration_statement: $ => seq(
      optional($.export), "func", $.identifier, $.function_signature, optional($.type_annotation), "=>", $.expression,
    ),

    function_signature: $ => seq(
      "(", optional(seq($.function_parameter, repeat(seq(",", $.function_parameter)))), ")",
    ),

    function_parameter: $ => seq(
      $.identifier, optional($.type_annotation),
    ),

    rule_declaration_statement: $ => seq(
      optional($.export), "rule", optional($.type_parameters), $.identifier, $.function_signature, "=>", $.rule_expression,
    ),

    type_parameters: $ => seq(
      "<", $.type, optional(seq(",", $.type)), ">",
    ),

    type_declaration_statement: $ => seq(
      optional($.export), "type", $.identifier, "=", $.type,
    ),

    export: $ => "export",

    type: $ => seq(
      $.single_type, repeat(seq("|", $.single_type)),
    ),

    single_type: $ => choice(
      $.identifier,
      $.predefined_type,
    ),

    predefined_type: $ => choice(
      "string",
      "boolean",
      "integer",
      "float",
    ),

    type_annotation: $ => seq(
      ":", $.type,
    ),

    rule_parameters: $ => seq(
      "<", $.rule_expression, ">",
    ),

    rule_expression: $ => seq(
      $.expression, optional(seq(":", $.expression)),
    ),

    expression: $ => $.boolean_expression,

    boolean_expression: $ => $.disjunction_expression,

    disjunction_expression: $ => choice(
      $.disjunction,
      $.conjunction_expression,
    ),

    disjunction: $ => seq(
      $.disjunction_expression,
      "||",
      $.conjunction_expression
    ),

    conjunction_expression: $ => choice(
      $.conjunction,
      $.negation_expression,
    ),

    conjunction: $ => seq(
      $.conjunction_expression,
      "&&",
      $.negation_expression,
    ),

    negation_expression: $ => choice(
      $.negation,
      $.relational_expression,
    ),

    negation: $ => seq(
      "not", $.negation_expression,
    ),

    relational_expression: $ => choice(
      $.equal_to,
      $.not_equal_to,
      $.less_than,
      $.less_than_equal_to,
      $.greater_than,
      $.greater_than_equal_to,
      $.is,
      $.is_not,
      $.arithmetic_expression,
    ),

    equal_to: $ => seq(
      $.relational_expression,
      "==",
      $.arithmetic_expression,
    ),

    not_equal_to: $ => seq(
      $.relational_expression,
      "!=",
      $.arithmetic_expression,
    ),

    less_than: $ => seq(
      $.relational_expression,
      "<",
      $.arithmetic_expression,
    ),

    less_than_equal_to: $ => seq(
      $.relational_expression,
      "<=",
      $.arithmetic_expression,
    ),

    greater_than: $ => seq(
      $.relational_expression,
      ">",
      $.arithmetic_expression,
    ),

    greater_than_equal_to: $ => seq(
      $.relational_expression,
      ">=",
      $.arithmetic_expression,
    ),

    is: $ => seq(
      $.relational_expression,
      "is",
      $.arithmetic_expression,
    ),

    is_not: $ => seq(
      $.relational_expression,
      seq("is", "not"),
      $.arithmetic_expression,
    ),

    arithmetic_expression: $ => $.additive_expression,

    additive_expression: $ => choice(
      $.addition,
      $.subtraction,
      $.bitwise_disjunction,
      $.multiplicative_expression
    ),

    addition: $ => seq(
      $.additive_expression,
      "+",
      $.multiplicative_expression,
    ),

    subtraction: $ => seq(
      $.additive_expression,
      "-",
      $.multiplicative_expression,
    ),

    bitwise_disjunction: $ => seq(
      $.additive_expression,
      "|",
      $.multiplicative_expression,
    ),

    multiplicative_expression: $ => choice(
      $.multiplication,
      $.division,
      $.bitwise_conjunction,
      $.factor
    ),

    multiplication: $ => seq(
      $.multiplicative_expression,
      "*",
      $.factor,
    ),

    division: $ => seq(
      $.multiplicative_expression,
      "/",
      $.factor,
    ),

    bitwise_conjunction: $ => seq(
      $.multiplicative_expression,
      "&",
      $.factor,
    ),

    factor: $ => choice(
      $.identifier,
      $.anonymous_function,
      $.list,
      $.function_call,
      seq($.factor, $.chained_call),
      $.unary_factor,
      $.literal,
    ),

    callable_expression: $ => choice(
      $.identifier,
      $.function_call,
      seq("(", $.expression, ")"),
    ),

    anonymous_function: $ => seq(
      choice($.function_signature, $.function_untyped_signature), optional($.type_annotation), "=>", $.expression,
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

    chained_call: $ => seq(
      '.',
      $.identifier,
      optional($.rule_parameters),
      choice($.array_accessor_args, $.function_call_args),
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

    unary_factor: $ => choice(
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
      $.expression,
      repeat(seq(",", $.expression)),
      optional(",")
    ),

    identifier: $ => choice(
      $.camel_identifier,
      $.snake_identifier,
      $.pascal_identifier
    ),

    literal: $ => choice(
      $.number,
      $.boolean_literal,
      $.graph_literal,
      $.ebnf_literal,
      $.string
    ),

    number: $ => choice(
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
      $.identifier, "->", $.expression,
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

    string: $ => choice(
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
      $.expression,
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

