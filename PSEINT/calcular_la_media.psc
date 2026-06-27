Proceso calcular_la_media
	//Pedir numeros hasta que se introduzca uno negativo y calcular la media
	Definir n, m, s, c Como Real;
	s=0;
	c=0;
	Repetir
		Escribir "Digite un numero : ";
		Leer n;
		s=s+n;  c=c+1;
	Hasta Que (n<0)
	m=s/c;
	escribir "La media es: ", m;
FinProceso
