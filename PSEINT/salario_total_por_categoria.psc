Proceso salario_total_por_categoria
    Definir c Como Entero;
    Definir s, x, t Como Real;
    
    Escribir "Dar categoria (1-4): ";
    Leer c;
    
    Escribir "Dar salario bruto: ";
    Leer s;
    
    Escribir "Dar horas extras trabajadas: ";
    Leer x;
    
    Segun c Hacer
        1:
            t <- s + (x * 30);
        2:
            t <- s + (x * 45);
        3:
            t <- s + (x * 60);
        4:
            t <- s + (x * 80);
        De Otro Modo:
            Escribir "ERROR: categoria incorrecta";
            t <- 0;
    FinSegun;
    
    Si c >= 1 Y c <= 4 Entonces
        Escribir "Su salario total es de: ", t;
    FinSi;
    
FinProceso;