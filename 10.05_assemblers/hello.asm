; Prints "Hello, world!"

        .ORIG x3000     ; (no address)
        LEA R1, STRING  ; 0x3000: Get address of first char.
LOOP    LDR R0, R1, #0  ; 0x3001: Load current char.
        BRz DONE        ; 0x3002: While char is not null...
        OUT             ; 0x3003: ...print the char...
        ADD R1, R1, #1  ; 0x3004: ...increment address...
        BRnzp LOOP      ; 0x3005: ...loop back.
DONE    HALT            ; 0x3006: Halt.
                        ; (no address)
; 0x3007-0x3015:
STRING  .STRINGZ "Hello, world!\n"
        .END

; 1. Build the symbol table:
;    LOOP:   0x3001
;    DONE:   0x3006
;    STRING: 0x3007
; ...
; 2.3 Replace macros with assembly instructions:
;    "OUT"  -> "TRAP x21"
;    "HALT" -> "TRAP x25"
; 2.3 Replace label operands with offsets:
;    Line 4, "STRING" -> 0x3007 - 0x3001 = x0006
;    Line 6, "DONE"   -> 0x3006 - 0x3003 = x0003
;    Line 9, "LOOP"   -> 0x3001 - 0x3006 = x-0005
; ...
