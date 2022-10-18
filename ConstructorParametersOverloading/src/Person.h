/*
 * Person.h
 *
 *  Created on: Jul 28, 2022
 *      Author: alejo
 */

#ifndef PERSON_H_
#define PERSON_H_

#include <iostream>
using namespace std;

class Person {
private:
	string name;
	int age;
public:
	Person();
	Person(string newName);
	Person(string newName, int newAge) {
		name = newName, age = newAge;
	}
	;
	string toString();
};

#endif /* PERSON_H_ */
