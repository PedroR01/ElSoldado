#pragma once
#ifndef PRESENTER_H
#define PRESENTER_H

class IView;
//class Soldier;

class Presenter
{
private:
	IView* vista = nullptr;
	//Soldier* soldado = nullptr;
public:
	explicit Presenter(IView* vista);
	~Presenter();

	void tomarArma(int opcion);
	void dejarArma();
	void disparar();
	void armaActual();

	void obtenerListaArmas();
};

#endif // !PRESENTER_H
