.MODEL SMALL
.STACK 100H

.DATA

; ======================================================
; PASSWORD CORRECTA
; ======================================================

PASS DB '1234'

; ======================================================
; VARIABLES PARA GUARDAR LOS DIGITOS INGRESADOS
; ======================================================

N1 DB ?
N2 DB ?
N3 DB ?
N4 DB ?

; ======================================================
; CONTADOR DE INTENTOS
; ======================================================

INTENTOS DB 3

; ======================================================
; MENSAJES DEL SISTEMA
; ======================================================

MSGB    DB 13,10,'B I E N V E N I D O$'
MSGNIP  DB 13,10,'INGRESE SU CONTRASENA: $'
MSGV    DB 13,10,'ACCESO PERMITIDO$'
MSGH    DB 13,10,'HOLA USUARIO$'

; MENSAJE DE ERROR
MSGF    DB 13,10,'ACCESO DENEGADO$'

; MENSAJE DE INTENTOS RESTANTES
MSGINT  DB 13,10,'INTENTOS RESTANTES: $'

; MENSAJE DE BLOQUEO
MSGDEN  DB 13,10,'3 INTENTOS FALLIDOS - SISTEMA BLOQUEADO$'

.CODE

MAIN PROC

    ; ==================================================
    ; INICIALIZAR EL SEGMENTO DE DATOS
    ; ==================================================

    MOV AX, @DATA
    MOV DS, AX

; ======================================================
; ETIQUETA PRINCIPAL
; ======================================================

INICIO:

    ; ==================================================
    ; LIMPIAR LA PANTALLA
    ; MODO TEXTO 80x25
    ; ==================================================

    MOV AH, 00H
    MOV AL, 03H
    INT 10H

    ; ==================================================
    ; MOSTRAR MENSAJE DE BIENVENIDA
    ; ==================================================

    MOV AH, 09H
    LEA DX, MSGB
    INT 21H

    ; ==================================================
    ; PEDIR LA CONTRASENA
    ; ==================================================

    MOV AH, 09H
    LEA DX, MSGNIP
    INT 21H

; ======================================================
; CAPTURA DEL PRIMER DIGITO
; ======================================================

    ; LEER TECLA SIN MOSTRARLA
    MOV AH, 07H
    INT 21H

    ; GUARDAR EL DIGITO
    MOV N1, AL

    ; MOSTRAR *
    MOV AH, 02H
    MOV DL, '*'
    INT 21H

; ======================================================
; CAPTURA DEL SEGUNDO DIGITO
; ======================================================

    MOV AH, 07H
    INT 21H

    MOV N2, AL

    MOV AH, 02H
    MOV DL, '*'
    INT 21H

; ======================================================
; CAPTURA DEL TERCER DIGITO
; ======================================================

    MOV AH, 07H
    INT 21H

    MOV N3, AL

    MOV AH, 02H
    MOV DL, '*'
    INT 21H

; ======================================================
; CAPTURA DEL CUARTO DIGITO
; ======================================================

    MOV AH, 07H
    INT 21H

    MOV N4, AL

    MOV AH, 02H
    MOV DL, '*'
    INT 21H

; ======================================================
; VALIDACION DE PASSWORD
; ======================================================

    ; COMPARAR PRIMER DIGITO
    MOV AL, N1
    CMP AL, PASS[0]
    JNE ERROR

    ; COMPARAR SEGUNDO DIGITO
    MOV AL, N2
    CMP AL, PASS[1]
    JNE ERROR

    ; COMPARAR TERCER DIGITO
    MOV AL, N3
    CMP AL, PASS[2]
    JNE ERROR

    ; COMPARAR CUARTO DIGITO
    MOV AL, N4
    CMP AL, PASS[3]
    JNE ERROR

    ; SI TODO ES CORRECTO
    JMP CORRECTO

; ======================================================
; PASSWORD INCORRECTA
; ======================================================

ERROR:

    ; ==================================================
    ; RESTAR UN INTENTO
    ; ==================================================

    DEC INTENTOS

    ; ==================================================
    ; VERIFICAR SI YA NO HAY INTENTOS
    ; ==================================================

    CMP INTENTOS, 0
    JE BLOQUEADO

    ; ==================================================
    ; MOSTRAR MENSAJE DE ERROR
    ; ==================================================

    MOV AH, 09H
    LEA DX, MSGF
    INT 21H

    ; ==================================================
    ; MOSTRAR INTENTOS RESTANTES
    ; ==================================================

    MOV AH, 09H
    LEA DX, MSGINT
    INT 21H

    ; ==================================================
    ; CONVERTIR EL NUMERO A ASCII
    ; ==================================================

    MOV AL, INTENTOS
    ADD AL, 30H

    ; ==================================================
    ; MOSTRAR EL NUMERO DE INTENTOS
    ; ==================================================

    MOV DL, AL
    MOV AH, 02H
    INT 21H

    ; ==================================================
    ; ESPERAR UNA TECLA
    ; ==================================================

    MOV AH, 07H
    INT 21H

    ; REGRESAR AL INICIO
    JMP INICIO

; ======================================================
; SISTEMA BLOQUEADO
; ======================================================

BLOQUEADO:

    ; ==================================================
    ; LIMPIAR PANTALLA
    ; ==================================================

    MOV AH, 00H
    MOV AL, 03H
    INT 10H

    ; ==================================================
    ; MOSTRAR MENSAJE DE BLOQUEO
    ; ==================================================

    MOV AH, 09H
    LEA DX, MSGDEN
    INT 21H

    JMP FIN

; ======================================================
; PASSWORD CORRECTA
; ======================================================

CORRECTO:

    ; ==================================================
    ; LIMPIAR PANTALLA
    ; ==================================================

    MOV AH, 00H
    MOV AL, 03H
    INT 10H

    ; ==================================================
    ; MOSTRAR ACCESO PERMITIDO
    ; ==================================================

    MOV AH, 09H
    LEA DX, MSGV
    INT 21H

    ; ==================================================
    ; MOSTRAR MENSAJE DE USUARIO
    ; ==================================================

    MOV AH, 09H
    LEA DX, MSGH
    INT 21H

; ======================================================
; FINALIZAR PROGRAMA
; ======================================================

FIN:

    ; TERMINAR EJECUCION
    MOV AH, 4CH
    INT 21H

MAIN ENDP
END MAIN