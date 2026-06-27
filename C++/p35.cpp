//programa 35
// leer un numero determinar si es cero, par o impar
#include<iostream>
using namespace std;
main()
{
	int n, r;
	cout<<"dar un numero ";
	cin>>n;
	r= n%2;
	if (n==0)
	cout<<"el numero es cero   ";
	else
	if (r==0)
	cout<<"el numero es par   ";
	else
	cout<<"el numero es impar  ";
}
