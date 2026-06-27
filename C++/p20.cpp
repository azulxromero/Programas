//programa 20
//calcular el valor de x y y dadas las siguientes ecuaciones
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	//declarar variables
	float a, b, c, d, e, f, x, y;
	//leer variables
	cout<<"dar un numero      ";
	cin>>a;
	cout<<"dar un numero      ";
	cin>>b;
	cout<<"dar un numero      ";
	cin>>c;
	cout<<"dar un numero      ";
	cin>>d;
	cout<<"dar un numero      ";
	cin>>e;
	cout<<"dar un numero      ";
	cin>>f;
	//proceso
	x= ((c*e)-(b*f))/((a*e)-(b*d));
	y= ((a*f)-(c*d))/((a*e)-(b*d));
	//salida
	cout<<"dar resultado x:   "<<x;
	cout<<"\n";
	cout<<"dar resultado y:   "<<y;
	
}
