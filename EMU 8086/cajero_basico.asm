.model small
.stack 100h

.data
    
    saldo db 9                 ; Saldo inicial = 9
    
    ; Menú principal
    menu  db 13,10, "--- CAJERO AUTOMATICO ---"
          db 13,10, "1. Consultar saldo"
          db 13,10, "2. Retirar dinero"
          db 13,10, "3. Salir"
          db 13,10, "Seleccione una opcion: $"
    
    ; Mensajes del sistema
    msg_saldo  db 13,10, "Su saldo actual es: $"
    msg_retira db 13,10, "Ingrese cantidad a retirar (1-9): $"
    msg_error  db 13,10, "Error: Opcion no valida.$"
    msg_insuf  db 13,10, "Saldo insuficiente.$"
    msg_chau   db 13,10, "Gracias por usar el sistema. Adios!$"
    msg_pausa  db 13,10, "Presione cualquier tecla para continuar...$"

.code

main proc

    ; Inicializar segmento de datos
    mov ax, @data
    mov ds, ax

inicio:

    ; Limpiar pantalla antes de mostrar el menú
    call limpiar_pantalla

    ; Mostrar menú principal
    lea dx, menu
    mov ah, 09h
    int 21h

    ; Leer opción del usuario
    mov ah, 01h
    int 21h

    ; Guardar opción en BL
    mov bl, al

    ; Comparar opción elegida
    cmp bl, '1'
    je consultar

    cmp bl, '2'
    je retirar

    cmp bl, '3'
    je salir

    ; Mostrar error si la opción no es válida
    lea dx, msg_error
    mov ah, 09h
    int 21h

    call pausa
    jmp inicio

consultar:

    ; Mostrar mensaje
    lea dx, msg_saldo
    mov ah, 09h
    int 21h

    ; Convertir saldo a ASCII
    mov dl, saldo
    add dl, 30h

    ; Mostrar saldo
    mov ah, 02h
    int 21h

    ; Pausa
    call pausa

    ; Regresar al menú
    jmp inicio

retirar:

    ; Mostrar mensaje
    lea dx, msg_retira
    mov ah, 09h
    int 21h

    ; Leer cantidad
    mov ah, 01h
    int 21h

    ; Validar que sea un número entre 1 y 9
    cmp al, '1'
    jb error_retiro

    cmp al, '9'
    ja error_retiro

    ; Convertir ASCII a número
    sub al, 30h

    ; Comparar con saldo
    cmp al, saldo
    ja insuficiente

    ; Restar cantidad al saldo
    sub saldo, al

    ; Pausa
    call pausa

    ; Regresar al menú
    jmp inicio

error_retiro:

    ; Mostrar mensaje de error
    lea dx, msg_error
    mov ah, 09h
    int 21h

    ; Pausa
    call pausa

    ; Regresar al menú
    jmp inicio

insuficiente:

    ; Mostrar mensaje de saldo insuficiente
    lea dx, msg_insuf
    mov ah, 09h
    int 21h

    ; Pausa
    call pausa

    ; Regresar al menú
    jmp inicio

salir:

    ; Mostrar despedida
    lea dx, msg_chau
    mov ah, 09h
    int 21h

    ; Finalizar programa
    mov ah, 4Ch
    int 21h

main endp

; Limpiar pantalla
limpiar_pantalla proc

    mov ax, 0600h
    mov bh, 07h
    mov cx, 0000h
    mov dx, 184Fh
    int 10h

    ; Cursor en posición inicial
    mov ah, 02h
    mov bh, 00h
    mov dx, 0000h
    int 10h

    ret

limpiar_pantalla endp

; Pausa del sistema
pausa proc

    ; Mostrar mensaje
    lea dx, msg_pausa
    mov ah, 09h
    int 21h

    ; Esperar tecla
    mov ah, 07h
    int 21h

    ret

pausa endp

end main