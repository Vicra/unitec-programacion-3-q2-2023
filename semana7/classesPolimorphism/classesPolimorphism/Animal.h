#include <string>

#pragma once
class Animal
{
public:
	Animal();
	~Animal();
	std::string getName();
	void setName(std::string name);
	void makeSound();

protected:
	std::string name;
};