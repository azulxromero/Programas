Proceso reloj_digital
	//Simular el comportamiento de un reloj digital
	
	definir h,m,s,ml como entero;
	Para h<-0 Hasta 23 Con Paso 1 Hacer
		Para m=0 Hasta 59 Con Paso 1 Hacer
			Para s=0 Hasta 59 Con Paso 1 Hacer
				Para ml=0 Hasta 1000 Con Paso 1 Hacer
					Escribir h,":",m,":",s;
				Fin Para
			Fin Para
		Fin Para
	Fin Para
	
FinProceso