#include <iostream>
#include <memory>
#include "Resource.h"

auto doSomething() {
	return std::unique_ptr<Resource>(new Resource(5));
}

void doSomething2(std::unique_ptr<Resource>& res) {
	res->setAll(10);
}

int main() {
	{
		std::unique_ptr<Resource> res(new Resource(1000000));
	}
	{
		std::unique_ptr<int> upi(new int);

		//std::unique_ptr<Resource> res1(new Resource(5));
		auto res1 = std::make_unique<Resource>(5);
		//auto res1 = doSomething();

		std::unique_ptr<Resource> res2;

		std::cout << std::boolalpha;
		std::cout << static_cast<bool>(res1) << std::endl;
		std::cout << static_cast<bool>(res2) << std::endl;

		//res2 = res1; // 불가능
		res2 = std::move(res1);

		std::cout << std::boolalpha;
		std::cout << static_cast<bool>(res1) << std::endl;
		std::cout << static_cast<bool>(res2) << std::endl;

		if (res1 != nullptr) res1->print();
		if (res2 != nullptr) res2->print();
	}
}