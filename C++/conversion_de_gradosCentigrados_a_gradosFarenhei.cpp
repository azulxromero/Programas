
//convertir grados farenhei a centigrados

#include<iostream>
using namespace std;
main()
{
	//declarar variables
	float gf, c;
	//leer variables
	cout<<"dar grados farenhei   ";
	cin>>gf;
	//proceso
	c= (gf-32)*5/9;
	//salida
	 cout<<"\n";
	cout<<"grados farenhei en centigrados es igual a :" <<  c ;
	return 0;
}
