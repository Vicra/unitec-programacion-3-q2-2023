#include <iostream>
#include <string>
using namespace std;

int main(int argc, char const *argv[])
{
  cout << "Enter your name: " << endl;
  string nameInput;
  cin >> nameInput;
  cout << "Your name is: " << nameInput << endl;


  cout << "Enter your age: " << endl;
  int age;
  cin >> age;
  cout << "Your age is: " << age;
  return 0;
}