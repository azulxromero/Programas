//Programa 63
//David Alejandro Padilla Dominguez
#include<math.h>
#include<iostream>
using namespace std;
main()
{
	int a=1,i,x;
	float c,x1=0,x2,x3;
	
	cout<<"¿Cuantos numeros quieres para tu serie?"<<endl;
	cin>>x;
	cout<<"\n";
	for(i=1;i<=x;i=i+1)
	{
	cout<<a<<"/ 2^"<<i ;
	cout<<" + ";
    x1=pow(2,i);
    x2=1/x1;
    x3=x3+x2;
	}
	
	cout<<"= "<<x3;
}
	
