#include "ArsenalArmas.h"
#include "Revolver.h"
#include "Rifle.h"
#include "Escopeta.h"

//////////////////////
/*
std::map<ArmaEnums::ClasesArmas, Arma*>obtenerListaArmas()
{
	Revolver* revolver;
	Rifle* rifle;
	Escopeta* escopeta;

	return std::map<ArmaEnums::ClasesArmas, Arma*>
	{
		{ ArmaEnums::ClasesArmas::Revolver, revolver},
		{ ArmaEnums::ClasesArmas::Rifle,    rifle },
		{ ArmaEnums::ClasesArmas::Escopeta,  escopeta }
	};
}

Arma* obtenerArma(ArmaEnums::ClasesArmas tipo)
{
	auto armas = obtenerListaArmas();
	if (armas.count(tipo) == 0)
		return nullptr;

	auto objeto = armas[tipo];
	return objeto;
}
*/
//////////////////////

// POSIBILIDAD DE QUE ESTAS FUNCIONES SEAN LLAMADAS SIGUIENDO LA MISMA METODOLOGIA QUE MI LEGACY SOLDIER?
// ARMA.CPP NO ESTA PUDIENDO OBTENER UNA CORRECTA REFERENCIA AL LLAMADO DE ESTAS FUNCIONES
std::map<ArmasDisponibles, Arma*>obtenerListaArmas()
{
	Revolver* revolver;
	Rifle* rifle;
	Escopeta* escopeta;

	return std::map<ArmasDisponibles, Arma*>
	{
		{ ArmasDisponibles::Revolver, revolver},
		{ ArmasDisponibles::Rifle,    rifle },
		{ ArmasDisponibles::Escopeta,  escopeta }
	};
}

Arma* obtenerArma(ArmasDisponibles tipo)
{
	auto armas = obtenerListaArmas();
	if (armas.count(tipo) == 0)
		return nullptr;

	auto objeto = armas[tipo];
	return objeto;
}

Arma* ArsenalArmas::crearArma(int& arma) // CAMBIAR POR ArmaEnums::ClasesArmas??
{
	if (arma == 1)
	{
		Revolver* revolver = new Revolver();
		return revolver;
	}
	else if (arma == 2)
	{
		Rifle* rifle = new Rifle();
		return rifle;
	}
	else if (arma == 3)
	{
		Escopeta* escopeta = new Escopeta();
		return escopeta;
	}
	else
		return nullptr;
}