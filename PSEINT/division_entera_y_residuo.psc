Algoritmo division_entera_y_residuo
	Definir divisor, dividendo,a , b como real ;
	Escribir "dar divisor   ";
	Leer divisor ;
	Escribir "dar dividendo  ";
	Leer dividendo;
	
	a=(dividendo)mod(divisor);
	
	b= trunc(dividendo/divisor);
	
	Si dividendo>divisor Entonces
		Escribir "TU OPERACION FUE UN EXITO	: ", "  El coeficiente es:    ", b  , "  El residuo es: ", a;
	SiNo
		Escribir "NO SE PUDO REALIZAR TU OPERACION POR FAVOR INTRODUCE UN NUMERO MAS ALTO";
	Fin Si
	
	
FinAlgoritmo
