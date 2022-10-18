//============================================================================
// Name        : OtherTypes.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	bool bValue = true;
	cout << bValue << endl;

	// i have to use single quotes for characters
	char cValue = 'g';
	cout << cValue << endl;
	cout << "Size of char: " << sizeof(char) << endl;

	wchar_t wValue = 'i';
	cout << wValue << endl;
	cout << (char) wValue << endl;
	cout << "Size of wchar_t: " << sizeof(wchar_t) << endl;

	return 0;
}
