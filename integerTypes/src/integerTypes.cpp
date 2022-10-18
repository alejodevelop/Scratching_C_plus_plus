//============================================================================
// Name        : integerTypes.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <stdint.h>

using namespace std;

int main() {

	int value = -54656;
	cout << value << endl;

	cout << "Max int value" << INT_MAX << endl;
	cout << "Min int value: " << INT_MIN << endl;

	long int lValue = 23442143242432;

	short int sValue = 23442;
	cout << sValue << endl;

	cout << "Size of int: " << sizeof(int) << endl;
	cout << "Size of short int: " << sizeof(short int) << endl;

	//The unsigned keyword is a data type specifier,
	//that makes a variable only represent non-negative
	//integer numbers (positive numbers and zero). It can
	//be applied only to the char , short , int and long types.
	unsigned int uValue = 2345324;
	cout << uValue << endl;

	return 0;

}
