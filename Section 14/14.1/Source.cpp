#include <iostream>
#include <string>

using namespace std;

int main() {
	double x;
	cin >> x;

	try {
		if (x < 0.0) throw string("Negative input");

		cout << sqrt(x) << endl;
	}
	catch (string error_message) {
		cout << error_message << endl;
	}

	return 0;
}