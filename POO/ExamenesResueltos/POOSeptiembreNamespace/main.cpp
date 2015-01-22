#include "empresa.hpp"
#include "pyme.hpp"
#include "apyme.hpp"
#include <vector>
#include <iostream>

int main () {
  comercio::Apyme a;
  comercio::Pyme p("p");
  comercio::Pyme q("q");
  comercio::Pyme* aux;
  std::vector<comercio::Pyme> v;

  a.setNombreApyme("nombre");
  v.push_back(p);
  v.push_back(q);
  a.setVectorPymes(v);
  aux = a[0];
  aux->escribirPyme();
  aux = a[1];
  aux->escribirPyme();
  std::cin >> p;
  p.escribirPyme();
  return 0;
}
