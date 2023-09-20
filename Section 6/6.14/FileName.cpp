#include <iostream>

using namespace std;

void doSomething(int& n) {
	n = 10;
	//주소 마저도 복사를 안 해도 된다.
	cout << &n << endl;
	cout << "In doSomething " << n << endl;
}

void doSomething2(int* ptr) {
	*ptr = 20;
	//주소 마저도 복사를 안 해도 된다.
	cout << &ptr << endl;
	cout << "In doSomething2 " << *ptr << endl;
}

struct Something {
	int v1;
	float v2;
};
struct Other {
	Something st;
};


int main() {
	int value = 5;

	int& ref = value;
	int* ptr = &value;
	cout << ref << endl;
	ref = 10;
	cout << value << " " << ref << endl;

	cout << &value << endl;
	cout << &ref << endl;
	cout << ptr << endl;
	cout << &ptr << endl;

	const int y = 8;
	const int& ref2 = y;

	int n = 5;
	cout << endl;
	cout << n << endl;
	cout << &n << endl;
	doSomething(n);
	cout << n << endl;

	cout << endl;
	cout << n << endl;
	int* ptr2 = &n;
	cout << &ptr2 << endl;
	doSomething2(ptr2);
	cout << n << endl;

	Other ot;
	int& v1 = ot.st.v1;
	v1 = 1;

	cout << v1 << endl;

	return 0;

}