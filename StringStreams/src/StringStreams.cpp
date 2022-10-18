//============================================================================
// Name        : StringStreams.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
// library use in this case to allow concatenation
#include <sstream>

using namespace std;

int main() {

	string name = "alejo";
	int age = 32;

	// this way we can concatenate numbers and string
	stringstream ss;

	ss << "Name is: ";
	ss << name;
	ss << "; Age is: ";
	ss << age;

	string info = ss.str();

	cout << info << endl;

	// we can't mix string and numbers using cout
	//cout << concatenated << endl;

	return 0;
}
