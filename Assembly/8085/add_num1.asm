; Write a program to add two 8-bit numbers stored at the memory location 2000H and 2001H
; Store the sum at the memory location 2002H.
; Store the carry at the memory location 2003H.


; Method 1 : Using LDA, STA (Size of the program = 22 Byte)

    MVI C 00H
    LDA 2000H
    MOV B A
    LDA 2001H
    ADD B
    JNC SKIP
    INC C
SKIP:STA 2002H
    MOV A C
    STA 2003H
    HLT
