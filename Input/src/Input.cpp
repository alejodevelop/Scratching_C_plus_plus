//============================================================================
// Name        : Input.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

// << insertion operator

	cout << "Enter your name: " << flush;

	string input;

// >> extractor operator

	cin >> input;

	cout << "You entered: " << input << endl;

	int number;

	cout << "What is the number: " << flush;

	cin >> number;

	cout << "The number is: " << number;

	return 0;
}
