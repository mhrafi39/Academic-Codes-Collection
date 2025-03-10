.MODEL SMALL
.STACK 100H
.DATA
FIRST DB "ENTER FIRST: $"
SECOND DB 0AH,0DH,"ENTER SECOND: $"
RESULT DB 0AH,0DH,"ORDER: $"
.CODE
MAIN PROC
    
    MOV AX,@DATA
    MOV DS,AX
    
    
    MOV AH,9
    LEA DX,FIRST
    INT 21H
    
    MOV AH,1
    INT 21H
    MOV BL,AL
    
    MOV AH,9
    LEA DX,SECOND
    INT 21H
    
    MOV AH,1
    INT 21H
    MOV CL,AL
    
    CMP BL,CL
    JG LESS
    
    
    
    GREATER:
    MOV AH,9
    LEA DX,RESULT
    INT 21H 
    
    MOV AH,2
    MOV DL,BL
    INT 21H
    
    MOV AH,2
    MOV DL,' '
    INT 21H
    
    MOV AH,2
    MOV DL,CL
    INT 21H
    JMP EXIT
    
    LESS:
    MOV AH,9
    LEA DX,RESULT
    INT 21H
    MOV AH,2
    MOV DL,CL
    INT 21H
    
    MOV AH,2
    MOV DL,' '
    INT 21H
    
    MOV AH,2
    MOV DL,BL
    INT 21H
    
    EXIT:
    MOV AH,4CH
    INT 21H
   
    MAIN ENDP
END MAIN