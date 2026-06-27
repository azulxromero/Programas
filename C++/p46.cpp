//programa 46
//tapia romero azul ximena
#include<iostream>
#include<math.h>
#include<conio.h>
#include<windows.h>
using namespace std;

void gotoxy(int x, int y){
	HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD dwPos;
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hcon, dwPos);
}

int main()
{
	char e;
	gotoxy(40, 7);cout<<"AREAS, PERIMETROS Y VOLUMENES "<<endl;
	gotoxy(40, 8);cout<<"--------------------------------"<<endl;
	gotoxy(40, 10);cout<<"[ Aa ].....AREAS Y PERIMETROS "<<endl;
	gotoxy(40, 11);cout<<"[ Vv ].....VOLUMENES "<<endl;
	gotoxy(40, 12);cout<<"[ Ss ].....SALIDA "<<endl;
	gotoxy(40, 14);cout<<"--------------------------------"<<endl;
    gotoxy(40, 16);cout<<"ACCION A EJECUTAR   ";  cin>>e;
     
    e= toupper(e);
	fflush(stdin);
	system ("cls");
    switch(e)
    {
    	int b; do{
    	case 'A': 
    	    gotoxy(40, 6);cout<<"AREAS Y PERIMETROS  "<<endl;
            gotoxy(40, 7);cout<<"____________________________"<<endl;
            gotoxy(40, 9);cout<<"[ 1 ]....Cuadrado "<<endl;
            gotoxy(40, 10);cout<<"[ 2 ]....Rectangulo "<<endl;
         	gotoxy(40, 11);cout<<"[ 3 ]....Triangulo  "<<endl;
    	    gotoxy(40, 12);cout<<"[ 4 ]....Rombo "<<endl;
         	gotoxy(40, 13);cout<<"[ 5 ]....Regresar "<<endl;
         	gotoxy(40, 14);cout<<"____________________________"<<endl;
          	gotoxy(40, 15);cout<<"ACCION A EJECUTAR  "; 
			gotoxy(40, 16);cin>>b;
			system ("cls");
		
             switch (b)
			    {	
			    	int n, p, b, l1, l2, l3, h, m;
			    	float a;
			    	case 1:
			    		gotoxy(40,6); cout<<"CUADRADO "<<endl;
			    		gotoxy(40,7); cout<<"____________________________________";
			    		gotoxy(40,9); cout<<"Dar lado "<<endl;
			    		gotoxy(40,10); cin>>n;
			    		p= n+n+n+n;
			    		a= n*n;
			    		gotoxy(40,12); cout<<"El perimetro del cuadrado es= "<<p;
			    		gotoxy(40,13); cout<<"El area del cuadrado es= "<<a;
						gotoxy(40, 20); cout<<"oprime un numero para volver ";
						gotoxy(40,21);  cin>>m;
						   system("cls"); if (m==1)
						    {
						    	return main();
						    	system("pause");
							} 
							else 
							{
							    return main();
						    	system("pause");
							}break;
					case 2:
                        gotoxy(40,6); cout<<"RECTANGULO "<<endl;
			    		gotoxy(35,7); cout<<"___________________________________";
			    		gotoxy(40,9); cout<<"Dar base "<<endl;
			    		gotoxy(40,10); cin>>b;
			    		gotoxy(40,11); cout<<"Dar altura  "<<endl;
			    		gotoxy(40,12); cin>>h;
			    		p= b+h+b+h;
			    		a= b*h;
			    		gotoxy(40,13); cout<<"El perimetro del rectangulo es= "<<p;
			    		gotoxy(40,14); cout<<"El area del rectangulo es= "<<a;
			    		gotoxy(40, 20); cout<<"oprime un numero para volver ";
						gotoxy(40,21);  cin>>m;
						   system("cls"); if (m==1)
						    {
						    	return main();
						    	system("pause");
							} 
							else 
							{
							    return main();
						    	system("pause");
							}break;
			    	
			    	case 3:
			    	    gotoxy(40,6); cout<<"TRIANGULO "<<endl;
			    		gotoxy(35,7); cout<<"___________________________________";
			    		gotoxy(40,9); cout<<"Dar lado 1 "<<endl;
			    		gotoxy(40,10); cin>>l1;
			    		gotoxy(40,11); cout<<"Dar lado 2 "<<endl;
			    		gotoxy(40,12); cin>>l2;
			    	    gotoxy(40,13); cout<<"Dar lado 3 "<<endl;
			    		gotoxy(40,14); cin>>l3;
			    		gotoxy(40,15); cout<<"Dar base   "<<endl;
			    		gotoxy(40,16); cin>>b;
			    		gotoxy(40,17); cout<<"Dar altura "<<endl;
			    		gotoxy(40,18); cin>>h;
						p= l1+l2+l2;
			    		a= (b*h)/2;
			    		gotoxy(40,19); cout<<"El perimetro del triangulo es= "<<p;
			    		gotoxy(40,20); cout<<"El area del triangulo es= "<<a;
						gotoxy(40, 20); cout<<"oprime un numero para volver ";
						gotoxy(40,21);  cin>>m;
						   system("cls"); if (m==1)
						    {
						    	return main();
						    	system("pause");
							} 
							else 
							{
							    return main();
						    	system("pause");
							}break;			    		
			    	case 4:
			    		gotoxy(40,6); cout<<"ROMBO "<<endl;
			    		gotoxy(35,7); cout<<"___________________________________";
			    		gotoxy(40,9); cout<<"Dar lado 1 "<<endl;
			    		gotoxy(40,10); cin>>l1;
			    		gotoxy(40,11); cout<<"Dar lado 2 "<<endl;
			    		gotoxy(40, 12); cin>>l2;
			    		p= l1+l1+l2+l2;
			    		a= l1*l2;
			    		gotoxy(40,12); cout<<"El perimetro del rombo es= "<<p;
			    		gotoxy(40,13); cout<<"El area del rombo es= "<<a; 
						gotoxy(40, 20); cout<<"oprime un numero para volver ";
						gotoxy(40,21);  cin>>m;
						   system("cls"); if (m==1)
						    {
						    	return main();
						    	system("pause");
							} 
							else 
							{
							    return main();
						    	system("pause");
							}break;
			    	case 5:
			    		return main();}}
						while(b>5);
			    		system("pause");
			    		break;
			    		
			    	default:
			    	return main();
			    	system ("pause");
					
						
						
    	case 'V': 
		do {gotoxy(40, 6);cout<<"VOLUMENES   "<<endl;
            gotoxy(40, 7);cout<<"____________________________"<<endl;
            gotoxy(40, 9);cout<<"[ 1 ]....Cono "<<endl;
            gotoxy(40, 10);cout<<"[ 2 ]....Cubo "<<endl;
         	gotoxy(40, 11);cout<<"[ 3 ]....Esfera  "<<endl;
    	    gotoxy(40, 12);cout<<"[ 4 ]....Elipse  "<<endl;
         	gotoxy(40, 13);cout<<"[ 5 ]....Regresar  "<<endl;
         	gotoxy(40, 14);cout<<"____________________________"<<endl;
          	gotoxy(40, 15);cout<<"ACCION A EJECUTAR  "; cin>> b;
			system ("cls");
			switch(b)
			{
				float v, n, d, r, h, l, a, m;
				
				case 1:
					    gotoxy(40,6); cout<<"CONO"<<endl;
					    gotoxy(35,7); cout<<"___________________________________";
					    gotoxy(40,9); cout<<"Dar radio   "<<endl;
					    gotoxy(40,10); cin>>r;
					    gotoxy(40,11); cout<<"Dar altura  "<<endl;
					    gotoxy(40,12); cin>>h;
					    v= 3.1416*r*r*h;
					    gotoxy(40,12); cout<<"El volumen del cono es= "<<v; 
					    gotoxy(40, 20); cout<<"oprime un numero para volver ";
						gotoxy(40,21);  cin>>m;
						   system("cls"); if (m==1)
						    {
						    	return main();
						    	system("pause");
							} 
							else 
							{
							    return main();
						    	system("pause");
							}break;
					    
			    case 2:
			    	    gotoxy(40,6); cout<<"CUBO"<<endl;
			    		gotoxy(35,7); cout<<"___________________________________";
			    		gotoxy(40,9); cout<<"Dar lado "<<endl;
			    		gotoxy(40, 10); cin>>n;
			    	    v= pow (n, 3);
			    		gotoxy(40,12); cout<<"El volumen del cubo es= "<<v;
						gotoxy(40, 20); cout<<"oprime un numero para volver ";
						gotoxy(40,21);  cin>>m;
						   system("cls"); if (m==1)
						    {
						    	return main();
						    	system("pause");
							} 
							else 
							{
							    return main();
						    	system("pause");
							}break;			    		
			    case 3:
			    	    gotoxy(40,6); cout<<"ESFERA"<<endl;
			    		gotoxy(35,7); cout<<"___________________________________";
			    		gotoxy(40,9); cout<<"Dar radio "<<endl;
			    		gotoxy(40, 10); cin>>r;
			    		d= pow(r,3);
			    	    v= (4/3)*3.1416*d;
			    		gotoxy(40,12); cout<<"El volumen del cubo es= "<<v;
						gotoxy(40, 20); cout<<"oprime un numero para volver ";
						gotoxy(40,21);  cin>>m;
						   system("cls"); if (m==1)
						    {
						    	return main();
						    	system("pause");
							} 
							else 
							{
							    return main();
						    	system("pause");
							}break;						 
			    case 4:
			    	    gotoxy(40,6);cout<<"ELIPSE";
			    		gotoxy(35,7); cout<<"___________________________________";
						gotoxy(40,9); cout<<"Dar altura "<<endl;
						gotoxy(40,10); cin>>h;
						gotoxy(40,11); cout<<"Dar largo del elipse "<<endl;
						gotoxy(40,12); cin>>l;
						gotoxy(40,13); cout<<"Dar ancho del elipse "<<endl;	  
						gotoxy(40,14); cin>>a;
						v= (4/3)*3.1416*h*l*a;
						gotoxy(40,15); cout<<"El volumen del elipse es= "<<v; 
						gotoxy(40, 20); cout<<"oprime un numero para volver ";
						gotoxy(40,21);  cin>>m;
						   system("cls"); if (m==1)
						    {
						    	return main();
						    	system("pause");
							} 
							else 
							{
							    return main();
						    	system("pause");
							}
						break;						  
			    case 5:
			    	return main();}}
						while(b>5);
			    		system("pause");
			    		break;
	
			case 'S':
    		gotoxy(40, 6);cout<<"FIN DE SISTEMA   "<<endl;
			return 0;break;
			
}}
