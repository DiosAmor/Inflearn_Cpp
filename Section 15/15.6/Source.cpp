#include <iostream>
#include "Resource.h"

int main() {
	//Resource* res = new Resource(3);
	//res->setAll(1);
	{
		//std::shared_ptr<Resource> ptr1(res); // 간접적으로 하면 다음 shared가 지워버릴 가능성도 있음.
		auto ptr1 = std::make_shared<Resource>(3);
		ptr1->setAll(1);

		ptr1->print();
		{
			std::shared_ptr<Resource> ptr2(ptr1);
			//auto ptr2 = ptr1;

			ptr2->setAll(3);
			ptr2->print();

			std::cout << "Going out of the block" << std::endl;
		}
		ptr1->print();

		std::cout << "Going out of the outer block" << std::endl;
	}
	return 0;
}