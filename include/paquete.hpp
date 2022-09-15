#ifndef __PAQUETE_H__
#define __PAQUETE_H__

#include<iostream>
#include<string>

using namespace std;

class Paquete
{
private:
    int id;
    int peso;
    string origen;
    string destino;
public:
    Paquete();
    ~Paquete();

    int getId() const;
    int getPeso() const;
    string getOrigen() const;
    string getDestino() const;

    void setId(const int&);
    void setPeso(const int&);
    void setOrigen(const string&);
    void setDestino(const string&);
};

Paquete::Paquete()
{
}

Paquete::~Paquete()
{
}

#endif // __PAQUETE_H__