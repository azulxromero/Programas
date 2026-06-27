//Programa 61
//David Alejandro Padilla Dominguez
//imprimir numeros q el siguiente numero que se imprima sea la suma de los 2 anteriores
#include<iostream>
using namespace std;
main()
{
	
	int i,x,a=0,b=1,c;
	cout<<"Dame la cantidad de numeros:"<<"\n";
	cin>>x;
	cout<<"01";

	for(i=1;i<=x;i=i+1)
       {
	   c=a+b;
	   	a=b;
		b=c;
		
		cout<<c;
	}
}
