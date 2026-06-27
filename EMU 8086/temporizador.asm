org 100h

mov cx, 10
mov bl, 10

cuenta:
    mov dl, 13
    mov ah, 2
    int 21h
    mov dl, 10
    int 21h

    mov dl, bl
    add dl, 30h
    mov ah, 2
    int 21h

    dec bl
    dec cx

    cmp cx, 0
    jne cuenta

mov dx, offset msg
mov ah, 9
int 21h

ret

msg db 13,10,"BOOM $"