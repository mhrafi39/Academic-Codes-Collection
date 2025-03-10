.MODEL SMALL
.STACK 100H
.DATA
PROMPT DB "ENTER A CHARACTER: $" 
OUTPUT DB 0AH,0DH,"OUTPUT:$"
.CODE
MAIN PROC 
    MOV AX,@DATA
    MOV DS,AX
    
    
    MOV AH,9 
    LEA DX,PROMPT
    INT 21H
    
    
    MOV AH,1
    INT 21H
    
    MOV CX,8
    XOR BL,BL
    
    LOOP_1:
    SHL AL,1
    RCR BL,1
    LOOP LOOP_1 
    
    
    MOV AH,9
    LEA DX,OUTPUT
    INT 21H
    
    MOV DL,BL
    
    MOV AH,2
    INT 21H
    
    
    MOV AH,4CH
    INT 21H
    
    MAIN ENDP
END MAIN
    