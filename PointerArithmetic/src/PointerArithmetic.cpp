//============================================================================
// Name        : PointerArithmetic.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	const int NSTRINGS = 5;

	string texts[NSTRINGS] = { "one", "two", "three", "four", "five" };

	string *pTexts = texts;

	pTexts += 3;

	pTexts -= 2;

	cout << *pTexts << endl;

	cout << "-------------------------" << endl;

	string *pEnd = &texts[NSTRINGS - 1];

	pTexts = &texts[0];

	while (pTexts != pEnd) {
		cout << *pTexts << endl;
		pTexts++;
	}

	return 0;
}
