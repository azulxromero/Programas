//programa 28
//LEER EL NOMBRE DE UN PRODUCTO, SU PRECIO Y LA CANTIDAD DE ESTE PRODUCTO QUE SE ENCUENTRA EN EL ALMACEN, APLICAR EL 15% DE IVA AL PRECIO DEL PRODUCTO.
//AZUL XIMENA TAPIA ROMERO 
#include<iostream>
using namespace std;
main()
{
	string producto;
    float precio, pa, p, pf;
    fflush(stdin);
	cout<<"Producto:     ";
	getline(cin,producto);
	cout<<"\n";
	cout<<"Precio del producto:   ";
	cin>>precio;
	cout<<"Productos en almacen:  ";
	cin>>pa;
	p= precio*0.15;
	pf= precio+p;
	cout<<"Hay "<<  pa <<"\t"<< producto <<" \t en el almacen "<<" el precio del producto sin el iva es de "<<precio <<" y con el iva es "<<pf <<endl;
	
}
