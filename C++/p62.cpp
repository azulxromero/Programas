//Programa 62
//David Alejandro Padilla Dominguez
//imprimir numeros q el siguiente numero que se imprima sea la suma total

#include<iostream>
using namespace std;
main()
{
	int a=1,b=1,i,x;
	float c,x1=0;
	
	cout<<"¿Cuantos numeros quieres para tu serie?"<<endl;
	cin>>x;
	cout<<"\n";
	for(i=1;i<=x;i=i+1)
	{
	cout<<a<<"/" ;		
	cout<<b;
	b=b+1;
	cout<<" + ";
	c=(float)a/b;
	x1=x1+c;
	}
	cout<<"= "<<x1;
}
	
