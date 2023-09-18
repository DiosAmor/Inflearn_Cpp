#include <iostream>
#include <string>

using namespace std;

struct Person {
	double height = 3.0;
	float weight = 200.0;
	int age = 100;
	string name = "Mr.Incredible";

	void print() {
		cout << height << " " << weight << " " << age << " " << name;
		cout << endl;
	}
};

struct Family {
	Person me, mom, dad;
};

Person getMe() {
	Person me{ 2.0, 100.0, 20,"Jack Jack" };

	return me;
}

void printPerson(Person ps) {
	cout << ps.height << " " << ps.weight << " " << ps.age << " " << ps.name;
	cout << endl;
}

int main() {
	Person me{ 2.0, 100.0, 20,"Jack Jack" };
	printPerson(me);
	
	Person me2;
	me2 = me;
	me2.print();

	Person me_from_func = getMe();
	me_from_func.print();
	cout << sizeof(me_from_func) << endl;

	Person mom;
	Person dad;

	return 0;
}