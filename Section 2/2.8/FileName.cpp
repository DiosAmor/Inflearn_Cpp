#include <iostream>

int main() {
	using namespace std;

	//Decimal	: 0 1 2 3 4 5 6 7 8 9 10
	//Octal		: 0 1 2 3 4 5 6 7 10 11 12 13
	//Hexa		: 0 1 2 3 4 5 6 7 8 9 A B C D E F 10

	int dec = 10;
	int oct = 012;
	int hexa = 0xA;
	int bin = 0b1010;

	cout << "Decimal\t:" << dec << endl;
	cout << "Octal\t:" << oct << endl;
	cout << "Hexa\t:" << hexa << endl;
	cout << "Binary\t:" << bin << endl;

	return 0;
}