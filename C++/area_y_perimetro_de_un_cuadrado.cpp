//calcular e imprimir el area y perimetro de un cuadrado

#include<iostream>
using namespace std;
main()
{
    //declarar variables
	float l, a, p;
	//leer variables
	cout<<"medida de lado   ";
	cin>> l;
	//proceso
	a= l*l;
	p= l+l+l+l; 
	//salida
	cout<<"\n";
	cout<<"el area es =   "<<    a    <<" y el perimetro es =   "<<p;
}

