; Keywords
(instruction_keyword) @keyword

; Strings
(quoted_string) @string
(unquoted_string) @string

; Comments
(comment) @comment

; Variables
(variable) @variable

; Functions
(function_call
  name: (identifier) @function)

; Numbers
(number) @number

; Operators
[
  "="
  "+"
  "-"
  "*"
  "/"
  "%"
] @operator

; Punctuation
[
  "("
  ")"
  "["
  "]"
  "{"
  "}"
] @punctuation.bracket

[
  ","
  "."
] @punctuation.delimiter
