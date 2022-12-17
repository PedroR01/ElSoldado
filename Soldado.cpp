#include <iostream>
#include "Soldado.h"

void Soldado::recogerArma(int armaElegida)
{
	arma0 = dynamic_cast<Arma*>(arma->crearArma(armaElegida));
	if (arma0 == nullptr)
		std::cout << "conversion fallida" << std::endl;
}

void Soldado::dejarArma()
{
	if (arma0 == nullptr)
		std::cout << "\nUsted no tiene arma. Elija y tome una de las disponibles." << std::endl;
	else
	{
		delete arma0;
		arma0 = nullptr;
	}
}

void Soldado::armaActual(bool disparar)
{
	if (arma0 == nullptr)
		std::cout << "\nSin arma equipada. Primero debe recoger un arma soldado!" << std::endl;
	else if (arma0 != nullptr && !disparar)
		std::cout << "\n" << arma0->getArma() << std::endl; // puntero de Arma ya convertido en el arma elegida
	else
		arma0->disparo();
}
void Soldado::salir()
{
	std::cout << "\n¡RETIRADA!" << std::endl;
	delete this;
}