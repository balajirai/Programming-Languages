; Write a program to add a series of number from location 2000H to 2009H.
; Store the sum at 200AH and carry at 200BH


    LXI H, 2000H
    MVI C, 0AH         ; COUNT = 10 (10 NUMBERS IN THE SERIES)
    MVI A, 00H         ; SUM
    MVI B, 00H         ; CARRY
			
BACK: ADD M            ; A = A + M
    JNC SKIP           ; SKIP THE INCREMENT OF B IF NO CARRY
    INR B              ; INCREMENT B IF THERE IS CARRY
SKIP: INX H            ; UPDATE THE HL PAIR POINTER (I.E. M)
    DCR C
    JNZ BACK
    
    MOV M, A           ; STORE THE SUM IN LOCATION CURRENTLY POINTED BY HL (FROM A)
    INX H
    MOV M, B           ; STORE THE CARRY IN LOCATION CURRENTLY POINTED BY HL (FROM B)
    
    HLT
