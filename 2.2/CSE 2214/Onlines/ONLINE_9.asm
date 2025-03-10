.MODEL SMALL
.STACK 100H
.DATA
A DW 1
B DW 2
RES DB "RESULT IS: $"
.CODE
MAIN PROC
    MOV AX,@DATA
    MOV DS,AX
    
    MOV AX,B
    MOV BX,4
    IMUL BX
    
    MOV CX,AX                                         
    
    MOV AX,A
    MOV BX,3
    IMUL BX
    
    SUB CX,AX
    MOV A,CX 
    
    MOV AH,9
    LEA DX,RES
    INT 21H
    
    
    MOV AX,A  
    
    
    
    CALL PRINT   
    
    
    
    MOV AH,4CH
    INT 21H
    
    MAIN ENDP
PRINT PROC
    MOV CX,0
    MOV BX,10
    
    DIGIT:
    XOR DX,DX
    DIV BX
    ADD DL,'0'
    PUSH DX
    INC CX
    CMP AX,0
    JNE DIGIT 
        
    
    OUTPUT:
    MOV AH,2
    POP DX
    INT 21H
    LOOP OUTPUT
    
    PRINT ENDP
END MAIN