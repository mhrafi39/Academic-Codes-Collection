.MODEL SMALL
.STACK 100H

.DATA
MSG DB 'NAME', 2 DUP(09H), 'AVERAGE', 0AH, 0DH, '$'
NEW DB 0AH, 0DH, '$'

CLASS   DB 'MARY ALLEN', 67, 45, 98, 33
        DB 'SCOTT BAYLIS', 70, 56, 87, 44
        DB 'GEORGE FRANK', 82, 72, 89, 40
        DB 'SAM WONG', 78, 76, 92, 60

.CODE
MAIN PROC
    ; INITIALIZING DS
    MOV AX, @DATA
    MOV DS, AX
    
    CALL RESET
    
    LEA DX, MSG
    MOV AH, 9
    INT 21H
    
    LEA SI, CLASS   ; FOR INDEXED ADDRESSING MODE
    
    OUTPUT:
    MOV CX, 10      ; 'MARY ALLEN' = 10 CHARS
    CALL AVERAGE
    
    MOV CX, 12      ; 'SCOTT BAYLIS' = 12 CHARS
    CALL AVERAGE
    
    MOV CX, 12      ; 'GEORGE FRANK' = 12 CHARS
    CALL AVERAGE
    
    MOV CX, 8       ; 'SAM WONG' = 8 CHARS
    CALL AVERAGE
    
    CALL EXIT    
ENDP MAIN

RESET PROC          ; FOR CLEARING REGISTERS
    XOR AX, AX
    XOR BX, BX
    XOR CX, CX
    XOR DX, DX
    RET
ENDP RESET

; AVERAGE(NAME.LENGTH())
AVERAGE PROC
    CALL NAMES      ; PRINTING CORRESPONDING NAME
    MOV DL, 09H
    MOV AH, 2
    INT 21H
    
    XOR AX, AX      ; CLEARING FOR STORING SUM
    
    MOV CX, 4       ; LOOPING FOR EACH MARKS
    
    SUM:
    XOR DX, DX      ; CLEARING FOR DIVISION PURPOSES
    XOR BX, BX      ; CLEARING FOR TAKING EACH NUMBER
    
    MOV BL, [SI]    ; CLASS[I]
    ADD AX, BX      ; AX += CLASS[I]
    
    INC SI          ; CLASS[I++]
    LOOP SUM
    
    MOV BX, 4       ; N = 4; 4 MARKS
    DIV BX          ; AVERAGE = SUM/N
  
    CALL OUTDEC     ; FOR PRINTING AX DECIMAL
    
    LEA DX, NEW
    MOV AH, 9
    INT 21H
    
    RET
ENDP AVERAGE

; NAMES(NAME.LENGTH)            
NAMES PROC
    MOV AH, 2
    
    PRINT:
    MOV DL, [SI]    ; NAME[I]
    INT 21H
    
    INC SI          ; NAME[I++]
    LOOP PRINT
    RET
ENDP NAME

EXIT PROC
    MOV AH, 4CH
    INT 21H
ENDP EXIT

OUTDEC PROC
    ;prints AX as a signed decimal integer
    ;input: AX 
    ;output: none
    PUSH AX
    PUSH BX
    PUSH CX
    PUSH DX
    ;if AX<0
    OR AX,AX
    JGE END_IF1
    ;then
    PUSH AX
    MOV DL,'-'
    MOV AH,2
    INT 21H
    POP AX
    NEG AX
    END_IF1:
    ;get decimal digits
    XOR CX,CX
    MOV BX,10D
    REPEAT1:
    XOR DX,DX
    DIV BX 
    PUSH DX
    INC CX
    ;until
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
    POP DX 
    POP CX
    POP BX
    POP AX
    RET
    OUTDEC ENDP
                
END MAIN