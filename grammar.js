const PREC = {
  COMMENT: 1, // Prefer comments over regexes
  STRING: 2,  // In a string, prefer string characters over comments
};

module.exports = grammar({
  name: 'morph',

  externals: $ => [
    // $._automatic_semicolon,
    // $._template_chars
  ],

  extras: $ => [
    $.comment,
    /[\s\uFEFF\u2060\u200B\u00A0]/
  ],

  conflicts: ($, previous) => previous.concat([
    [$.multiplicative_expression, $.additive_expression],
    [$.additive_expression, $.arithmetic_expression],
    [$.negation_expression, $.relational_expression],
    [$.conjuction_expression, $.disjunction_expression],
    [$.disjunction_expression, $.boolean_expression],
    [$.function_call, $.bracket_accesor],
    [$.non_literal_factor, $.factor],
    [$.non_literal_factor, $.args],
  ]),
  //
  // supertypes: $ => [
  // ],
  //
  // inline: $ => [
  // ],

  rules: {
      //--------------
      // Morph grammar
      //--------------

      program: $ => repeat($.block),

      block: $ => seq(
        repeat($.import),
        choice(
          $.node,
          $.function_definition,
          $.enum_definition,
          $.constant_declaration,
          $.morph_declaration,
          $.if_function,
        )
      ),

      import: $ => seq(
        "from", optional(choice(".", repeat("../"))), $.identifier,
        "import", $.identifier, repeat(seq(",", $.identifier)),
      ),

      node: $ => seq(
        repeat($.decorator),
        optional("abstract"),
        "node",
        $.identifier,
        optional(seq("extends", $.identifier)),
        seq('{', repeat($.node_edge), '}'),
      ),

      decorator: $ => seq(
        $.decorator_identifier,
        optional($.decorator_args),
      ),

      decorator_args: $ => seq(
        "(",
        optional($.expression_list),
        ")"
      ),

      node_edge: $ => seq(
        repeat($.decorator),
        $.identifier,
        optional(choice("!", "[]")), "->", $.types
      ),

      types: $ => seq(
        $.identifier,
        repeat(seq("|", $.identifier)),
      ),

      type_definition: $ => seq(
        "type",
        $.identifier, "=", $.types,
      ),

      function_definition: $ => seq(
        "function", $.identifier, "(", $.typed_args, ")",
        optional(seq(":", $.identifier)),
        "=>", $.expression,
      ),

      enum_definition: $ => seq(
        "enum", $.identifier, ":", $.identifier, "{",  repeat($.identifier), "}",
      ),

      constant_declaration: $ => seq(
        "const", $.identifier, optional(seq(":", $.identifier)), "=", $.expression
      ),

      morph_declaration: $ => seq(
        repeat($.decorator),
        "morph", $.identifier,
        "(", $.expression, ")",
        "{", repeat($.morph_mutation), "}"
      ),

      morph_mutation: $ => seq(
        repeat($.decorator),
        optional("new"),
        $.identifier, ":", $.expression,
      ),

      if_function: $ => seq(
        "if", "(", $.expression, ")", "=>", $.expression
      ),

      //------------
      // Expressions
      //------------

      // identifier: $ => 'ident',
      // decorator_identifier: $ => '@deco',
      // expression: $ => 'expr',
      // expression_list: $ => seq('e1', ',', 'e2'),
      // typed_args: $ => seq('e1: t1', ',', 'e2: t2'),


      expression: $ =>
        $.boolean_expression,

      boolean_expression: $ =>
        $.disjunction_expression,

      disjunction_expression: $ => choice(
          seq(
            $.disjunction_expression,
            $.disjunction_operator,
            $.conjuction_expression
          ),
          $.conjuction_expression),

      conjuction_expression: $ => choice(
          seq(
            $.conjuction_expression,
            $.conjuction_operator,
            $.negation_expression
          ),
         $.negation_expression),

      negation_expression: $ => choice(
          seq("not", $.negation_expression),
          $.relational_expression),

      relational_expression: $ => choice(
          seq(
            $.relational_expression,
            $.relational_operator,
            $.arithmetic_expression
          ),
          $.arithmetic_expression),

      arithmetic_expression: $ =>
        $.additive_expression,

      additive_expression: $ => choice(
          seq(
            $.additive_expression,
            $.additive_operator,
            $.multiplicative_expression
          ),
          $.multiplicative_expression),

      multiplicative_expression: $ => choice(
          seq(
            $.multiplicative_expression,
            $.multiplicative_operator,
            $.factor
          ),
          $.factor),

      factor: $ => choice(
            $.non_literal_factor,
            $.literal,
      ),

      callable_expression: $ => choice(
          $.identifier,
          $.bracket_accesor,
          $.function_call,
          seq("(", $.expression, ")"),
      ),

      non_literal_factor: $ => choice(
          $.identifier,
          $.anonymous_function,
          $.list,
          $.bracket_accesor,
          $.function_call,
          seq($.non_literal_factor, $.chained_call),
          $.unary_expression),

      anonymous_function: $ => seq(
        "(", optional(choice($.args, $.typed_args)), ")", optional(seq(":", $.identifier)), "=>", $.expression,
      ),

      typed_args: $ => seq(
        $.typed_identifier,
        repeat(seq(",", $.typed_identifier)),
      ),

      args: $ => seq(
        $.identifier, repeat(seq(",", $.identifier)),
      ),

      typed_identifier: $ => seq(
        $.identifier, ":", $.identifier,
      ),


      function_call: $ => seq(
          $.callable_expression,
          optional($.rule_expression),
          choice($.array_accessor_args, $.function_call_args),
      ),

      bracket_accesor: $ => seq(
          $.callable_expression,
          $.array_accessor_args,
      ),

      chained_call: $ => seq(
          '.',
          $.identifier,
          optional($.rule_expression),
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

      rule_expression: $ => seq(
        '<', $.expression, '>'),

      unary_expression: $ => seq(
          $.unary_operator,
          $.factor),

      list: $ => seq(
          "[", optional($.expression_list), "]"),

      expression_list: $ => seq(
        $.expression,
        repeat(seq(",", $.expression)),
        optional(",")
      ),

      identifier: $ => choice(
          $.camel_identifier,
          $.snake_identifier,
          $.pascal_identifier),

      //---------
      // Literals
      //---------

      literal: $ => choice(
          $.number,
          $.false,
          $.true,
          $.graph_literal,
          $.ebnf_literal,
          $.string),

      graph_literal: $ => seq(
        choice($.identifier, $.typed_identifier),
        "{", repeat($.graph_literal_property), "}",
      ),

      graph_literal_property: $ => seq(
        $.identifier, ":", $.expression,
      ),

      false: $ => "False",

      true: $ => "True",

      number: $ => choice(
          $.integer,
          $.float),

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
        // $._template_chars,
        $.escape_sequence,
        $.template_substitution,
      )),
      '`'
    ),

    ebnf_literal: $ => seq(
      'ebnf`',
      repeat(choice(
        // $._template_chars,
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

      //-------
      // Tokens
      //-------

      camel_identifier: $ => token(/[a-z][a-zA-Z0-9_]*/),

      snake_identifier: $ => token(/[a-z_][a-z0-9_]*/),

      pascal_identifier: $ => token(/[A-Z][a-zA-Z0-9_]*/),

      decorator_identifier: $ => token(/[@][a-z_][a-zA-Z0-9_]*/),

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

      additive_operator: $ => token(choice(
          "+",
          "-",
          "|")),

      disjunction_operator: $ => token(
          "||"),

      conjuction_operator: $ => token(
          "&&"),

      unary_operator: $ => token(choice(
          "+",
          "-")),

      multiplicative_operator: $ => token(choice(
          "*",
          "/",
          "%",
          "&")),

      relational_operator: $ => token(choice(
          "==",
          "!=",
          "<",
          ">",
          ">=",
          "<=",
          "in",
          seq("not", "in"),
          "is",
          seq("is", "not"))),


  }
});

