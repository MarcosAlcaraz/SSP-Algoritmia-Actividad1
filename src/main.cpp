/*
SEMINARIO DE SOLUCIÓN DE PROBLEMAS DE ALGORITMIA
NRC: 59928
NRC: 59928
Iniciado el 12 - 09 - 2022 y finalizado el 17 - 09 - 2022
*/

#include <iostream>

#include <paqueteria.hpp>

using namespace std;

int main(int argc, char *argv[])
{
	int menu0 = 0;
	string dato;
	Paqueteria lista;

	do
	{
		system("cls");
		cout << "SEMINARIO DE SOLUCIÓN DE PROBLEMAS DE ALGORITMIA\nNRC: 59928\nNRC: 59928\nIniciado el 12 - 09 - 2022 y finalizado el 17 - 09 - 2022\n\n";
		cout << "Seminario De Solución De Problemas De Algoritmia EXPRESS\nLA mejor paquetería de CUCEI\n\nEscoja una opción del Menu:\n(1) Agregar Paquete.\n(2) Eliminar Paquete.\n(3) Mostrar Lista de Paquetes.\n\n(4) Guardar Lista De Paquetes.\n(5) Cargar Lista De Paquetes.\n\n(0) SALIR.\n\n: ";
		cin >> menu0;
		switch (menu0)
		{
		case 1:
			Paquete *nuevoPaquete = nullptr;
			nuevoPaquete = new Paquete();

			cout << "Escribe el ID del Paquete (012345678): ";
			cin >> dato;
			nuevoPaquete->setId(dato);

			cout << "Escribe el Peso del Paquete (De 0.1 a 999): ";
			cin >> dato;
			nuevoPaquete->setPeso(dato);

			cout << "Escribe el Origen del Paquete (Ciudad de Sucursal donde se Recibio el Paquete): ";
			cin >> dato;
			nuevoPaquete->setOrigen(dato);

			cout << "Escribe el Destino del Paquete (Ciudad de Sucursal donde se Entregara el Paquete): ";
			cin >> dato;
			nuevoPaquete->setDestino(dato);

			lista.insertarAlInicio(*nuevoPaquete);

			system("cls");
			cout << "\n\nPaquete Guardado Exitosamente!\n\n";
			break;
		case 2:
			lista.eliminarAlInicio();
			system("cls");
			cout << "\n\nSe ha eliminado al Paquete que estaba al Inicio de la Lista.\n\n";
			break;
		case 3:
			system("cls");
			lista.mostrarLista();
			break;
		case 4:
			lista.guardarLista();
			system("cls");
			cout << "\n\nSe ha Guardado Exitosamente la Lista.\n\n";
			break;
		case 5:
			lista.cargarLista();
			cout << "Se ha ejecutado el proceso.";
			break;
		default:
			system("cls");
			cout << "\n\nPOR FAVOR ESCOJA UNA OPCION DEL MENU\n\n";
			break;
		}
		system("pause");
		system("cls");
	} while (menu0 != 0);

	cout << "\n\n\n\nREALIZADO POR ALCARAZ VALDIVIA MARCOS FERNANDO\n\n\n\n";
}