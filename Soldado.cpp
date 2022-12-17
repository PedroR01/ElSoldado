#include "Soldado.h"

void Soldado::recogerArma(int armaElegida)
{
	arma0 = dynamic_cast<Arma*>(arma->crearArma2(armaElegida));
	if (arma0 == nullptr)
		std::cout << "conversion fallida" << std::endl;
	//arma->crearArma(armaElegida);
}

void Soldado::dejarArma()
{
	this->arma = NULL;
}
void Soldado::disparar()
{
}
std::string Soldado::armaActual()
{
	return "";
}
void Soldado::salir()
{
}