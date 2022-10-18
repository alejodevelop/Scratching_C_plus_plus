//============================================================================
// Name        : Namespaces.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Cat.h"
#include "Animals.h"
// in order to use the respective namespaces we have to include first
// the header files of its respective namespaces
//
// setting as default namespace for "Cat class" cats
using namespace cats;
//using namespace anm;

int main() {

	Cat cat;
	cat.speak();

	// if we want to use the namespaces at the same time we can do it this way
	// picking up classes for particular namespaces
	cats::Cat cat2;
	cat2.speak();

	anm::Cat cat3;
	cat3.speak();

	cout << cats::CATNAME << endl;
	cout << anm::CATNAME << endl;

	return 0;
}
