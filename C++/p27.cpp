//programa 27
//Azul Ximena Tapia Romero 2do semestre
//
#include<iostream>
#include<math.h>
using namespace std;
main()
{
	float po, res, rt;
	int lv;
	cout<<"dar cantidad de libros vendidos durante los seis meses"<<endl;
	cin>>lv;
	res= lv*123;
    po= res*0.13;
	rt= res+po;
	cout<<"dar  total sin impuestos:   "<<res<<endl;
	cout<<"dar total con impuestos:    "<<rt<<endl;
	cout<<"el valor de impuestos fue de un 13%:   "<<po<<endl;
}

