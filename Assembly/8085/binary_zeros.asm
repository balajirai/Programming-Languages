; Find the number of 0’s in the binary form of a given number.
; Number is present at location 2000H
; Store the result/count at 2001H


    LDA 2000H        ; LOAD THE DATA PRESENT AT 2000H INTO ACCUMULATOR
    MVI B, 00H       ; CURRENT COUNT OF 0'S
    MVI C, 08H       ; BITS/DIGITS IN A BINARY (FOR USING LOOP)
			
BACK: RRC            ; RIGHT ROTATE (IT WILL BRING CARRY = LSB)
    JC SKIP          ; JUMP IF CARRY (JUMP WHEN CY = 1)
    INR B            ; INCREMENT THE COUNT OF 0'S
SKIP: DCR C
    JNZ BACK
    
    MOV A, B         ; TAKE RESULT INTO A
    STA 2001H        ; STORE THE RESULT IN THE LOCATION  2001
    
    HLT