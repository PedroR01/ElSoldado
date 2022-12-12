#include <iostream>
#include "Soldado.h"

using namespace std;

int main()
{
	// Inicializacion usando la memoria dinamica c++
	Soldado* elSoldado = new Soldado();

	cout << "-== Bienvenido al campo de entrenamiento, Soldado ==-" << endl;
	cout << "¿Que desea hacer?\n(presione el numero correspondiente a la opcion del menu)" << endl;
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

	// Reinicio del entero para usarlo como Input
	menuOptions = 0;
	scanf_s("%d", &menuOptions);

	if (menuOptions == 1)
	{
		// Instancia de revolver para un futuro downcast
		Revolver revolver;
		// Input para seleccionar el arma a tomar
		int pickupOptions = 0;

		printf("Por favor, escoja el arma a utilizar:\n1.Revolver\n2.Rifle\n3.Escopeta\nX.Volver atras\n");
		cout << "\n";
		scanf_s("%d", &pickupOptions);

		// Intento de downcasting - No parece tirar error ni NULL en consola
		if (pickupOptions == 1)
		{
			Arma* elArma = dynamic_cast<Arma*>(&revolver);
			if (elArma == nullptr)
				cout << "Conversion fallida" << endl;
		}
		else if (pickupOptions == 2)
			cout << "A2";
		else
			cout << "A3";
	}

	cout << "\n";
	return 0;
}