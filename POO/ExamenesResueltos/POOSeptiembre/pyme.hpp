#ifndef __PYME_H_
#define __PYME_H_

#include "empresa.hpp"
#include <string>

using namespace std;

class Pyme : public Empresa {
  public:
    Pyme(string initPropietario, string initNombre = "",
         string initDireccion = "", string initCIF = "");
    /*Pyme(const Pyme &pyme);*/
    string getPropietario(void) {return propietario_;}
    void setPropietario(string propietario) {propietario_ = propietario;}
    void operator = (Pyme pyme);
    void leerPyme(void);
    void escribirPyme(void);
    friend istream& operator >> (istream &i, Pyme &p);
    friend ostream& operator << (ostream &o, Pyme &p);
  private:
    string propietario_;
};

#endif
