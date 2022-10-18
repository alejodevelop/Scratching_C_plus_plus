//============================================================================
// Name        : HeadersPrototypes.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

//  angle brackets <> refer a file in
//  standard location, comes by default son on
#include <iostream>

// 	for convention double quotes "" are used
// 	for files that are included in the project
//  by myself
#include "utils.h" // or <utils.h>
using namespace std;

//	this is a prototype, tells compiler to prepare function
// 	to be used, this allow us to place the function in
//	whatever position inside the document it was place the
// 	prototype of that function at the beginning
//void doSomething();

int main() {
	doSomething();
	return 0;
}

void doSomething() {
	cout << "Hello" << endl;
}
