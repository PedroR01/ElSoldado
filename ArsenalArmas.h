#pragma once
#ifndef ARSENALARMAS_H
#define ARSENALARMAS_H
#include "ArmaEnums.h"
#include "Arma.h"
#include <map>

class Arma;

enum class ArmasDisponibles
{
	Revolver = 1,
	Rifle,
	Escopeta
};

// En esta clase es donde se crean las distintas armas
class ArsenalArmas
{
public:
	~ArsenalArmas() = default;

	/////////////////////  error LNK2019:
	//static std::map<ArmaEnums::ClasesArmas, Arma*>obtenerListaArmas();
	//static Arma* obtenerArma(ArmaEnums::ClasesArmas tipo);
	/////////////////////

	static std::map<ArmasDisponibles, Arma*>obtenerListaArmas();
	static Arma* obtenerArma(ArmasDisponibles tipo);

	Arma* crearArma(int& arma);
};

#endif // !ARSENALARMAS_H
