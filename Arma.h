#pragma once
#ifndef ARMA_H
#define ARMA_H
#include "ArsenalArmas.h"
#include<string>

class ArsenalArmas;

// Clase abstracta
// Se encarga de ser el "intermediario" entre la creaci�n de armas y su interaccion con el soldado
class Arma
{
protected:
	std::string nombre;
	ArsenalArmas* armeria;
public:
	Arma();
	void getArma(int armaElegida);

	// Metodos puros y virtuales
	virtual ~Arma() = default;
	virtual void disparo() = 0;
};

#endif // ARMA_H