#include <iostream>

using namespace std;

void doSomething(int y) {
	cout << "In func (value version): " << y << " " << &y << endl;
}

void doSomething2(int& y) {
	cout << "In func (reference version): " << y << " " << &y << endl;
}

void doSomething3(int* ptr) {
	cout << "In func (ptr version): " << *ptr << " " <<ptr<<" "<< & ptr << endl;
}

int main() {
	int num = 7;

	cout << "In main: \t\t" << num << " " << &num << endl;
	cout << endl;

	doSomething(7);
	doSomething(num);
	doSomething(num + 1);
	cout << endl;

	doSomething2(num);
	//doSomething2(num + 1);
	cout << endl;

	doSomething3(&num);

}