#include <stdlib.h>
#include <time.h>
#include<iostream>
#include<conio.h>
using namespace std;
 
int main()
{
	system("COLOR 5f");
	int num1[25], num2[25],s[25],r[25],m[25],d[25], c;
    int ac=0, ac1=0, ac2=0,  ac3=0, ac4=0, ac5=0;
	int m6=0, m1=0, m2=0, m3=0, m4=0, m5=0;
    srand(time(NULL));
    
    cout<<"NA \tNA2 \t S \tR \tM \t D \t"<<endl;
    
	for(c = 0; c < 25; c++)
    {
        num1[c]= 0 + rand() % (101 - 1);
        ac=ac+num1[c];
        if(num1[c]> m6)
        {
        	m6=num1[c];
		}
		num2[c]= 0 + rand() % (101 - 1);
		ac1=ac1+num2[c];
		if(num2[c]> m1)
        {
        	m1=num2[c];
		}
		s[c]=num1[c]+num2[c];
		ac2=ac2+s[c];
		if(s[c]> m2)
        {
        	m2=s[c];
		}
		r[c]=num1[c]-num2[c];
		ac3=ac3+r[c];
		if(r[c]> m3)
        {
        	m3=r[c];
		}
		m[c]=num1[c]*num2[c];
		ac4=ac4+m[c];
		if(m[c]> m4)
        {
        	m4=m[c];
		}
		d[c]=num1[c]/num2[c];
		ac5=ac5+d[c];
		if(d[c]> m5)
        {
        	m5=d[c];
		}
		cout << num1[c]<<"\t"<< num2[c]<<"\t"<<s[c]<<"\t"<<r[c]<<"\t"<<m[c]<<"\t"<<d[c]<<"\n";;
    }
    cout<<endl;
    cout<<"La suma de vectores____________________________________________________________"<<endl;
	cout<<"Aleatorios 1:  "<<ac<<"     Mayor: "<<m6<<endl;
	cout<<"Aleatorios 2: "<<ac1<<"      Mayor: "<<m1<<endl;
	cout<<"Suma : "<<ac2<<"             Mayor: "<<m2<<endl;
	cout<<"Resta: "<<ac3<<"              Mayor: "<<m3<<endl;	
	cout<<"Multiplicacion: "<<ac4<<"   Mayor: "<<m4<<endl;
	cout<<"Division:  "<<ac5<<"           Mayor: "<<m5<<endl;
	
	    getch();
		return 0;
	}
         
