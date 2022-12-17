#include "ArsenalArmas.h"
#include "Revolver.h"
#include "Rifle.h"
#include "Escopeta.h"

Arma* ArsenalArmas::crearArma(int& arma)
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