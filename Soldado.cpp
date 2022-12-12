#include "Soldado.h"

void Soldado::recogerArma()
{
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