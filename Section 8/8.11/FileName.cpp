#include <iostream>
using namespace std;

class Something {
	static int s_value;
	int m_value;

public:
	//static variable 밖에 못 씀. (this를 아예 사용 불가)
	static int getValue() {
		return s_value;
	}

	int temp() {
		return this->s_value;
	}
};

int Something::s_value = 1024;

int main() {
	cout << Something::getValue << endl;

	Something s1,s2;
	cout << s1.getValue() << endl;

	//객체의 함수의 경우에는 모든 인스턴스가 같은 주소를 가진다.
	int (Something:: * fptr1)() = &Something::temp;

	cout << (s2.*fptr1)() << endl;


	//static 함수는 객체와 묶여있지 않다.
	int (*ftpr2)() = &Something::getValue;

	cout << ftpr2() << endl;
}