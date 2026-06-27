//programa 46
//tapia romero azul ximena
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
	int e,e1,t,x2,oc=1,t1=0,op=1;
	
	while(oc==1)
	{
	system ("cls");
	op=1;
	int s=0;
	
	do{
	system ("cls");
	
    gotoxy(50, 7);cout<<" BEAUTY GLAM"<<endl;
	gotoxy(40, 8);cout<<"---------------------------------------"<<endl;
	gotoxy(40, 10);cout<<"[ 1 ].....LABIAL.................[ $200 ]"<<endl;
	gotoxy(40, 11);cout<<"[ 2 ].....RUBOR..................[ $150 ]"<<endl;
	gotoxy(40, 12);cout<<"[ 3 ].....ILUMINADOR.............[ $130 ]"<<endl;
	gotoxy(40, 13);cout<<"[ 4 ].....POLVO COMPACTO.........[ $350 ]"<<endl;
	gotoxy(40, 14);cout<<"[ 5 ].....POLVO TRASLUCIDO.......[ $235 ]"<<endl;
	gotoxy(40, 15);cout<<"[ 6 ].....SOMBRAS PARA OJOS......[ $750 ]"<<endl;
	gotoxy(40, 16);cout<<"[ 7 ].....GLOSS..................[ $450 ] "<<endl;
	gotoxy(40, 17);cout<<"---------------------------------------"<<endl;
    gotoxy(40, 20);cout<<"SELECCIONA EL PRODUCTO QUE DESEA ";  cin>>e; cout<<"\n";
    gotoxy(40, 22);cout<<"¿CUANTOS PRODUCTOS DESEA?  ";  cin>>e1; cout<<"\n";
    
	switch (e)
	{
		case 1:
			t= e1*200;
			break;
		case 2:
			t= e1*150;
			break;
		case 3:
			t= e1*130;
			break;
		case 4:
			t= e1*350;
			break;
		case 5:
			t= e1*235;
			break;
		case 6:
			t= e1*750;
			break;
		case 7:
			t= e1*450;
			break;
	}
		s=s+t;
	    gotoxy(40, 24);	cout<<"Subtotal a pagar: "<<t<<endl;
		gotoxy(40, 26);cout<<"¿Otro producto? 1=si 2=no = ";
		gotoxy(40, 28);cin>>op;
	}	while(op==1);
		gotoxy(40, 30);cout<<"Total a pagar: "<<s<<endl;
		gotoxy(40, 32);cout<<"¿otro cliente?: 1=si 2=no = ";
	    gotoxy(40, 34); 	cin>>oc;
		t1=t1+s;
		
	
}
		gotoxy(40, 36);cout<<"Ventas del dia = "<<t1;
}
