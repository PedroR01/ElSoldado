#include "Arma.h"
#include <iostream>

Arma::Arma()
{
	std::cout << "Arma generada" << std::endl;
}

Arma::~Arma()
{
	delete this;
}