#include <iostream>
using namespace std;

class B; // forward declaration

class A {
	int m_value = 1;

	friend void doSomething(A& a, B& b);
	friend class B;
	//friend B::doSomething(A&a);
};

class B {
	int m_value = 2;

public:
	void doSomething(A& a) {
		cout << a.m_value << endl;
	}
	friend void doSomething(A& a, B& b);
};

void doSomething(A& a, B& b) {
	cout << a.m_value <<" "<<b.m_value<< endl;
}

int main() {
	A a;
	B b;
	doSomething(a, b);
	b.doSomething(a);

	return 0;
}