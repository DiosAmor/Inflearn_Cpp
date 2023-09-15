#include <iostream>

int main() {
	using namespace std;

	int x = 6, y = 6;
	cout << x << " " << y << endl;
	cout << "++x and ++y" << endl;
	cout << ++x << " " << ++y << endl;
	cout << x << " " << y << endl;


	cout << "x++ and y++" << endl;
	cout << x++ << " " << y-- << endl;
	cout << x << " " << y << endl;
}