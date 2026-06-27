Proceso calculo_de_promedios
	// Sacar el promedio de 50 alumnos y decir el porcentaje de reprobados y aprobados 
	Definir a,i,c1,c2,c3,p,ap,rp,pa,pr Como Real;
	Para i<-1 Hasta 50 Hacer
		c1 <- azar(10)+1;
		c2 <- azar(10)+1;
		c3 <- azar(10)+1;
		Escribir 'Alumno : ',i;
		Escribir 'Digite su calificacion 1: ',c1;
		Escribir 'Digite su calificacion 2: ',c2;
		Escribir 'Digite su calificacion 3: ',c3;
		p <- (c1+c2+c3)/3;
		Escribir 'Su promedio es:   ',p;
		Si (p<6) Entonces
			rp <- rp+1;
			pr <- (rp*100)/50;
		SiNo
			ap <- ap+1;
			pa <- (ap*100)/50;
		FinSi
	FinPara
	Escribir 'Aprobados : ',ap,' %',pa;
	Escribir 'Reprobados : ',rp,' %',pr;
FinProceso
