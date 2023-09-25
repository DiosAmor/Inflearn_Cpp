#include <iostream>
#include <string>
#include <thread>
#include <chrono>
#include <vector>
#include <mutex>

using namespace std;

mutex mtx;

int main() {
	const int num_pro = thread::hardware_concurrency();
	/*
	cout << this_thread::get_id() << endl;

	thread t1 = thread([]() {
		cout << this_thread::get_id() << endl;
		while (true) {}});
	thread t2 = thread([]() {
		cout << this_thread::get_id() << endl;
		while (true) {}});
	
	t1.join();
	t2.join();
	*/

	auto work_func = [](const string& name) {
		for (int i = 0; i < 5; ++i) {
			this_thread::sleep_for(chrono::milliseconds(100));

			mtx.lock();
			cout << name << " " << this_thread::get_id() << " is working " << i << endl;
			mtx.unlock();
		}
	};

	work_func("JackJack");
	work_func("Dash");

	thread t1 = thread(work_func, "JackJack");
	thread t2 = thread(work_func, "Dash");
	t1.join();
	t2.join();
}