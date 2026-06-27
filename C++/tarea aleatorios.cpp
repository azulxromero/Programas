//investigar como se genera un numero aleatorio y hacer un codigo de como se genera
//Los numeros aleatorios se generan con la funcion "rand()" se genera un rango y te da un numero aleatorio dentro de ese rango

#include<iostream>
#include <cstdlib>
#include<stdlib.h>
#include<time.h>
using namespace std;
main()
{
	int a;
	srand(time(NULL));
	a= rand() %200;
	
    cout << a << endl;
   
}
