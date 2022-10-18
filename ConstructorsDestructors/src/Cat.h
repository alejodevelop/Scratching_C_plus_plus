/*
 * Cat.h
 *
 *  Created on: Jul 28, 2022
 *      Author: alejo
 */

#ifndef CAT_H_
#define CAT_H_

class Cat {

private:
	bool happy;

public:
	void speak();
	// this is a constructor
	Cat();
	// this is a destructor, runs when object is unallocated
	~Cat();

};

#endif /* CAT_H_ */
