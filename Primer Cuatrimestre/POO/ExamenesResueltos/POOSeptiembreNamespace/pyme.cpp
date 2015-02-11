#include "pyme.hpp"
#include "empresa.hpp"
#include <iostream>

comercio::Pyme::Pyme(std::string initPropietario, std::string initNombre,
                     std::string initDireccion, std::string initCIF) :
                Empresa(initNombre, initDireccion, initCIF) {
                  setPropietario(initPropietario);
                  setNombre(initNombre);
                  setDireccion(initDireccion);
                  setCIF(initCIF);
                }

void comercio::Pyme::leerPyme(void) {
  std::string aux;

  std::cout << "Introduzca el nombre de la empresa: ";
  getline(std::cin, aux, '\n');
  setNombre(aux);
  std::cout << "Introduzca el nombre del propietario: ";
  getline(std::cin, aux, '\n');
  setPropietario(aux);
  std::cout << "Introduzca la dirección de la empresa: ";
  getline(std::cin, aux, '\n');
  setDireccion(aux);
  std::cout << "Introduzca el CIF de la empresa: ";
  getline(std::cin, aux, '\n');
  setCIF(aux);
}

void comercio::Pyme::escribirPyme(void) {
  std::cout << "Nombre de la empresa: " << getNombre() << ".\n";
  std::cout << "Propietario: " << getPropietario() << ".\n";
  std::cout << "Dirección: " << getDireccion() << ".\n";
  std::cout << "CIF: " << getCIF() << ".\n";
}

std::istream& operator >> (std::istream &i, comercio::Pyme &p) {
  std::string aux;

  std::cout << "Introduzca el nombre de la empresa: ";
  i >> aux;
  p.setNombre(aux);
  std::cout << "Introduzca el nombre del propietario: ";
  i >> aux;
  p.setPropietario(aux);
  std::cout << "Introduzca la dirección de la empresa: ";
  i >> aux;
  p.setDireccion(aux);
  std::cout << "Introduzca el CIF de la empresa: ";
  i >> aux;
  p.setCIF(aux);
  return i;
}
