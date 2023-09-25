#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib> // exit()
#include <sstream>

using namespace std;

int main() {

	//writing
	if (true) {
		ofstream ofs("my_first_file.dat"); //ios::app, ios::binary
		//ofs.open("my_first_file.dat");

		if (!ofs) {
			cerr << "Couln't open file " << endl;
			exit(1);
		}

		ofs << "Line 1" << endl;
		ofs << "Line 2" << endl;

		const string filename = "my_file.txt";
		ofstream ofs2(filename);

		for (char i = 'a'; i <= 'z'; ++i)
			ofs2 << i;
		ofs2 << endl;

	}

	//reading
	if (true) {
		ifstream ifs("my_first_file.dat", ios::binary);

		if (!ifs) {
			cerr << "Cannot open file" << endl;
			exit(1);
		}

		while (ifs) {
			string str;
			getline(ifs, str);
			cout << str << endl;
		}

		ifstream ifs2("my_file.txt");

		ifs2.seekg(5);//ifs.seekg(5,ios::beg);
		cout << (char)ifs2.get() << endl;

		ifs2.seekg(5, ios::cur);
		cout << (char)ifs2.get() << endl;

		

	}
}