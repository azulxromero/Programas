//Programa 68
//David Alejandro Padilla Dominguez
//La ferreteria ACEROS S.A. de C.V. vende laminas de diferente grosorn se tiene que manejar bajo las siguientes condiciones
//a.- si la venta excede a las 100 hojas de la lamina,el total a pagarse le hara un descuento del %20
//b.-si la venta excede las 500 hojas de la lamina, el total a pagar se le hara un descuento del %30
//c.-si la venta excede las 1000 hojas de la lamina, el total a pagar se le hara un descuento del %40
//d.-solo se venden laminas de 101 laminas en adelante
//E.- la ferreteria vende laminas de 3/4 de pulgada cuyo precio es de 345 y las lamijnas de 1/2 pulgada cuyo precio es de 234
//f.-si el pago total es a credito sele cobrara el %3 de comision 
//g.- si el pago total es en efectivo se aplicara un descuento del %2
#include<iostream>
using namespace std;
main()
{
	int tipo,cantidad,trampa=0,pago,c=1;
	float totaldia=0,p,comision,totalpagar,subtotal,descuento,total;
	while(c==1)
	{
	system("cls");
	cout<<"FERRETERIAS ACEROS, S.A. de C.V.\n";
	cout<<"Tipos de Laminas\n";
	cout<<"1 ... lamina 3/4  $ 345.00\n";
	cout<<"2 ... lamina 1/2  $ 234.00\n";
	cout<<"Tipo de lamina que llevara:  ";
	cin>>tipo;
	if(tipo==1)
	{
	p=345;
	}
	if(tipo==2)
	{
	p=234;
	}
	cout<<"Cantidad de laminas a comprar  :  ";
	cin>>cantidad;
	
	if(cantidad<=100)
	{
		cout<<"Lo  sentimos,nosotros vendemos por mayoreo\n";
		trampa=1;
	}
	if(trampa==0)
	{
	
	
	if(cantidad>100 && cantidad<=500)
	{
		subtotal=p*cantidad;
		descuento=subtotal*0.20;
		total=subtotal-descuento;
	}
	
	if(cantidad>500 && cantidad<=1000)
	{
		subtotal=p*cantidad;
		descuento=subtotal*0.30;
		total=subtotal-descuento;
	}	
	
	if(cantidad>1000)
	{
		subtotal=p*cantidad;
		descuento=subtotal*0.40;
		total=subtotal-descuento;
	}
	cout<<"Formas de Pago\n";
	cout<<"1 ... Credito\n";
	cout<<"2 ... Contado\n";
	cout<<"Seleccione  :  ";
	cin>>pago;
	
	if(pago==1)
	{
		comision=total*0.03;
		totalpagar=total+comision;
	}
	
	if(pago==2)
	{
		comision=total*0.02;
		totalpagar=total-comision;
	}
    	cout<<"Subtotal    :  "<<subtotal<<"\n";
	    cout<<"Descuento   :  "<<descuento<<"\n";
	    cout<<"Total 1     :  "<<total<<"\n";
	    cout<<"Comision    :  "<<comision<<"\n";
	    cout<<"Total Pagar :  "<<totalpagar<<"\n";
	} 
	    totaldia=totaldia+totalpagar;
	    cout<<"Otro Cliente  1:si    2: no   ";
	    cin>>c;
}
	
	cout<<"Venta del Dia  : "<<totaldia;
}
