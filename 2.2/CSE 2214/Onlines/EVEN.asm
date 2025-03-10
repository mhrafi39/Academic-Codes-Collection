.MODEL SMALL
.STACK 100H
.DATA
.CODE
MAIN PROC
    MOV BL,48
    
    REPEAT:
    CMP BL,56
    JG EXIT
    
    MOV AH,2
    MOV DL,BL
    INT 21H
    MOV AH,2
    MOV DL,' '
    INT 21H
    
    ADD BL,2
    LOOP REPEAT
    
    
    EXIT:
    MOV AH,4CH
    INT 21H
   
    MAIN ENDP
END MAIN