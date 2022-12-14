#include "Revolver.h"
#include <iostream>

Revolver::Revolver()
{
	std::cout << "Revolver agarrado" << std::endl;
}
Revolver::~Revolver()
{
	std::cout << "Has devuelto el revolver" << std::endl;
	delete this;
}
void Revolver::disparo()
{
	std::cout << "PUM..." << std::endl;
}