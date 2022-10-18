//============================================================================
// Name        : DataMembers.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"
using namespace std;

int main() {

	cout << "Starting program..." << endl;

//	Cat mia;
//	mia.speak();

// using curly brackets at some point of a program
// can be use for deallocated memory at the finish
// of this curly brackets
	{
		// the scope of these variables is inside the curly brackets
		Cat bob;
		bob.speak();
	}

	cout << "Ending program..." << endl;

	return 0;
}
