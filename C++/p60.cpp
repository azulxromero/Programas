//TAPIA ROMERO AZUL XIMENA
//PROGRAMA 60
//IMPRIMIR ABECEDARIO EN MINUSCULAS Y MAYUSCULAS
#include<iostream>
using namespace std;

void abecedario (bool mt)
{
	char ini;
	char fin;
    int i;
    
    if (mt== true)
    {
    	i= 65;
    	fin= 90;
	}
	else 
	{
		i= 97;
		fin= 122;
	}
	cout<<"\n \n \n ";
	
	for (ini=i; ini<= fin; ini++)
	{
		cout<< ini<<"   ";
	}
	cout<<"\n \n \n ";
}

main()
{
	cout<<"_________ABECEDARIO EN MAYUSCULAS Y MINUSCULAS_________";
	abecedario (true);
	abecedario (false);
}
