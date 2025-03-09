.model small
.stack 100h
.data 
input db "Enter a upper case letter: $"
output db 0ah,0dh,"Corresponding lower case letter: "
lowerCase db ?,'$'
.code
main proc
    mov ax,@data
    mov ds,ax 
    
    mov ah,9
    lea dx,input
    int 21h
    
    mov ah,1
    int 21h
    
    mov lowerCase,al
    add lowerCase,20h
    
    mov ah,9
    lea dx,output
    int 21h
    
    mov ah,4ch
    int 21h
    
end main