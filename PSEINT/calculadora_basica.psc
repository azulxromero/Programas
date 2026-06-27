Proceso calculadora_basica
	Definir a, b, p, op Como Real;
	Escribir "MENU DE POTENCIAS ";
	Escribir "________________________";
	Escribir "[ 1 ]...SUMA ";
	Escribir "[ 2 ]...RESTA ";
	Escribir "[ 3 ]...MULTIPLICACION";
	Escribir "[ 4 ]...DIVISION" ;
	Escribir "[ 5 ]...POTENCIACION DE DOS NUMEROS";
	Escribir "________________________";
	Escribir "SELECCIONA EL TIPO DE OPERACION A REALIZAR";
	leer op;
	Segun op Hacer
		1:
			Escribir "DA UN NUMERO" ;
			Leer a;
			Escribir "DA OTRO NUMERO ";
			Leer b;
			p=a+b;
			Escribir "El resultado de la suma es ", p;
		2:
			Escribir "DA UN NUMERO" ;
			Leer a;
			Escribir "DA OTRO NUMERO ";
			Leer b;
			p= a-b;
			Escribir "El resultado de la resta es ", p;
		3:
			Escribir "DA UN NUMERO" ;
			Leer a;
			Escribir "DA OTRO NUMERO ";
			Leer b;
			p= a*b;
			Escribir "El resultado de la multiplicacion es", p;
		4:
			Escribir "DA UN NUMERO" ;
			Leer a;
			Escribir "DA OTRO NUMERO ";
			Leer b;
			p= a/b;
			Escribir "El resultado de la division es ", p;
		5:
			Escribir "DA UN NUMERO" ;
			Leer a;
			Escribir "DA OTRO NUMERO ";
			Leer b;
			p= a^b;
			Escribir "El resultado de la exponenciacion es ", p;
	Fin Segun
FinProceso
