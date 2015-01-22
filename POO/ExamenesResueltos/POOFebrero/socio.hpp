#ifndef __SOCIO_H_
#define __SOCIO_H_

#include "persona.hpp"
#include <string>

using namespace std;

class Socio : public Persona {
  public:
    Socio(unsigned int initDonativo = 0, string initNombre = "",
          string initApellidos = "", unsigned int initEdad = 0);
    unsigned int getDonativo() {return donativo_;}
    void setDonativo(unsigned int donativo) {donativo_ = donativo;}
    void operator = (Socio socio);
    void leerSocio();
    void escribirSocio();
    friend istream& operator >> (istream &i, Socio &socio);
    friend ostream& operator << (ostream &o, Socio &socio);
  private:
    unsigned int donativo_;
};

#endif
