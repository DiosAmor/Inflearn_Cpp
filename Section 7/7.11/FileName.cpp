#include <iostream>
#include <vector>

using namespace std;

void printStack(const vector<int> &stack) {
	for (auto& e : stack)
		cout << e << " ";
	cout << endl;
}

int main() {
	vector<int> v{ 1,2,3 };

	v.resize(10);

	for (auto& e : v)
		cout << e << " ";
	cout << endl;

	cout << v.size() << " " << v.capacity() << endl;

	cout << endl;
	vector<int> stack;

	stack.push_back(3);
	printStack(stack);
	stack.push_back(5);
	printStack(stack);
	stack.push_back(7);
	printStack(stack);

	stack.pop_back();
	printStack(stack);
	stack.pop_back();
	printStack(stack);
	stack.pop_back();
	printStack(stack);
}