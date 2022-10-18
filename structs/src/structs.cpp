//============================================================================
// Name        : structs.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// we can use private or public keywords inside struct, by default they are private
struct address {
	char name[50];
	char street[100];
	char city[50];
	char state[20];
	int pin;
};

// A variable declaration with structure declaration.
struct Point {
	int x, y;
} p1;  // The variable p1 is declared with 'Point'

// A variable declaration like basic data types
//struct Point {
//	int x, y;
//};

int main() {
	struct Point p1;  // The variable p1 is declared like a normal variable
	struct Point p2 = { 0, 1 };
	struct Point p3 = { 3, 4 };
	// Accessing members of point p1
	p1.x = 20;
	cout << "Struct variables!" << endl;
	cout << p3.x << endl << p3.y << endl;
	return 0;
}
