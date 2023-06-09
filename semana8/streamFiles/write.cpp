#include <fstream>
using std::ofstream;

int main(int argc, char const *argv[])
{
  ofstream o;
  // paso 1: abrir/crear archivo a+
  o.open("data.txt");

  // paso 2 : escribir toda la data
  o << "texto ejemplo1";
  o << "texto ejemplo1";
  o << "texto ejemplo1";


  // paso 3: cerrar el archivo
  o.close();
  return 0;
}
