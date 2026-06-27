//PROGRAMA 24
//leer un caracter, uno entero y una cadena
//AZUL XIMENA TAPIA ROMERO

#include<iostream>
using namespace std;
main()
{
	// int  ,  float  ,  char    , string
	// declarando un tipo de dato tipo caracter
	char c;
	//char nombre[50];
	// declarando una variable tipo cadena
	string nombre;
	int edad;
	cout<<"teclea una letra : ";
	//cin>>c;
	cin.get(c);
	// limpiar buffer
	fflush(stdin);
	cout<<"\n\n";
	cout<<"Teclea tu nombre : ";
	//cin.getline(nombre,50);
	//cin>>nombre;
	getline(cin,nombre);
	// limpiar el buffer
	fflush(stdin);
	cout<<"\n\n";
	cout<<"teclea tu edad   : ";
	cin>>edad;
}	

