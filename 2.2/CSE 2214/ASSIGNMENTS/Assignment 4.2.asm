.model small
.stack 100h
.data 
digit1 db "Enter 1st digit: $" 
digit2 db 0ah,0dh,"Enter 2nd digit: $"
output db 0ah,0dh,"Sum is: "
sum db ?,'$'
.code
main proc
    mov ax,@data
    mov ds,ax 
    
    mov ah,9
    lea dx,digit1
    int 21h
    
    mov ah,1
    int 21h 
    mov sum,al 
    
     mov ah,9
    lea dx,digit2
    int 21h
    
    mov ah,1
    int 21h
    
    add sum,al
    
    sub sum,30h
    
    
    mov ah,9
    lea dx,output
    int 21h
    
    mov ah,4ch
    int 21h
    
end main