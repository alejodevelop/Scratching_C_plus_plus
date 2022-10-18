//============================================================================
// Name        : PointersArrays.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	string texts[] = { "one", "two", "three" };

	cout << sizeof(texts) / sizeof(string) << endl;

	string *pTexts = texts;

	cout << "pointer *pTexts: " << *pTexts << endl;
	cout << "---------------------------" << endl;

	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		cout << pTexts[i] << " " << endl;
		cout << texts[i] << " " << endl;
	}

	cout << "---------------------------" << endl;

	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		cout << *pTexts << " " << endl;
	}

	cout << "---------------------------" << endl;

	for (int i = 0; i < sizeof(texts) / sizeof(string); i++ /*, pTexts++*/) {
		cout << *pTexts << " " << endl;
		// adding one, set the pointer to the next position inside the array
		pTexts = pTexts + 1; // pTexts++;
	}

	cout << "---------------------------" << endl;

	// Getting first element
	string *pElement = texts/*&(texts[0])*/;
	// First we get the element at position [2], once done, we get the address with & symbol
	string *pLastElement = &texts[2]/*&(texts[2])*/;

	while (true) {
		cout << pElement << " " << flush;
		cout << *pElement << " " << flush;

		if (pElement == pLastElement) {
			break;
		}

		pElement++;
	}

	return 0;

}
