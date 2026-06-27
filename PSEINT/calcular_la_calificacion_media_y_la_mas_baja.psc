Proceso calcular_la_calificacion_media_y_la_mas_baja
	// Calcular la calificacion media y la mas baja
	Definir a, p, i, s, c, m, n Como Real;
	i=0; s=0; c=0; a=999; m=0; n=0;
	Mientras i<40 Hacer
		i=i+1;
		p=azar(10)+1;
		Escribir "Alumno ", i " obtuvo : ", p;
		c=c+1;
		s=s+p;
		m=s/c;
		Si (p<a) Entonces
			a=p;
			n=i;
		Fin Si
	Fin Mientras
	Escribir "La media es:  ",m;
	Escribir "El menor promedio es del alumno ",n, " con un promedio de :", a; 
FinProceso
