#include<iostream>
#include<conio.h>
using namespace std;
main()
{

int numeros [] = {1,2,3,4,5};
int suma =0;
for(int i=0;i<5;i++){
	suma += numeros[i];
}
cout<<"la suma de los elementos de los vectores es: "<<suma<<endl;
getch();
return 0;
}
