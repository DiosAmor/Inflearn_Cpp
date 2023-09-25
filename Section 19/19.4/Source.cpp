#include <iostream>
#include <thread>
#include <atomic>
#include <mutex>
#include <chrono>

using namespace std;


int main() {
	atomic<int> shared_memory(0);

	auto count_func = [&]() {
		for (int i = 0; i < 1000; ++i) {
			this_thread::sleep_for(chrono::milliseconds(1));
			shared_memory++;
		}
	};

	// 2000이 안 됨. 이전꺼에 더할 가능성이 있음.
	thread t1 = thread(count_func);
	thread t2 = thread(count_func);

	t1.join();
	t2.join();

	cout << "After" << endl;
	cout << shared_memory << endl;

	return 0;
}