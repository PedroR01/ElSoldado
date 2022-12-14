#pragma once
#ifndef ARMA_H
#define ARMA_H
#include "ArsenalArmas.h"
#include<string>

// Arma ya no es una clase abstracta
// Se encarga de ser el "intermediario" entre la creación de armas y su interaccion con el soldado
class Arma
{
protected:
	std::string nombre;
	ArsenalArmas* armeria;
public:
	Arma();
	void getArma(int armaElegida);

	// Estos metodos ya no son puros y virtuales
	virtual ~Arma();
	virtual void disparo();
};

#endif // ARMA_H