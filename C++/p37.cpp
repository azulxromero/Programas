//problema 37
//azul ximena tapia romero
//leer los tres lados de un triangulo y determinar si el triangulo es equilatero tres lados iguales , escaleno tres lñados diferentes, o isoseles 2 lados iguales y uno diferente
#include<iostream>
using namespace std;
main()
{
	int l1, l2, l3;
	cout<<"dar lado 1   ";
	cin>>l1;
	cout<<"dar lado 2   ";
	cin>>l2;
	cout<<"dar lado 3   ";
	cin>>l3;
	if (l1==l2 and l1==l3)
	 cout<<"el triangulo es equilatero  "<<endl;
	else
	  if (l1==l2 or l1==l3)
	  if(l1!=l2 or l1!=l3)
	  cout<<"el triangulo es isosceles  "<<endl;
	  if(l1!=l2)
	  if(l1!=l3)
	 cout<<"el triangulo es escaleno    "<<endl;
}

