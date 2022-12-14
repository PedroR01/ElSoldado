#include "Escopeta.h"
#include <iostream>

Escopeta::Escopeta()
{
	std::cout << "Escopeta agarrada" << std::endl;
}

Escopeta::~Escopeta()
{
	std::cout << "Has devuelto la escopeta" << std::endl;
	delete this;
}

void Escopeta::disparo()
{
	std::cout << "¡PAAA!" << std::endl;
}