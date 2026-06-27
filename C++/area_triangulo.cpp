//calcular el area de un triangulo dada la siguiente manera
#include<iostream>
#include<math.h>
using namespace std;
main ()
{
	//declarar variables
	float a, b, c, p, rz, ar;
	//leer variables 
	cout<<"dar un numero   ";
	cin>>a;
    cout<<"dar un numero   ";
    cin>>b;
	cout<<"dar un numero   ";
	cin>>c;
	//proceso
	ar= (p*(a-p)*(b-p)*(c-p));
	p= (a+b+c)/2;
	rz= sqrt(a);
	//salida
	cout<<"raiz cuadrada:   "<<rz;
	
}
