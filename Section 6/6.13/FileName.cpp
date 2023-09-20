#include <iostream>

int main() {
	using namespace std;

	int value1 = 5;

	//포인터가 가리키고 있는 값을 바꾸지 않겠다는 의미
	const int* ptr = &value1;
	//value1 = 6; 이런건 가능
	//*ptr = 7; 이건 불가능

	int value2 = 6;
	ptr = &value2;


	int value = 5;
	int* const ptr2 = &value;
	//ptr = &value2 이런건 불가능

	*ptr2 = 10;
	cout << *ptr2 << endl;

	const int* const ptr3 = &value;


	return 0;
}