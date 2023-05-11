
#include <iostream>
using namespace std;

class Node
{
private:
public:
int value;
  Node(int newValue);
  ~Node();
  Node* next;

  int getValue();
};

Node::Node(int newValue)
{
  this->value = newValue;
  this->next = nullptr;
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
  int sumAll();
  void reverse();
  void sort();
  // void insert(int newValue);
  // deleteNode(Node* nodeToDelete) ciclo
  // deleteFirst
  // deleteLast
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
  // llega hasta nullptr
  while(iterator != nullptr) {
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

int List::sumAll(){
  Node* iterator = this->first;
  int result = 0;
  while(iterator != nullptr) {
    result += iterator->getValue();
    iterator = iterator->next;
  }
  return result;
}

void List::reverse(){
  // 1->2->3->4
  // inicio: 1
  Node* current = this->first;
  Node* previous = nullptr;
  Node* next = nullptr;
  while(current != nullptr) {
    next = current->next;
    current->next = previous;
    previous = current;
    current = next;
  }
  this->first = previous;
}

// void swap(Node*&I, Node*&min){
//   int tmpI = min->getValue();
//   cout << "tmpI" << tmpI;
//   min->value = I->getValue();
//   cout << "min value" << tmpI;
//   I->value = tmpI;
// }
// selection sort
void List::sort() {
  Node* tmpI = this->first;
  Node* tmpJ = this->first->next;
  while(tmpI != nullptr) {

    Node* min = tmpJ;
    while(tmpJ != nullptr) { 
      if (tmpJ->getValue() < min->getValue()) {
        min = tmpJ;
      }
      tmpJ = tmpJ->next;
    }
    if(min->getValue() < tmpI->getValue()) {
      cout << "min:" << min->getValue() << " tmpI:" << tmpI->getValue() << endl;
      std::swap(min, tmpI);
    }

    tmpI = tmpI->next;
  }
}

// SEUDO DE PRINT RECURSIVO
// print(Node* current) {
//   if(current == nullptr)
//     return;
//   else 
//     cout << current->getValue()
//     return print(current->next);
// }

void List::insert(Node *newNode)
{
  // llegar hasta el ultimo
  Node* iterator = this->first;
  while(iterator->next != nullptr) {
    iterator = iterator->next;
  }
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

  myList->insert(new Node(5));
  myList->insert(new Node(3));
  myList->insert(new Node(1));
  myList->insert(new Node(2));
  myList->print();
  myList->deleteFirst();
  myList->print();

  cout << "SumAll: " << myList->sumAll() << endl;

  // cout << "reversing list" << endl;
  // myList->reverse();

  // myList->sort();
  myList->print();

  free(first);
  free(myList);

  // stack
  // List myList2(first);
  // cout << myList2.first->getValue();
  return 0;

}

