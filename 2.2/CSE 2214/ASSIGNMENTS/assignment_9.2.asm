.model small
.stack 100h

.data
    M DW 30
    N DW 10
    GCD DW ?
    MSG DB 'GCD is: $'

.code
MAIN PROC
    MOV AX, @data
    MOV DS, AX

    MOV AX, M
    MOV BX, N

FIND_GCD:
    XOR DX, DX
    DIV BX
    CMP DX, 0
    JE DONE
    MOV AX, BX
    MOV BX, DX
    JMP FIND_GCD

DONE:
    MOV GCD, BX

    MOV AH, 09h
    LEA DX, MSG
    INT 21h

    MOV AX, GCD
    CALL PRINT_NUM

    MOV AH, 4Ch
    INT 21h

MAIN ENDP

PRINT_NUM PROC
    MOV CX, 0
    MOV BX, 10

EXTRACT_DIGITS:
    XOR DX, DX
    DIV BX
    PUSH DX
    INC CX
    CMP AX, 0
    JNE EXTRACT_DIGITS

PRINT_DIGITS:
    POP DX
    ADD DL, '0'
    MOV AH, 02h
    INT 21h
    LOOP PRINT_DIGITS

    RET
PRINT_NUM ENDP

END MAIN