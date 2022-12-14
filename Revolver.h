#pragma once
#ifndef REVOLVER_H
#define REVOLVER_H
#include "Arma.h"

class Revolver : public Arma
{
public:
	Revolver();
	virtual ~Revolver();
	virtual void disparo();
};

#endif // REVOLVER_H