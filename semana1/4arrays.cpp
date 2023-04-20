#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
  int arr[5] = {1, 2, 3, 4, 5};

  // size of int =  4
  // size of array = 4*5 = 20

  cout << "size of array: " << sizeof(arr) << endl;
  
  for(int i=0; i<sizeof(arr)/sizeof(int); i++){
    cout << "arr[" << i << "]: " << arr[i] << endl;
  }

  // array of string, array of doubles
  return 0;
}
