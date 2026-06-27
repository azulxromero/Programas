org 100h

    mov dx, offset msg
    mov ah, 09h
    int 21h

    mov ah, 01h
    int 21h
    mov bl, al

    cmp bl, '-'
    je esNegativo

    mov ah, 01h
    int 21h
    mov cl, al

    cmp bl, '0'
    jne checarPositivo
    cmp cl, 13
    je esCero
    cmp cl, '0'
    je esCero

checarPositivo:
    mov dx, offset positivo
    mov ah, 09h
    int 21h
    jmp fin

esCero:
    mov dx, offset cero
    mov ah, 09h
    int 21h
    jmp fin

esNegativo:
    mov ah, 01h
    int 21h
    
    mov dx, offset negativo
    mov ah, 09h
    int 21h

fin:

msg db "Ingresa un numero (2 caracteres): $"
positivo db 13,10,"El numero es positivo$"
negativo db 13,10,"El numero es negativo$"
cero db 13,10,"El numero es cero$"