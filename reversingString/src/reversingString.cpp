//============================================================================
// Name        : reversingString.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	char text[] = "Hello there!";

	int nChars = sizeof(text);
	nChars-= 2;

	cout << nChars << endl;

	for (int i = nChars; i >= 0; i--) {
		cout << text[i] << flush;
	}

	return 0;
}
