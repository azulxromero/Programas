//programa 78
#include <stdlib.h>
#include <time.h>
#include<iostream>
#include<conio.h>
using namespace std;
main()
{
	int a[5][5], b[5][5], c[5][5], d[5][5];
	
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			a[i][j]=1+rand()%(9);
			cout<<a[i][j]<<"\t";
			
		}
		cout<<"\n\n";
	}
	cout<<endl<<endl;
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			b[i][j]=1+rand()%(9);
			cout<<b[i][j]<<"\t";
		}
		cout<<"\n\n";
	}
	cout<<endl<<endl;
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			c[i][j]=a[i][j]+b[i][j];
			cout<<c[i][j]<<"\t";
		}
		cout<<"\n\n";
	}
	cout<<endl<<endl;
	for(int i=0; i<5; i++)
	{
		for(int j=0; j<5; j++)
		{
			d[i][j]=a[i][j]-b[i][j];
			cout<<d[i][j]<<"\t";
		}
		cout<<"\n\n";
	}
	
}
