#include <iostream>

using namespace std;

//void pointer, generic pointer

int main() {
	int i = 5;
	float f = 3.0;

	void* ptr = nullptr;

	ptr = &i;
	cout << ptr << endl;

	ptr = &f;
	cout << ptr << endl;
	cout << *static_cast<float*>(ptr) << endl;

	return 0;
}