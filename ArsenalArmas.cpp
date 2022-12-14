#include "ArsenalArmas.h"
#include "Revolver.h"
#include "Rifle.h"
#include "Escopeta.h"

ArmasDisponibles ArsenalArmas::getArma() // podria ser un bool para detectar que arma poseemos en mano si es asi
{
	return ArmasDisponibles::revolver;
}

void ArsenalArmas::crearArma(int arma)
{
	if (arma == 1)
		Revolver* revolver = new Revolver();
	else if (arma == 2)
		Rifle* rifle = new Rifle();
	else
		Escopeta* escopeta = new Escopeta();
}