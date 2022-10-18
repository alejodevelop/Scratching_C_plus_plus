//============================================================================
// Name        : AllocatingMemory.cpp
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

	/*
	 * Stack is basically the region in the computer memory,
	 * which is automatically managed by the computer in order
	 * to store the local variables, methods and its data used by
	 * the function, whereas the heap is the free-floating region
	 * of memory which is neither automatically managed by the
	 * CPU nor by the programmer.
	 * */

	// allocated on stack
	int number = 5;

	// allocated on heap
	int *pInt = new int;
	*pInt = 8;
	delete pInt;

	Animal *pAnimal = new Animal;

	delete pAnimal;

	Animal *pAnimalArray = new Animal[10];

	pAnimal[5].setName("George");
	pAnimal[5].speak();

	delete[] pAnimalArray;

	// char is a single byte, were going to allocate 100 bytes
	char *pMem = new char[100];
	delete[] pMem;

	return 0;
}
