#ifndef __PERSONA_H_
#define __PERSONA_H_

#include <string>

using namespace std;

class Persona {
  public:
    Persona(string initNombre = "", string initApellidos = "",
            unsigned int edad = 0);
    string getNombre() {return nombre_;}
    void setNombre(string nombre) {nombre_ = nombre;}
    string getApellidos() {return apellidos_;}
    void setApellidos(string apellidos) {apellidos_ = apellidos;}
    unsigned int getEdad() {return edad_;}
    void setEdad(unsigned int edad) {edad_ = edad;}
    void leerPersona();
    void escribirPersona();
  private:
    string nombre_;
    string apellidos_;
    unsigned int edad_;
};

#endif
