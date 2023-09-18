#include <iostream>
#include <string>

using namespace std;

int main() {
	const char my_strs[] = "Hello, World";
	const string my_hello = "Hello, World";

	cout << my_hello << endl;

	cout << "Your name ? : ";
	string name;
	//cin >> name;
	getline(cin, name);


	cout << "Your age ? : ";
	string age;
	//cin >> age;
	getline(cin, age);

	cout << name << " " << age << endl;
}