[
    "unit"
    "expose"
    "as"
] @keyword

(encap) @punctuation.bracket

[
    ","
    "::"
] @punctuation.delimiter

(meta_attr) @attribute

(expose unit: (ident))
(unit name: (ident) @function)

(cmd_call ns: (ident) @namespace name: (ident) @function.call)
(cmd_call name: (ident) @function.call)
(cmd_call name: ("~") @function.call)
(cmd_call name: ("@") @function.call)

(block name: (ident) @function.call)

(str_lit) @string
