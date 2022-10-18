//============================================================================
// Name        : Sizeof.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	//  we use sizeof() operator to find the size of
	//  desired data type, variables, and constants

	int values[] = { 4, 5, 6, 3 };
	cout << sizeof(int) << endl;

	cout << sizeof(values) << endl;

	// unsigned referst that the number cannot be negative
	for (unsigned int i = 0; i < sizeof(values) / sizeof(int); i++) {
		cout << values[i] << " " << flush;
	}

	// 72 / 24 = 3
	//cout << (sizeof(values) / sizeof(int));

	//	3 colums, 2 rows
	string animals[][3] = { { "fox", "rabbit", "dolphin" }, { "eagle", "deer",
			"zebra" } };

	cout << endl;
	//	1 one byte has 8 bits
	//  72 bytes
	cout << sizeof(animals[0]) << endl;
	//  144 bytes
	cout << sizeof(animals) << endl;
	//	24 bytes
	cout << sizeof(string) << endl;

	//	144 / 72 = 3 the number of colums
	//	sizeof(animals) / sizeof(animals[0])
	// 	72 / 24 = 2 the number of rows
	//	sizeof(animals[0]) / sizeof(string)

	for (unsigned int i = 0; i < sizeof(animals) / sizeof(animals[0]); i++) {
		for (unsigned int j = 0; j < sizeof(animals[0]) / sizeof(string); j++) {
			cout << animals[i][j] << " " << flush;
		}
		cout << endl;
	}

	return 0;
}
