//LEER NUMEROS, EL PROGRAMA TERMINA CUANDO EL NUMERO LEIDO SEA 0
//PROGRAMA 51
//tapia romero azul ximena
#include<iostream>
using namespace std;
main()
{
      int n,accumulator, counter,s=0;
	//inicio del ciclo
	counter=-1;
	for(n=1; n!=0; n++)
	{
		cout<<"Da un numero "<<endl;
		cin>>n;
		s=s+n;
		counter++;
	}       
	cout<<"la suma de los numeros introducidos es: "<<s<<endl;
	cout<<"la numeros utilizados son  "<<counter<<endl;
}

