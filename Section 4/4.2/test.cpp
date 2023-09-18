#include <iostream>
#include "MyConstant.h"

extern int a = 123;

void doSomething() {

	using namespace std;

	cout << "Hello " << endl;
	cout << "In test.cpp file " << Constants::pi << " " << &Constants::pi << endl;

	/*
	//memory is static
	static int a = 1;
	++a;
	cout << a << endl;
	*/
}