Proceso fibonacci
	//Serie fibonacci 
	Definir a,b,c, i, n Como Entero;
	a=0;
	b=1;
	Escribir "Digite un numero : ";
	Leer n; 
	Escribir 0;
	Para i=1 Hasta n Con Paso 1 Hacer
		c=a+b;
		a=b;
		b=c;
		Escribir a;
	Fin Para
	
FinProceso
