#pragma once
#ifndef ARMA_H
#define ARMA_H
#include "ArsenalArmas.h"
#include<string>

class ArsenalArmas;

// Clase abstracta
// Se encarga de ser el "intermediario" entre la creación de armas y su interaccion con el soldado
class Arma
{
protected:
	std::string nombre;
public:
	Arma();

	std::string getArma();

	// Metodos puros y virtuales
	virtual ~Arma() = default;
	virtual void disparo() = 0;
};

#endif // ARMA_H