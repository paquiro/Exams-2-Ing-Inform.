#ifndef __ONG_H_
#define __ONG_H_

#include <string>
#include <vector>
#include "socio.hpp"
#include "persona.hpp"

using namespace std;

class Ong {
  public:
    Ong();
    ~Ong();
    string getNombreOng() {return nombreOng_;}
    void setNombreOng(string nombreOng) {nombreOng_ = nombreOng;}
    void setVectorSocios(vector<Socio> vectorSocios) {vectorSocios_ = vectorSocios;}
    vector<Socio> getVectorSocios() {return vectorSocios_;}
    unsigned int getNumeroSocios() {return vectorSocios_.size();}
    Socio* getSocio(unsigned int indice) {return &(vectorSocios_[indice]);}
    Socio* operator [] (unsigned int indice) {return &(vectorSocios_[indice]);}
    void operator = (Ong ong);
    void leerOng();
    void escribirOng();
    bool grabarOngEnFichero(string nombreFichero);


  private:
    string nombreOng_;
    vector<Socio> vectorSocios_;
};

#endif
