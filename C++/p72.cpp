#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
using namespace std;
main()
{
	int j [100];
	int i;
	int c=0;
	int n, s;
	srand(time(NULL));
	
	do{
	cout<<"Digite un numero:  ";
	cin>>n;
	for(i=0;i<100;i++)
	{
	j[i]=1+rand()%(1-100);
	cout<<j[i]<<"\t";
	if(j[i]==n)
    {
    	c++;
	}
	}
	cout<<"\n Su numero se repite:   "<<c<<"  veces";
	cout<<"\n Desea otro numero?..si=1..no=2..";
	cin>>s;
	}while(s==1);
	
}
