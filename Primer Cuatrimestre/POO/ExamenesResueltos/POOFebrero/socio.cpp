#include "socio.hpp"
#include "persona.hpp"
#include <string>
#include <iostream>

using namespace std;

Socio::Socio(unsigned int initDonativo, string initNombre, string initApellidos,
             unsigned int initEdad)
   : Persona(initNombre, initApellidos, initEdad) {
  setDonativo(initDonativo);
  setNombre(initNombre);
  setApellidos(initApellidos);
  setEdad(initEdad);
}

void Socio::operator = (Socio socio) {
  setDonativo(socio.getDonativo());
  setNombre(socio.getNombre());
  setApellidos(socio.getApellidos());
  setEdad(socio.getEdad());
}

void Socio::leerSocio() {
  string aux;
  unsigned int auxi;

  cout << "Introduzca el nombre de la persona: ";
  getline(cin, aux, '\n');
  setNombre(aux);
  cout << "Introduzca los apellidos: ";
  getline(cin, aux, '\n');
  setNombre(aux);
  cout << "Introduzca la edad: ";
  cin >> auxi;
  setEdad(auxi);
  cout << "Introduzca el donativo: ";
  cin >> auxi;
  setDonativo(auxi);
}

void Socio::escribirSocio() {
  cout << "Nombre: " << getNombre() << '\n';
  cout << "Apellidos: " << getApellidos() << '\n';
  cout << "Edad: " << getEdad() << '\n';
  cout << "Donativo " << getDonativo() << '\n';
}

istream& operator >> (istream &i, Socio &socio) {
  string aux;
  int auxi;

  cout << "Introduzca el nombre de la persona: ";
  i >> aux;
  socio.setNombre(aux);
  cout << "Introduzca los apellidos: ";
  i >> aux;
  socio.setNombre(aux);
  cout << "Introduzca la edad: ";
  i >> auxi;
  socio.setEdad(auxi);
  cout << "Introduzca el donativo: ";
  i >> auxi;
  socio.setDonativo(auxi);
  return i;
}

ostream& operator << (ostream &o, Socio &socio) {
  o << "Nombre: " << socio.getNombre() << '\n';
  o << "Apellidos: " << socio.getApellidos() << '\n';
  o << "Edad: " << socio.getEdad() << '\n';
  o << "Donativo " << socio.getDonativo() << '\n';
  return o;
}
