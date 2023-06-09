#include <fstream>
#include <string>
#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::ifstream;

int main(int argc, char const *argv[])
{
  try {
    ifstream i;
    // paso 1: abrir/crear archivo a+
    i.open("../files/content.txt");

    // paso 2 : leer una linea
    // for( string line; getline( i, line, ',' ); )
    // {
    //   cout << line << endl;
    // }

    // for( string line; getline( i, line, char(10)); )
    // {
    //   cout << line << endl;
    // }

    for( string line; getline( i, line, char(32)); )
    {
      cout << line << endl;
    }

    

    // paso 3: cerrar el archivo
    i.close();
  } catch(string e) {
    cout << e;
  }catch (const std::exception& ex) {
    // cout << (string)ex;
  } catch (const std::string& ex) {
    cout << ex;
  } 
  return 0;
}
