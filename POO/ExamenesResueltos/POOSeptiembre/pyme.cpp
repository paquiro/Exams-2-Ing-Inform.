#include "pyme.hpp"
#include "empresa.hpp"
#include <iostream>

using namespace std;

Pyme::Pyme(string initPropietario, string initNombre,
                     string initDireccion, string initCIF) :
                Empresa(initNombre, initDireccion, initCIF) {
                  setPropietario(initPropietario);
                  setNombre(initNombre);
                  setDireccion(initDireccion);
                  setCIF(initCIF);
}

/*Pyme::Pyme(const Pyme &pyme) {
  setPropietario(pyme.propietario_);
  setNombre(pyme.getNombre());
  setDireccion(pyme.getDireccion());
  setCIF(pyme.getCIF());
}*/

void Pyme::leerPyme(void) {
  string aux;

  cout << "Introduzca el nombre de la empresa: ";
  getline(cin, aux, '\n');
  setNombre(aux);
  cout << "Introduzca el nombre del propietario: ";
  getline(cin, aux, '\n');
  setPropietario(aux);
  cout << "Introduzca la dirección de la empresa: ";
  getline(cin, aux, '\n');
  setDireccion(aux);
  cout << "Introduzca el CIF de la empresa: ";
  getline(cin, aux, '\n');
  setCIF(aux);
}

void Pyme::escribirPyme(void) {
  cout << "Nombre de la empresa: " << getNombre() << ".\n";
  cout << "Propietario: " << getPropietario() << ".\n";
  cout << "Dirección: " << getDireccion() << ".\n";
  cout << "CIF: " << getCIF() << ".\n";
}

void Pyme::operator = (Pyme pyme) {
  setPropietario(pyme.getPropietario());
  setNombre(pyme.getNombre());
  setDireccion(pyme.getDireccion());
  setCIF(pyme.getCIF());
}

istream& operator >> (istream &i, Pyme &p) {
  string aux;

  cout << "Introduzca el nombre de la empresa: ";
  i >> aux;
  p.setNombre(aux);
  cout << "Introduzca el nombre del propietario: ";
  i >> aux;
  p.setPropietario(aux);
  cout << "Introduzca la dirección de la empresa: ";
  i >> aux;
  p.setDireccion(aux);
  cout << "Introduzca el CIF de la empresa: ";
  i >> aux;
  p.setCIF(aux);
  return i;
}

ostream& operator << (ostream &o, Pyme &p) {
  o << "Nombre de la empresa: " << p.getNombre() << ".\n";
  o << "Propietario: " << p.getPropietario() << ".\n";
  o << "Dirección: " << p.getDireccion() << ".\n";
  o << "CIF: " << p.getCIF() << ".\n";
  return o;
}
