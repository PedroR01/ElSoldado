#pragma once
#ifndef RIFLE_H
#define RIFLE_H
#include "Arma.h"

class Rifle :public Arma
{
public:
	Rifle();
	~Rifle() override;
	virtual void disparo() override;
};

#endif // RIFLE_H
