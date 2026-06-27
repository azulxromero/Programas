//tapia romero azul ximena
//calcul�ar el val�or de x 
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float a, b, c, g, p,m,z,x;
	cout<<"dar un numero  ";
	cin>>a;
    cout<<"dar un numero  ";
    cin>>b;
    cout<<"dar un numero  ";
    cin>>c;
    g= (2*a)+(2*b)+(2*c);
    p= 4*pow(a,2);
    m= 8*pow(b,2);
    z= pow(a,2)+pow(b,2)+pow(c,2);
    x= g-p+m-z;
    cout<<"el valor de x es   "<<x;
    
}
