//============================================================================
// Name        : if.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	const string password = "hello";
	cout << "Enter your password >" << flush;

	string input;
	cin >> input;

	if (input == password) {
		cout << "Password is correct!";
	} else {
		cout << "Password is incorrect!";
	}

// we can use elif too
//	else if (input != password) {
//		cout << "Wrong!";
//	}

	return 0;
}
