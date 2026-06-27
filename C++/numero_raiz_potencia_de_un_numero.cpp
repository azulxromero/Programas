//programa 57
//Tapia Romero Azul Ximena
//menu
#include<iostream>
#include<math.h>
using namespace std;
main()
 {
	cout<<"___________________________________________"<<"\n";
    cout<<"Numero "<<"\t\t Raiz"<<"\t\t Potencia"<<"\n";
    cout<<"___________________________________________"<<endl;
	int ii, pp;
	float rr;
	for(ii=1; ii<=20; ii++)
	{
		rr= sqrt (ii);
		pp= pow(ii, 2);
		cout<<ii<<"\t\t"<<rr<<"\t\t"<<pp<<"\n";
		
		
	}
}
