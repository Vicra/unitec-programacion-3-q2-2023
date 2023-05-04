
#include <iostream>
using namespace std;

class Node
{
private:
  int value;
public:
  Node(int newValue);
  ~Node();
  Node* next;

  int getValue();
};

Node::Node(int newValue)
{
  this->value = newValue;
  this->next = NULL;
}

int Node::getValue()
{
  return this->value;
}
class List
{
public:
  List(Node* index);
  ~List();
  Node* first;

  // TODO: operaciones de estructura de datos
  void print();
  void insert(Node* newNode);
  int deleteFirst();
  // void insert(int newValue);
  // deleteNode(Node* nodeToDelete)
  // deleteFirst
  // deleteLast
  // sumAll
  // reverse 1,2,3,4, -> 4,3,2,1
  // sort
  // max
  // min
};

List::List(Node* index)
{
  this->first = index;
}

List::~List()
{
}

void List::print()
{
  Node* iterator = this->first;
  // llega hasta null
  while(iterator != NULL) {
    cout << iterator->getValue() << ", ";
    iterator = iterator->next;
  }
  cout << endl;
  return;
}

int List::deleteFirst(){
  // guardar la referencia del que se va borrar
  Node* tmp = this->first;
  // cambiar el inicio
  this->first = this->first->next;
  // liberar la memoria del anterior inicio
  free(tmp);
}

// print(Node* current) {
//   if(current == null)
//     return;
//   else 
//     cout << current->getValue()
//     return print(current->next);
// }

void List::insert(Node *newNode)
{
  // llegar hasta el ultimo
  Node* iterator = this->first;
  while(iterator->next != NULL) {
    iterator = iterator->next;
  }

  // asignar el nuevo valor
  cout << "ultimo: " << iterator->getValue() << endl;

  // el siguiente del ultimo elemento va a ser igual al nuevo nodo
  iterator->next = newNode;
}

int main(int argc, char const *argv[])
{
  Node* first = new Node(1);

  // heap
  List* myList = new List(first);
  myList->first = first;
  myList->print();

  myList->insert(new Node(2));
  myList->insert(new Node(3));
  myList->insert(new Node(4));
  myList->insert(new Node(5));
  myList->print();
  myList->deleteFirst();
  myList->print();

  free(first);
  free(myList);

  // stack
  // List myList2(first);
  // cout << myList2.first->getValue();
  return 0;
}
