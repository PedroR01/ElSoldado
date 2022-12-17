#pragma once
#ifndef SOLDADO_H
#define SOLDADO_H
#include<string>
#include <iostream>
#include "Arma.h"
#include "ArsenalArmas.h"

class Soldado
{
private:
	Arma* arma0;
	ArsenalArmas* arma;
public:
	void recogerArma(int armaElegida);
	void dejarArma();
	std::string armaActual();
	void disparar(); //puede ser string capaz
	void salir();
};

#endif // SOLDADO_H
