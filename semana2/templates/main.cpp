#include <iostream>

template <typename T>
T max (T a, T b) {
  return a > b ? a : b;
}


int main(int argc, char const *argv[])
{
  /* code */
  int a = 5, b = 10;
  std::cout << max (a, b) << std::endl;

  double x = 2.71, y = 3.14;
  std::cout << max (x, y) << std::endl;

  // integerStack
  return 0;
}
