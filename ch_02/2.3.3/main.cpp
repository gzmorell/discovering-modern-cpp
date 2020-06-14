#include "vector.h"
#include <iostream>

using namespace std;

int main(int argc, char *argv[])
{
  curso::vector v{3};
  v[0] = 0;
  v[1] = 1;
  v[2] = 2;
  curso::vector u{v};
  curso::vector w(3);
  w = v;

  std::cout << v.at(2) << ", " << u.at(2) << ", " << w.at(2) << std::endl;
  return 0;
}
