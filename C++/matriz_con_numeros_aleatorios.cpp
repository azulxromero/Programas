//programa que imprima una matriz 10x10 con numero aleatorios

#include<iostream>
#include<conio.h>
#include<cstdlib>
#include<ctime>
using namespace std;

int main()
{
	srand(time(0));
	int n[10][10],n1[10][10],n2[10][10],f,c,s=0;

	for(int i=0;i<10;i++)
	{
		for(int j=0;j<10;j++)
		{
		n[i][j]=1+rand()%(9);
		cout<<n[i][j]<<"\t";
			if(i==j)
			{
			s=s+n[i][j];
			n1[i][j]=0;
			}
			else
			n1[i][j]=n[i][j];
		if(i==j)
			{
			n2[i][j]=0;
			}
			else
			n2[i][j]=n[i][j];;
			if(i<j)
			{
				n2[i][j]=1;
			}
			if(i>j)
			{
			n2[i][j]=2;
			}
		}
		cout<<"\n\n";
	} 
	cout<<"Suma de la diagonal: "<<s;
	
	cout<<"\n";cout<<"\n";
	cout<<"-----------------------------------------------------------------------------------------"; cout<<"\n";cout<<"\n";
	
for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cout<<n1[i][j]<<"\t";
		}
		
		cout<<"\n\n";
	}	
	
	cout<<"\n";cout<<"\n";
	cout<<"-----------------------------------------------------------------------------------------"; cout<<"\n";cout<<"\n";
for(int i=0;i<10;i++){
		for(int j=0;j<10;j++){
			cout<<n2[i][j]<<"\t";
		}
		
		cout<<"\n\n";
	}	
	
}

