//============================================================================
// Name        : TwosComplement.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	// this is the maximum value that you can set in a char
	char value = 127;

	// -128 is the minimum value that you can set in a char

	cout << (int) value << endl;

	value++;

	cout << (int) value << endl;

	return 0;
}
