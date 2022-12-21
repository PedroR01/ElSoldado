#include "Arma.h"
#include "ArsenalArmas.h"
#include "ArmaEnums.h"
#include <iostream>

Arma::Arma()
{
	this->nombre = "default";
}

std::map<ArmasDisponibles, Arma*> Arma::obtenerLista()
{
	return ArsenalArmas::obtenerListaArmas();
}

Arma* Arma::tomarArma(int armaElegida) // Esto ira en otra clase?
{
	return ArsenalArmas::obtenerArma((ArmasDisponibles)armaElegida);
}

std::string Arma::obtenerNombre()
{
	return this->nombre;
}