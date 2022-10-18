//============================================================================
// Name        : Pointers.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

void manipulate(double *pValue) {
	*pValue = 10.0;
	cout << "Value of int in manipulate: " << *pValue << endl;
}

int main() {

	int nValue = 8;

	// this is a pointer  point the address of this int
	// & is use to get the address of the value
	int *pnValue = &nValue;

	nValue = 9;

	cout << "Int value: " << nValue << endl;
	cout << "Pointer to int address: " << pnValue << endl;

	// getting pointer value (dereferencing)
	cout << "Int value via pointer: " << *pnValue << endl;

	cout << "-------------------" << endl;

	double dValue = 123.4;

	cout << "1. dValue: " << dValue << endl;
	// here we pass the reference of the address memory of the variable
	manipulate(&dValue);

	cout << "2. dValue: " << dValue << endl;
	manipulate(&dValue);

	return 0;
}
