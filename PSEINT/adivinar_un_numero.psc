Proceso adivinar_un_numero
	// Adivinar numero 
	Definir n, na Como entero;
	na=azar(10)+1;
	Repetir
		Escribir "Digite un numero:  ";
		Leer n;
		Si (n<na) Entonces
			Escribir "ingrese un numero mayor ";
		SiNo
			Si (n>na) Entonces
				Escribir "ingrese un numero menor ";
			SiNo
				Si (n==na) Entonces
					Escribir "Felicidadesss!! usted adivino el numero ";
				Fin Si
			Fin Si
		Fin Si
	Hasta Que (n==na);
FinProceso
