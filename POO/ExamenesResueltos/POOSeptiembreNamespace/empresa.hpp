#ifndef __EMPRESA_H_
#define __EMPRESA_H_

#include <string>

namespace comercio {
  class Empresa {
    public:
      Empresa(std::string nombre = "", std::string direccion = "",
              std::string CIF = "");
      std::string getNombre(void) {return nombre_;}
      void setNombre(std::string nombre) {nombre_ = nombre;}
      std::string getDireccion(void) {return direccion_;}
      void setDireccion(std::string direccion) {direccion_ = direccion;}
      std::string getCIF(void) {return CIF_;}
      void setCIF(std::string CIF) {CIF_ = CIF;}
      void leerEmpresa(void);
      void escribirEmpresa(void);
    private:
      std::string nombre_;
      std::string direccion_;
      std::string CIF_;
  };
}

#endif
