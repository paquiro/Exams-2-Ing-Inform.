#include "persona.hpp"
#include <string>
#include <iostream>

using namespace std;

Persona::Persona(string initNombre, string initApellidos, unsigned int initEdad) {
  setNombre(initNombre);
  setApellidos(initApellidos);
  setEdad(initEdad);
}

void Persona::leerPersona() {
  string aux;
  unsigned int edad;

  cout << "Introduzca el nombre de la persona: ";
  getline(cin, aux, '\n');
  setNombre(aux);
  cout << "Introduzca los apellidos: ";
  getline(cin, aux, '\n');
  setNombre(aux);
  cout << "Introduzca la edad: ";
  cin >> edad;
  setEdad(edad);
}

void Persona::escribirPersona() {
  cout << "Nombre: " << getNombre() << '\n';
  cout << "Apellidos: " << getApellidos() << '\n';
  cout << "Edad: " << getEdad() << '\n';
}
