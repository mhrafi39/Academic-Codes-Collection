.MODEL SMALL
.STACK 100H
.DATA
MSG1 DB "ENTER A HEXA DECIMAL DIGIT:$"
MSG2 DB 0AH,0DH, "DO YOU WANT TO DO IT AGAIN? PRESS:Y/N $"
MSG3 DB 0AH,0DH,"WRONG DIGIT ENTER 0-9 OR A-F$"   
MSG4 DB 0AH,0DH,"IN DECIMAL IT IS:$" 
NEXT DB 0AH,0DH,'$'
.CODE
MAIN PROC 
    JMP START
    AGAIN: 
    MOV AH,9
    LEA DX,NEXT
    INT 21H
    
    START:
    MOV AX,@DATA
    MOV DS,AX
    
    MOV AH,9
    LEA DX,MSG1
    INT 21H
    
    MOV AH,1
    INT 21H
    MOV BL,AL
    
    CMP BL,'0'
    JB WRONG
    CMP BL,'9'
    JG HEX
    
    DIGIT: 
    MOV AH,9
    LEA DX,MSG4
    INT 21H
    MOV DL,BL
    MOV AH,2
    INT 21H
    JMP GO
    
    HEX:
    CMP BL,'F'
    JG WRONG
    
    MOV AH,9
    LEA DX,MSG4
    INT 21H
    MOV AH,2
    MOV DL,49
    INT 21H
    SUB BL,17
    MOV DL,BL 
    MOV AH,2
    INT 21H
    
    GO:
    MOV AH,9
    LEA DX,MSG2
    INT 21H
    MOV AH,1
    INT 21H
    MOV CL,AL
    CMP CL,'Y'
    JE AGAIN
    CMP CL,'N'
    JE EXIT    
    
    WRONG:
    MOV AH,9
    LEA DX,MSG3
    INT 21H
    JMP AGAIN
    
    EXIT:
    MOV AH,4CH
    INT 21H;
    
    MAIN ENDP
END MAIN