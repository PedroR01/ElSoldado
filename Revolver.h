#pragma once
#ifndef REVOLVER_H
#define REVOLVER_H
#include "Arma.h"

class Arma;

// ...\Revolver.h(11,1): error C2504: 'Arma': clase base sin definir

class Revolver :public Arma
{
public:
	Revolver();
	virtual ~Revolver();
	virtual void disparo();
};

#endif // REVOLVER_H