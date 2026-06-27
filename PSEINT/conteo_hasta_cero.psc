Proceso conteo_hasta_cero
	// Leer numeros hasta mostrar 0
	Definir n, p, i, m Como Entero;
	p=0;
	i=0; m=0;
	Repetir
		Escribir "Digite un numero :  ";
		Leer n;
		Si (n Mod 2)==0 Entonces
			p=p+1;
			m=p-1;
		SiNo
			i=i+1;
		Fin Si
	Hasta Que n==0
	Escribir "Usted digito : ", i, " numeros impares ";
	Escribir "Usted digito : ", m, " numeros pares ";
FinProceso
