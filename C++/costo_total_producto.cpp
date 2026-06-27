//leer un nombre de un producto n, cuesta n pesos y se vende por productos
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float p, precio,c ;
	string nombre;
	cout<<"dar nombre de producto   ";
	getline(cin,nombre);
	cout<<"dar precio del producto   ";
	cin>>precio;
	cout<<"dar cantidad de productos   ";
	cin>>c;
	p= precio*c;
	cout<<"el producto de "<<nombre<<"/t tiene un precio de   "<<precio<<"/tpor la cantidad de productos que lleva su total sera  "<<p;
} 
