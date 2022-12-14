#include "Soldado.h"

void Soldado::recogerArma(int armaElegida)
{
	// Arma al no ser abstracta me deja generarla en la memoria dinamica.
	arma = new Arma();

	arma->getArma(armaElegida);
}

void Soldado::dejarArma()
{
	this->arma = NULL;
}
void Soldado::disparar()
{
	this->arma->disparo();
}
std::string Soldado::armaActual()
{
	return "";
}
void Soldado::salir()
{
}