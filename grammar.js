module.exports = grammar({
  name: 'ollama_modelfile',

  rules: {
    source_file: $ => repeat($._definition),

    _definition: $ => choice(
      $.instruction,
      $.comment
    ),

    instruction: $ => seq(
      field('keyword', $.instruction_keyword),
      optional(field('value', $._value))
    ),

    instruction_keyword: $ => choice(
      'FROM',
      'PARAMETER',
      'TEMPLATE',
      'SYSTEM',
      'ADAPTER',
      'LICENSE'
    ),

    _value: $ => choice(
      $.string,
      $.number,
      $.boolean,
      $.heredoc
    ),

    string: $ => choice(
      seq('"', repeat(choice(/[^"\\]/, /\\./)), '"'),
      seq("'", repeat(choice(/[^'\\]/, /\\./)), "'")
    ),

    number: $ => /\d+(\.\d+)?/,

    boolean: $ => choice('true', 'false'),

    heredoc: $ => seq(
      '"""',
      repeat(choice(/[^"]/, /"[^"]/, /""[^"]/)),
      '"""'
    ),

    comment: $ => token(seq('#', /.*/))
  }
});
