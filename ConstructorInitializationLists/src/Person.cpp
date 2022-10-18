/*
 * Person.cpp
 *
 *  Created on: Jul 28, 2022
 *      Author: alejo
 */

#include<sstream>
#include "Person.h"

// we can initialize values this way to be faster
// we can mix both ways of initialization


Person::Person(string name) :
		name(name), age(0) {
	// we can initialize variables here too
}

Person::Person(string name, int age) :
		name(name), age(age) {

}

string Person::toString() {
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; age: ";
	ss << age;

	return ss.str();
}

