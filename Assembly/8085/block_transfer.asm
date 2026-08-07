; Write a program to transfer a block of 10 Byte of data from location 2000H to location 3000H
; [Means that transfer the data from (2000H to 2009H) to (3000H to 3009H)]


    LXI B, 2000H       ; SOURCE (LOAD SOURCE ADDRESS IN "BC" PAIR)
    LXI D, 3000H       ; DESTINATION (LOAD DESTINATION ADDRESS IN "DE" PAIR)
    MVI L, 0AH         ; COUNT FOR LOOP (0AH = 10 -> 10 BYTE)

BACK: LDAX B           ; LOAD THE DATA IN REGISTER "A" PRESENT AT LOCATION POINTED BY "BC" PAIR
    STAX D             ; STORE THE DATA FROM REGISTER "A" AT LOCATION POINTED "DE" PAIR 
    INX B
    INX D
    DCR L
    JNZ BACK
    
    HLT
