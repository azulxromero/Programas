#include<iostream> 
#include<math.h>   
#include<conio.h> 
#include<windows.h>  
#include<stdio.h>     
using namespace std;

void gotoxy(int x, int y){ 
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}
using namespace std;

main()
{
	system("Color 0f");
    system( "Title Codigazo: PROGRAMA HECHO POR AZUL ROMERO" );
	int e3,e1,t,x2,oc=1,t1=0,op=1; 
	int e2,s4;
	float a1=0,co=0, b1=0, c1=0;
	//int s3=0;
	while(oc==1){
	system ("cls"); 
	op=1;
	
	
	while(op==1) {
	system ("cls");
		do{ 
    system("cls");
	gotoxy(40,11);cout<<"la ferreteria ACEROS S.A de C.V"<<endl;
	gotoxy(40,12);cout<<"________________________________________________"<<endl;
	gotoxy(40,13);cout<<"[ 1 ]  Laminas de 3/4_______________________$345"<<endl;
	gotoxy(40,14);cout<<"[ 2 ]  Laminas de 1/2_______________________$234"<<endl;
	gotoxy(40,15);cout<<"Digite el tipo de lamina deseado:  "; cin>>e3; cout<<" \n ";
	gotoxy(40,16);cout<<"Digite la cantidad de laminas deseadas:  "; cin>>e1;
		}while(e1<=100);
	 cout<<"\n"; 
    
	switch (e3)
	{
	     case 1:
			if(e1>=101)
			{
				a1=e1*345;
				b1=a1*0.20;
				c1=a1-b1;
		    }
		    if(e1>=501)
			{
				a1=e1*345;
				b1=a1*0.30;
				c1=a1-b1;
		    }
		    if(e1>=1001)
			{
				a1=e1*345;
				b1=a1*0.40;
				c1=a1-b1;
		    }
		    break;
		case 2:
			if(e1>=101)
			{
				a1=e1*234;
				b1=a1*0.20;
				c1=a1-b1;
		    }
		    if(e1>=501)
			{
				a1=e1*234;
				b1=a1*0.30;
				c1=a1-b1;
		    }
		    if(e1>=1001)
			{
				a1=e1*234;
				b1=a1*0.40;
				c1=a1-b1;
		    }break;
		    
	}
	do{ 
    gotoxy(40,20);cout<<"Selecciona el metodo de pago "<<endl;
    gotoxy(40,22);cout<<"____________________________________________"<<endl;
    gotoxy(40,24);cout<<"[ 1 ]    CREDITO                            "<<endl;
    gotoxy(40,26);cout<<"[ 2 ]     DE CONTADO                        "<<endl;
    gotoxy(40,28);cin>>e2;
	}while(e2<1 or e2>2);
	  
    switch(e2)
    {
    	case 1: 
    	      co= c1*0.03;
    	      t=c1+co;
    	      break;
    	case 2:
    		  co= c1*0.02;
    		  t=c1-co;
    		  break;
	} 
		s4=s4+t; 
	    gotoxy(40, 30);	cout<<"Subtotal a pagar: "<<t<<endl;
		gotoxy(40, 32);cout<<"¿Otro producto? 1=si 2=no = ";
		gotoxy(40, 34);cin>>op;
	}
		gotoxy(40, 36);cout<<"Total a pagar: "<<s4<<endl;
		gotoxy(40, 38);cout<<"¿otro cliente?: 1=si 2=no = ";
	    gotoxy(40, 40); 	cin>>oc;
		t1=t1+s4;
		
	
}
		gotoxy(40, 42);cout<<"Ventas del dia = "<<t1;
}
