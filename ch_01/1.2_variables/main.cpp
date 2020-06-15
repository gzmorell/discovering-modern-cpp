#include <complex>
#include <iostream>

int main() {
  // Los tipos básicos son
  // char         letras y enteros de 1 byte con signo
  // short        enteros (mínimo 16 bits)
  // int          enteros (mínimo 32 bits)
  // long         enteros (mínimo 64 bits)
  // long long
  // unsigned     Precede a uno de los anteriores para denotar la version sin
  // signo. float        Coma flotante de precisión sencilla (32 bits). double
  // Coma flotante de precisión doble (64 bits). long double  Coma flotante (128
  // bits) bool         booleano (True / False)
  //

  int i = 2;
  int i2, i3 = 5;
  float pi = 3.14159; // Conversion a float de un literal doble
  double x = -1.5e6;
  double y = -1.5e-6;
  char c1 = 'a', c2 = 35;
  bool cmp = i < pi, happy = true;
  std::cout << "Variables: " << i << ", " << i2 << ", " << i3 << ", " << pi
            << ", " << x << ", " << y << ", " << c1 << ", " << c2 << ", " << cmp
            << ", " << happy << std::endl;

  // Constantes
  // Los valores constantes deben inicializarse en la definición y no pueden
  // modificarse
  //
  const int ci1 = 2;
  // const int ci3; // Error no se ha inicializado.
  const float cpi = 3.14159;
  const char cc{'a'};
  const bool ccmp = ci1 < pi;

  std::cout << "Constantes: " << ci1 << ", " << cpi << ", " << cc << ", "
            << ccmp << std::endl;

  // Literales
  // 2    int
  // 2u   unsigned int
  // 2l   long
  // 2ul  unsigned long
  // 2.0  double
  // 2.0f float
  // 2.0l long double

  std::complex z(1.3, 2.4);         // complejo de double
  std::complex<float> z2{1.3, 2.4}; // complejo de float
  std::cout << 2.0 * z << ", " << 3.0f * z2 << std::endl;

  std::cout << "Octal 010 es: " << 010 << ". Binario 010 es: " << 0b010
            << ". Hexadecimal 010 es: " << 0x010 << std::endl;

  std::cout << "3.1 como entero es: " << static_cast<int>(3.1)
            << ". 3.9 como entero es: " << static_cast<int>(3.9) << std::endl;
  std::cout << "-3.1 como entero es: " << static_cast<int>(-3.1)
            << ". -3.9 como entero es: " << static_cast<int>(-3.9) << std::endl;

  std::cout << "3.1 redondeado a entero es: " << std::round(3.1)
            << ". 3.9 redondeado a entero es: " << std::round(3.9) << std::endl;
  std::cout << "-3.1 redondeado a entero es: " << std::round(-3.1)
            << ". -3.9 redondeado a entero es: " << std::round(-3.9)
            << std::endl;

  // Separadores de numeros para simplificar lectura
  long li = 123'456'789;
  unsigned int bin = 0b1001'1110'0110'1101;
  std::cout << li << ", " << std::hex << bin << std::endl;

  // Suma de números si superan límite
  int maximo = 0x7FFFFFFF;
  std::cout << std::dec << "Tamaño en bytes: " << sizeof(int) << ", Maximo: " << maximo << ", Maximo + 1: " << maximo + 1 << std::endl;

  return 0;
}
