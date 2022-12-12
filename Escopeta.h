#pragma once
#ifndef ESCOPETA_H
#define ESCOPETA_H
#include "Arma.h"

class Arma; // Esto no afecta al error, pero me da la impresion de que esta mal llamado por el tipo de relacion UML, aunque lo añadi para prevenir un llamado infinito entre ambas clases

//...\Escopeta.h(11,1): error C2504: 'Arma': clase base sin definir

class Escopeta :public Arma
{
public:
	Escopeta();
	virtual ~Escopeta();
	virtual void disparo();
};

#endif // ESCOPETA_H