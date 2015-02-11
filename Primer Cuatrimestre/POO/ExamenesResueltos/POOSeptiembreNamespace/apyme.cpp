#include "apyme.hpp"
#include "pyme.hpp"
#include "empresa.hpp"
#include <iostream>

comercio::Apyme::Apyme(void){
}

comercio::Apyme::~Apyme(void){
}

void comercio::Apyme::leerApyme(void) {
  for(size_t i = 0; i < getNumeroApymes(); i++){
    getPyme(i)->leerPyme();
  }
}

void comercio::Apyme::escribirApyme(void) {
  for(size_t i = 0; i < getNumeroApymes(); i++) {
    getPyme(i)->escribirPyme();
  }
}

void grabarApymeEnFichero(std::string nombreFichero) {

}
