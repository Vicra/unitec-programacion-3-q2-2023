#include <iostream>
#include <cmath>

using namespace std;

#include "Complex.h"

int main() {
	// 2, 3i
	Complex a(2, 3);

	// 4, 5i
	Complex b(4, 5);

	Complex res = a + b;
	cout << "res: ";
	res.print();


	Complex res2 = a - b;
	cout << "res2: ";
	res2.print();


	cout << "Abs: " << res.absoluteValue() << endl;
	return 0;
}