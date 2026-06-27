#include<stdlib.h>
#include<time.h>
#include<iostream>
using namespace std;
int main()
{
  int numm [100],i,promedioo;
  int sumaa = 0;
  
  srand(time(NULL));
  for(i=0;i<100;i++)
  {
   numm[i]=1 + rand() % (100);
   sumaa += numm[i];
   
  }
  
 
  for(int i=0;i<100;i++){
  cout<<numm[i]<<" "<<"\t";
}

cout<<"\n\n";
cout<<"VECTOR INVERTIDO\n\n";
  for(int i=99;i>=0;i--){
	cout<<numm[i]<<"\t"; 
	}	

  
  promedioo = sumaa/100;
  
  cout<<"\n";
  cout<<"La suma es: "<<sumaa<<endl;
  cout<<"El promedio es : "<<promedioo<<endl;
  
  return 0;
}
