#include <iostream>
#include "Soldado.h"

using namespace std;

class MainMenu
{
	Soldado* soldadoRyan;

	void baseMenu()
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

		choises();
	}
	void choises()
	{
		// Entero para usarlo como Input
		int menuOptions = 0;
		scanf_s("%d", &menuOptions);

		if (menuOptions == 1)
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
				baseMenu();
			}
			else
			{
				printf("\n<---------------\n");
				baseMenu();
			}
		}
		// Deja el arma recogida
		else if (menuOptions == 2)
		{
			soldadoRyan->dejarArma();
			baseMenu();
		}
		// Dispara el arma
		else if (menuOptions == 3)
		{
			soldadoRyan->armaActual(true); // Con intencion de disparar
			baseMenu();
		}
		// Retorna el arma en posesion
		else if (menuOptions == 4)
		{
			soldadoRyan->armaActual(false); // Sin intencion de disparar
			baseMenu();
		}
		else
		{
			soldadoRyan->salir();
			exit(0);
		}
	}

public:
	MainMenu()
	{
		// Objeto usando la memoria dinamica c++
		soldadoRyan = new Soldado();
		cout << "-== Bienvenido al campo de entrenamiento, Soldado ==-" << endl;
		cout << "¿Que desea hacer?\n(presione el numero correspondiente a la opcion del menu)" << endl;
		cout << "\n";

		baseMenu();
	}
	~MainMenu() {}
};

int main()
{
	MainMenu* soldierMenu = new MainMenu();

	cout << "\n";
	return 0;
}