//programa 11
//calcular e imprimer el volumen, area lateral y el area total de un prisma recto de tipo rectangular

#include<iostream>
using namespace std;
main()
{
	//variables
	float b, lb, a, ab, v, p, al, at;
	//declarar variables
;	cout<<"dar altura de base   ";
	cin>>b;
	cout<<"dar largo de base   ";
	cin>>lb;
	;cout<<"dar altura   ";
	cin>>a;
	//proceso
	ab= b*lb;
	v= ab*a;
	p= a+a+lb+lb;
	al= p*a;
	at= al+(2*ab);
	
	cout<<"area base:    "<< ab<< endl;
	cout<<"volumen:   "<<v<<endl;
	cout<<"perimetro base:   "<<p<<endl;
	cout<<"area lateral:   "<<al<<endl;
	cout<<"area total:   "<<at<<endl;
	
	
}

