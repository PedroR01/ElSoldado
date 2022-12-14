#include "Arma.h"
#include "ArsenalArmas.h"
#include <iostream>

Arma::Arma()
{
	//armeria = new ArsenalArmas();
}

Arma::~Arma() {}

void Arma::disparo() {}

void Arma::getArma(int armaElegida)
{
	armeria->crearArma(armaElegida);
	//std::cout << "LPM" << std::endl;
}