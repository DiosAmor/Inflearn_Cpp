#include <iostream>

using namespace std;

void doSomething(const int &x) {
	cout << x << endl;
}

int main() {
	int a = 1;

	doSomething(a);
	doSomething(1);
	doSomething(a + 3);

	return 0;
}