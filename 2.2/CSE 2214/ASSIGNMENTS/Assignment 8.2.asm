.MODEL SMALL
.STACK 100H
.DATA
    prompt DB 'Enter an expression: $'
    correct DB 0ah, 0dh, 'Expression is correct.$'
    tooManyLeft DB 0ah, 0dh, 'Too many left brackets.$'
    mismatch DB 0ah, 0dh, 'Mismatched brackets. Start over.$'
    continuePrompt DB 0ah, 0dh, 'Do you want to continue? (Y/N): $'

.CODE
MAIN PROC
    MOV AX, @DATA
    MOV DS, AX

START:
    MOV SP, 100H

    LEA DX, prompt
    MOV AH, 09H
    INT 21H

PROCESS_INPUT:
    MOV AH, 01H
    INT 21H

    CMP AL, 0Dh
    JE CHECK_STACK

    CMP AL, '('
    JE PUSH_BRACKET
    CMP AL, '['
    JE PUSH_BRACKET
    CMP AL, '{'
    JE PUSH_BRACKET

    CMP AL, ')'
    JE POP_ROUND
    CMP AL, ']'
    JE POP_SQUARE
    CMP AL, '}'
    JE POP_CURLY

    JMP PROCESS_INPUT

PUSH_BRACKET:
    PUSH AX
    JMP PROCESS_INPUT

POP_ROUND:
    CMP SP, 100H
    JE MISMATCH_ERROR
    POP BX
    CMP BL, '('
    JNE MISMATCH_ERROR
    JMP PROCESS_INPUT

POP_SQUARE:
    CMP SP, 100H
    JE MISMATCH_ERROR
    POP BX
    CMP BL, '['
    JNE MISMATCH_ERROR
    JMP PROCESS_INPUT

POP_CURLY:
    CMP SP, 100H
    JE MISMATCH_ERROR
    POP BX
    CMP BL, '{'
    JNE MISMATCH_ERROR
    JMP PROCESS_INPUT

MISMATCH_ERROR:
    LEA DX, mismatch
    MOV AH, 09H
    INT 21H
    JMP ASK_CONTINUE

CHECK_STACK:
    CMP SP, 100H
    JNE TOO_MANY_LEFT

    LEA DX, correct
    MOV AH, 09H
    INT 21H
    JMP ASK_CONTINUE

TOO_MANY_LEFT:
    LEA DX, tooManyLeft
    MOV AH, 09H
    INT 21H

ASK_CONTINUE:
    LEA DX, continuePrompt
    MOV AH, 09H
    INT 21H

    MOV AH, 01H
    INT 21H

    CMP AL, 'Y'
    JE START
    CMP AL, 'y'
    JE START

    MOV AH, 4CH
    INT 21H

MAIN ENDP
END MAIN