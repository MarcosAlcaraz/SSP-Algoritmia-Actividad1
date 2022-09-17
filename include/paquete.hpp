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
    Paquete(const Paquete&);

    std::string getId() const;
    std::string getPeso() const;
    std::string getOrigen() const;
    std::string getDestino() const;
    Paquete* getSiguiente() const;

    std::string print() const;

    void setId(const std::string&);
    void setPeso(const std::string&);
    void setOrigen(const std::string&);
    void setDestino(const std::string&);
    void setSiguiente(Paquete*);

    Paquete& operator = (const Paquete&);

    bool operator == (const Paquete&) const;
	bool operator != (const Paquete&) const;
	bool operator < (const Paquete&) const;
	bool operator <= (const Paquete&) const;
	bool operator > (const Paquete&) const;
	bool operator >= (const Paquete&) const;

    // friend ostream& operator << (ostream&, const Paquete&);
	// friend istream& operator >> (istream&, Paquete&);
};

#endif // __Paquete_H__