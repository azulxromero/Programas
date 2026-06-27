//leer 5 numeros y calcular por separada la suma y multiplicacion de ellos

#include<iostream>

using namespace std;
main()
{
	int a, b, c, d, e, s, m;
	cout<<"leer un numero    ";
	cin>>a;
	cout<<"leer un numero    ";
	cin>>b;
	cout<<"leer un numero    ";
	cin>>c;
	cout<<"leer un numero    ";
	cin>>d;
	cout<<"leer un numero    ";
	cin>>e;
	
	s= a+b+c+d+e;
	m= a*b*c*d*e;
	
	cout<<"dar resultado de suma   "<<s<<endl;
	
	cout<<"dar resultado de multiplicacion   "<<m;
}
