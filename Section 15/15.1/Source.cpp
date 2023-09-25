#include "Resource.h"
#include "AutoPtr.h"

using namespace std;

// RAII : resource acquisition is initialization

void doSomething() {
	try {
		//Resource* res = new Resource; //dull pointer
		AutoPtr<Resource> res = new Resource; //smart pointer

		// work with res
		if (true)
		{
			throw - 1;
		}
		//delete res;
	}
	catch (...) {

	}

	return ;
}

int main() {
	doSomething();
}