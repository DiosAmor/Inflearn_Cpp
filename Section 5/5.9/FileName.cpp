#include <iostream>
#include <cstdlib>	// std::radn(), std::srand()
#include <ctime>	// std::time()
#include <random>

using namespace std;

int getRandomNumber(int min, int max) {
	static const double fraction = 1.0 / (RAND_MAX + 1.0);

	return min + static_cast<int>((max - min + 1) * (std::rand() * fraction));
}

/*
int main() {
	std::srand(static_cast<unsigned int>(std::time(0)));

	for (int count = 1; count <= 100; ++count) {
		
		//cout << std::rand() << "\t";
		cout << getRandomNumber(5, 8) << "\t";

		if (count % 5 == 0) cout << endl;
	}

	return 0;
}
*/

int main() {
	std::random_device rd;
	std::mt19937_64 mersenne(rd()); //create a mersenne twister
	std::uniform_int_distribution<> dice(1, 6);

	for (int count = 1; count <= 20;++count)
		cout << dice(mersenne) << endl;


	return 0;
}