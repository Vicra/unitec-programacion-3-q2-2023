#include <iostream>

// #define DEBUG_MODE 1

#ifdef DEBUG_MODE
#define DEBUG(mensaje) std::cout << mensaje << std::endl
#else
#define DEBUG(mensaje) 
#endif

int main(int argc, char const *argv[])
{
  int a=1, b=2;
  DEBUG("a: " << a);
  DEBUG("b: " << b);
  int rs = a+b;
  std::cout << rs;
  return 0;
}
