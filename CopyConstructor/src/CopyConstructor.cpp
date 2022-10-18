//============================================================================
// Name        : CopyConstructor.cpp
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
	// this is a copy constructor, is invoked when we created an object initializing it with other object pre created
	// if we overide copy constructor, we has to initialize manually the thing that default copy constructor does
	// we can't call non const methods inside the copy constructor
	Animal(const Animal &other)/*: name(other.name)*/{
		cout << "Animal created by copying" << endl;
		// other.speak();
		//name = other.name;
	}
	void setName(string name) {
		this->name = name;
	}
	void speak() const {
		cout << "My name is: " << name << endl;
	}
};

int main() {

	Animal animal1;

	animal1.setName("Freddy");

	// here is invoke the default copy constructor if is not preset in the class
	// we are creating and object based on another object precreated, however both are different objects
	// making a copy of the object to another object
	// they are referencing two memory locations different
	Animal animal2 = animal1;
	// speak doesn't print anything because we override copy constructor
	animal2.speak();
	animal2.setName("Bob");

	animal1.speak();
	animal2.speak();

	return 0;
}
