#include "Rifle.h"
#include <iostream>

Rifle::Rifle()
{
	std::cout << "Rifle agarrado" << std::endl;
}

Rifle::~Rifle()
{
	std::cout << "Has devuelto el rifle" << std::endl;
	delete this;
}

void Rifle::disparo()
{
	std::cout << "PUM PUM PUM!..." << std::endl;
}