#include <iostream>
#include <string>

using namespace std;

//return 값 바꾸는 것만으로는 오버로딩이 불가능

void print(char* value) {}
void print(int value) {}

int main()
{
	print(0);
	print('a');

	return 0;
}