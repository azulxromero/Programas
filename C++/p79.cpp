//programa 79
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
using namespace std; 
main()
//generar un caracter de tipo aleatorio
{
	while(1){
		srand(time(NULL));
		char c= (rand()%255);
		
		system("cls");
		cout<< c<<endl;
		
		cout<<"presione una tecla para continuar:  ";
		getch();
	}
	
}
