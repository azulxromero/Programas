//Programa 66
//genera 100 numeros aleatorios
//David Alejandro Padilla Dominguez
#include<iostream>
#include<cstdlib>
#include<time.h>
using namespace std;
main()
{
  int i;

	srand(time(NULL));
	for (int i=0;i<=100;i++)
{
	cout<<1+(rand() %10)<<endl;
}
    return 0;

}
