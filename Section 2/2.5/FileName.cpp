#include <iostream>
#include <iomanip>
#include <limits>
#include <cmath>

int main() {
	using namespace std;

	float f(123456789.0f); // 10 significant digits

	cout << setprecision(9);
	cout << f << endl;

	double d(0.1);

	cout << endl;
	cout << d << endl;
	cout << setprecision(17);
	cout << d << endl;

	double d1(1.0);
	double d2(0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1+0.1);
	double d3(0.1 * 10);

	cout << endl;
	cout << setprecision(17);
	cout << d1 << endl;
	cout << d2 << endl;
	cout << d3 << endl;

	double zero = 0.0;
	double posinf = 5.0 / zero;
	double neginf = -5.0 / zero;
	double nan = zero / zero;

	cout << endl;
	cout << posinf << " "<<isnan(posinf)<<endl;
	cout << neginf << " "<<isnan(neginf)<<endl;
	cout << nan <<" "<<isnan(nan)<< endl;
	cout << 1.0 << " " << isnan(1.0) << endl;
}