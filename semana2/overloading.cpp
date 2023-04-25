#include <iostream>
using namespace std;

void imprimir(int x);
void imprimir(char a);
void imprimir(char *c);

int main()
{
  imprimir(7);
  imprimir('s');
  imprimir("Aprender a Programar PRO");
  return 0;
}

void imprimir(int x)
{
  cout << "Este es un entero: " << x << endl;
}

void imprimir(char a)
{
  cout << "Esta es una letra: " << a << endl;
}

void imprimir(char *c)
{
  cout << "Esta es una cadena: " << c << endl;
}
