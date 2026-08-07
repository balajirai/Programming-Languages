; Write a program to count even and odd numbers in a series of numbers from location 2000H to 2009H
; Store the Even count at 200AH and Odd count at 200BH


    LXI H, 2000H      ; SOURCE LOCATION IN HL PAIR
    MVI C, 0AH        ; COUNT (10 NUMBERS IN THE SERIES)
    MVI D, 00H        ; CURRENT EVEN COUNT
    MVI B, 00H        ; CURRENT ODD COUNT
			
BACK:	MOV A, M      ; MOVE DATA INTO A
    RRC               ; ROTATE RIGHT (CY = LSB) 
    JC ODD            ; NUMBER IS ODD, JUMP
    INR D             ; NUMBER IS EVEN, INCREMENT EVEN COUNT
ODD:  INR B           ; INCREMENT THE ODD COUNT
SKIP: INX H           ; INCREMENT HL PAIR TO POINT TO NEXT ADDRESS
    DCR C
    JNZ BACK
    
    MOV M, D          ; STORE THE EVEN COUNT
    INX H
    MOV M, B
    
    HLT
