#pragma once
#ifndef RIFLE_H
#define RIFLE_H
#include "Arma.h"

class Rifle :public Arma
{
public:
	Rifle();
	virtual ~Rifle();
	virtual void disparo();
};

#endif // RIFLE_H
