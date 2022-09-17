#include <paqueteria.hpp>
#include <fstream>

Paqueteria::Paqueteria()
{
    anchor = nullptr;
}

Paqueteria::Paqueteria(const Paqueteria &x) : anchor(x.anchor) {}

void Paqueteria::insertarAlInicio(Paquete &x)
{
    x.setSiguiente(anchor);
    anchor = &x;
}

void Paqueteria::eliminarLista()
{
    Paquete *aux = anchor;
    while (aux != nullptr)
    {
        aux = aux->getSiguiente();
        delete anchor;
        anchor = aux;
    }
}

void Paqueteria::eliminarAlInicio()
{
    Paquete *aux;

    aux = anchor;
    anchor = anchor->getSiguiente();
    delete aux;
}

void Paqueteria::mostrarLista()
{
    Paquete *aux = anchor;

    while (aux != nullptr)
    {
        aux->print();
        aux = aux->getSiguiente();
    }
}

void Paqueteria::guardarLista()
{
    Paquete *aux = anchor;

    std::ofstream file("SavedList.txt");

    while (aux != nullptr)
    {
        file << aux->getId() << "@" << aux->getPeso() << "@" << aux->getOrigen() << "@" << aux->getDestino() << "@";
        aux = aux->getSiguiente();
    }
    file << "~";
    file.close();
}

void Paqueteria::cargarLista()
{
    char x = NULL;
    if (anchor != nullptr)
    {
        std::cout << "\nALERTA\nYa hay datos en su Lista. ¿Desea sobrescribir la lista actual? (s/n)\n: ";
        std::cin >> x;

        if (x == 115)
        {
            eliminarLista();
        }
        else
        {
            x = 187; // cancelar operación
        }
    }

    if (x != 187)
    {
        Paquete *anterior;

        // Creando Buffers
        char texto[4096];
        char dato[20];
        bool firstTime = true;

        // Puntero para la variable "texto"
        int tp = 0;

        // Limpiando Buffers
        for (int i = 0; i < 4096; i++)
        {
            texto[i] = NULL;
        }
        for (int i = 0; i < 20; i++)
        {
            dato[i] = NULL;
        }

        // Se abre el archivo por defecto
        std::ifstream file("SavedList.txt");

        // Obtiene la cantidad de caracteres que puede almacenar el Buffer
        file.getline(texto, 4096);

        // Se establece Anterior como el primer nodo.
        anterior = anchor;

        do
        {
            // Creando Nuevo Paquete
            Paquete aux;

            for (int j = 0; j < 4; j++)
            {
                for (int i = 0; texto[tp] != 64; i++, tp++)
                {
                    dato[i] = texto[tp];
                }
                tp++;

                switch (j)
                {
                case 0:
                    aux.setId(dato);
                    break;
                case 1:
                    aux.setPeso(dato);
                    break;
                case 2:
                    aux.setOrigen(dato);
                    break;
                case 3:
                    aux.setDestino(dato);
                    break;
                }

                for (int i = 0; i < 20; i++)
                {
                    dato[i] = NULL;
                }
            }

            if (firstTime)
            {
                anchor = &aux;
                firstTime = false;
            }
            else
            {
                anterior->setSiguiente(&aux);
            }
            anterior = &aux;

        } while (texto[tp] != 126);
    }
}
