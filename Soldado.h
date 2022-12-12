#pragma once
#ifndef SOLDADO_H
#define SOLDADO_H
#include<string>
#include "Arma.h"

class Soldado
{
private:
	Arma* arma;
public:
	void recogerArma();
	void dejarArma();
	std::string armaActual();
	void disparar(); //puede ser string capaz
	void salir();
};

#endif // SOLDADO_H
