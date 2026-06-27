//Programa 66
//David Alejandro Padilla Dominguez
//Adivinar el numero que genero la maquina con maximo de 3 intentos
#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
main()
{
	int n,d,c=0;
	
   srand(time(NULL));
   d=1+rand()%(10);
//   cout<<d;
   
   do{
   	cout<<"Adivina el numero del 1 al 10:  "; cin>>n;
   	c++;
   	if (n>d)
   	{
   		cout<<"Intenta con un numero mas bajo";
	   }
    if (n<d)
    {
    	cout<<"Intenta con un numero mas alto";
	}
   if (c==3)
   {
   	   cout<<"Se acabaron tus intentos";
   }
   if (n==d)  
   {
   	cout<<"Felicidades adivinaste el numero"<<endl;
   }
   }
   while(c!=3 and n!=d);
	
	

}
