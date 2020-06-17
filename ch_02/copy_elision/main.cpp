#include <iostream>
#include <vector>
#include <string>

// Copy Elision and Return Value Optimization.

using std::vector;
using std::string;
using std::cout;
using std::endl;

struct OneStruct {
  vector<string> v;
  OneStruct(vector<string> in) {
    v.swap(in);
    cout << "Swapped " << endl;
  }
};

string GenString() {
  string result("foo");
  cout << "GenString" << endl;
  return result;
}

vector<string> GenVector(int n) {
  vector<string> result;
  for (int i = 0; i < n; ++i) {
    cout << "GenVector: " << i << endl;
    result.push_back(GenString());
  }
  return result;
}

int main() {
  int N = 10;
  OneStruct one_struct(GenVector(N));
}

