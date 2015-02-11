#include "empresa.hpp"
#include "pyme.hpp"
#include "apyme.hpp"
#include <vector>
#include <iostream>

using namespace std;

int main () {
  Apyme a;
  Pyme p("p", "p", "p", "p");
  Pyme q("q", "q", "q", "q");
  Pyme r(p);
  Pyme* aux;
  vector<Pyme> v;

  r.escribirPyme();
  a.setNombreApyme("nombre");
  v.push_back(p);
  v.push_back(q);
  a.setVectorPymes(v);
  aux = a[0];
  aux->escribirPyme();
  aux = a[1];
  aux->escribirPyme();
  cin >> p;
  p.escribirPyme();
  p=q;
  p.escribirPyme();
  cout << p;
  cout << q;
  return 0;
}
