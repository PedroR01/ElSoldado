#pragma once
#ifndef REVOLVER_H
#define REVOLVER_H
#include "Arma.h"

class Revolver : public Arma
{
public:
	Revolver();
	~Revolver() override;
	virtual void disparo() override;
};

#endif // REVOLVER_H