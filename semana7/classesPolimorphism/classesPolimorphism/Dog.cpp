#include "Dog.h"
#include <iostream>

void Dog::makeSound()
{
	std::cout << this->name << " says: ";
	std::cout << "woof woof" << std::endl;
}
