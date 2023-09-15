#include<iostream>
#include <iomanip>
#include <cmath>

int main() {
	using namespace std;

	double d1(100 - 99.99);	//0.001
	double d2(10 - 9.99);	//0.001

	if (d1 == d2)
		cout << "equal" << endl;
	else
	{
		cout << "Not equal" << endl;

		if (d1 > d2) cout << "d1>d2" << endl;
		else
			cout << "d1 < d2" << endl;
	}
	cout << endl;
	cout << setprecision(17);
	cout << "d1: "<<d1 << endl;
	cout << "d2: "<<d2 << endl;
	cout << "Diff: "<<abs(d1 - d2) << endl;

	const double epsilon = 1e-10;

	if (abs(d1 - d2) < epsilon)
		cout << "Approximately equal" << endl;
	else
		cout << "Not equal" << endl;

	return 0;

}