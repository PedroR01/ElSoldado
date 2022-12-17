#include "Rifle.h"
#include <iostream>

Rifle::Rifle()
{
	this->nombre = "Rifle";
	std::cout << "\nRifle recogido" << std::endl;
}

Rifle::~Rifle()
{
	std::cout << "\nHas devuelto el rifle" << std::endl;
}

void Rifle::disparo()
{
	std::cout << "\nPUM PUM PUM!..." << std::endl;
}