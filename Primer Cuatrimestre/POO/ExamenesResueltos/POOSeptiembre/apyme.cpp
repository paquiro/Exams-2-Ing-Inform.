#include "apyme.hpp"
#include "pyme.hpp"
#include "empresa.hpp"
#include <iostream>
#include <fstream>

using namespace std;

Apyme::Apyme(void){
}

Apyme::~Apyme(void){
}

void Apyme::leerApyme(void) {
  for(size_t i = 0; i < getNumeroApymes(); i++){
    getPyme(i)->leerPyme();
  }
}

void Apyme::escribirApyme(void) {
  for(size_t i = 0; i < getNumeroApymes(); i++) {
    getPyme(i)->escribirPyme();
  }
}

bool Apyme::grabarApymeEnFichero(string nombreFichero) {
  ofstream ofile;

  ofile.open(nombreFichero.c_str());
  if(ofile.is_open()) {
    ofile << getNombreApyme() << '\n';
    ofile << getNumeroApymes() << '\n';
    for(size_t i = 0; i < getNumeroApymes(); i++) {
      ofile << vectorPymes_[i].getPropietario() << ',';
      ofile << vectorPymes_[i].getNombre() << ',';
      ofile << vectorPymes_[i].getDireccion() << ',';
      ofile << vectorPymes_[i].getCIF() << '\n';
    }
    ofile.close();
  } else {
    return false;
  }
}
