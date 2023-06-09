#include <iostream>
#include "../Headers/Animal.h"

Animal::Animal()
{
}

Animal::~Animal()
{
}

void Animal::makeSound() {
  std::cout << "..." << std::endl;
  return;
}