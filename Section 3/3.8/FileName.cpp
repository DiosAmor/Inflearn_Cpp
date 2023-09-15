#include <iostream>
#include <bitset>

int main() {
	using namespace std;

	// << left shift
	// >> right shift
	// ~, &, |, ^

	unsigned int a = 3;
	cout << bitset<4>(a) << endl;

	unsigned int b = a << 3;
	cout << bitset<4>(b) << endl;

	unsigned int c = a >> 1;
	cout << bitset<4>(c) << endl;


	return 0;
}