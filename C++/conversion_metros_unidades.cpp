//convertir una cantidad de metros a millas a millas terrestres y a pies

#include<iostream>
using namespace std;
main()
{
	float m, millas, pies;
	
	cout<<"dar cantidad de metros    ";
	cin>>m;
	
	millas= m/1609;
	pies= m*3.28;
	
	cout<<"dar millas:    "<<millas<<endl;
	cout<<"dar pies:      "<<pies<<endl;
	
}

