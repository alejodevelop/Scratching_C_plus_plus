//============================================================================
// Name        : VirtualFunctionsAbstractClasses.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class MyBase {

public:

	void show() {
		cout << "Base class show function called" << endl;
	}
	virtual void print() {
		cout << "Base class print function called" << endl;
	}

	// it's important to create a virtual destructor when using virtual functions
	// when the objects are destroyed, the virtual destructor would be execute
	virtual ~MyBase() {
		cout << "Destructor of MyBase" << endl;
	}
};

class MyDerived: public MyBase {
public:

	~MyDerived() {
		cout << "Destructor of MyDerived" << endl;
	}

	void show() {
		cout << "Derived class show function called" << endl;
	}
	virtual void print() {
		cout << "Derived class print function called" << endl;
	}

};

int main() {

	MyBase *baseptr;
	MyDerived derivedObj;

	baseptr = &derivedObj;

	// run time polymorphism
	baseptr->print(); // derived class print fn called
	baseptr->show(); //  base class show fn called

	return 0;
}
