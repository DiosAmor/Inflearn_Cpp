#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main() {
	char buf[5];

	cin >> setw(5)>>buf;

	cout << buf << endl;

	cin >> setw(5) >> buf;

	cout << buf << endl;

	return 0;
}