//programa 36
//leer tres numero y determinar cual es el mayor 
#include<iostream>
using namespace std;
main()
{
	int a, b, c;
	cout<<"dar un numero   ";
	cin>>a;
	cout<<"dar un numero   ";
	cin>>b;
	cout<<"dar un numero   ";
	cin>>c;
	if (a>b)
	cout<<"el mayor es "<<a;
	else 
	 if (a<c)
	 cout<<"el mayor es "<<c;
	 else 
	  if(b>c)
	cout<<"el mayor es "<<b;
	else
	 if (c>a)
	 cout<<"el mayor es "<<c;
	 else 
	 cout<<"el mayor es "<<a;
	
}
