module.exports = grammar({
  name: 'morph',

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

      identifier: $ => 'ident',
      decorator_identifier: $ => '@deco',
      expression: $ => 'expr',
      expression_list: $ => seq('e1', ',', 'e2'),
      typed_args: $ => seq('e1: t1', ',', 'e2: t2'),
  }
});

