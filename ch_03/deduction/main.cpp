#include "funciones.h"
#include <iostream>
#include <memory>

// Parameter Type Deduction.

using std::cout;
using std::endl;
using std::move;

int main()
{
  int i = 5;
  int &j = i;
  int k = 7;
  int &l = k;
  const int &m = i;
  std::unique_ptr<int> pp(new int(3));

  std::cout << "El maximo de i y k es: " << maximo(i,k) << std::endl;
  std::cout << "El máximo de i y l es: " << maximo(i,l) << std::endl;
  std::cout << "El máximo de j y l es: " << maximo(j,l) << std::endl;

  cout << endl;
  cout << endl << "func 5" << endl;
  func(5);
  cout << endl << "func i" << endl;
  func(i);
  cout << endl << "func j" << endl;
  func(j);
  cout << endl << "func m" << endl;
  func(m);
  cout << endl << "func pp" << endl;
  func(pp);
  cout << endl << "func move pp" << endl;
  func(std::move(pp));

  cout << endl;
  perfect_forward(5);
  perfect_forward(i);
  perfect_forward(j);
  perfect_forward(m);
  perfect_forward(pp);
  perfect_forward(move(pp));

  return 0;
}

