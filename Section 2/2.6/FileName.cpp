#include <iostream>

int main() {
	int i;
	std::cin >> i;
	if (i % 2 == 0) {
		std::cout << i << ": even";
	}
	else {
		std::cout << i << ": odd";
	}

	return 0;
}