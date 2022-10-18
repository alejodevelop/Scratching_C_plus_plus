//============================================================================
// Name        : inheritanceConstructors.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

class Machine {
	//private variables in one class, can't be used in other classes
private:
	int id;
public:
	Machine() :
			id(0) {
		cout << "Machine no-arguments constructor called" << endl;
	}
	Machine(int id) :
			id(id) {
		cout << "Machine parameterized constructor called" << endl;
	}
	void info() {
		cout << "ID: " << id << endl;
	}
};

class Vehicle: public Machine {
public:
	Vehicle() {
		cout << "Vehicle no-arguments constructor called" << endl;
	}
	// constructors are not inherited but we can refer to the direct superclass ones
	// here we are referring to run the machine constructor that takes id parameter
	Vehicle(int id) :
			Machine(id) {
		cout << "Vehicle parameterized constructor called" << endl;
	}

};

class Car: public Vehicle {
public:
	// here we run the vehicle constructor that has one int argument
	// we just can refer to father constructor
	// Car():Machine(423) this CAN'T BE DONE, that's grandpa constructor
	Car() :
			Vehicle(423) {
		cout << "Car no-arguments constructor called" << endl;
	}
};

int main() {

	Vehicle vehicle;
	// even if vehicle has an id because extends from machine, we can't access
	// to that id from vehicle because is a private variable declared in machine class
	vehicle.info();

	cout << endl;

	Car car;
	car.info();

	cout << endl;

	Vehicle vehicle2(123);
	vehicle2.info();

	return 0;
}
