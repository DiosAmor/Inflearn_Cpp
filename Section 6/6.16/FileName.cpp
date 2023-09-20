#include <iostream>

struct Person {
	int age;
	double weight;
};

int main() {
	Person person;

	person.age = 5;
	person.weight = 30;

	Person& ref = person;
	ref.age = 15;

	Person* ptr = &person;
	ptr->age = 30;
	//(*ptr).age = 20;

	Person& ref2 = *ptr;
	ref2.age = 45;

}