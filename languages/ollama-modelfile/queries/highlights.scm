; ; Keywords
; (instruction_keyword) @keyword

; ; Strings
; (quoted_string) @string
; (unquoted_string) @string

; ; Comments
; (comment) @comment

; ; ; Variables
; ; (variable) @variable

; ; Functions
; (function_call
;   name: (identifier) @function)

; ; Numbers
; (number) @number

; ; Parameters
; (parameter_name) @property

; ; Values
; (number) @number
; (boolean) @constant.builtin

; ; Variables
; ((unquoted_string) @variable
;  (#match? @variable "^\\${.*}$"))


; ; Special
; ((instruction_keyword) @keyword.directive
;  (#match? @keyword.directive "^(FROM|PARAMETER|TEMPLATE|SYSTEM|ADAPTER|LICENSE)$"))

; ; Heredoc
; (heredoc_start) @string.special
; (heredoc_content) @string
; (heredoc_end) @string.special

; ; Punctuation
; ["(" ")" "[" "]" "{" "}"] @punctuation.bracket
; ["," "."] @punctuation.delimiter

; ; Operators
; [
;   "="
;   "+"
;   "-"
;   "*"
;   "/"
;   "%"
; ] @operator

; [
;   ","
;   "."
; ] @punctuation.delimiter

(instruction_keyword) @keyword

(string) @string
(number) @number
(boolean) @constant.builtin
(heredoc) @string.special

(comment) @comment
