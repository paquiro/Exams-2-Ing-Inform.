#include "ong.hpp"
#include "socio.hpp"
#include "persona.hpp"
#include <string>
#include <iostream>
#include <fstream>

void Ong::leerOng() {
  string aux;
  unsigned int auxi;
  Socio auxs;

  cout << "Introduzca el nombre de la ong: ";
  getline(cin, aux, '\n');
  setNombreOng(aux);
  cout << "Introduzca el número de socios: ";
  cin >> auxi;
  for(size_t i = 0; i < auxi; i++) {
    cout << "Introduzca el nombre del socio: ";
    getline(cin, aux, '\n');
    auxs.setNombre(aux);
    cout << "Introduzca los apellidos: ";
    cin >> auxi;
    auxs.setApellidos(aux);
    cout << "Introduzca la edad: ";
    cin >> auxi;
    auxs.setEdad(auxi);
    cout << "Introduzca el donativo: ";
    cin >> auxi;
    auxs.setDonativo(auxi);
    vectorSocios_.push_back(auxs);
  }
}

void Ong::escribirOng() {
  cout << "Nombre de la Ong: " << getNombreOng() << '\n';
  for(size_t i = 0; i < getNumeroSocios(); i++) {
    cout << "Nombre del socio: " << vectorSocios_[i].getNombre() << '\n';
    cout << "Apellidos: " << vectorSocios_[i].getApellidos() << '\n';
    cout << "Edad: " << vectorSocios_[i].getEdad() << '\n';
    cout << "Donativo " << vectorSocios_[i].getDonativo() << '\n';
  }
}

bool Ong::grabarOngEnFichero(string nombreFichero){
  ofstream ofile;

  ofile.open(nombreFichero.c_str());
  if(ofile.is_open()){
    ofile << getNombreOng() << '\n';
    ofile << getNumeroSocios() << '\n';
    for(size_t i = 0; i < getNumeroSocios(); i++) {
      ofile << vectorSocios_[i].getNombre() << ',';
      ofile << vectorSocios_[i].getApellidos() << ',';
      ofile << vectorSocios_[i].getEdad() << ',';
      ofile << vectorSocios_[i].getDonativo() << '\n';
    }
    ofile.close();
    return true;
  } else {
    return false;
  }
}
