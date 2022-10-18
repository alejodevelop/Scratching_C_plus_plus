//============================================================================
// Name        : References.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// here using & we're passing the reference of the variable as an argument
void changeSomething(double &value) {
	value = 123.4;
}

int main() {

	int value1 = 8;
	// reference variable, value2 is a reference of value1
	// if we change any of the variables, the other would change too
	// both are referencing the same space on memory
	int &value2 = value1;
	value2 = 10;

	cout << "Value1: " << value1 << endl;
	cout << "Value2: " << value2 << endl;

	double value = 4.321;
	changeSomething(value);
	cout << value << endl;

	return 0;
}
