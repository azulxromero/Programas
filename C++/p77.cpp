//programa 77
//llenar una matriz de 10 por 10 de manera alaetoria en un vector almacenar la suma de la fila, en otro vector almacenar la fila 
#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
		srand(time(0));
	int n[10][10],v[10],v1[10],f,c,s=0,s1=0;
	for(int i=0;i<10;i++)
	{
		s=0;
		s1=0;
		for(int j=0;j<10;j++)
		{
			n[i][j]=1+rand()%(9);
			s=s+n[i][j];
			v[i]=s;
			cout<<n[i][j]<<"\t";	
		}
		cout<<v[i];
		cout<<"\n";cout<<"\n";	
	}
	for(int j=0;j<10;j++)
	{
		s1=0;
		for(int i=0;i<10;i++)
		{
			s1=s1+n[i][j];
			v1[j]=s1;			
		}	
	}
	for(int i=0;i<10;i++)
	{
		cout<<v1[i]<<"\t";
	}	
	
}
