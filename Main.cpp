#include "lancha.h"
#include "windows.h"
#include <iostream>

int main() {

	int turno = 0;

	lancha lancha1("Paco",0,0,1),lancha2("Guillem", 0,0,1);

	while (turno < 6)
	{
		lancha1.printLancha1();
		lancha2.printLancha2();

		turno++;
	}
	if (lancha1.getDis()> lancha2.getDis())
	{
		cout << "El ganador es "<< lancha1.getName() << " la distancia que ha conseguido ha sido " << lancha1.getDis() << "km." << endl;
		Sleep(1000);
	}
	else {
		cout << "El ganador es " << lancha2.getName() << " la distancia que ha conseguido ha sido " << lancha2.getDis() << "km." << endl;
		Sleep(1000);
	}

	return 0;
}