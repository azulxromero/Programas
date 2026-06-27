Proceso calculadora_simple
	definir a, b, p Como real;
	definir op Como CARACTER;
	Escribir "Digita la opracion que quieres realizar";
	leer op;
	Si (op<>"+") y (op<>"-") y (op<>"*") y (op<>"/") Entonces
		Escribir "NO SE PUEDE REALIZAR LA OPERACION ";
	SiNo
		Segun op Hacer
			"+":
				Escribir "DA UN NUMERO" ;
				Leer a;
				Escribir "DA OTRO NUMERO ";
				Leer b;
				p=a+b;
				Escribir "El resultado de la suma es ", p;
			"-":
				Escribir "DA UN NUMERO" ;
				Leer a;
				Escribir "DA OTRO NUMERO ";
				Leer b;
				p= a-b;
				Escribir "El resultado de la resta es ", p1;
			"*":
				Escribir "DA UN NUMERO" ;
				Leer a;
				Escribir "DA OTRO NUMERO ";
				Leer b;
				p= a*b;
				Escribir "El resultado de la multiplicacion es", p2;
			"/":
				Escribir "DA UN NUMERO" ;
				Leer a;
				Escribir "DA OTRO NUMERO ";
				Leer b;
				p= a/b;
				Escribir "El resultado de la division es ", p3;
		Fin Segun
	Fin Si
FinProceso
