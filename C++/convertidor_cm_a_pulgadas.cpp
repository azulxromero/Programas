//convertir una cantidad de centimetros a pulgadas sabiendo que la pulgada es 2.54
#include<iostream>
using namespace std;
main()
{
	float cms, plg=2.54;
	cout<<"dar cantidad de centimetros   ";
	cin>>cms;
	
	plg= cms/plg;
	
	cout<<"dar plg:   "<<plg<<"\n";
}
