Proceso media_peso_por_rango_edad
	// Determinar el promedio de peso por categoria
	Definir e,i,s,s1,s2,s3,s4,p,p1,p2,p3,p4,m1,m2,m3,m4,m5 Como Real;
	Definir c1,c2,c3,c4,c5 Como Real;
	Definir est Como Real;
	s <- 0; s1 <- 0; s2 <- 0; s3 <- 0; s4 <- 0; m1 <- 0; m2 <- 0; m3 <- 0; m4 <- 0; m5 <- 0;
	c1 <- 0; c2 <- 0; c3 <- 0; c4 <- 0; c5 <- 0;
	Para i<-1 Hasta 50 Hacer
		e <- azar(100)+1; p <- azar(100)+1; est <- azar(200)+1;
		Escribir 'Edad : ',e;
		Escribir 'Peso : ',p;
		Escribir 'Estatura : ',est;
		Si (e<=12) Y (e>=0) Entonces
			Escribir 'Usted pertenece a la categoria ni?os ';
			s <- s+p; c1 <- c1+1; m1 <- s/c1;
		SiNo
			Si (e<=17) Y (e>=13) Entonces
				Escribir 'Usted pertenece a la categoria adolescente ';
				s1 <- s1+p; c2 <- c2+1; m2 <- s1/c2;
			SiNo
				Si (e<=29) Y (e>=18) Entonces
					Escribir 'Usted pertenece a la categoria joven ';
					s2 <- s2+p; c3 <- c3+1; m3 <- s2/c3;
				SiNo
					Si (e<=59) Y (e>=30) Entonces
						Escribir 'Usted pertenece a la categoria adulto ';
						s3 <- s3+p; c4 <- c4+1; m4 <- s3/c4;
					SiNo
						Si (e>=60) Entonces
							Escribir 'Usted pertenece a la categoria anciano ';
							s4 <- s4+p; c5 <- c5+1; m5 <- s4/c5;
						FinSi
					FinSi
				FinSi
			FinSi
		FinSi
	FinPara
	Escribir 'La media es del peso de la categoria ni?os es: ',m1;
	Escribir 'La media es del peso de la categoria adolescente es: ',m2;
	Escribir 'La media es del peso de la categoria joven es: ',m3;
	Escribir 'La media es del peso de la categoria adulto es: ',m4;
	Escribir 'La media es del peso de la categoria anciano es: ',m5;
FinProceso
