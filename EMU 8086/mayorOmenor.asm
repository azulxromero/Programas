org 100h

	mov dx, offset msg1
	mov ah, 09h
	int 21h

	mov ah, 01h
	int 21h
	sub al, 30h
	mov bl, al

	mov dl, 13
	mov ah, 02h
	int 21h

	mov dl, 10
	int 21h

	mov dx, offset msg2
	mov ah, 09h
	int 21h

	mov ah, 01h
	int 21h
	sub al, 30h
	mov bh, al
    
	cmp bl, bh
	jg primero
	jl segundo

	mov dx, offset igual
	mov ah, 09h
	int 21h
	jmp fin

primero:
	mov dx, offset msgPrimero
	mov ah, 09h
	int 21h
	jmp fin

segundo:
	mov dx, offset msgSegundo
	mov ah, 09h
	int 21h

fin:
	ret

msg1 db "Ingresa primer numero (0-9): $"
msg2 db "Ingresa segundo numero (0-9): $"
msgPrimero db "El numero mayor es el primero$"
msgSegundo db "El numero mayor es el segundo$"
igual db "Ambos numeros son iguales$"