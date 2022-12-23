#include "Arma.h"
//#include "ArsenalArmas.h"
#include <iostream>

//class ArsenalArmas;
//enum class ArmasDisponibles;

Arma::Arma()
{
	this->nombre = "default";
}

//error LNK2019, si comento las definiciones no me tira el error
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