//LEER NUMEROS, EL PROGRAMA TERMINA CUANDO EL NUMERO LEIDO SEA 0
//PROGRAMA 52
//tapia romero azul ximena
#include<iostream>
using namespace std;
main()
{
      int n,accumulator, counter,suma=0;
	//inicio del ciclo
	n=1;
	counter=-1;
	while(n!=0)
	{
		cout<<"Da un numero "<<endl;
		cin>>n;
		counter++;
		suma=suma+n;
	}       
	
	cout<<"la numeros utilizados son  "<<counter<<endl;
	cout<<"la suma de los numeros da un total de "<<suma;
}

