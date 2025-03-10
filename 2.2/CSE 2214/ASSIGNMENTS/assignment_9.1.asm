.model small
.stack 100h
.data
    prompt db "Enter the number of days (up to 65535): $"
    years_msg db 10, 13, "Years: $"
    months_msg db 10, 13, "Months: $"
    weeks_msg db 10, 13, "Weeks: $"
    days_msg db 10, 13, "Days: $"
    input_buffer db 6, ?, 6 dup('$')
    days dw ?
    years dw ?
    months dw ?
    weeks dw ?
    remaining_days dw ?
.code
main proc
    mov ax, @data
    mov ds, ax

    mov ah, 09h
    lea dx, prompt
    int 21h

    mov ah, 0Ah
    lea dx, input_buffer
    int 21h

    call string_to_word
    mov days, ax

    mov ax, days
    xor dx, dx
    mov bx, 365
    div bx
    mov years, ax

    mov ax, dx
    xor dx, dx
    mov bx, 30
    div bx
    mov months, ax

    mov ax, dx
    xor dx, dx
    mov bx, 7
    div bx
    mov weeks, ax
    mov remaining_days, dx

    mov ah, 09h
    lea dx, years_msg
    int 21h
    mov ax, years
    call print_number

    mov ah, 09h
    lea dx, months_msg
    int 21h
    mov ax, months
    call print_number

    mov ah, 09h
    lea dx, weeks_msg
    int 21h
    mov ax, weeks
    call print_number

    mov ah, 09h
    lea dx, days_msg
    int 21h
    mov ax, remaining_days
    call print_number

    mov ah, 4Ch
    int 21h
main endp

string_to_word proc
    lea si, input_buffer + 1
    mov cl, [si]
    xor ch, ch
    inc si
    xor ax, ax
    xor bx, bx

convert_loop:
    mov bl, [si]
    sub bl, '0'
    mov dx, 10
    mul dx
    add ax, bx
    inc si
    loop convert_loop

    ret
string_to_word endp

print_number proc
    mov cx, 0
    mov bx, 10

extract_digits:
    xor dx, dx
    div bx
    push dx
    inc cx
    cmp ax, 0
    jne extract_digits

print_digits:
    pop dx
    add dl, '0'
    mov ah, 02h
    int 21h
    loop print_digits

    ret
print_number endp

end main