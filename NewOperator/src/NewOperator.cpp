//============================================================================
// Name        : NewOperator.cpp
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
	Animal() {
		cout << "Animal created" << endl;
	}

	~Animal() {
		cout << "Destructor called" << endl;
	}

	Animal(const Animal &other) :
			name(other.name) {
		cout << "Animal created by copying" << endl;
	}

	void setName(string name) {
		this->name = name;
	}

	void speak() const {
		cout << "My name is: " << name << endl;
	}

};

int main() {

	// new operator allocates memory explicitly, we're creating an object
	// when we use new to create an object, we have to unallocated that object manually too
	Animal *pCat1 = new Animal();
	// curly braces to dereference first the object in order to be able of accessing its methods
	(*pCat1).setName("Freddy");
	(*pCat1).speak();
	// here is another way of doing the same using arrows (special syntax for working with pointers)
	pCat1->setName("Freddy");
	pCat1->speak();

	// here we destroyed the previous created object
	// have to be careful calling detele, i have to be sure that is referencing to an existing object
	// if not the program might crash
	delete pCat1;

	// to have more control of objects and pointer i can use this trick to set pointer to null/zero

	Animal *pCat2 = NULL;	// NULL or 0

	// if you subtract two pointers one from the other you should store the result in an long
	// because the size of a pointer in some platform is 8 bytes, same as a long
	// it depends the platform, THIS IS NOT THE CASE
	cout << sizeof(pCat1) << endl;

	return 0;
}
