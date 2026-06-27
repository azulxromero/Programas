#include <stdlib.h>
#include <time.h>
#include<iostream>
#include<conio.h>
using namespace std;
 
int main()
{
	system("COLOR 5f");
	string nomb[]={"Dia#    ","MICH   ","SHAINA   ","DAVID   ","ASLAN   ","EDGAR   ","AZUL   ","LESLY   ","MARIA    ","TOTAL \n" };
	string nomb1[]={"MICH   ","SHAINA   ","DAVID   ","ASLAN   ","EDGAR   ","AZUL   ","LESLY   ","MARIA    "};
	int a[30], b[30],c[30],d[30],e[30],f[30], g[30], h[30],t[30];
    int ac6=0, ac1=0, ac2=0,  ac3=0, ac4=0, ac5=0, ac7=0, ac8=0,  t1=0,pos=0;
	int m6=0, i, m=0, n=0, k;
    srand(time(NULL));
    cout<<nomb[0]<<nomb[1]<< nomb[2]<<nomb[3]<<nomb[4]<<nomb[5]<<nomb[6]<<nomb[7]<<nomb[8]<<nomb[9]<<endl;
    cout<<"_______________________________________________________________________________________________________________________"<<endl;
    
	for(i = 1; i < 31; i++)
    {
        a[i]= 50 + rand() % (501 - 1);
        ac1=ac1+a[i];
        
		b[i]= 50 + rand() % (501 - 1);
		ac2=ac2+b[i];	
		
		c[i]= 50 + rand() % (501 - 1);
    	ac3=ac3+c[i];
		
		d[i]= 50+ rand() % (501 - 1);
		ac4=ac4+d[i];
		
		e[i]= 50 + rand() % (501 - 1);
		ac5=ac5+e[i];
		
		f[i]= 50 + rand() % (501 - 1);
		ac6=ac6+f[i];
		
		g[i]= 50 + rand() % (501 - 1);
		ac7=ac7+g[i];
		
		h[i]= 50 + rand() % (501 - 1);
		ac8=ac8+h[i];
		
		t[i]=a[i]+b[i]+c[i]+d[i]+e[i]+f[i]+g[i]+h[i];
		t1=t1+t[i];
		if(t[i]> m6)
        {
        	m6=t[i];
        	pos=i;
		}
		
			
		
        
		cout <<i<<"\t"<<a[i]<<"\t"<<b[i]<<"\t"<<c[i]<<"\t"<<d[i]<<"\t"<<e[i]<<"\t"<<f[i]<<"\t"<<g[i]<<"\t"<<h[i]<<"\t$" <<t[i]<<"\n";;
    }
    cout<<"_______________________________________________________________________________"<<endl;
    cout<<"TOTAL   "<<ac1<<"\t"<<ac2<<"\t"<<ac3<<"\t"<<ac4<<"\t"<<ac5<<"\t"<<ac6<<"\t"<<ac7<<"\t"<<ac8<<"\t$"<<t1<<endl;
    cout<<endl;
    cout<<"El dia con mayores ventas es el dia "<<pos<<" "<<m6<<endl;
    
    int l[]={ac1, ac2, ac3, ac4, ac5, ac6, ac7, ac8};
    for  (i=0; i<8; i++)
    {
    	if(l[i]>n)
    	{
    		n=l[i];
    		k=i;
    		
		}
	}
	cout<<"El que obtuvo mayor ventas fue: "<<k+1<<" de nombre  "<<nomb[k+1]<<" con $"<<n<<endl;
	    getch();
		return 0;
	}
         
