; Write a program to add two 8-bit numbers stored at the memory location 2000H and 2001H
; Store the sum at the memory location 2002H.
; Store the carry at the memory location 2003H.


; Method 2 : Using M (HL pair) (Size of the program = 17 Byte)

    MVI C 00H
    LXI H 2000H     ; HL = 2000H, SO M = [2000H]
    MOV A M
    INX H           ; HL = 2001H, SO M = [2001H]
    ADD M
    JNC SKIP
    INC C
SKIP:INX H          ; HL = 2002H, SO M = [2002H]
    MOV M A         ; STORE SUM
    INX H           ; HL = 2003H, SO M = [2003H]
    MOV M C         ; STORE CARRY
    HLT
