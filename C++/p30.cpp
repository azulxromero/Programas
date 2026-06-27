//PROGRAMA 30
//CALCULAR E IMPRIMIR EL AREA DE UNA ZONA ESFERICA
//AZUL XIMENA TAPIA ROMERO 2DO SEMESTRE PROGRAMACION MATUTINO
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float r, h, a, pi=3.1416;
	cout<<"Dar radio   ";
	cin>>r;
	cout<<"dar altura  ";
	cin>>h;
	a= 2*pi*r*h;
	cout<<"El area de la zona esferica es:   "<<a<<endl;
}
