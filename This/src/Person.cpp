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

	cout << "Memory location of object: " << this << endl;

}
Person::Person(string name) {

	this->name = name;
	age = 0;

	cout << "Memory location of object: " << this << endl;

}

Person::Person(string name, int age) {

	this->name = name;
	this->age = age;

	cout << "Memory location of object: " << this << endl;
}

string Person::toString() {
	stringstream ss;

	ss << "Name: ";
	ss << name;
	ss << "; age: ";
	ss << age;

	return ss.str();
}

