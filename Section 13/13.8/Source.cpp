#include <iostream>
using namespace std;

template<class T>
class A {
	T m_value;
public:
	A(const T& input)
		:m_value(input)
	{}

	template<typename TT>
	void doSomething() {
		cout << typeid(T).name() << " " << typeid(TT).name() << endl;
	}

	void print() {
		cout << m_value << endl;
	}
};

int main() {
	A<int> a_int(123);
	a_int.print();

	a_int.doSomething<float>();

	return 0;
}