//Programa con void sin retorno 
//Hacer un programa con switch y con case que tenga 9 programas, 3 codigos sencillos, 3 con if y 3 con for.
#include<iostream>
#include<windows.h>
#include<conio.h>
#include<time.h>
#include<math.h>
using namespace std;
void mensaje (string mensaje )
{
	cout<<"----------------------"<<mensaje<<"----------------------"<<endl;
}

void n(string n)
{
	cout<<"     "<<n<<"        "<<endl;
}

main()
{
    system("Color 5f");
    system( "Title Codigazo: PROGRAMA HECHO POR AZUL ROMERO" );
	int p, a, b, c, d, e, f, n1, r2, intentos, num_ingresado,num_secreto, num [100],i,promedio,aux, suma=0,e3,e1,t,x2,oc=1,t1=0,op=1,e2,s4=0;
	float dll, pm,r, h, g, v, area, x, y,a1=0,co=0, b1=0, c1=0, m, xx; 
	int ii, pp,numm [100],promedioo,sumaa = 0;
	float rr;
	
    mensaje("       Tipos de programas        ");
	mensaje("---------------------------------");
	n("1.....CONVERTIR UNA CANTIDAD DE DOLAR A PESOS MEXICANOS                         ");
	n("2.....CALCULAR E IMPRIMIR EL VOLUMEN Y AREA DE UN CONO                          ");
	n("3.....CALCULAR EL VALOR DE X E Y DE ACUERDO A LAS ECUACIONES                    ");
	n("4.....LEER UN NUMERO DETERMINAR SI ES 0 PAR O IMPAR                             ");
	n("5.....ADIVINAR UN NUMERO ALEATORIO                                              ");
	n("6.....MENU DE UNA FERRETERIA                                                    ");
	n("7.....MENU QUE DA A CONOCER RAIZ CUADRADA Y POTENCIA DE LOS NUMEROS DEL 1 AL 20 ");
	n("8.....CALCULAR EL FACTORIAL DE UN NUMERO X                                      ");
	n("9.....IMPRIME 100 NUMEROS ALEATORIOS TAMBIEN LOS MUESTRA DE FORMA INVERTIDA, MUESTRA EL PROMEDIO Y LA SUMA  ");
	n("10....SALIR DEL PROGRAMA                                                        ");
	do{
		n("Digite el numero del programa a realizar                                ");
		cin>>p;
	}while(p>10);
	system("cls");
	switch (p)
	{
		case 1:
			n("dar dolares   ");
	        cin>> dll;
	        pm= dll*21.67;
        	cout<<"la cantidad de dolares en pesos mexicanos es=   "<<pm;
        	n("Oprime un numero para volver ");
			cin>>m;
			system("cls"); if (m==1)
			{
			return main();
			system("pause");
			} 
			else 
			{
			return main();
			system("pause");}
			break;
		case 2:
			n("dar radio ");
	        cin>>r;
	        n("altura");
	        cin>>h;
	        n("dar generatriz");
	        cin>>g;
	        v= (3.1416*pow(r,2)*h)/3;
	        area= 3.1416*r*g+pow(3.1416,2);
        	cout<<"dar volumen"<<v<<endl;
        	cout<<"dar area lateral"<<area<<endl;
        	n("Oprime un numero para volver ");
			cin>>m;
			system("cls"); if (m==1)
			{
			return main();
			system("pause");
			} 
			else 
			{
			return main();
			system("pause");}
			break;
		case 3:
		    n("dar un numero      ");
	        cin>>a;
	        n("dar un numero      ");
        	cin>>b;
	        n("dar un numero      ");
        	cin>>c;
	        n("dar un numero      ");
	        cin>>d;
	        n("dar un numero      ");
	        cin>>e;
	        n("dar un numero      ");
	        cin>>f;
	        x= ((c*e)-(b*f))/((a*e)-(b*d));
	        y= ((a*f)-(c*d))/((a*e)-(b*d));
	        cout<<"dar resultado x:   "<<x;
	        cout<<"\n";
	        cout<<"dar resultado y:   "<<y;
	        n("Oprime un numero para volver ");
			cin>>m;
			system("cls"); if (m==1)
			{
			return main();
			system("pause");
			} 
			else 
			{
			return main();
			system("pause");}
		    break;
		case 4:
		    n("dar un numero ");
	        cin>>n1;
	        r2= n1%2;
	        if (n1==0)
	        n("el numero es cero   ");
	        else
	        if (r2==0)
	        n("el numero es par   ");
	        else
	        n("el numero es impar  ");
	        n("Oprime un numero para volver ");
			cin>>m;
			system("cls"); if (m==1)
			{
			return main();
			system("pause");
			} 
			else 
			{
			return main();
			system("pause");}
		    break;
		case 5:
		    intentos = 3;
        	num_secreto = (rand()%100)+1;
	        cout << "Adivine el numero (de 1 a 100):" << endl;
	        cin >> num_ingresado;
	        while (num_secreto!=num_ingresado && intentos>1) {
		    if (num_secreto>num_ingresado) {
			n("Muy bajo");
		    } else {
			n("Muy alto");
	       	}
	       	intentos = intentos-1;
	     	cout << "Le quedan " << intentos << " intentos:" << endl;
	      	cin >> num_ingresado;
         	}
	        if (num_secreto==num_ingresado) {
	    	cout << "Exacto! Usted adivino en " << 11-intentos << " intentos." << endl;
	        } else {
	    	cout << "El numero era: " << num_secreto << endl;
         	}
         	n("Oprime un numero para volver ");
			cin>>m;
			system("cls"); if (m==1)
			{
			return main();
			system("pause");
			} 
			else 
			{
			return main();
			system("pause");}
		    break;
		case 6:	
		    while(oc==1){
        	system ("cls"); 
        	op=1;
	
        	while(op==1) {
           	system ("cls");
	    	do{ system("cls");
	        n("la ferreteria ACEROS S.A de C.V");
	        n("________________________________________________");
	        n("[ 1 ]  Laminas de 3/4_______________________$345");
	        n("[ 2 ]  Laminas de 1/2_______________________$234");
	        n("Digite el tipo de lamina deseado:  "); cin>>e3; n(" \n ");
	        n("Digite la cantidad de laminas deseadas:  "); cin>>e1;
	    	}while(e1<=100);
	        n("\n"); 
        	switch (e3)
         	 {
	        case 1:
			  if(e1>=101)
			  {
				a1=e1*345;
				b1=a1*0.20;
				c1=a1-b1;
		      } 
		      if(e1>=501)
			  {
				a1=e1*345;
				b1=a1*0.30;
				c1=a1-b1;
		      } 
		      if(e1>=1001)
			  {
				a1=e1*345;
				b1=a1*0.40;
				c1=a1-b1;
		      }
		    break;
	   	    case 2:
			  if(e1>=101)
			  {
				a1=e1*234;
				b1=a1*0.20;
				c1=a1-b1;
		      }
		      if(e1>=501)
			  {
				a1=e1*234;
				b1=a1*0.30;
				c1=a1-b1;
		      }
		      if(e1>=1001)
			  {
				a1=e1*234;
				b1=a1*0.40;
				c1=a1-b1;
		      }break;
		    
	          }
	        do{ 
            n("Selecciona el metodo de pago ");
            n("____________________________________________");
            n("[ 1 ]    CREDITO                            ");
            n("[ 2 ]     DE CONTADO                        ");
            cin>>e2;
	        }while(e2<1 or e2>2);
	  
            switch(e2)
            {
    	    case 1: 
    	      co= c1*0.03;
    	      t=c1+co;
    	      break;
        	case 2:
    		  co= c1*0.02;
    		  t=c1-co;
    		  break;
           	} 
		    s4=s4+t; 
	    	cout<<"Subtotal a pagar: "<<t<<endl;
		    n("¿Otro producto? 1=si 2=no = ");
		    cin>>op;
	        }
		    cout<<"Total a pagar: "<<s4<<endl;
		    n("¿otro cliente?: 1=si 2=no = ");
	        cin>>oc;
		    t1=t1+s4;
            }
		    cout<<"Ventas del dia = "<<t1;
		    n("Oprime un numero para volver ");
			cin>>m;
			system("cls"); if (m==1)
			{
			return main();
			system("pause");
			} 
			else 
			{
			return main();
			system("pause");}
		    break;
		case 7:
			n("___________________________________________");
            n("Numero \t\t  Raiz  \t\t  Potencia");
            n("___________________________________________");
			for(ii=1; ii<=20; ii++)
        	{
	     	rr= sqrt (ii);
	    	pp= pow(ii, 2);
	     	cout<<ii<<"\t\t"<<rr<<"\t\t"<<pp<<"\n";
         	}
         	n("Oprime un numero para volver ");
			cin>>m;
			system("cls"); if (m==1)
			{
			return main();
			system("pause");
			} 
			else 
			{
			return main();
			system("pause");}
		    break;
		case 8:
	         int nm,i;
             long double factorial; // se declara long double para poder representar números grandes
            cout << "Introduce un numero: ";
            cin >> nm;
            factorial=1;
            for(i=1;i<=nm;i++)
            factorial = factorial * i;
            cout << endl << "Factorial de " << nm << " -> " << factorial << endl;
        	n("\n");
        	n("______________________________");	
		    n("Oprime un numero para volver ");
			cin>>m;
			system("cls"); if (m==1)
			{
			return main();
			system("pause");
			} 
			else 
			{
			return main();
			system("pause"); }
	        break;
		case 9:
			srand(time(NULL));
            for(i=0;i<100;i++)
            {
            numm[i]=1 + rand() % (100);
            sumaa += numm[i];
            }
            for(int i=0;i<100;i++){
            cout<<numm[i]<<" "<<"\t";
            }

            n("\n\n");
            n("VECTOR INVERTIDO\n\n");
            for(int i=99;i>=0;i--){
	        cout<<numm[i]<<"\t"; 
	        }	
            promedioo = sumaa/100;
  
            n("\n");
            cout<<"La suma es: "<<sumaa<<endl;
            cout<<"El promedio es : "<<promedioo<<endl;
            n("______________________________");	
		    n("Oprime un numero para volver ");
			cin>>m;
			system("cls"); if (m==1)
			{
			return main();
			system("pause");
			} 
			else 
			{
			return main();
			system("pause"); }
		    break;
		case 10:
			getch();
	        return 0;
		    break;
	}
	
	getch();
	return 0;
}

