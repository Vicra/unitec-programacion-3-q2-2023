#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;
int main(int argc, char const *argv[])
{
  vector<int> enteros;
  enteros.push_back(5);
  enteros.push_back(4);
  enteros.push_back(3);

  vector<int>::const_reverse_iterator iteradorInverso;
  vector<int>::const_reverse_iterator final = enteros.rend();

  for(iteradorInverso = enteros.rbegin(); 
    iteradorInverso != final; ++iteradorInverso){
    cout << *iteradorInverso << " ";
  }

  cout << endl;
  return 0;
}
