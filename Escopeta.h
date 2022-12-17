#pragma once
#ifndef ESCOPETA_H
#define ESCOPETA_H
#include "Arma.h"

class Escopeta :public Arma
{
public:
	Escopeta();
	~Escopeta() override;
	virtual void disparo() override;
};

#endif // ESCOPETA_H