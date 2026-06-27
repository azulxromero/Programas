Proceso encontrar_numero_mayor
	//leer 4 numeros y determinar cual es el mayor
	Definir a, b, c, d Como Entero;
	Escribir "ingresa 4 numeros    ";
	Leer a, b, c, d;
	si a<>b y a<>c y a<>d y b<>c y b<>d y c<>d Entonces
		Si a>b Entonces
			Si a>c Entonces
				Si a>d Entonces
					Escribir "el mayor es :   ",a;
				SiNo
					Escribir "el mayor es:    ",d;
				Fin Si
			SiNo
				Si c > d Entonces
					Escribir "el mayor es:    ",c;
				SiNo
					Escribir "el mayor es:    ",d;
				FinSi
			Fin Si
		SiNo
			Si b > c Entonces
				Si b > d Entonces
					Escribir "el mayor es:    ",b;
				SiNo
					Escribir "el mayor es:    ",d;
				FinSi
			SiNo
				Si c > d Entonces
					Escribir "el mayor es:     ",c;
				SiNo
					Escribir "el mayor es:     ",d;
				Fin Si
			FinSi
		Fin Si
	SiNo
		Escribir "ingresa 4 numeros diferentes";
	FinSi
	
FinProceso
