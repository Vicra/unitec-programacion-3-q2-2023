#include <iostream>

using namespace std;

template <typename T>
class Stack {
  private:
    T array[100];
    int size;
  public:
    Stack(){
      size = 0;
    }

    // insertar al final = push
    void push (T value) {
      array[size] = value;
      size++;
    }

    void print() {
      for (int i = 0; i < size; i++)
      {
        cout << array[i] << " ";
      }

      // foreach
      // for(int i : arr)
      // {
      //   cout<<i<<" ";
      // }
      cout << endl;
    }

    // sacar uno del final = pop
    T pop() {
      T returnValue = array[size-1];
      size = size - 1;
      return returnValue;
    }
};

int main(int argc, char const *argv[])
{
  Stack<int> s;
  s.push(1);
  s.push(2);
  s.push(3);

  s.print();
  int popped = s.pop();
  cout << "Popped: " << popped << endl;
  s.print();
  return 0;
}
