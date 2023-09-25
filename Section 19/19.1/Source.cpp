#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

void goodbye(const string& s) {
	cout << "Goodbye " << s << endl;
}

class Object {
public:
	void hello(const string& s) {
		cout << "Hello " << s << endl;
	}
};

int main() {
	auto func = [](const int& i)->void {cout << "Hello, World!" << endl; };

	func(123);

	[](const int& i)->void {cout << "Hello, World!" << endl; }(1234);

	{
		string name = "JackJack";
		[&]() {std::cout << name << endl; }();
	}

	vector<int> v;
	v.push_back(1);
	v.push_back(2);

	auto func2 = [](int val) {cout << val << endl; };
	for_each(v.begin(), v.end(), [](int val) {cout << val << endl; });

	cout << []()->int {return 1; }() << endl;

	function<void(int)>func3 = func2;
	func3(123);

	function<void()>func4 = bind(func3, 456);
	func4();


	{
		Object instance;
		auto f = bind(&Object::hello, &instance, placeholders::_1);

		f(string("World"));

		auto f2 = bind(&goodbye, placeholders::_1);

		f2(string("World"));
	}

	return 0;
}