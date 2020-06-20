#include <algorithm>
#include <cassert>
#include <initializer_list>
#include <iostream>

namespace curso
{

  class vector
  {
    int _size;
    double *data;

  public:
    vector(int size = 0) : _size(size), data(nullptr)
    {
      if (_size > 0)
        data = new double[_size];
      else
      {
        _size = 0;
      }

      std::cout << "Vector created." << std::endl;
    };
    vector(const vector &other) : _size(other._size), data(new double[_size])
    {
      for (int i = 0; i < _size; ++i)
        data[i] = other.data[i];
      std::cout << "Vector copied." << std::endl;
    };
    vector(vector &&other)
    {
      std::cout << "Vector moved." << std::endl;
      data = other.data;
      _size = other._size;
      other._size = 0;
      delete[] other.data;
    }

    explicit vector(std::initializer_list<double> values)
        : _size(values.size()), data(new double[_size])
    {
      std::cout << "Initialization List" << std::endl;
      std::copy(std::begin(values), std::end(values), data);
    }
    vector &operator=(const vector &other)
    {
      std::cout << "Vector assigned." << std::endl;
      assert(_size == other._size);
      if (data == other.data)
        return *this;
      for (int i = 0; i < _size; ++i)
        data[i] = other.data[i];
      return *this;
    }
    vector &operator=(std::initializer_list<double> values)
    {
      std::cout << "Initialization List assigment" << std::endl;
      assert(_size = values.size());
      std::copy(std::begin(values), std::end(values), data + _size);
      return *this;
    }
    vector &operator=(vector &&other)
    {
      std::cout << "Move Asigment" << std::endl;
      if (this == &other)
        return *this;
      delete[] data;
      data = other.data;
      _size = other._size;
      other.data = nullptr;
      other._size = 0;
      return *this;
    }
    ~vector()
    {
      _size = 0;
      delete[] data;
      std::cout << "Vector destroyed." << std::endl;
    }
    int size() const { return _size; }
    double at(int i) const
    {
      assert(i >= 0 && i < _size);
      return data[i];
    }
    //double &operator[](int i)
    // Con esta definición podriamos compilar (v+w)[i] = 3.0; 
    // que no tiene sentido, al ser v+w un temporal.
    // "Reference Qualified Members" evita esta posiblilidad
    // El ampersand final hará que (v+w)[i] = 3.0 de un error de compilación,
    // pues la funcion sólo puede ser llamada con lvalues.
    // Esto ademas obliga a que el resto de definiciones - sobrecargas - del
    // operador [] deban declararse tambien como reference qualified members
    // Si usamos 2 ampersands && restringiremos la llamada a rvalues.
    double &operator[](int i) &
    {
      assert(i >= 0 && i < _size);
      return data[i];
    }
    // Cambiamos a Reference Qualified para todas las definiciones de [], en
    // caso contrario tendremos un error de compilación
    const double &operator[](int i) const &
    {
      assert(i >= 0 && i < _size);
      return data[i];
    }
  };
} // namespace curso
