//============================================================================
// Name        : Arrays.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	int values[3];

	values[0] = 12;
	values[1] = 32;
	values[2] = 14;

	double numbers[4] = { 4.2, 5.4, 2.1, 3.9 };

	string fruits[] = { "apples", "grapes", "peanuts" };

	for (int i = 0; i < 3; i++) {

		cout << fruits[i] << endl;

	}

	int inputs[3];

	for (int i = 0; i < 3; i++) {

		cout << "input a number: " << endl;
		cin >> inputs[i];

	}
	for (int i = 0; i < 3; i++) {

		cout << inputs[i] << endl;

	}

	string animals[][3] = { { "fox", "dog", "cat" }, { "mouse", "squirrel",
			"parrot" } };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			cout << animals[i][j] << endl;
		}
	}

	int tables[10][11];

	for (int i = 0; i < 10; i++) {
		for (int j = 0; j < 11; j++) {
			tables[i][j] = i * j;
		}
	}

	for (int i = 0; i < 10; i++) {
		cout << endl;
		for (int j = 0; j < 11; j++) {
			cout << i << " x " << j << " = " << tables[i][j] << endl;
		}
	}

	return 0;
}
