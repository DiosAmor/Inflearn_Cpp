#include <iostream>

int main() {
	using namespace std;

	float a;

	cout << sizeof(float) << endl;
	cout << sizeof(a) << endl;

	// comma operator

	int x = 3;
	int y = 10;
	int z = (++x, ++y);
	// ++x; ++y; z = y;

	cout << x << " " << y << " " << z << endl;

	// conditional operator (arithmetric if)
	bool onSale = true;

	const int price = (onSale == true) ? 10 : 100;

	cout << price << endl;

	return 0;
}