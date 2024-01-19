module.exports = grammar({
  name: "august",

  rules: {
    source_file: ($) => repeat($._defintion),
    _defintion: ($) =>
      choice(
        $.unit,
        $.expose
      ),

    expose: ($) => seq("expose", field("unit", $.ident), "as", $.ident),

    meta_attr: ($) => seq("@", $.ident),

    unit: ($) =>
      seq(
        "unit",
        field("name", $.ident),
        "{",
        repeat($.cmd_call),
        "}"
      ),

    cmd_call: ($) => seq(optional(seq(field("ns", $.ident), "::")), field("name", choice("~", "@", $.ident)), "(", repeat($.cmd_arg), ")"),

    cmd_arg: ($) =>
      seq(
        choice($.meta_attr, $.str_lit, $.ident, $.raw_ident),
        optional(",")
      ),

    str_lit: ($) => /".*"/,
    ident: ($) => /[A-Za-z-_]+/,
    raw_ident: ($) => /[!-&*-+--.0-;=?-Z^-z|]+/,
    encap: ($) => /[\(\)\[\]{}<>]/,
  },
});
