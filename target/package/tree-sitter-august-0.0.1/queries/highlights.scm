[
    "#pragma"
    "#link"
    "Task"
    "cmddef"
] @keyword

[
    "cmddef"
] @keyword.function

[
    "("
    ")"
    "["
    "]"
    "{"
    "}"
] @punctuation.bracket

[
    ";"
    "."
    ","
] @punctuation.delimiter

(namespace_definition namespace: (identifier)) @namespace

(link_definition) @include

(pragma_definition) @define

(task_definition task_name: (identifier) @function.method) @function
(cmddef_definition cmddef_name: (identifier) @function.method) @function

(cmd_call) @function.call


(integer_literal) @number
(string_literal) @string
(boolean_literal) @boolean
