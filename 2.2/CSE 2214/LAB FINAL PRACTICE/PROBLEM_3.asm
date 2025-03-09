.MODEL SMALL
.STACK 100H
.DATA 
ARR DB 45,30,40,50,49
MAX DB 0 
2ND_MAX DB 0
.CODE
MAIN PROC 
    MOV AX,@DATA
    MOV DS,AX
    
    MOV SI,0
    MOV CX,5
    
    TRAVARSE:
    MOV AL,ARR[SI]  
    XOR AH,AH
    CMP AL,MAX
    JLE CHECK
    MOV BL,MAX
    MOV MAX,AL                             ;MAX
    JMP SKIP
    
    CHECK:                                  ;2ND MAX
    CMP AL,BL
    JLE SKIP
    MOV BL,AL
    
    SKIP: 
    
    INC SI
    LOOP TRAVARSE
    
    MOV AL,BL
    
    
    
    CALL OUTDEC
   
    
    MAIN ENDP

    MOV AH,4CH
    INT 21H 
    

OUTDEC PROC
    ;prints AX as a signed decimal integer
    ;input: AX 
    ;output: none 
    
    ;saving values of AX-DX as they will be changed during operations
    PUSH AX
    PUSH BX
    PUSH CX
    PUSH DX
    ;if AX<0 [i.e. negative number]
    OR AX,AX    
    JGE END_IF1
    ;then
    PUSH AX  ;to conserve the value of AX
    MOV DL,'-'
    MOV AH,2
    INT 21H
    POP AX   ;to restore the value of AX
    NEG AX   ;to get absolute value  -(-AX) = AX
    
    
    END_IF1:
    ;get decimal digits
    XOR CX,CX
    MOV BX,10D
    REPEAT1:
    XOR DX,DX
    DIV BX   ;AX/10
    PUSH DX  ;remainder (i.e. digit in LSB position)
    INC CX   ;to keep count of number of digits
    
    ;until value becomes 0
    OR AX,AX
    JNE REPEAT1
    
    
    ;convert digits to characters and print
    MOV AH,2
    ;for count times do
    PRINT_LOOP: 
    POP DX   
    OR DL,30H 
    INT 21H
    LOOP PRINT_LOOP
    ;end_for
    
    ;restoring values of AX-DX
    POP DX 
    POP CX
    POP BX
    POP AX
    
    RET
    OUTDEC ENDP 

END MAIN