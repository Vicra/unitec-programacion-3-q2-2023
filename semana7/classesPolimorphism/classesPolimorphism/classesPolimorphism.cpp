#include <iostream>
#include "Animal.h"
#include "Dog.h"

int main()
{
    Animal a;
    Dog d;

    a.setName("alpha");
    d.setName("Snoopy");

    a.makeSound();
    d.makeSound();
}
