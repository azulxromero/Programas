//PROGRAMA 44
//TAPIA ROMERO AZUL XIMENA
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
	int a;
  gotoxy(40,6); cout<<"FUNCIONES MATEMATICAS  "<<endl;
  gotoxy(40,7); cout<<"Archivo de cabecera math.h "<<endl;
  gotoxy(40,9);cout<<"_____________________________"<<endl;
  gotoxy(40,10);cout<<"[ 1 ].......pow"<<endl;
  gotoxy(40,11);cout<<"[ 2 ].......sqrt"<<endl;
  gotoxy(40,12);cout<<"[ 3 ].......ceil"<<endl;
  gotoxy(40,13);cout<<"[ 4 ].......abs"<<endl;
  gotoxy(40,14);cout<<"[ 5 ].......floor"<<endl;
  gotoxy(40,15);cout<<"[ 6 ].......salida"<<endl;
  gotoxy(40,16);cout<<"_______________________________"<<endl;
  gotoxy(40,17);cout<<"FUNCION A PRACTICAR :  ";
  gotoxy(40,18);cin>>a;
  system("cls");
switch (a)
{
	int n, ne, m, n1, n2, x;
	float n3, n5, n4, n7, n8, n6;
    case 1:
	         gotoxy(40,6); cout<<" FUNCION POW "<<endl;
             gotoxy(40,7); cout<<" Sirve para elevar un numero a la potencia dada "<<endl;
             gotoxy(40,8);cout<<" Da un numero ";
             gotoxy(40,9);cin>>n;
             gotoxy(40,10); cout<<" Da el numero por el cual se elevara ";
             gotoxy(40,11);cin>>ne;
             m= pow(n,ne);
             gotoxy(40,15);cout<<" El resultado es "<<m;
			 gotoxy(40, 20); cout<<"oprime un numero para volver ";
						gotoxy(40,21);  cin>>x;
						   system("cls"); if (x==1)
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
	         gotoxy(40,6); cout<<"FUNCION SQRT ";
             gotoxy(35,7); cout<<"Sirve para sacar la raiz cuadrada de un numero ";
             gotoxy(40,9); cout<<"Da un numero ";
             gotoxy(40,11);cin>>n1;
             gotoxy(40,12);n2= sqrt (n1);
             gotoxy(40,13);cout<<"La raiz cuadrada de  "<<n1<<" es "<<n2;
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
             gotoxy(40,6); cout<<"FUNCION CEIL ";
             gotoxy(35,7); cout<<"Sirve para sacar el valor entero superior del numero";
             gotoxy(40,9); cout<<"Da un numero con decimal  ";
             cin>>n3;
             n8= ceil(n3);
             gotoxy(40,13);cout<<"El numero superior de "<<n3<<" es: "<<n8;  
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
             gotoxy(40,6); cout<<"FUNCION FABS "; 
             gotoxy(35,7); cout<<"Se utiliza para obtener el valor absouto de un numero ";
             gotoxy(40,9); cout<<" Da un numero a sacar el valor absoluto  ";
            cin>>n5;
             n6= fabs (n5);
			 gotoxy(40,10);cout<<"El numero redondeado superior es: "<<n6;
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
             gotoxy(40,5);cout<<"FUNCION FLOOR ";
             gotoxy(40,6); cout<<"Redondea el numero a el numero inferior ";
             gotoxy(35,7); cin>>n7;
             n4= floor(n7);
             gotoxy(40,11);cout<<" El numero redondeado inferior es : "<< n4; 
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
case 6: 
	         gotoxy(40,6); cout<<"FUNCION SALIDA ";
             gotoxy(40,8); cout<<" SALIDA DE SISTEMA "; break;
             return 0;
             system("pause");
default :
	return main();
	system("pause");
}
}
