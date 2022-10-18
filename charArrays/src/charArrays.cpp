//============================================================================
// Name        : charArrays.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char text[] = { 'h', 'e', 'l', 'l', 'o' };
	int lengthText = sizeof(text);

	cout << lengthText << endl;

	for (int i = 0; i < lengthText; i++) {
		cout << i << ": " << text[i] << endl;
	}

	cout << "------------------------------" << endl;

	char text2[] = "hello";
	int lengthText2 = sizeof(text2);

	cout << lengthText2 << endl;

	// the last character at position 5, its a 0, means that's the end of the string
	for (int i = 0; i < lengthText2; i++) {
		cout << i << ": " << text2[i] << endl;
	}

	return 0;
}
