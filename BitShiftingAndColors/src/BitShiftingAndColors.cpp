//============================================================================
// Name        : BitShiftingAndColors.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	unsigned char alpha = 0xFF;
	unsigned char red = 0x12;
	unsigned char blue = 0x34;
	unsigned char green = 0x56;

	unsigned int color = 0;

	// this << is known as the bitshifting operator
	// here we're moving 8 bits, 1 byte to the left
	// unsigned int color = alpha;
	// color = color << 8;
	// this one is another way
	// color <<= 8;

	color += alpha;
	color <<= 8;
	color += red;
	color <<= 8;
	color += green;
	color <<= 8;
	color += blue;

	cout << setfill('0') << setw(8) << hex << color << endl;

	return 0;
}
