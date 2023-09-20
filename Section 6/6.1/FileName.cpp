#include <iostream>

using namespace std;

struct Rectangle {
	int length;
	int width;
};

enum StudentNAmeP {
	JACKJACK,
	DASH,
	VIOLET
};

void doSomething(int students_scores[]) {
	cout << endl;
	cout << "Function" << endl;
	cout << (int)&students_scores << endl;
	cout << (int)&students_scores[0] << endl;
	cout << students_scores[0] << endl;
	cout << students_scores[1] << endl;
	cout << "Size in function " << sizeof(students_scores) << endl;
}

int main() {
	cout << sizeof(Rectangle) << endl;

	Rectangle rect_arr[10];

	cout << sizeof(rect_arr) << endl;

	rect_arr[0].length = 1;
	rect_arr[0].width = 2;

	cout << endl;

	int my_array[]{ 1,2,3,4,5 };
	cout << my_array[JACKJACK] << endl;
	cout << my_array[1] << endl;
	cout << my_array[2] << endl;
	cout << my_array[3] << endl;
	cout << my_array[4] << endl;


	//const!!
	const int num_students = 20;

	int students_scores[num_students] = { 1,2,3,4,5, };


	//Memory address

	cout << endl;
	cout << "Memory address" << endl;
	cout << (int)students_scores << endl;
	cout << (int)&students_scores << endl;

	cout << (int)&students_scores[0] << endl;
	cout << (int)&students_scores[1] << endl;
	cout << (int)students_scores[0] << endl;
	cout << (int)students_scores[1] << endl;
	cout << "Size in main " << sizeof(students_scores) << endl;


	doSomething(students_scores);


	return 0;
}