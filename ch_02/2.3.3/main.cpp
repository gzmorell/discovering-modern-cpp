#include "vector.h"
#include <iostream>

using namespace std;

curso::vector vector_repite(int n, double valor = 0.0) {
  curso::vector v(n);
  for (int i =0; i < n ; ++i)
    v[i] = valor;
  return v;
}

int main(int argc, char *argv[])
{
  // curso::vector v{3}; Calls the initializer_list constructor
  curso::vector v(3);
  v[0] = 0;
  v[1] = 1;
  v[2] = 2;
  //curso::vector u{std::move(v)};
  curso::vector u{v};
  curso::vector w(3);
  w = v;
  curso::vector x{3,4,5};

  std::cout << v.at(2) << ", " << u.at(2) << ", " << w.at(2) << std::endl;
  std::cout << x.at(0) << ", " << x.at(1) << ", " << x.at(2) << std::endl;

  //curso::vector vv(vectorUno(3));
  //vv = vectorUno(3);
  v = vector_repite(3,1.0);
  std::cout << v.at(2) << endl;
  return 0;
}
