module.exports = grammar({
  name: "august",

  rules: {
    source_file: ($) => repeat($._defintion),
    _defintion: ($) =>
      choice(
        $.unit,
        $.expose,
        $.cmd_call
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

    cmd_call: ($) => choice(
      seq(optional(seq(field("ns", $.ident), "::")), field("name", choice("~", "@", $.ident)), "(", repeat(seq($.cmd_arg, optional(","))), ")"),
      $.block
    ),

    cmd_arg: ($) => choice($.meta_attr, $.str_lit, $.ident, $.raw_ident),

    block: $ => seq(field("name", $.ident), "{", choice(repeat($.cmd_call)), "}"),

    str_lit: ($) => /"[^"]*"/,
    ident: ($) => /[A-Za-z-_]+/,
    raw_ident: ($) => /[!-&*-+--.0-;=?-Z^-z|]+/,
    encap: ($) => /[\(\)\[\]{}<>]/,
  },
});

// From tree-sitter-rust
/**
 * Creates a rule to match one or more of the rules separated by the separator.
 *
 * @param {RuleOrLiteral} sep - The separator to use.
 * @param {RuleOrLiteral} rule
 *
 * @return {SeqRule}
 *
 */
function sepBy1(sep, rule) {
  return seq(rule, repeat(seq(sep, rule)));
}


/**
 * Creates a rule to optionally match one or more of the rules separated by the separator.
 *
 * @param {RuleOrLiteral} sep - The separator to use.
 * @param {RuleOrLiteral} rule
 *
 * @return {ChoiceRule}
 *
 */
function sepBy(sep, rule) {
  return optional(sepBy1(sep, rule));
}
