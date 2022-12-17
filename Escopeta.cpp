#include "Escopeta.h"
#include <iostream>

Escopeta::Escopeta()
{
	this->nombre = "Escopeta";
	std::cout << "\nEscopeta recogido" << std::endl;
}

Escopeta::~Escopeta()
{
	std::cout << "\nHas devuelto la escopeta" << std::endl;
}

void Escopeta::disparo()
{
	std::cout << "\n¡PAAA!" << std::endl;
}