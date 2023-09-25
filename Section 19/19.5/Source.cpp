#include <iostream>
#include <future>
#include <thread>

using namespace std;

int main() {
	// multi-threading
	{
		int result;
		thread t([&] {result = 1 + 2; });
		t.join();
		cout << result << endl;
	}

	// task-based parallelism
	{
		// std::future<int> fut = ...
		auto fut = async([] {return 1 + 2; });
		cout << fut.get() << endl;
	}

	// future and promise
	{
		promise<int> prom;
		auto fut = prom.get_future();

		auto t = thread([](promise<int>&& prom) {
			prom.set_value(1 + 2);
			}, move(prom));

		cout << fut.get() << endl;
		t.join();
	}


	{
		auto f1 = async([] {
			cout << "async1 start" << endl;
			this_thread::sleep_for(chrono::seconds(2));
			cout << "async1 end" << endl;
			});

		auto f2 = async([] {
			cout << "async2 start" << endl;
			this_thread::sleep_for(chrono::seconds(1));
			cout << "async2 end" << endl;
			});

		cout << "Main function" << endl;
	}

}