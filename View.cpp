#include "View.h"
#include <iostream>

using namespace std; // REMOVER

View::View()
{
	// Objeto usando la memoria dinamica c++
	soldadoRyan = new Soldado();
	cout << "-== Bienvenido al campo de entrenamiento, Soldado ==-" << endl;
	cout << "¿Que desea hacer?\n(presione el numero correspondiente a la opcion del menu)" << endl;
	cout << "\n";

	mainMenu();
}
View::~View()
{
}

void View::mainMenu()
{
	cout << "\n";

	// Valor de entero que sirve para enumerar las diferentes opciones y que luego sirve como input para seleccionar la deseada
	int menuOptions = 0;

	for (int i = 0; i < 5; i++)
	{
		menuOptions++;
		printf("%d", menuOptions);
		if (menuOptions == 1)
			printf(". Recoger arma");
		else if (menuOptions == 2)
			printf(". Dejar arma");
		else if (menuOptions == 3)
			printf(". Disparar");
		else if (menuOptions == 4)
			printf(". Ver arma en uso");
		else if (menuOptions == 5)
			printf(". Salir");

		cout << "\n";
	}
	cout << "\n";

	choices();
}
void View::choices()
{
	// Entero para usarlo como Input
	int menuOptions = 0;
	scanf_s("%d", &menuOptions);

	if (menuOptions == 1)
	{
		mostrarMenuArmas();
	}
	// Deja el arma recogida
	else if (menuOptions == 2)
	{
		soldadoRyan->dejarArma();
		mainMenu();
	}
	// Dispara el arma
	else if (menuOptions == 3)
	{
		soldadoRyan->armaActual(true); // Con intencion de disparar
		mainMenu();
	}
	// Retorna el arma en posesion
	else if (menuOptions == 4)
	{
		soldadoRyan->armaActual(false); // Sin intencion de disparar
		mainMenu();
	}
	else
	{
		soldadoRyan->salir();
		exit(0);
	}
}

void View::mostrarTexto(const string& texto)
{
	std::cout << texto << std::endl;
}

void View::mostrarMenuArmas()
{
	// Input para seleccionar el arma a tomar
	int pickupOptions = 0;

	printf("\nPor favor, escoja el arma a utilizar:\n1.Revolver\n2.Rifle\n3.Escopeta\nX.Volver atras\n");
	cout << "\n";
	scanf_s("%d", &pickupOptions);

	// Recoge el arma seleccionada
	if (pickupOptions >= 1 && pickupOptions <= 3)
	{
		soldadoRyan->recogerArma(pickupOptions);
		mainMenu();
	}
	else
	{
		printf("\n<---------------\n");
		mainMenu();
	}
}

void View::seleccionarArma(const int* opcion)
{
}