.MODEL SMALL
.STACK 100H
.DATA
    MSG_1 DB 10, 13, 'ENTER A STRING: $'   
    MSG_2 DB 10, 13, 'CONVERTED STRING: $' 
    BUFFER_SIZE EQU 80                     

    P LABEL BYTE
    MAX_LENGTH DB BUFFER_SIZE               
    ACTUAL_LENGTH DB ?                      
    INPUT_BUFFER DB BUFFER_SIZE DUP('$')    

    TABLE DB 128 DUP(?)                     

.CODE
MAIN PROC
    MOV AX, @DATA
    MOV DS, AX

    LEA SI, TABLE
    MOV CX, 128
    MOV AL, 0

FILL_TABLE:
    MOV [SI], AL        
    INC AL
    INC SI
    LOOP FILL_TABLE

    MOV SI, OFFSET TABLE + 'a'  
    MOV CX, 26                  
    MOV DI, 'A'                 

UPPERCASE_MAPPING:
    MOV [SI], DI                
    INC SI                      
    INC DI                      
    LOOP UPPERCASE_MAPPING

    MOV DX, OFFSET MSG_1
    MOV AH, 09H
    INT 21H

    LEA DX, P
    MOV AH, 0AH
    INT 21H

    LEA SI, INPUT_BUFFER    
    MOV CL, ACTUAL_LENGTH   
    MOV CH, 0              
    MOV BX, OFFSET TABLE   

CONVERT:
    MOV AL, [SI]           
    XLAT                   
    MOV [SI], AL           
    INC SI                 
    LOOP CONVERT           

    MOV DX, OFFSET MSG_2
    MOV AH, 09H
    INT 21H

    MOV DX, OFFSET INPUT_BUFFER
    MOV AH, 09H
    INT 21H

    MOV AH, 4CH
    INT 21H
MAIN ENDP

END MAIN
