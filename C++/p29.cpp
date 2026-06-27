//programa 29
//CALCULAR VOLUMEN Y AREA DE UN TRONCO DE CONO CIRCULAR RECTO 
//AZUL XIMENA TAPIA ROMERO 
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float r1, r2, g, a, v, ar, pi=3.1416;
	cout<<"Dar valor de radio 1   ";
	cin>>r1;
	cout<<"Dar valor de radio 2   ";
	cin>>r2;
	cout<<"Dar generatriz         ";
	cin>>g;
	cout<<"Dar altura             ";
	cin>>a;
	v= pi*a*(pow(r1,2)+pow(r2,2)+(r1*r2));
	ar= pi*g*(r1+r2);
	cout<<"El volumen es:   "<<v<<endl;
	cout<<"El area es:      "<<ar;
}
