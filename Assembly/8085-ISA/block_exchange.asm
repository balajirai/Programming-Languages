; Write a program to exchange a block of 10 Byte of data from location 2000H to location 3000H 
; [Means that exchange the data from (2000H to 2009H) to (3000H to 3009H)]


    LXI B, 2000H       ; SOURCE (LOAD SOURCE ADDRESS IN "BC" PAIR)
    LXI D, 3000H       ; DESTINATION (LOAD DESTINATION ADDRESS IN "DE" PAIR)
    MVI L, 0AH         ; COUNT FOR LOOP (0AH = 10 -> 10 BYTE)

BACK: LDAX B           ; LOAD THE DATA IN REGISTER "A" PRESENT AT LOCATION POINTED BY "BC" PAIR
    MOV H, A           ; MOVE DATA FROM A TO H
    
    LDAX D             ; LOAD THE DATA IN REGISTER "A" PRESENT AT LOCATION POINTED BY "DE" PAIR
    STAX B             ; STORE THE DATA FROM REGISTER "A" AT LOCATION POINTED "BC" PAIR
    
    MOV A, H           ; MOVE DATA FROM H TO A
    STAX D             ; STORE THE DATA FROM REGISTER "A" AT LOCATION POINTED "DE" PAIR 
    
    INX B
    INX D
    
    DCR L
    JNZ BACK
    
    HLT
