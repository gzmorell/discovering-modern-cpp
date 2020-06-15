#include <iostream>

void print(const char* texto)
{
  std::cout << texto << std::endl;
  return;
}

// Arrays Usage.

int main()
{
  print("Hola esto es una prueba");
  char texto[] = "Esto también funciona";
  print(texto);

  return 0;

}

