/*
 * Cat.cpp
 *
 *  Created on: Jul 28, 2022
 *      Author: alejo
 */

#include <iostream>
#include "Cat.h"

using namespace std;

// we are defining the cat class speak()prototype
void Cat::speak() {
	if (happy) {
		cout << "MEOW!" << endl;
	} else {
		cout << "Sssss!" << endl;
	}

}

void Cat::makeHappy() {
	happy = true;
}

void Cat::makeSad() {
	happy = false;
}
