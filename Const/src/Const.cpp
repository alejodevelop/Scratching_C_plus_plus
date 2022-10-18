//============================================================================
// Name        : Const.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Animal {
private:
	string name;
public:
	void setName(string name) {
		this->name = name;
	}
	;
	// we can have const methods in c++, we use them to avoid changin variables values inside methods marks as const
	void speak() const {
		cout << "My name is: " << name << endl;
	}
	;
};

int main() {

	const double PI = 3.141592;
	cout << PI << endl;

	Animal animal;
	animal.setName("Freddy");
	animal.speak();

	int value = 8;

	// const int * const pValue = &value; we cannot change both, either reference and value of the pointer

	//const int *pValue = &value;
	int *pValue = &value;

	cout << *pValue << endl;

	int number = 11;
	pValue = &number; // Error with this: int *const pValue = &value; we cannot change pointer reference
	*pValue = 12; // Error with this: const int *pValue = &value; we cannot change pointer value

	cout << *pValue << endl;

	return 0;
}
