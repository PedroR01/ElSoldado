#pragma once
#ifndef VIEW_H
#define VIEW_H
#include "IView.h"
#include "Soldado.h"
#include <Windows.h>
#include <algorithm>

class Presenter;
class Weapon;

class View :public IView
{
private:
	Presenter* presentador;
	Soldado* soldadoRyan; // Podria ir en el presentador

	void mainMenu(); // Podria ir en el presentador
	void choices(); // Podria ir en el presentador CAMBIAR NOMBRE A ESPAÑOL
public:
	View();
	~View() override;
	void mostrarTexto(const std::string& texto) override;
	void mostrarMenuArmas();
	void seleccionarArma(const int* opcion);
};

#endif // !VIEW_H
