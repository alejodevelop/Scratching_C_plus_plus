//============================================================================
// Name        : Loops.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	bool condition = true;

	while (condition) {
		cout << "inside a while loop is nice!" << endl;
		condition = false;
	}

	do {

		condition = !condition;
		cout << "do while while i'm doing!" << endl;

		if (condition) {
			continue;
			cout << "this code won't be executed";
		} else {
			break;
			cout << "this code won't be executed";
		}

	} while (condition);

	for (int i = 0; i < 2; i++) {
		cout << "for whatever reason i'm inside a for " << i << " times!"
				<< endl;
	}

	return 0;
}
