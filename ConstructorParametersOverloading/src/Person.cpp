/*
 * Person.cpp
 *
 *  Created on: Jul 28, 2022
 *      Author: alejo
 */

#include<sstream>
#include "Person.h"

Person::Person() {

	name = "undefined";
	age = 0;
}
Person::Person(string newName) {

	name = newName;
	age = 0;
}

string Person::toString() {
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; age: ";
	ss << age;

	return ss.str();
}

