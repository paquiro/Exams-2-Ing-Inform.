#ifndef __EMPRESA_H_
#define __EMPRESA_H_

#include <string>

using namespace std;

class Empresa {
  public:
    Empresa(string initNombre = "", string initDireccion = "",
            string initCIF = "");
    /*Empresa(const Empresa &empresa);*/
    string getNombre(void) {return nombre_;}
    void setNombre(string nombre) {nombre_ = nombre;}
    string getDireccion(void) {return direccion_;}
    void setDireccion(string direccion) {direccion_ = direccion;}
    string getCIF(void) {return CIF_;}
    void setCIF(string CIF) {CIF_ = CIF;}
    void leerEmpresa(void);
    void escribirEmpresa(void);
  private:
    string nombre_;
    string direccion_;
    string CIF_;
};

#endif
