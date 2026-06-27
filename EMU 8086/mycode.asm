Org 100h

mov dx, offset msg
mov ah, 9
int 21h

mov ah, 1
int 21h
mov bl, al   

mov ah, 1
int 21h
mov bh, al   

mov dl, 13
mov ah, 2
int 21h
mov dl, 10
int 21h

mov dx, offset msg2
mov ah, 9
int 21h

mov dl, bl
mov ah, 2
int 21h

mov dl, ' '
int 21h

mov dl, bh
int 21h

ret

msg db "Escribe dos letras: $"
msg2 db "Ingresaste: $"