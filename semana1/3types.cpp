#include <iostream>
#include <iomanip>
using namespace std;

// https://cplusplus.com/reference/climits/

int main(int argc, char const *argv[])
{
  cout << false << "\n";
  cout << std::boolalpha;   
  cout << false << "\n";

  char cValue = 'g';
  cout << cValue << endl;
  cout << "bool: " << sizeof(bool) << endl;
  cout << "string: " << sizeof(string) << endl;
  cout << "char: " << sizeof(char) << endl;
  cout << "int: " << sizeof(int) << endl;
  cout << "short int: " << sizeof(short int) << endl;
  cout << "int 8: " << sizeof(int8_t) << endl;
  return 0;
}