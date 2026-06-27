Proceso ventas_por_metodo_pago
	// Tienda de helados 
	definir p, d, a1, b2, c3, oc, t Como Real;
	definir tipo Como Caracter;
	a1=0; b2=0; c3=0; oc=0; t=0;
	Repetir
		escribir "?Cual es el precio del helado?";
		leer p;
		escribir "?Cual es su tipo de pago?(credito = a, debito= b , efectivo=  c)";
		leer tipo;
		Segun tipo Hacer
			"a":
				d = (p * 10)/100;
				p= p - d;
				a1=a1+1;
			"b":
				d = (p * 15)/100;
				p = p - d;
				b2=b2+1;
			"c":
				d = (p * 20)/100;
				p = p - d;
				c3=c3+1;
		Fin Segun
		escribir "el precio es ",p," pesos";
		t=t+p;
		Escribir "Otro cliente: 1=si  2=no : ";
		Leer oc;
	Hasta Que (oc=2);
	Escribir "Lo vendido en todo el dia es de:   ", t;
	
FinProceso
