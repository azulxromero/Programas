Proceso formula_general
	// Calcula e imprime el valor de la ecuaci?n de la F?rmula general
	Definir a,b,c,x1,x2,x11,x22 Como Real;
	Escribir ' Numero 1';
	Leer a;
	Escribir 'numero 2';
	Leer b;
	Escribir 'numero 3';
	Leer c;
	// Proceso 
	x1 <- (-b+raiz((b^2)-(4*a*c)));
	x11 <- (x1)/(2*a);
	x2 <- (-b-raiz((b^2)-(4*a*c)));
	x22 <- (x2)/(2*a);
	// salida
	Escribir 'Resultado 1 =',x11;
	Escribir 'Resultado 2 = ',x22;
FinProceso
