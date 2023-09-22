#include <iostream>
using namespace std;

class A {
public:
	virtual void print() { cout << "A" << endl; }
};

class B :public A {
public:
	void print() final { cout << "B" << endl; }
};

class C :public B {
public:
	virtual void print() override { cout << "C" << endl; }
};

int main() {

}