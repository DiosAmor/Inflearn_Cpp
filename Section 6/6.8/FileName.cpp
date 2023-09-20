#include <iostream>

using namespace std;

void printArray(int* array) {
	cout << sizeof(array) << endl;
	cout << *array << endl;

	*array = 100;
}

int main() {
	int array[5] = { 9,7,5,3,1 };
	cout << sizeof(array) << endl;

	int* ptr = array;

	cout << sizeof(ptr) << endl;

	printArray(array);

	cout << array[0] << " "<< *array << endl;

	//cout에서 char* 는 문자열을 가리키는 포인터로 취급됨.
	char c = 'Q';
	//cout << &c << endl;


	int t = 10;
	int* ptr_t = &t;
	cout << ptr_t<< " "<< &t << endl;


	return 0;
}