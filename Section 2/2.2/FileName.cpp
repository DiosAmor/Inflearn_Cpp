#include <iostream>
#include <cmath>
#include <limits>

int main()
{
	using namespace std;

	short		s = 1; // 2 bytes = 2 * 8 bits = 16 bits
	int			i = 1;
	long		l = 1;
	long long	ll = 1;

	cout << sizeof(s) << endl;
	cout << pow(2, sizeof(short) * 8 - 1) - 1 << endl;
	cout << numeric_limits<short>::max() << endl;
	cout << numeric_limits<short>::min() << endl;
	cout << numeric_limits<short>::lowest() << endl;

	s = 32767;
	s = s + 1; //32768

	cout << "s = 32767 + 1 = "<<s << endl;

	s = numeric_limits<short>::min();
	s = s - 1; //-32768

	cout << "s = -32768 - 1 = " << s << endl;


	cout << sizeof(i) << endl;
	cout << sizeof(l) << endl;
	cout << sizeof(ll) << endl;

	return 0;
}