// Generar Curp
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
using namespace std; 
main()
{ 
int ps,al,al1;
	string ap,am,no,ao,me,di,gen,est;
	string ap1,am1,no1,ao1,me1,di1,gen1,est1;
	string ap2,am2,no2;
	string v[]={"gr","me","mi","mo"},v1[]={"guerrero","mexico","michoacan","monterrey"};
	system("TITLE Azul Romero Shaina Palma Michelle");
	cout<<"Apellido paterno: ";
	getline(cin,ap);
	fflush(stdin);
	cout<<"Apellido materno: ";
	getline(cin,am);
	fflush(stdin);
	cout<<"Nombre: ";
	getline(cin,no);
	fflush(stdin);
	cout<<"A�o de nacimiento: ";
	getline(cin,ao);
	fflush(stdin);
	cout<<"Mes de nacimiento: ";
	getline(cin,me);
	fflush(stdin);
	cout<<"Dia de nacimiento: ";
	getline(cin,di);
	fflush(stdin);
	cout<<"Genero (h=hombre m=mujer): ";
	getline(cin,gen);
	fflush(stdin);
	cout<<"Estado de registro: ";
	getline(cin,est);
	fflush(stdin);
	
	al=1+rand()%(0-9);
	al1=1+rand()%(0-9);
	for(int i=0;i<4;i++)
	{
		if(est==v1[i])
		ps=i;
	}
	
	ap1=ap.substr(0,2);
	am1=am.substr(0,1);
	no1=no.substr(0,1);
	ao1=ao.substr(2,4);
	me1=me.substr(0,2);
	di1=di.substr(0,2);
	gen1=gen.substr(0,1);
	ap2=ap.substr(2,1);
	am2=am.substr(2,1);
	no2=no.substr(1,1);
	
	
	cout<<ap1<<am1<<no1<<ao1<<me1<<di1<<gen1<<v[ps]<<ap2<<am2<<no2<<al<<al1;
	
	
	
	
	
}
