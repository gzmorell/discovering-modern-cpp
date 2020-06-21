#include <iostream>
#include <complex>
#include <vector>
#include <algorithm>

// Complex ordering error.

int main()
{
  std::cout << "Hello C++ World!" << std::endl;

  std::vector<float> vf {4, 3, 8, 1, 23, 2};
  std::sort(vf.begin(), vf.end());
  for (auto x : vf)
    std::cout << x << ", ";
  std::cout << std::endl;
  std::vector<std::complex<float>> vc {{1,2}, {3,4}, {5,6}};
//  std::sort(vc.begin(), vc.end()); // Error complex no define < 
  for (auto x : vc)
    std::cout << x << ", ";
  std::cout << std::endl;
  return 0;
}

