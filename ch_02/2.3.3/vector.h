#include <cassert>
#include <iostream>
#include <initializer_list>
#include <algorithm>

namespace curso 
{
class vector
{
  int _size;
  double *data;

  public:
  vector(int size=0) : _size(size), data(nullptr) 
  { 
    if (_size > 0) data = new double[_size];
    std::cout << "Vector created." << std::endl;
  };
  vector(const vector& other) : _size(other._size), data(new double[_size]) 
  { 
    for (int i=0; i < _size; ++i) 
      data[i] = other.data[i];
    std::cout << "Vector copied." << std::endl; 
  };
  vector(std::initializer_list<double> values) :
   _size(values.size()), data(new double[_size] 
  {
    std::copy(std::begin(values), std::end(values), std::begin(data));
  };
  vector& operator = (const vector& other) 
  { 
    assert(_size == other._size); 
    if (data == other.data) 
      return *this; 
    for (int i=0; i < _size; ++i) 
      data[i] = other.data[i]; 
    std::cout << "Vector assigned." << std::endl;
    return *this;
  }
  vector& operator =(std::initializer_list<double> values)
  {
    assert(_size = values.size());
    std::copy(std::begin(values), std::end(values), std::begin(data));
    return *this;
  }
  ~vector() 
  { 
    delete [] data;
    std::cout << "Vector destroyed." << std::endl;
  }
  int size() const 
  { 
    return _size;
  }
  double at(int i) const { assert(i < _size); return data[i];}
  double& operator [] (int i) { assert( i < _size); return data[i];}
};
}
