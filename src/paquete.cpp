#include<paquete.hpp>

Paquete::Paquete()
{
    siguiente = nullptr;
}

Paquete::Paquete(const Paquete& x) : id(x.id), peso(x.peso), origen(x.origen), destino(x.destino) {}

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

std::string Paquete::print() const
{
    char text[52]; // ID=9, PESO=3, OROGEN=20, DESTINO=20;
    for(int i = 0; i < 52; i++) {
        text[i] = NULL;
    }
    sprintf(text, "ID: %s\nPeso: %i\nOrigen: %s\nDestino: %s\n---", id, peso, origen, destino);
    return text;
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

Paquete& Paquete::operator = (const Paquete& x)
{
    id = x.id;
    peso = x.peso;
    origen = x.origen;
    destino = x.destino;
    siguiente = x.siguiente;
}

bool Paquete::operator == (const Paquete& x) const
{
    return id == x.id;
}

bool Paquete::operator != (const Paquete& x) const
{
    return !(*this == x);
}

bool Paquete::operator < (const Paquete& x) const
{
    return *this < x;
}

bool Paquete::operator <= (const Paquete& x) const
{
    return *this < x || *this == x;
}

bool Paquete::operator > (const Paquete& x) const
{
    return *this > x;
}

bool Paquete::operator >= (const Paquete& x) const
{
    return !(*this <= x);
}

//Puede que no sea así como se pide.
// ostream& operator << (ostream& x, Paquete& y)
// {
//     x << "\nID: "<< y.getId() << "\nPeso: " << y.getPeso() << " Kg\nOrigen: " << y.getOrigen() << "\nDestino: " << y.getDestino();
//     return x;
// }

// Y estos también causa de que no tengo idea si son necesarios si las variables son privadas y que no sé todavía cómo implementarlas.
// ostream& operator << (ostream& x, Paquete& y)
// {
    
// }

// istream& operator >> (istream&, const Paquete& x)
// {
    
// }