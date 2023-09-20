#include <iostream>
#include <cstring>

using namespace std;

int main() {
	char source[] = "Copty this!";
	char dest[50];
	strcpy_s(dest, source);

	cout << source << endl;
	cout << dest << endl;

	//equal = 0
	cout << strcmp(source, dest) << endl;
}