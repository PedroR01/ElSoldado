#include "Revolver.h"
#include <iostream>

Revolver::Revolver()
{
	this->nombre = "Revolver";
	std::cout << "\nRevolver recogido" << std::endl;
}
Revolver::~Revolver()
{
	std::cout << "\nHas devuelto el revolver" << std::endl;
}
void Revolver::disparo()
{
	std::cout << "\nPUM..." << std::endl;
}