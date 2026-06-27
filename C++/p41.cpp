//programa 41
//leer un numero, realizar el o los procesos que correspondan segun sea el numero dado 
// 0 enviar mensaje de error, si el numero es 50 multiplicarlo por 3, si el numero esta entre 51 o 100 elevarlo al cuadrado
//tapia romero azul ximena 
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	int n, x, y, nom, l;
	string nombre;
	cout<<"dar un numero ";
	cin>>n;
	x= sqrt(n);
	y= 50*3;
	l= pow(n,2);
	if (n<=0)
	cout<<"\a ERROR";
	else
	if (n>=1 and n<=49)
	   cout<<"el resultado es "<<x;
	else
	if (n>=51 and n<=100)
	 cout<<" el resultado es "<<l;
	if (n==50)
	  cout<<"el resultado es "<<y;
	else
	  if (n>100)
	    {fflush(stdin);
	cout<<"dar nombre  ";
	getline(cin,nombre);
	cout<<" su nombre es  "<<nombre;	}
	  
}
