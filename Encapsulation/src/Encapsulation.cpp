//============================================================================
// Name        : Encapsulation.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Frog {

	// its usual to separate variables declarations from method declarations
	// no matter if its public or private
private:
	string name;

private:
	string getName() {
		return name;
	}

public:
	Frog(string name) :
			name(name) {
	}

	void info() {
		cout << "My name is: " << getName() << endl;
	}
};

int main() {

	Frog frog("Wizzard");

	frog.info();

	// this is not possible because getName is private
	// frog.getName();

	return 0;
}
