#include "Timer.h"
#include "AutoPtr.h"
#include "Resource.h"

AutoPtr<Resource> generateResource() {
	AutoPtr<Resource> res(new Resource(100000000));

	return res;
}

int main() {
	using namespace std;
	streambuf* orig_buf = cout.rdbuf();
	//cout.rdbuf(NULL); // disconnect cout from buffer

	Timer timer;

	{
		AutoPtr<Resource> main_res;
		main_res = generateResource();
	}

	cout.rdbuf(orig_buf);
	cout << time.elapsed() << endl;

	return 0;
}