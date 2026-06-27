//programa 21
//AZUL XIMENA TAPIA ROMERO
#include<iostream>
using namespace std;
int main()
 {
    int cen, dec, num, res, uni, mill;
    cout << "10. MOSTRAR LA UNIDAD, DECENA Y CENTENA.\n\n";                    
    cout << "Ingrese Numero de 4 Cifras : ";
    cin >> num;
    mill= (num-(num%1000))/1000;
    cen = num%1000/100;
    res = num%100;
    dec = (res-(res%10))/10;
    uni = res%10;
    cout << "millar  : " << mill <<endl;
    cout << "Centena : " << cen << endl;
    cout << "Decena  : " << dec << endl;
    cout << "Unidad  : " << uni << endl;
    return 0;
}  
