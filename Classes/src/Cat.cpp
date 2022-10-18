# include <iostream>

#include "Cat.h"

//	A namespace is nothing more than a way to create
//	a block, and that all the functions that are within
//	it are associated with that namespace (or namespace),
//	which is assigned a name to identify it.
using namespace std;

void Cat::speak() {
	cout << "Meouww!!!" << endl;
}

void Cat::jump() {
	cout << "Jumping to top of bookcase" << endl;
}
