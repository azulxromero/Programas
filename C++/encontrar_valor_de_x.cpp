//encuentra el valor de x dada la situacion
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float a, b, c, x;
	
	cout<<"dar un numero        ";
	cin>>a;
	cout<<"dar un numero        ";
	cin>>b;
	cout<<"dar un numero        ";
	cin>>c;
	
	x= (a*b*c)/(b*c)+2*a+2*b-c/a+pow(a,2)-pow(c,2);
	
	cout<<"dar valor de x:     "<<x;
}
