/*
 * Cat.cpp
 *
 *  Created on: Jul 28, 2022
 *      Author: alejo
 */

#include <iostream>
#include "Cat.h"

using namespace std;

Cat::Cat() {
	cout << "Cat created" << endl;
	happy = true;
}

Cat::~Cat() {
	cout << "Cat destroyed" << endl;
}

// we are defining the cat class speak()prototype
void Cat::speak() {
	if (happy) {
		cout << "MEOW!" << endl;
	} else {
		cout << "Sssss!" << endl;
	}

}

