//programa 43
//TAPIA ROMERO AZUL XIMENA
//leer un numero del 1 al 7 e imprimir mediante un mensaje a que dia de la semana pertenece
#include<iostream>
using namespace std;
main()
{
   int n;
   cout<<"dar un numero  ";
   cin>>n;
   switch(n)
   {
   	case 1: cout<<"Lunes "; break;
   	case 2: cout<<"Martes "; break;
   	case 3: cout<<"Miercoles ";break;
   	case 4: cout<<"Jueves "; break;
   	case 5: cout<<"Viernes "; break;
   	case 6: cout<<"Sabado "; break;
   	case 7: cout<<"Domingo "; break;
   	default: cout<<"\a ERROR ";
   	
   }

}
