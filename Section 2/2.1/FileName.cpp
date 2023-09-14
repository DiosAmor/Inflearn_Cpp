#include <iostream>
#include <bitset>

int main() {
	using namespace std;

	char a = 'H';
	int j = 3;
	int i = -1;
	int k = 123;

	cout << (uintptr_t)static_cast<void*>(&a) << endl;
	cout << sizeof(a) << endl;
	cout << (uintptr_t)static_cast<void*>(&j) << endl;
	cout << sizeof(j) << endl;
	cout << (uintptr_t)static_cast<void*>(&i) << endl;
	cout << (uintptr_t)static_cast<void*>(&k) << endl;

	int test = 3;	// copy initializataion
	int test2(3);	// direct initialization
	int test3{ 3 };	// uniform initialization

	cout << test << ' ' << test2 << ' ' << test3 << endl;

	return 0;
}