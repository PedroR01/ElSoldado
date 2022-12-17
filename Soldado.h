#pragma once
#ifndef SOLDADO_H
#define SOLDADO_H
#include<string>
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
	void armaActual(bool disparar);
	void salir();
};

#endif // SOLDADO_H
