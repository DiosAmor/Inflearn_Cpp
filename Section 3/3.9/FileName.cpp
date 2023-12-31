#include <iostream>
#include <bitset>

int main() {
	using namespace std;

	const unsigned char opt0 = 1 << 0;
	const unsigned char opt1 = 1 << 1;
	const unsigned char opt2 = 1 << 2;
	const unsigned char opt3 = 1 << 3;

	cout << bitset<8>(opt0) << endl;
	cout << bitset<8>(opt1) << endl;
	cout << bitset<8>(opt2) << endl;
	cout << bitset<8>(opt3) << endl;

	unsigned char items_flag = 0;
	cout << "No item " << bitset<8>(items_flag) << endl;

	// item0 on
	items_flag |= opt0;
	cout << "Item0 obtained " << bitset<8>(items_flag) << endl;

	// item3 on
	items_flag |= opt3;
	cout << "Item3 obtained " << bitset<8>(items_flag) << endl;

	// item3 lost
	items_flag &= ~opt3;
	cout << "Item3 lost " << bitset<8>(items_flag) << endl;

	// has item1 ?
	if (items_flag & opt1) cout << "Has item1" << endl;
	else cout << "Not have item1" << endl;

	// has item0 ?
	if (items_flag & opt0) cout << "Has item0" << endl;
	else cout << "Not have item0" << endl;

	// item2, 3 on
	items_flag |= (opt2 | opt3);
	cout << "Item2, 3 obtained " << bitset<8>(items_flag) << endl;

	
	cout << "-------------" << endl;
	cout << "COLOR" << endl;
	const unsigned int red_mask = 0xFF0000;
	const unsigned int green_mask = 0x00FF00;
	const unsigned int blue_mask = 0x0000FF;

	unsigned int pixel_color = 0xDAA520;

	cout << bitset<32>(pixel_color) << endl;

	unsigned char red = (pixel_color & red_mask)>>16;
	unsigned char green = (pixel_color & green_mask)>>8;
	unsigned char blue = pixel_color & blue_mask;

	cout << "red " << bitset<8>(red) << " " << int(red) << endl;
	cout << "green " << bitset<8>(green) << " " << int(green) << endl;
	cout << "blue " << bitset<8>(blue) << " "<<int(blue)<<endl;


	return 0;


}