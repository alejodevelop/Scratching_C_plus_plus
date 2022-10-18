//============================================================================
// Name        : ComplexConditions.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int value1 = 3;
	int value2 = 4;

	bool condition1 = (value2 != 8) && (value1 == 10);
	bool condition2 = value1 < 10;

	if (condition1 || condition2) {
		cout << "everything right!" << endl;
	} else if ((value2 <= 4) && value1 > 0) {
		cout << "wasn't right but we make it!";
	}

	return 0;
}
