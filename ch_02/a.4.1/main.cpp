#include <iostream>
#include <complex>

using namespace std;

int main(int argc, char *argv[])
{
  using CFunc = double (complex<double>::*) () const;
  CFunc member_selector = &std::complex<double>::imag;

  complex<double> c(7.0, 8.0), c2(9.0);
  complex<double> *p = &c;

  cout << "c's selected member is " << (c.*member_selector)() << endl;
  cout << "p's selected member is " << (p->*member_selector)() << endl;

  member_selector = &complex<double>::real;
  p = &c2;

  cout << "c's selected member is " << (c.*member_selector)() << endl;
  cout << "p's selected member is " << (p->*member_selector)() << endl;

  return 0;
}
  
