#include <iostream>
using namespace std;

//매개변수 기본값은 한 쪽에서만
void print(int x = 10, int y = 20, int z = 30);

void print(int x, int y, int z) {
	cout << x << " " << y << " " << z << endl;
}

int main() {

	return 0;
}