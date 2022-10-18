//============================================================================
// Name        : Strings.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
/*
 * abbreviation for the standard
 * It is known that “std” (abbreviation for the standard) is
 * a namespace whose members are used in the program. So the
 * members of the “std” namespace are cout, cin, endl, etc.
 * This namespace is present in the iostream. h header file.
 * Below is the code snippet in C++ showing content written
 * inside iostream.
 *
 * */

using namespace std;

int main() {

	string value = "This is a string!";
	string text = "U know how we do it";

	cout << value << endl << text;
	cout << endl;
	cout << "finish";

	return 0;
}
