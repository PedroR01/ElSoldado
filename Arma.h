#pragma once
#ifndef ARMA_H
#define ARMA_H
#include<string>
#include "Revolver.h"
#include "Rifle.h"
#include "Escopeta.h"

// No me estaba quedando claro como poder llamar a sus clases hijas desde el soldado o main sin incluirlas con el .h
class Revolver;
class Rifle;
class Escopeta;

class Arma
{
protected:
	std::string nombre;
public:
	Arma();
	virtual ~Arma(); // Destructor virtual (con el fin de que al dejar el arma se ejecute el destructor del arma que se deja, a la vez que se la borra)
	virtual void disparo() = 0; // funcion pura y virtual
};

#endif // ARMA_H