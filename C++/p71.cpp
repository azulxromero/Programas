#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
using namespace std;
main()
{
	int j [100];
	int i;
	int m;
	int n, s;
	srand(time(NULL));
	for(i=0;i<100;i++)
	{
	j[i]=1+rand()%(1-100);
	cout<<j[i]<<"\t";
	}
	for(i=0;i<100;i++)
	{
	for(m=0;m<100;m++)
		{
			
			if(j[m]>j[m+1])
			{
				n=j[m];
				j[m]=j[m+1];
				j[m+1]=n;
			}
		}
	}
	cout<<"\n\n";
	for(i=0;i<100;i++)
	{
		cout<<j[i]<<"\t";
	}
	
}
