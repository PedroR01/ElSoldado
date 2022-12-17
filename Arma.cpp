#include "Arma.h"
#include "ArsenalArmas.h"
#include <iostream>

Arma::Arma()
{
	this->nombre = "default";
}

std::string Arma::getArma()
{
	return this->nombre;
}