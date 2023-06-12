#include <iostream>
using std::cout;
using std::cin;
using std::endl;

#include <iterator>

// TEMA: Iteradores de Flujo de Entrada y Salida

int main(int argc, char const *argv[])
{
  cout << "Escriba dos enteros:" ;
  std::istream_iterator <int> entradaInt(cin);

  int numero1 = *entradaInt; // lee el elemento de la entrada
  ++entradaInt; // mueve el puntero i++
  int numero2 = *entradaInt; // lee el segundo int

  // cout << "numero 1: "<< numero1 << endl;
  // cout << "numero 2: "<< numero2 << endl;

  std::ostream_iterator <int> salidaInt(cout);
  cout << "la Suma es: ";
  *salidaInt = numero1 + numero2;
  cout << endl;
  return 0;
}
