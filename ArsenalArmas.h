#pragma once
#ifndef ARSENALARMAS_H
#define ARSENALARMAS_H
#include "Arma.h"

class Arma;

// Enum pensado para una futura implementacion
enum class ArmasDisponibles
{
	revolver = 1,
	rifle,
	escopeta
};

// En esta clase es donde se crean las distintas armas
class ArsenalArmas
{
private:
	ArmasDisponibles* armasDispPtr;

public:
	ArmasDisponibles getArma();
	Arma* crearArma(int& arma);
};

#endif // !ARSENALARMAS_H
