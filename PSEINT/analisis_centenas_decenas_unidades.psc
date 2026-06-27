Proceso analisis_centenas_decenas_unidades
	//Descomponer un numero en centenas, decenas y unidades
	Definir n, m, d, c, u, on Como Entero;
	Repetir
		Escribir "Digite una cantidad  : ";
		Leer n;
		Si (n>99) y (n<1000) Entonces
			u= n mod 10;
			n= trunc (n/10);
			d= n mod 10;
			n= trunc (n/10);
			c= n mod 10;
			Escribir "La cantidad digitada contiene ";
			escribir "Centena: ", n;
			escribir "Decena: ", d;
			escribir "Unidad: ", u;
		SiNo 
			Escribir "Digite un numero de 3 digitos:  ";
		Fin Si
		Escribir "Otro numero?  1=si  2=no ";
		Leer on;
	Hasta Que (on==2);
FinProceso
