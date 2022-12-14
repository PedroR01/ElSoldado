#pragma once
#ifndef ARSENALARMAS_H
#define ARSENALARMAS_H

// Enum pensado para una futura implementacion
enum class ArmasDisponibles
{
	revolver = 1,
	rifle = 2,
	escopeta = 3
};

// En esta clase es donde se crean las distintas armas
class ArsenalArmas
{
public:

	ArmasDisponibles getArma();
	void crearArma(int arma);
};

#endif // !ARSENALARMAS_H
