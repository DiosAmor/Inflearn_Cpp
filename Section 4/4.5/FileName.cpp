#include <iostream>
#include <typeinfo>

int main() {
	using namespace std;

	// numeric promotion
	float a = 1.0f;
	double d = a;

	//numeric conversion
	int i = 30000;
	char c = i;


	cout << typeid(a).name() << endl;
	cout << static_cast<int>(c) << endl;

	return 0;
}