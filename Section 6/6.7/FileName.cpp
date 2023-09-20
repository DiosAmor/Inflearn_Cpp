#include <iostream>

using namespace std;

void doSomething(double* ptr) {
	if (ptr != nullptr)
		cout << *ptr << endl;
	else
		cout << "Null ptr, do nothing" << endl;
}

int main() {
	int x = 5;

	int* ptr_x = &x, * ptr_y = &x;
	cout << ptr_x << endl;
	cout << *ptr_x << endl;

	cout << endl;
	
	double* ptr = nullptr;

	doSomething(ptr);
	doSomething(nullptr);

	double d = 123.4;

	doSomething(&d);

	ptr = &d;
	doSomething(ptr);

	return 0;
}