//Programa 80
// generar 30 caracteres y decir cuantas vocales hay
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
using namespace std; 
main()
{
	int c, a=0, e=0, ii=0, o=0, u=0, s=0;
    srand(time(NULL));
	for (int i=1; i<=50; i++)
	{
		
		char c= (rand()%255);
		c= tolower(c);
		cout<< c <<"\t";
		switch(c)
		{
			case 'a': a++; break;
			case 'e': e++; break;
			case 'i': ii++; break;
			case 'o': o++; break;
			case 'u': u++; break;
			
		}
		s=a+e+ii+o+u;
	}
	cout<<"\n";
	cout<<"Hay un total de "<<s<<"vocales ";
}
