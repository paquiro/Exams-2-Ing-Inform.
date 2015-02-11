#ifndef __APYME_H_
#define __APYME_H_

#include <string>
#include <vector>
#include "pyme.hpp"
#include "empresa.hpp"

namespace comercio {
  class Apyme {
    public:
      Apyme(void);
      ~Apyme(void);
      std::string getNombreApyme(void) {return nombreApyme_;}
      void setNombreApyme(std::string nombreApyme) {nombreApyme_ = nombreApyme;}
      std::vector<Pyme> getVectorPymes(void) {return vectorPymes_;}
      void setVectorPymes(std::vector<Pyme> vectorPymes) {vectorPymes_ = vectorPymes;}
      unsigned int getNumeroApymes(void) {return vectorPymes_.size();}
      Pyme* getPyme(unsigned int indice) {return &vectorPymes_[indice];}
      Pyme* operator [] (unsigned int indice) {return &(vectorPymes_[indice]);}
      void leerApyme(void);
      void escribirApyme(void);
      void grabarApymeEnFichero(std::string nombreFichero);
    private:
      std::string nombreApyme_;
      std::vector<Pyme> vectorPymes_;
  };
}

#endif
