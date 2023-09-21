#include <iostream>
using namespace std;

class Fraction {
	int m_numerator;
	int m_denominator;

public:

	Fraction() {
		m_numerator = 1;
		m_denominator = 1;
	}

	Fraction(const int& num_in, const int& den_in = 1) {
		m_numerator = num_in;
		m_denominator = den_in;
	}
	void print() {
		cout << m_numerator << " / " << m_denominator << endl;
	}
};

int main() {
	Fraction frac(1,5);
	frac.print();
	
	Fraction frac2;
	frac2.print();

	return 0;
}