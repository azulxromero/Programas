//programa 23
//calcula el area lateral y el area total y volumen de un tronco de cono
//AZUL XIMENA TAPIA ROMERO
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float rbmayor, rbmenor, g, a, pi=3.1416, al, at, v;
	//leer variables
	cout<<"dar radio de base mayor    ";
	cin>>rbmayor;
	cout<<"dar radio de base menor    ";
	cin>>rbmenor;
	cout<<"dar generatriz       ";
	cin>>g;
	cout<<"dar altura           ";
	cin>>a;
	//proceso
	al= pi*g*(rbmayor+rbmenor);
	at= al+pi*(pow(rbmenor,2)+pow(rbmayor,2));
	v= (3.1416/3)*a*(pow(rbmenor,2)+pow(rbmayor,2));
	//salida
	cout<<"dar area lateral:    "<<al;
	cout<<"\n";
	cout<<"dar area total:      "<<at;
	cout<<"\n";
	cout<<"dar volumen:         "<<v;
	cout<<"\n";
}
