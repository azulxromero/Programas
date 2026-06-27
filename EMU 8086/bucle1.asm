Org 100h
    mov dx, offset msg_input 
    mov ah, 9 
    int 21h  
    
    mov cx, 10 
    mov si, 0
    
    leer: 
       mov dx, offset salto
       mov ah, 9
       int 21h
       mov ah, 1
       int 21h
       mov buffer[si], al
       inc si 
       loop leer    
        
    mov dx, offset salto
    mov ah, 9
    int 21h   
     
    mov dx, offset msg_output
    mov ah, 9
    int 21h
     
    mov cx, 10
    mov si, 0
    
    mostrar:
        mov dx, offset salto
        mov ah, 9
        int 21h
        mov dl, buffer[si]
        mov ah, 2
        int 21h
        inc si
        loop mostrar 
        
ret                  

msg_input  db "Escribe 10 caracteres: $"
msg_output db "Los caracteres son: $"
salto      db 13, 10, "$"
buffer     db 10 dup(?)