//============================================================================
// Name        : switch.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char value = 4;

	const int number = 7;

	switch (value) {
	case 4:
		cout << "Value is 4!";
		break;
	case 5:
		cout << "Value is 5!";
		break;
	case 6:
		cout << "Value is 6!";
		break;
		// we just can use constants inside a switch
	case number:
		cout << "Value is 7!";
		break;
	default:
		cout << "Unrecognized value" << endl;
		break;
	}

	return 0;
}
