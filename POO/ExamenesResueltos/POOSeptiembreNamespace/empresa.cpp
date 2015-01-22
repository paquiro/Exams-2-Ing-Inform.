#include "empresa.hpp"
#include <iostream>
#include <cstdio>

comercio::Empresa::Empresa(std::string initNombre, std::string initDireccion,
                           std::string initCIF) {
                             setNombre(initNombre);
                             setDireccion(initDireccion);
                             setCIF(initCIF);
                           }

void comercio::Empresa::leerEmpresa(void) {
  std::string aux;

  std::cout << "Introduzca el nombre de la empresa: ";
  getline(std::cin, aux, '\n');
  setNombre(aux);
  std::cout << "Introduzca la dirección de la empresa: ";
  getline(std::cin, aux, '\n');
  setDireccion(aux);
  std::cout << "Introduzca el CIF de la empresa: ";
  getline(std::cin, aux, '\n');
  setCIF(aux);
}

void comercio::Empresa::escribirEmpresa(void) {
  std::cout << "Nombre de la empresa: " << getNombre() << ".\n";
  std::cout << "Dirección: " << getDireccion() << ".\n";
  std::cout << "CIF: " << getCIF() << ".\n";
}
