//programa 10
//obtener cociente y residuo de un numero entero al dividirlo entre 2

#include<iostream>
using namespace std;

main()
{
	//declarar variables
	int d,dv,c, r;
	//leer variables
	cout<<"Dar dividendo  ";
	cin>>d;
	cout<<"dar divisor   ";
	cin>>dv;
	//proceso
	c=d/dv;
	r=d%dv;
	//salida
	cout<<"el cociente es=   "<<   c   <<"   y el residuo es=   "<<r;	
}
