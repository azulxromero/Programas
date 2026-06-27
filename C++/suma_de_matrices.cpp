//calcula la suma de dos vectores de 3*3
#include<iostream>
#include <cstdlib>
#include<stdlib.h>
#include<time.h>
using namespace std;
main()
{
	int n[3][3], m[3][3],h[3][3],v[3][3], v1[3][3], s=0, s1=0;
	srand(time(0));
	for(int i=0; i<3; i++)
	{
	for(int j=0; j<3; j++)
	{
		n[i][j]=1+rand()%(9);
		cout<<n[i][j]<<"\t";
	}	
	   cout<<"\n";
	}
	cout<<endl;
	for(int i=0; i<3; i++)
	{
	for(int j=0; j<3; j++)
	{
		m[i][j]=1+rand()%(9);
		cout<<m[i][j]<<"\t";
		
	}
	cout<<"\n";
	}
	cout<<endl;
	for(int i=0; i<3; i++)
	{
	for(int j=0; j<3; j++)
	{
		h[i][j]=n[i][j]+m[i][j];
	cout<<h[i][j]<<"\t";
	}
	cout<<"\n";
	}
		
	
	
	}
