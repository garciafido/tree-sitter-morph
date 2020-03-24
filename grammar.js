const PREC = {
  COMMENT: 1, // Prefer comments over regexes
  STRING: 2,  // In a string, prefer string characters over comments

  ESCAPE: 1,

  RELATIONAL: 1,
  FACTOR: 10,
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

  supertypes: $ => [
    $._arithmetic_expression,
    $._boolean_expression,
    $._expression,
    $._literal,
    $._number,
    $._string,
  ],

  inline: $ => [
    $.factor,
    $.identifier,
  ],

  rules: {

      //--------------
      // Morph grammar
      //--------------

      program: $ => repeat($.block),

      block: $ => seq(
        repeat($.import),
        choice(
          $.class,
          $.function_definition,
          $.enum_definition,
          $.constant_declaration,
          $.newclass,
          $.foreach_function,
          $.if_function,
        )
      ),

      import: $ => seq(
        "from", optional(choice(".", repeat("../"))), $.identifier,
        "import", $.identifier, repeat(seq(",", $.identifier))
      ),

      class: $ => seq(
        repeat($.decorator),
        optional("abstract"),
        "class",
        $.identifier,
        optional(seq("extends", $.identifier)),
        seq('{', repeat($.class_property), '}'),
      ),

      decorator: $ => seq(
        $.decorator_identifier,
        optional($.decorator_args),
      ),

      decorator_args: $ => seq(
        "(",
        $.expression_args,
        ")"
      ),

      filterable_type: $ => seq(
        $.identifier, optional(seq("[", $.anonymous_function, "]")),
      ),

      class_property: $ => seq(
        repeat($.decorator),
        $.identifier,
        optional(choice("!", "[]")), ":", $.types
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
        "=>", $._expression,
      ),

      typed_args: $ => seq(
        $.typed_identifier,
        repeat(seq(",", $.typed_identifier)),
      ),

      enum_definition: $ => seq(
        "enum", $.identifier, ":", $.identifier, "{",  $._literal, "}",
      ),

      constant_declaration: $ => seq(
        "const", $.identifier, optional(seq(":", $.identifier)), "=", $._expression
      ),

      newclass: $ => seq(
        repeat($.decorator),
        "newclass", $.identifier,
        "derives", $.filterable_type,
        repeat(seq("*", $.filterable_type)),
        "{", repeat($.newclass_mutation), "}"
      ),

      newclass_mutation: $ => seq(
        repeat($.decorator),
        optional("new"),
        $.identifier, ":", $._expression,
      ),

      anonymous_function: $ => seq(
        "(", optional(choice($.args, $.typed_args)), ")", optional(seq(":", $.identifier)), "=>", $._expression,
      ),

      args: $ => seq(
        $.identifier, repeat(seq(",", $.identifier)),
      ),

      typed_identifier: $ => seq(
        $.identifier, ":", $.identifier,
      ),

      foreach_function: $ => seq(
        "foreach",
        "(",
        $.foreach_iteration,
        repeat(seq(",", $.foreach_iteration)),
        ")",
        "=>", $._expression,
      ),

      foreach_iteration: $ => seq(
        $.identifier, "of", $.filterable_type,
      ),

      if_function: $ => seq(
        "if", "(", $._expression, ")", "=>", $._expression
      ),

      //------------
      // Expressions
      //------------

      _expression: $ =>
        $._boolean_expression,

      _boolean_expression: $ =>
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

      negation_expression: $ => prec.left(PREC.FACTOR, choice(
          seq("not", $.negation_expression),
          $.relational_expression)),

      relational_expression: $ => prec.left(PREC.RELATIONAL, choice(
          seq(
            $.relational_expression,
            $.relational_operator,
            $._arithmetic_expression
          ),
          $._arithmetic_expression)),

      _arithmetic_expression: $ =>
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
          $._literal,
      ),

      non_literal_factor: $ => choice(
          $.left_arrow_accessor,
          $.right_arrow_accessor,
          $.dot_accessor,
          $.identifier,
          $.function_call,
          $.array_accessor,
          seq("(", $.expression_args, ")"),
          $.list,
          $.unary_expression),

      left_arrow_accessor: $ => seq(
        $.non_literal_factor, "->", $.identifier),

      right_arrow_accessor: $ => seq(
        $.non_literal_factor, "<-", $.identifier),

      dot_accessor: $ => seq(
        $.non_literal_factor, ".", $.identifier,
      ),

      function_call: $ => prec.left(PREC.FACTOR, seq(
          $.non_literal_factor,
          "(",
              optional($.expression_args),
          ")")),

      array_accessor: $ => prec.left(PREC.FACTOR, seq(
          $.non_literal_factor,
          "[",
              $.expression_args,
          "]")),

      unary_expression: $ => prec.left(PREC.FACTOR, seq(
          $.unary_operator,
          $.factor)),

      list: $ => seq(
          "[", optional($.expression_args), "]"),

      expression_args: $ => seq(
        $._expression,
        optional(seq(",", repeat($._expression))),
        optional(",")
      ),

      identifier: $ => choice(
          $.camel_identifier,
          $.snake_identifier,
          $.pascal_identifier),

      //---------
      // Literals
      //---------

      _literal: $ => choice(
          $._number,
          $.false,
          $.true,
          $.graph_literal,
          $._string),

      graph_literal: $ => seq(
        choice($.identifier, $.typed_identifier),
        "{", repeat($.graph_literal_property), "}",
      ),

      graph_literal_property: $ => seq(
        $.identifier, ":", $._expression,
      ),

      false: $ => "false",

      true: $ => "true",

      _number: $ => choice(
          $.integer,
          $.float),

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
  }
);