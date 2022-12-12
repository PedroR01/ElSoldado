#pragma once
#ifndef RIFLE_H
#define RIFLE_H
#include "Arma.h"

class Arma;

//...\Rifle.h(11,1): error C2504: 'Arma': clase base sin definir

class Rifle :public Arma
{
public:
	Rifle();
	virtual ~Rifle();
	virtual void disparo();
};

#endif // RIFLE_H
