//============================================================================
// Name        : Static.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// .h header file
class Test {
private:
	int id;
	// static makes this variable associate to the class witch mean that every instance
	// has the same reference to the same variable and not create a different variable for
	// each object
	static int count;

public:
	// initialization of const must be done right here when it's declared
	static int const MAX = 99;
public:

	Test() {
		// prefix (++variable) and profix (variable++) increment operators
		id = ++count;
	}

	int getId() {
		return id;
	}

	// this is a static method, it follows the same rules as static variables
	// it's associated with the class and not the instances(objects) of the class
	static void showInfo() {
		cout << count << endl;
	}

};

// .cpp source
int Test::count = 0;

int main() {

	// we don't need an object to access this variable because it's not associated
	// with objects, it's associated with a class

	Test test1;
	cout << "Object 1 ID: " << test1.getId() << endl;
	Test test2;
	cout << "Object 2 ID: " << test2.getId() << endl;

	cout << "---------------------------------------" << endl;

	Test::showInfo();
	cout << Test::MAX << endl;

	return 0;
}
