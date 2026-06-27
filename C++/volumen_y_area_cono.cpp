//calcular e imprimir el volumen y area de un cono 
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float r, a, g, v, area;
	
	cout<<"dar radio";
	cin>>r;
	cout<<"altura";
	cin>>a;
	cout<<"dar generatriz";
	cin>>g;
	
	v= (3.1416*pow(r,2)*a)/3;
	area= 3.1416*r*g+pow(3.1416,2);
	
	cout<<"dar volumen"<<v<<endl;
	cout<<"dar area lateral"<<area<<endl;
}

