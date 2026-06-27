//calcular e imprimir el volumen de una esfera y el area de la misma 
//PI=3.1416 
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	
	float r, v, a;
	
	cout<<"dar radio   ";
	cin>>r;
	
	v= 4/3*3.1416*pow(r,2);
	a= 4*3.1416*pow(r,2);
	
	cout<<"dar volumen:   "<<v<<endl;
	cout<<"dar area:    "<<a<<endl;
}

