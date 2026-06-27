
#include<iostream>
#include<cstdlib>
using namespace std;

int main() {
	float intentos;
	float num_ingresado;
	float num_secreto;
	intentos = 3;
	num_secreto = (rand()%100)+1;
	cout << "Adivine el numero (de 1 a 100):" << endl;
	cin >> num_ingresado;
	while (num_secreto!=num_ingresado && intentos>1) {
		if (num_secreto>num_ingresado) {
			cout << "Muy bajo" << endl;
		} else {
			cout << "Muy alto" << endl;
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
	return 0;
}

