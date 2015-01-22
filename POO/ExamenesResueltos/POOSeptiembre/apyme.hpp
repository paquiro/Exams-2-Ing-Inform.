#ifndef __APYME_H_
#define __APYME_H_

#include <string>
#include <vector>
#include "pyme.hpp"
#include "empresa.hpp"

using namespace std;

class Apyme {
  public:
    Apyme(void);
    ~Apyme(void);
    string getNombreApyme(void) {return nombreApyme_;}
    void setNombreApyme(string nombreApyme) {nombreApyme_ = nombreApyme;}
    vector<Pyme> getVectorPymes(void) {return vectorPymes_;}
    void setVectorPymes(vector<Pyme> vectorPymes) {vectorPymes_ = vectorPymes;}
    unsigned int getNumeroApymes(void) {return vectorPymes_.size();}
    Pyme* getPyme(unsigned int indice) {return &vectorPymes_[indice];}
    Pyme* operator [] (unsigned int indice) {return &(vectorPymes_[indice]);}
    void leerApyme(void);
    void escribirApyme(void);
    bool grabarApymeEnFichero(string nombreFichero);
  private:
    string nombreApyme_;
    vector<Pyme> vectorPymes_;
};

#endif
