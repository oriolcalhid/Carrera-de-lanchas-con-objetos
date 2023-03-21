#include "lancha.h"
#include "windows.h"
using namespace std;


//CONSTRUCTOR
lancha::lancha(string pName, int pVel, int pDis, int pNit) {
	name = pName;
	velocidad = pVel;
	distancia = pDis;
	nitro = pNit;
}


//GETTERS
string lancha::getName() {
	return name;
}

int lancha::getVel() {
	return velocidad;
}

int lancha::getDis() {
	return distancia;
}

int lancha::getNit() {
	return nitro;
}


//SETTERS
void lancha::setName(string pName) {
	name = pName;
}

void lancha::setVel(int pVel) {
	velocidad = pVel;
}

void lancha::setDis(int pDis) {
	distancia = pDis;
}
void lancha::setNit(int pNit) {
	nitro = pNit;
}

//Metodos
void lancha::printLancha1() {

	int usnitro;
	int aleatorio;
	srand(time(NULL));
	cout << "El primer corredor se llama " << name << endl;
	Sleep(1000);
	int dado1 = rand() % 6 + 1;
	cout << name << " ha tirado el dado y le ha salido un " << dado1 << endl;
	Sleep(1000);

	velocidad = velocidad + dado1;

	if (nitro == 1)
	{
		cout << "Te he anadido nitro, quieres usarlo? [1] SI - [2] NO" << endl;
		Sleep(1000);
		cin >> usnitro;

		if (usnitro == 1) {

			aleatorio = rand() % 2;
			if (aleatorio == 0) {
				velocidad /= 2;
				cout << "Lo siento pero tu velocidad pasa a ser la mitad." << endl;
				Sleep(1000);
			}
			else {

				velocidad *= 2;
				cout << "Tu velocidad se va a multiplicar!!" << endl;
				Sleep(1000);

			}

			nitro = 0;
		}
		else {

			cout << "No se usara Nitro" << endl;
			Sleep(1000);

		}
	}

	
	distancia = distancia + velocidad * 100;
	cout << "Tu velocidad actualmente es de " << velocidad << endl;
	Sleep(1000);
	cout << "Llevas " << distancia << "km de distancia recorrida." << "\n" << endl;
	Sleep(1000);
}


void lancha::printLancha2() {

	int usnitro;
	int aleatorio;
	cout << "El segundo corredor se llama " << name << endl;
	Sleep(1000);
	int dado2 = rand() % 6 + 1;
	cout << name << " ha tirado el dado y le ha salido un " << dado2 << endl;
	Sleep(1000);
	velocidad = velocidad + dado2;

	if (nitro == 1)
	{
		cout << "Te he anadido nitro, quieres usarlo? [1] SI - [2] NO" << endl;
		Sleep(1000);
		cin >> usnitro;

		if (usnitro == 1) {
			
			aleatorio = rand() % 2;
			if (aleatorio == 0) {
				velocidad /= 2;
				cout << "Lo siento pero tu velocidad pasa a ser la mitad." << endl;
				Sleep(1000);
			}
			else {

				velocidad *= 2;
				cout << "Tu velocidad se va a multiplicar!!" << endl;
				Sleep(1000);

			}

			nitro = 0;
		}
		else {

			cout << "No se usara Nitro" << endl;
			Sleep(1000);

		}
	}
	
	
	distancia = distancia + velocidad * 100;
	cout << "Tu velocidad actualmente es de " << velocidad << endl;
	Sleep(1000);
	cout << "Llevas " << distancia << "km de distancia recorrida." << "\n" << endl;
	Sleep(1000);
}

