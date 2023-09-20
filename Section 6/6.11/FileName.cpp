#include <iostream>

using namespace std;

int main() {
	int* ptr = new int{ 7 };

	cout << ptr << endl;
	cout << *ptr << endl;

	delete ptr;
	ptr = nullptr;

	cout << "After delete" << endl;

	/*
	//memory leak
	while (true) {
		int* ptr = new int;
		cout << ptr << endl;
		delete ptr;
	}
	*/

	int length;
	cin >> length;
	int* array = new int[length]();

	array[0] = 1;
	array[1] = 2;

	for (int i = 0; i < length; ++i) {
		cout << (uintptr_t) & array[i] << endl;
		cout << array[i] << endl;
	}

	delete [] array;

	int fixedArray[] = { 1,2,3,4,5 };

	int* array2 = new int[3] {1, 2, 3};

	delete[] array2;

	return 0;

}