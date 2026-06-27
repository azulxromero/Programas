//programa 21
//calcular el area de una corona 
//AZUL XIMENA TAPIA ROMERO
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float dm, dmayor, pi=3.1416, a1, p;
	cout<<"dar diametro menor   ";
	cin>>dm;
	cout<<"dar diametro mayor   ";
	cin>>dmayor;
	
	a1= pi/4*(pow(dm,2)-pow(dmayor,2));
	p= pi*(dm+dmayor);
	
	cout<<"dar area:     "<<a1;
	cout<<"\n";
	cout<<"dar perimetro:  "<<p;
}
