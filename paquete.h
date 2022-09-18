#ifndef __PAQUETE_H__
#define __PAQUETE_H__

#include<iostream>
#include<string>

class Paquete
{
private:
    std::string id;
    std::string peso;
    std::string origen;
    std::string destino;

    Paquete* siguiente;
public:
    Paquete();
    //Paquete(std::string id, std::string peso, std::string getOrigen, std::string getDestino) : id(id), peso(peso), origen(origen), destino(destino) {};

    std::string getId() const;
    std::string getPeso() const;
    std::string getOrigen() const;
    std::string getDestino() const;
    Paquete* getSiguiente() const;
    
    void print() const;
    
    void setId(const std::string&);
    void setPeso(const std::string&);
    void setOrigen(const std::string&);
    void setDestino(const std::string&);
    void setSiguiente(Paquete*);

    Paquete& operator = (const Paquete&);
};

#endif // __Paquete_H__