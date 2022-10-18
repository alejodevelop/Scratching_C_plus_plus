//============================================================================
// Name        : ArraysFunctions.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// this way i have to pass as argument an string array of 3 positions
void show(string (&texts)[3]) {

	for (int i = 0; i < sizeof(texts) / sizeof(string); i++) {
		cout << texts[i] << endl;
	}

}

void show2(string texts[]) {

	int sizeArray = (sizeof(texts) - 1);
	cout << sizeArray << endl;

	for (int i = 0; i < sizeArray; i++) {
		cout << texts[i] << endl;
	}

}

int main() {

	string texts[] = { "apple", "orange", "banana" };
	string texts2[] = { "juice", "bread", "milk" };

	cout << sizeof(texts) << endl;

	show(texts);
	show2(texts2);

	return 0;
}
