.MODEL SMALL
.STACK 100H
.DATA
    FIRST DB  'ENTER A MAXIMUM 4 DIGIT HEX NUMBER (A-F OR 0-9): $'
    BINARY DB 0DH,0AH, 'THE BINARY FORM IS: $'
    WRONG  DB 0DH,0AH, 'OPPS!!! ILLEGAL INPUT. PLEASE TRY AGAIN: $'
    TEMP DB  ?
    
.CODE
MAIN PROC
    MOV AX, @DATA              
    MOV DS, AX
    
    LEA DX, FIRST
    MOV AH, 9
    INT 21H
    
    JMP BEGIN                   
    
TOP: 
    LEA DX, WRONG
    MOV AH, 9
    INT 21H
    
BEGIN:                      
    XOR BX, BX        
    MOV TEMP, 30H           
    
PROCEED:
    MOV AH, 1                  
    INT 21H
    
    CMP AL, 0DH                
    JNE NO_ENTER               
    
    CMP TEMP, 30H             
    JBE TOP                     
    JMP BINARY_PRINT          
    
NO_ENTER:
    CMP AL, "A"                
    JB DECIMAL               
    
    CMP AL, "F"                
    JA TOP                   
    
    ADD AL, 09H                
    JMP BINARY_START          
    
DECIMAL:
    CMP AL, 30H                
    JB TOP                    
    CMP AL, 39H
    JA TOP                   

BINARY_START:
    INC TEMP                    
    
    AND AL, 0FH                
    
    MOV CL, 4               
    SHL AL, CL                  
    
    MOV CX, 4                 
    
LOOP_1:
    SHL AL, 1              
    RCL BX, 1                 
    LOOP LOOP_1                 
    
    CMP TEMP, 34H              
    JE BINARY_PRINT           
    JMP PROCEED                 
    
BINARY_PRINT:
    LEA DX, BINARY           
    MOV AH, 9
    INT 21H
    
    MOV CX, 16               
    MOV AH, 2                 
    
PRINT:
    SHL BX, 1                   
    JC ONE                   
    MOV DL, 30H               
    JMP DISPLAY
    
ONE:
    MOV DL, 31H             
    
DISPLAY:
    INT 21H                   
    LOOP PRINT                 
    
EXIT:
    MOV AH, 4CH                
    INT 21H
MAIN ENDP
END MAIN
