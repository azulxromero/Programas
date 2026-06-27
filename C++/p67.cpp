//Programa 67
//David Alejandro Padilla Dominguez
//genera una cantidad x de numeros aleatorios en un rango de 0 a 100, resuelve las siguientes condiciones
//suma los numeros generados
//promedio de los numeros genrados
//cuantos numeros son par 
//cuantos numeros son impar
//cuanto suman los pares
//cuanto suman los impares
//cuantos 0 y cuantos 100 se generaron
//obtener la raiz cuadrada de cada numnero generado
//obtener 2 potencia de cada numero generado
#include<iostream>
#include<cstdlib>
#include<time.h>
#include<math.h>
using namespace std;
main()
{
	int n,x,x2=0,i=1,x3,x4=0,x5=0,x6=0,x7=0,cero=0,cien=0;
	double s,s2;
	
	srand(time(NULL));
	cout<<"Ingresa la cantidad de numeros que generaras:  ";
	cin>>n;
	cout<<"\n";
	cout<<"Num.------"<<"\t"<<"Raiz Cuadrada------"<<"\t\t"<<"Potencia al 2"<<"\n";
	for(i=1;i<=n;i=i+1)
	{
    	x=1+(rand()%100);
	    s=sqrt(x);
    	s2=pow(x,2);
    	cout<<x<<"\t"<<s<<"\t\t"<<s2<<"\n";
    	x2=x2+x;
	if(x%2==0)
	{
         x5=x5+1;	
	     x4=x4+x;
	}
	if(x%2==1)
	{
	     x6=x6+1;
	     x7=x7+x;
	}
	if(x==0)
	     cero=cero+1;
	if(x==100)
	     cien=cien+1;
	}
	        s=sqrt(x);
	        cout<<"Suma Total:  "<<x2<<"\n";
            x3=x2/n;
	        cout<<"Promedio:  "<<x3<<"\n";
            cout<<"Numeros pares = "<<x5<<"\n";
	        cout<<"Numeros impares = "<<x6<<"\n";
	        cout<<"Suma de los numeros pares = "<<x4<<"\n";
	        cout<<"Suma de los numeros impares = "<<x7<<"\n";
	        cout<<"0 generados = "<<cero<<"\n";
	        cout<<"100 generados = "<<cien<<"\n";
	}
