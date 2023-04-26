#include <iostream>
#include <cmath>

using namespace std;

#include "Complex.h"

// parametros por defecto a = 0, b = 0
Complex::Complex(double a = 0, double b = 0) {
	real = a;
	imaginary = b;
}

// sobrecarga de operadores
Complex Complex::operator+(Complex const& obj) {
	// parametro por defecto permite llamar sin constructor
	Complex res(this->real + obj.real, this->imaginary + obj.imaginary);
	return res;
}

Complex Complex::operator-(Complex const& obj) {
	// parametro por defecto permite llamar sin constructor
	Complex res(this->real - obj.real, this->imaginary - obj.imaginary);
	return res;
}

void Complex::print() {
	cout << this->real << " + " << this->imaginary << "i" << endl;
	return;
}

double Complex::absoluteValue() {
	return sqrt(pow(this->real, 2) + pow(this->imaginary, 2));
}

