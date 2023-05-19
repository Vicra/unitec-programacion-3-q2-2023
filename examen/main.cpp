#include <iostream>

void swap (int &a, int &b){
  int tmp = a;
  a = b;
  b = tmp;
}

template <typename T>
class Node {
  public:
  T value;
  Node<T>* next;

  Node(T value){
    this->value = value;
    this->next = nullptr;
  }
};

template <typename T>
class List {
  public:
  Node<T>* head;
  List(){
    this->head = nullptr;
  }
  
  void insert(T value) {
    Node<T>* it = this->head;
    while(it->next != nullptr) {
      it = it->next;
    }
    it->next = new Node<T>(value);
  }
  
  void print(){
    Node<T>* it = this->head;
    while(it != nullptr) {
        std::cout << it->value << ", ";
        it = it->next;
    }
    std::cout << std::endl;
  }

  T deleteValue(T value){
    Node<T>* it = this->head;
    // case when first
    if(it->value == value){
      Node<T>* tmp = it;
      this->head = it->next;
      delete tmp;
      return value;
    } else {
      while(it->next != nullptr) {
        if(it->next->value == value) {
          Node<T>* tmp = it->next;

          // esta linea devuelve null cuando es el ultimo
          it->next = tmp->next;
          delete tmp;
          return value;
        }
        it = it->next;
      }
    }
    return -1;
  }

  Node<T>* reverse(){
    Node<T>* prev = nullptr;
    Node<T>* current = this->head;
    Node<T>* next = current->next;

    while(current != nullptr) {
      next = current->next;
      current->next = prev;
    }
  }
};

int main(int argc, char const *argv[])
{
  int a=5, b=10;
  swap(a,b);
  // std::cout << a << " " << b;
  
  List<int>l;
  l.head = new Node<int>(2);
  l.insert(1);
  l.insert(3);
  l.insert(5);
  l.print();
  int deletedValue1 = l.deleteValue(2);
  if(deletedValue1 != -1) {
    std::cout << "deleted: " << deletedValue1 << std::endl;
  }
  l.print();
  int deletedValue2 = l.deleteValue(5);
  if(deletedValue2 != -1) {
    std::cout << "deleted: " << deletedValue2 << std::endl;
  }
  l.print();
  l.insert(7);
  l.print();
  
  int deletedValue3 = l.deleteValue(3);
  if(deletedValue3 != -1) {
    std::cout << "deleted: " << deletedValue3 << std::endl;
  }
  l.print();
  return 0;
}
