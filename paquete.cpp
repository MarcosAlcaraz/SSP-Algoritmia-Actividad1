#include"paquete.h"

Paquete::Paquete()
{
    siguiente = nullptr;
}

std::string Paquete::getId() const
{
    return id;
}

std::string Paquete::getPeso() const
{
    return peso;
}

std::string Paquete::getOrigen() const
{
    return origen;
}

std::string Paquete::getDestino() const
{
    return destino;
}

Paquete* Paquete::getSiguiente() const
{
    return siguiente;
}

void Paquete::print() const
{
    std::cout << "\nID: " << getId() << "\nPeso: " << getPeso() << "\nOrigen: " << getOrigen() << "\nDestino: " << getDestino() << "\n";
}


void Paquete::setId(const std::string& x)
{
    id = x;
}

void Paquete::setPeso(const std::string& x)
{
    peso = x;   
}

void Paquete::setOrigen(const std::string& x)
{
    origen = x;
}

void Paquete::setDestino(const std::string& x)
{
    destino = x;
}

void Paquete::setSiguiente(Paquete* x)
{
    siguiente = x;
}