.MODEL SMALL
.STACK 100H
.DATA
    input DB 100 DUP('$')
    output DB 100 DUP('$')
    prmpt DB 'Enter text: $'
    res DB 0ah,0dh, 'Reversed text: $'

.CODE
MAIN PROC
    MOV AX, @DATA
    MOV DS, AX
    MOV ES, AX

    LEA DX, prmpt
    MOV AH, 09H
    INT 21H

    LEA DX, input
    MOV AH, 0AH
    INT 21H

    LEA SI, input + 2
    LEA DI, output

PROCESS_WORD:
    MOV CX, 0

NEXT_CHAR:
    LODSB
    CMP AL, ' '
    JE REVERSE_WORD
    CMP AL, 0Dh
    JE REVERSE_LAST_WORD
    INC CX
    PUSH AX
    JMP NEXT_CHAR

REVERSE_WORD:
    POP AX
    STOSB
    LOOP REVERSE_WORD
    MOV AL, ' '
    STOSB
    JMP PROCESS_WORD

REVERSE_LAST_WORD:
    POP AX
    STOSB
    LOOP REVERSE_LAST_WORD
    MOV AL, '$'
    STOSB

    LEA DX, res
    MOV AH, 09H
    INT 21H

    LEA DX, output
    MOV AH, 09H
    INT 21H

    MOV AH, 4CH
    INT 21H

MAIN ENDP
END MAIN