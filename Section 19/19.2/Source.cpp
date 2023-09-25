#include <iostream>

using namespace std;

auto my_func() {
	return tuple(123,456);
}

int main() {
	
	//auto result = my_func();

	//cout << get<0>(result) << " " << get<1>(result) << endl;

	auto [a, b] = my_func();

	cout << a << " " << b << endl;

	
	return 0;
}