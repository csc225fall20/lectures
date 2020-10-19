; Implements interrupt-driven keyboard input.
; NOTE: In order to execute this ISR, 0x0180 must be set to 0x0300 and bit 14
;       of the KBSR must be set to '1'.

        .ORIG x300      ; Place this service routine in the OS memory.

; NOTE: There is no need to label this subroutine or call it. By the time this
;       next line of code is executed, an interrupt must already have occurred.

        ST  R0, SAVER0  ; In an ISR, everything is callee-save.
        LDI R0, KBDR    ; There is no need to poll.

        OUT             ; Do something with the typed character.

        LD  R0, SAVER0
        RTI

; NOTE: As a limitation of the simulator, the *only* reliable way to debug an
;       ISR is to set a breakpoint on the "RTI".

SAVER0  .FILL x00
KBDR    .FILL xFE02

        .END
