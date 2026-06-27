Proceso clasificacion_sexo_alumnos
	//Determinar cuantos hombres y mujeres hay
	Definir x,n,s,h,m Como Entero;
	Escribir "Escribe el numero de alumnos";
	leer n;
	x = 1;
	h = 0;
	m = 0;
	Mientras x <= n Hacer
		Escribir "Digita el numero de acuerdo a tu sexo";
		Escribir "1 = hombre o 2 = mujer";
		leer s;
		si s == 1 Entonces
			h = h + 1;
		SiNo
			si s == 2 Entonces
				m = m + 1;
			SiNo
				Escribir "Escribe un numero correcto";
				x = x - 1;
			FinSi
		FinSi
		x = x + 1;
	FinMientras
	Escribir "El numero de alumnos hombres es: ",h;
	Escribir "El numero de alumnos mujeres es: ",m;
FinProceso
