//JOSE ELIAS GUZMAN MIRANDA
//TABLAS DE MULTIPLICAR


#include<iostream>
#include<math.h>
using namespace std;
int main() {

	float n[10] = { 1,2,3,4,5,6,7,8,9,10 };
	string nombre;
	double Nentero, exponencial;
	double Multi,MIR, E[10][10];
	int i,j;

	cout << " Ingrese su nombre: "; cin >> nombre;
	cout << " Ingrese el Numero entero: "; cin >> Nentero;
	cout << " Digite el exponencial:  "; cin >> exponencial;

	cout << " Multiplicacion del Numero entero por un arreglo de 10 " << endl;
	for ( i = 0; i < 10; i++) {
		Multi = Nentero * n[i];
		cout << Multi<<endl;
	}
	cout << endl;

	cout << " Valor del exponente " << endl;

	MIR = pow(Nentero, exponencial);
	cout << "----------------------------------------------------------------" << endl;
	cout << " valor del exponente al numero entero ingresado y su Nombre " << endl;
	cout << " Usuario    " << nombre << endl;
	cout << "   " << Nentero << "  ^  " << exponencial << " = " << MIR << endl;

	cout << "_________________________________________________________________"<<endl;
	cout<< " MATRIZ " << endl;

	for (i = 0; i < Nentero; i++) {
		for ( j = 0; j < Nentero; j++) {

			E[i][j] = pow(Nentero,exponencial);
		}
	}

	for (i = 0; i < Nentero; i++) {
		for ( j = 0; j < Nentero; j++) {

			cout << E[i][j] << "\t";
		}
		cout << "\n";
	}
}