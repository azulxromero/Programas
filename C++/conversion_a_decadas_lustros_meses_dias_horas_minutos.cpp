//programa 7
//leer la edad entera de una persona convertirla a decadas, lustros, meses, dias, horas,minutos y segundos
#include<iostream>

using namespace std;
//funcion principal
main() 
{   //inicio
   //poner variables
   float n; 
   float dc;
   float l;
   float me;
   float d;
   float hrs;
   float m;
   float s;
   
   cout<<"insertar edad   ";
   cin>>n;
   
   dc= n/10;
   l= n/5;
   me= n*12;
   d= n*365;
   hrs= n*8760;
   m=n*5256000;
   s= n*31536000;
   
   cout<<"decadas :"<<dc;
    cout<<"\n";
   cout<<"lustros :"<<l;
    cout<<"\n";
   cout<<"meses :"<<me;
    cout<<"\n";
   cout<<"dias :"<<d;
    cout<<"\n";
   cout<<"horas :"<<hrs;
    cout<<"\n";
   cout<<"minutos :"<<m;
    cout<<"\n";
   cout<<"segundos :"<< s;
   }
