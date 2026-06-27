Proceso aplicacion_iva_por_rangos
	//leer el precio de un producto, verificar que elprecio de un producto no sea un valor negativo o sero.si el precio delp?roducto oscila entre los 100 y 300 pesos,aplicar un 3% de iva ,si el precio oscila entre los 500 y 1000 pesos,aplicar un 5 de iva. en caso contrario,, elproducto no genera iva y el nuevo precio del producto. en el caso que el producto no genere iva.calcular e imprimir el ivay el nuevo precio delproducto. en caso de que el producto no genere iva, saberlo hacer al usuario
	definir p,p1,p2,p3,p4 como real;
	Escribir "Precio del producto ";
	Leer p;
	Si (p<=0) Entonces
		Escribir "ingrese un precio correcto ";
	SiNo
		Si (p>=100 y p<=300) entonces
			p1= p*0.03;
			p2= p1+p;
			Escribir "Precio solo del 3% del IVA = ",p1;
			Escribir "Precio mas el 3% del IVA   = ",p2;
		SiNo
			Si (p>=500 y p<=1000)entonces
				p3= p*0.05;
				p4= p+p3;
				Escribir "precio solo del iva del 5% = ", p3;
				Escribir "precio mas el iva del 5%=  ", p4;
			SiNo
				Escribir "su precio es incorrecto no genera iva";
			Fin Si
		FinSi
	Fin Si
FinProceso
