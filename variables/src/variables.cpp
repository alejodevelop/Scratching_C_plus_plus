//============================================================================
// Name        : variables.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

int main() {

	const int numberCats = 5;
	int numberDogs = 7;

	cout << "Number of cats: " << numberCats << endl;
	cout << "Number of dogs: " << numberDogs << endl;

	cout << "Total number of animals: " << numberCats + numberDogs << endl;

	numberDogs = numberDogs + 1;

	cout << "New number of dogs: " << numberDogs << endl;

	cout << "New number of dogs: " << numberDogs << endl;

	return 0;
}
