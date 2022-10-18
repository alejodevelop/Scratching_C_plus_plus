//============================================================================
// Name        : Macros.cpp
// Author      : alejo
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

// the pre-processor process the macro and assign the 8 value to M references
#define M 8
// this macro refers to 3*2 no 6, it outputs 6 later when it's operated by the system before being showed
#define K 3*2
// macros are use to add code in runtime, or predefined code blocks
#define Z \
 	cout << "Adding code in real time" << endl;\
	cout << "whatever code i want to add in here" << endl;
// we can pass parameters too
#define U(a,b,c)  a + b + c;
// we can pass as arguments instructions
#define I(a,b,c)a;b;c;

int main() {

	cout << M;
	cout << endl;
	cout << K;
	cout << endl;
	Z
	;
	int sumaParametros = U(1, 2, 3)
	;
	cout << "sum of parameters: " << sumaParametros << endl;

	I(cout << "Instruction 1 - ", cout << "Instruction 2 - ",
			cout << "Instruction 3 - ");
	cout << endl;

	return 0;
}
