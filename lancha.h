#pragma once
#include <iostream>
using namespace std;

class lancha
{
private:
	string name;
	int velocidad;
	int distancia;
	int nitro;

public:
	//Constructor
	lancha(string pName, int pVel, int pDis, int pNit);


	//getters
	string getName();
	int getVel();
	int getDis();
	int getNit();


	//setters
	void setName(string pName);
	void setVel(int pVel);
	void setDis(int pDis);
	void setNit(int pNit);



	//Metodos propios
	void printLancha1();
	void printLancha2();
};

