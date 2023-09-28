module.exports = grammar({
  name: "august",

  rules: {
    // TODO: add the actual grammar rules
    source_file: ($) => repeat($._defintion),
    _defintion: ($) =>
      choice(
        $.pragma_definition,
        $.link_definition,
        $.namespace_definition,
        $.task_definition,
        $.cmddef_definition
      ),

    namespace_definition: ($) => seq("@", field("namespace", $.identifier)),

    link_definition: ($) => seq("#link", field("module_name", $.identifier)),

    pragma_definition: ($) =>
      seq(
        "#pragma",
        field("pragma_job", choice("build", "test")),
        field("job_name", $.identifier)
      ),

    task_definition: ($) =>
      seq(
        "Task",
        field("task_name", $.identifier),
        optional(field("task_deps", $.task_deps)),
        "{",
        repeat($.cmd_call),
        "}"
      ),

    task_deps: ($) =>
      seq(
        ":",
        "[",
        repeat(seq(field("dep_name", $.identifier), optional(","))),
        "]"
      ),

    cmddef_definition: ($) =>
      seq(
        "cmddef",
        field("cmddef_name", $.identifier),
        "{",
        repeat($.cmd_call),
        "}"
      ),

    cmd_call: ($) => choice($.cmd_internal, $.cmd_local, $.cmd_external),

    cmd_internal: ($) =>
      seq(field("cmd_name", $.identifier), "(", repeat($.cmd_arg), ")", ";"),

    cmd_local: ($) => seq(field("cmd_name", $.identifier), ";"),

    cmd_external: ($) =>
      seq(
        field("module_name", $.identifier),
        ".",
        field("cmd_name", $.identifier),
        ";"
      ),

    cmd_arg: ($) =>
      seq(
        choice($.string_literal, $.integer_literal, $.boolean_literal),
        optional(",")
      ),

    string_literal: ($) => /".*"/,
    integer_literal: ($) => /\d+/,
    boolean_literal: ($) => choice("True", "False", "true", "false"),
    identifier: ($) => /[A-Za-z-_~]+/,
    encap: ($) => /[\(\)\[\]{}<>]/,
  },
});
