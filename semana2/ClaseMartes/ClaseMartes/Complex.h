#include <iostream>
#include <cmath>

using namespace std;

class Complex {
public:
	double real;
	double imaginary;

	// parametros por defecto a = 0, b = 0
	Complex(double a, double b);

	// sobrecarga de operadores
	Complex operator+(Complex const& obj);

	Complex operator-(Complex const& obj);

	void print();

	double absoluteValue();
};
