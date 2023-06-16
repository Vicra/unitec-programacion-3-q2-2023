#include <iostream>
using std::cout;
using std::endl;

#include <vector>
using std::vector;

int eliminarElemento(vector<int>datos, int x) {
  vector<int>::const_reverse_iterator iteradorInverso;
  vector<int>::const_reverse_iterator final = datos.rend();

  for (iteradorInverso = datos.rbegin();
  iteradorInverso != final;
  ++iteradorInverso) {
    if(*iteradorInverso == x){
      cout << "here";
    }
  }
}

int main(int argc, char const *argv[])
{
  vector<int> datos;
  datos.push_back(3);
  datos.push_back(2);
  datos.push_back(1);

  
  /* code */
  return 0;
}
