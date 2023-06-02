#include "Animal.h"
#include <iostream>

Animal::Animal()
{
}

Animal::~Animal()
{
}

std::string Animal::getName()
{
	return this->name;
}

void Animal::setName(std::string name)
{
	this->name = name;
}

void Animal::makeSound()
{
	std::cout << this->name << " says: ";
	std::cout << "..." << std::endl;
}
