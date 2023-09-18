#include <iostream>

using namespace std;

enum class Color {
	RED,
	BLUE
};

enum class Fruit {
	BANANA,
	APPLE,
};

int main() {
	Color color = Color::RED;
	Color color2 = Color::BLUE;
	Fruit fruit = Fruit::BANANA;

	/*
	if (color == fruit)
		cout << "Color is fruit? " << endl;
	*/

	if (color == color2)
		cout << "Same" << endl;
	else
		cout << "No" << endl;
	
	return 0;
}