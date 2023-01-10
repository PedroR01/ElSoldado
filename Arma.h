#pragma once
#ifndef ARMA_H
#define ARMA_H
#include "ArmaEnums.h"
#include "ArsenalArmas.h"
#include <string>
#include <map>

class ArsenalArmas;
enum class ArmasDisponibles;

// Clase abstracta
// Se encarga de ser el "intermediario" entre la creación de armas y su interaccion con el soldado
class Arma
{
private:
	static Arma* armaActual; //??????
	ArsenalArmas* arma[3];
protected:
	std::string nombre;
public:
	Arma();

	/////////////////////  error LNK2019:
	//static std::map<ArmaEnums::ClasesArmas, Arma*> obtenerLista();
	//static Arma* tomarArma(int armaElegida);
	/////////////////////

	//error LNK2019 (Problema actual DEL .CPP)
	static std::map<ArmasDisponibles, Arma*> obtenerLista(); // RESOLVER IDENTIFICADOR/DETECCION DE ENUM CLASS ARMASDISPONIBLES (ArsenalArmas.h) (problema pasado)
	static Arma* tomarArma(int armaElegida);

	std::string obtenerNombre();

	// Metodos puros y virtuales
	virtual ~Arma() = default;
	virtual void disparo() = 0;
};

#endif // ARMA_H