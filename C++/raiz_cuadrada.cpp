//funcion  sqrt para calcular la raiz cuadrada
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float n;
	int resultado;
	cout<<"dame un numero:   ";
	cin>>n;
	resultado= pow(n,2);
	cout<<"raiz cuadrada:   "<< resultado<<endl;
}
