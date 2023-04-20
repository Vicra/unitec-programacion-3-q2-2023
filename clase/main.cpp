#include <iostream> // imprimir obtener de input
using namespace std;

class Node
{
private:
  int _value;
public:
  Node();
  Node(int);
  ~Node();

  // getters and setters
  int getValue();
};

// constructors
Node::Node()
{
  this->_value = 0;
}

Node::Node(int value)
{
  this->_value = value;
}

// this will be called on
// ie: Node n = new Node()
// instance = n
// delete instance
// free (instance)
Node::~Node()
{
}

int Node::getValue()
{
  return this->_value;
}

int main(int argc, char const *argv[])
{
  int arr[100];
  int n=10;
  int *ptrn = &n;

  cout << "Direccion: " << ptrn << endl;
  cout << "numero: " << n << endl;
  cout << "numero por medio desreferenciar: " << *ptrn << endl;

  Node* node = new Node(1);
  cout << node->getValue() << endl;
  delete node;
  return 0;
}
