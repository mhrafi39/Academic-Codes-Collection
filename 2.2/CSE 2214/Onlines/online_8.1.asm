.model small
.stack 100h
.data
msg db "Enter word: $"
pali db 0ah,0dh,"Palindrome$"
npali db 0ah,0dh,"Not Palindrome$"
buff db 100 DUP('$') 
.code
main proc
    mov ax,@data
    mov ds,ax
    
    mov ah,9
    lea dx,msg
    int 21h
    
    
    lea di,buff  
    mov cx,0
    
    input:  
    mov ah,1
    int 21h
    cmp al,0dh
    je end_read
    mov [di],al
    push ax
    inc di
    inc cx
    jmp input
    
    end_read:
    lea si,buff
    
    check:
    cmp cx,0
    je palindrome
    pop dx
    mov al,[si]
    cmp al,dl
    jne not_palindrome
    inc si
    dec cx
    jmp check 
    
    palindrome:
    lea dx,pali
    mov ah,9
    int 21h
    jmp exit
    
    not_palindrome:
    lea dx,npali
    mov ah,9
    int 21h
    
    exit:
    mov ah,4ch
    int 21h
    
    main endp
end main
    
    