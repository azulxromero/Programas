//programa 81
#include<iostream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<windows.h>
#include<time.h>
using namespace std; 
main()
{
	string nomb[]={"MICHELLE REYES","SHAINA PALMA","DAVID PADILLA","ASLAN PEREZ","EDGAR VERBOONEN","AZUL ROMERO","LESLY GARCIA","AIDAN GALLAGHER"," \n" };
	string nomb1[]={"tilina993@gmail.com      ","potaxie@gmail.com    ", "fife3000@gmail.com    ","espantaV13j45@gmail.com   ", "gatita.gamer34@gmail.com   ", "miniona041@gmail.com   ", "tili2a993@gmail.com   " , "aidanr89@gmail.com   " };
    int e, pn, n2[5], n3[5], n4[5], ob; 
    char nom[30], l[89];
    srand(time(NULL));
    
    do{
    	system("Title azul");
    	system("cls");
    	cout<<"NOMBRE"<<"\t \t   "<<"EDAD"<<"\t   \t "<<"CORREO"<<"\t  \t\t \t "<<"N.TELEFONO"<<endl<<endl;
	for (int i=0; i<8; i++)
	{
		n2[i]=15 + rand() % (50 - 1);
		n3[i]=10000000000 + rand() % (7445324583-1);
		cout<<nomb[i]<<"\t    "<<n2[i]<<"\t\t"<<nomb1[i]<<"   \t "<<n3[i]<<"\n";
	}
	cout<<endl<<endl;
	cout<<"Busqueda de informacion:   ";
	cout<<endl<<endl;
	fflush(stdin);
	cout<<"Nombre a buscar:  "; gets(nom); cout<<"\n";
	if(nom==nomb[0])
	{
		cout<<nomb[0]<<"\n";
		cout<<"Correo: "<<nomb1[0]<<"\n";
	cout<<"Num. telefono : "<<n3[0]<<"\n";
		cout<<"Edad : "<<n2[0]<<"\n";
	}
	else 
	if(nom==nomb[1])
	{
		cout<<nomb[1]<<"\n";
		cout<<"Correo: "<<nomb1[1]<<"\n";
		cout<<"Num. telefono : "<<n3[1]<<"\n";
		cout<<"Edad : "<<n2[1]<<"\n";
	}
	else
	if(nom==nomb[2])
	{
		cout<<nomb[2]<<"\n";
		cout<<"Correo: "<<nomb1[2]<<"\n";
		cout<<"Num. telefono : "<<n3[2]<<"\n";
		cout<<"Edad : "<<n2[2]<<"\n";
	}
	else
	if(nom== nomb[3])
	{
		 cout<<nomb[3]<<"\n";
		cout<<"Correo: "<<nomb1[3]<<"\n";
		cout<<"Num. telefono : "<<n3[3]<<"\n";
		cout<<"Edad : "<<n2[3]<<"\n";
	}
	else
	if(nom==nomb[4] )
	{
		cout<<nomb[4]<<"\n";
		cout<<"Correo: "<<nomb1[4]<<"\n";
		cout<<"Num. telefono : "<<n3[4]<<"\n";
		cout<<"Edad : "<<n2[4]<<"\n";
	}
	else 
	if(nom== nomb[5])
	{
		cout<<nomb[5]<<"\n";
		cout<<"Correo: "<<nomb1[5]<<"\n";
		cout<<"Num. telefono : "<<n3[5]<<"\n";
		cout<<"Edad : "<<n2[5]<<"\n";
	}
	else
	if(nom==nomb[6] )
	{
		 cout<<nomb[6]<<"\n";
		cout<<"Correo: "<<nomb1[6]<<"\n";
		cout<<"Num. telefono : "<<n3[6]<<"\n";
		cout<<"Edad : "<<n2[6]<<"\n";
	}
	else
	if(nom== nomb[7] )
	{
	     cout<<nomb[7]<<"\n";
		cout<<"Correo: "<<nomb1[7]<<"\n";
		cout<<"Num. telefono : "<<n3[7]<<"\n";
		cout<<"Edad : "<<n2[7]<<"\n";
	}
	cout<<endl<<endl;
	cout<<"Otra busqueda?  si=2 no=1 : "<<"\n";
	cin>>ob;
	}while(ob==2);
    
}
