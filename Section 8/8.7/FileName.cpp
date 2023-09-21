#include "Calc.h"

//using namespace std;

class Simple {
	int m_id;

public:
	Simple(int id) {
		setID(id);

		std::cout << this << std::endl;
	}
	void setID(int id) { m_id = id; }
	int getID() { return m_id; }
};


int main() {
	Simple s1(1), s2(2);
	s1.setID(2);
	s2.setID(4);

	std::cout << &s1 << " " << &s2 << std::endl;

	//javascript 같네
	Calc cal(10);
	cal.add(10).sub(1).mult(2).print();

	Calc(10).add(10).sub(1).mult(2).print();

	return 0;
}