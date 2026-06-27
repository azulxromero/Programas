//Programa 45
//TAPIA ROMERO AZUL XIMENA
#include<iostream>
#include<math.h>
#include<windows.h>
using namespace std;
main()
{
	char genero;
	cout<<"Da tu genero, f= femenino o m=Masculino  ";
	cin.get(genero);
	genero= toupper(genero);
	fflush(stdin);
	switch (genero)
	{
		case 'F':
			cout<<"ERES MUJER "; break;
		case 'M':
			cout<<"ERES HOMBRE ";break;
       	default : cout<<"LETRA INVALIDA ";
	}
}
