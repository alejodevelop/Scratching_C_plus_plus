//============================================================================
// Name        : floatingPointTypes.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	float fValue = 76.4;

	// fixed manipulate the standart output in order to
	// not print cientific notation number as sometimes
	// happens by defaults
	cout << fixed << fValue << endl;
	// setprecision control the number of decimal to output
	cout << setprecision(20) << fixed << fValue << endl;

	double dValue = 123.456349;
	cout << setprecision(20) << fixed << dValue << endl;

	long double lValue = 123.4325325258235235;
	cout << setprecision(20) << fixed << lValue << endl;
	cout << "Size of long double: " << sizeof(lValue) << endl;

	return 0;
}
