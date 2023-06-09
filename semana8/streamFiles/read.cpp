#include <fstream>
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::ifstream;

int main(int argc, char const *argv[])
{
  ifstream i;
  // paso 1: abrir/crear archivo a+
  i.open("data.txt");

  // paso 2 : leer una linea
  string a;
  i >> a;

  for( string line; getline( i, line ); )
  {
    cout << line << endl;
  }

  // paso 3: cerrar el archivo
  i.close();
  return 0;
}
