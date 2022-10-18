//============================================================================
// Name        : Functions.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

//	the order matters when declaring a function
// 	above functions initialize first
void showMenu() {
	cout << "1. Search" << endl;
	cout << "2. View Record" << endl;
	cout << "3. Quit" << endl;
}

int getSelection() {
	cout << "Enter Selection:" << endl;

	int input;
	cin >> input;

	return input;
}

void processSelection(int input) {

	switch (input) {
	case 1:
		cout << "Searching..." << endl;
		break;
	case 2:
		cout << "Viewing..." << endl;
		break;
	case 3:
		cout << "Quitting..." << endl;
		break;
	default:
		cout << "Please select an item from the menu." << endl;
		break;
	}

}

int main() {

	showMenu();
	int input = getSelection();
	processSelection(input);

	return 0;
}
