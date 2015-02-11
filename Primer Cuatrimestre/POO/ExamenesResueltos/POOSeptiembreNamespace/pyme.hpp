#ifndef __PYME_H_
#define __PYME_H_

#include "empresa.hpp"
#include <string>

namespace comercio {
  class Pyme : public Empresa {
    public:
      Pyme(std::string propietario, std::string nombre = "",
           std::string direccion = "", std::string CIF = "");
      std::string getPropietario(void) {return propietario_;}
      void setPropietario(std::string propietario) {propietario_ = propietario;}
      void leerPyme(void);
      void escribirPyme(void);
      friend std::istream& operator >> (std::istream &i, Pyme &p);
    private:
      std::string propietario_;
  };
}

#endif
