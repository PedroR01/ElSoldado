#pragma once
#ifndef ESCOPETA_H
#define ESCOPETA_H
#include "Arma.h"

class Escopeta :public Arma
{
public:
	Escopeta();
	virtual ~Escopeta();
	virtual void disparo();
};

#endif // ESCOPETA_H