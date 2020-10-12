        .ORIG x3000
MAIN    JSR FOO
        HALT

FOO     ADD R0, R0, #-1 ; Decrement R0.
        BRnz DONE       ; If R0 is positive...
        ST  R7, SAVER7  ; ...recurse...
        JSR FOO
        LD  R7, SAVER7  ; For all R0 >= 3, this "returns to itself", as SAVER7
DONE    RET             ;  has been overwritten by subsequent recursive calls.
SAVER7  .FILL x0000
        .END
