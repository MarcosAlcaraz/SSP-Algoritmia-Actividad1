#ifndef __PAQUETERIA_H__
#define __PAQUETERIA_H__

#include<iostream>
#include<paquete.h>

class Paqueteria
{
private:
    Paquete* anchor;
public:
    Paqueteria();
    Paqueteria(const Paqueteria&);

    void insertarAlInicio(Paquete&);

    void eliminarLista();
    void eliminarAlInicio();
    void mostrarLista();

    void guardarLista();
    void cargarLista();
};
#endif // __PAQUETERIA_H__