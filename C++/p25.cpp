//PROGRAMA 25
//
//AZUL XIMENA TAPIA ROMERO

#include<iostream>
using namespace std;
main()
{
	char c, b;
	string nombre, asignatura, especialidad;
	int edad;
	float p1, p2, p3, promedio;
	cout<<"\"CENTRO DE ESTUDIOS TECNOLOGICOS, industrial y de servicios No.41 \""<<endl;
	cout<<"DEPARTAMENTO DE CONTROL ESCOLAR";
	cout<<"\n\n\n";
	fflush(stdin);
	cout<<"Dar tu nombre             ";
	getline(cin,nombre);
	cout<<"\n\n\n";
	cout<<"Semestre en el que vas    ";
	cin.get(c);
	cout<<"\n\n\n";
	fflush(stdin);
	cout<<"Grupo en el que vas       ";
	cin.get(b);
	cout<<"\n\n\n";
	fflush(stdin);
	cout<<"Dar nombre de asignatura  ";
	getline(cin,asignatura);
	cout<<"Dar especialidad          ";
	getline(cin,especialidad);
	cout<<"parcial 1                 ";
	cin>>p1;
	cout<<"\n";
	cout<<"parcial 2                 ";
	cin>>p2;
	cout<<"\n";
	cout<<"parcial 3                 ";
	cin>>p3;
	cout<<"\n\n\n";
	promedio= (p1+p2+p3)/3;
	cout<<"promedio final:     "<<promedio;
	
}
