/*
 * Animals.h
 *
 *  Created on: Aug 6, 2022
 *      Author: alejo
 */

#ifndef ANIMALS_H_
#define ANIMALS_H_

#include <iostream>
using namespace std;

namespace anm {

const string CATNAME = "MININA";

class Cat {
public:
	Cat();
	virtual ~Cat();
	void speak();
};

} /* namespace anm */

#endif /* ANIMALS_H_ */
