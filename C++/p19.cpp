//programa 19
//calcular la fuerza que existe entre dos masa
//TAPIA ROMERO AZUL XIMENA
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float m1, m2, d, fuerza, g=6.673;
	cout<<"dar valor de masa 1     ";
	cin>>m1;
	cout<<"dar valor de masa 2     ";
	cin>>m2;
	cout<<"dar distancia           ";
	cin>>d;
	fuerza= (g*m1*m2)/pow(d,2);
	cout<<"dar fuerza:   "<<fuerza;
	
}

