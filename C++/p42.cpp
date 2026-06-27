//programa 42
//tapia romero azul ximena
//la comercializadora mexico
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	string nombre, producto;
	int p, ca;
	float a, b, c, d, e, f, g, h, i;
	fflush(stdin);
	cout<<"Nombre del cliente ";
	getline(cin,nombre);
	cout<<"Nombre del producto ";
	getline(cin,producto);
	cout<<"Dar cantidad de productos ";
	cin>>ca;
	cout<<"Dar precio del producto ";
	cin>>p;
	a= p*ca;
	b= a*0.10;
	c= a*0.18;
	d= a*0.25;
	e= a*0.45;
	f= a-b;
	g= a-c;
	h= a-d;
	i= a-e;
	if (ca>=100 and ca<=300)
	{ cout<<"El total sin descuento es "<<a<<endl;
	 cout<<"El descuento es de 10%:    "<<b<<endl;
	 cout<<"El total con el descuento es  "<<f<<endl;}
	 else
	if (ca>=301 and ca<=700)
	{ cout<<"El total sin descuento es "<<a<<endl;
	 cout<<"El descuento es de 18%:    "<<c<<endl;
	 cout<<"El total con el descuento es  "<<g<<endl;}
	 else
    if (ca>=701 and ca<=1500)
    { cout<<"El total sin descuento es "<<a<<endl;
	 cout<<"El descuento es de 25%:    "<<d<<endl;
	 cout<<"El total con el descuento es  "<<h<<endl;}
	 else
	if (ca>1500)
	{ cout<<"El total sin descuento es "<<a<<endl;
	 cout<<"El descuento es de 42%:    "<<e<<endl;
	 cout<<"El total con el descuento es  "<<i<<endl;}
	 else 
	 cout<<"De una cantidad de productos correctas ";
}
