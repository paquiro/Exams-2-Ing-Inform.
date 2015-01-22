#include "empresa.hpp"
#include <iostream>
#include <cstdio>

using namespace std;

Empresa::Empresa(string initNombre, string initDireccion,
                 string initCIF) {
                             setNombre(initNombre);
                             setDireccion(initDireccion);
                             setCIF(initCIF);
}

/*Empresa::Empresa(const Empresa &empresa) {
  setNombre(empresa.nombre_);
  setDireccion(empresa.direccion_);
  setCIF(empresa.CIF_);
}*/

void Empresa::leerEmpresa(void) {
  string aux;

  cout << "Introduzca el nombre de la empresa: ";
  getline(cin, aux, '\n');
  setNombre(aux);
  cout << "Introduzca la dirección de la empresa: ";
  getline(cin, aux, '\n');
  setDireccion(aux);
  cout << "Introduzca el CIF de la empresa: ";
  getline(cin, aux, '\n');
  setCIF(aux);
}

void Empresa::escribirEmpresa(void) {
  cout << "Nombre de la empresa: " << getNombre() << ".\n";
  cout << "Dirección: " << getDireccion() << ".\n";
  cout << "CIF: " << getCIF() << ".\n";
}
