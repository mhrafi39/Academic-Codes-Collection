.MODEL SMALL
.STACK 100H
.DATA
PROMPT DB "ENTER A CHARACTER: $" 
OUTPUT DB 0AH,0DH,"OUTPUT: " 
char db ?,'$'
.CODE
MAIN PROC 
    MOV AX,@DATA
    MOV DS,AX
    
    mov ah,9
    lea dx,PROMPT
    int 21h 
    
    mov ah,1
    int 21h 
    mov dl,al 
    
    cmp dl,'0'
    jb exit
    cmp dl,'z'
    ja exit 
    
    cmp dl,'A'
    jb digit
    cmp dl,'z'
    ja exit 
    
    cmp dl,'Z'
    jle letter
    cmp dl,'a'
    jb exit  
    
    letter:
    jmp print
  
    
    digit:
    cmp dl,'9'
    ja exit
    mov bl,2 
    div bl
    cmp ah,0
    je even
    add dl,1
    jmp print
    
    even:
    sub dl,1
    
    
    print:
    mov ah,9
    mov char,dl
    lea dx,OUTPUT
    int 21h 
    
    exit:
    mov ah,4ch
    int 21h
    
    main endp

     
END MAIN