#include <iostream>
using namespace std;

class Animal {
private:
	string name;

public:
	Animal() {
		cout << "Animal created" << endl;
	}

	~Animal() {
		cout << "Destructor called" << endl;
	}

	Animal(const Animal &other) :
			name(other.name) {
		cout << "Animal created by copying" << endl;
	}

	void setName(string name) {
		this->name = name;
	}

	void speak() const {
		cout << "My name is: " << name << endl;
	}

};

// returning a reference to a local variable which will go out of scope is not a good idea
// because if you allude to that reference later, wouldn't exist
// we can instead use pointers
Animal* createAnimal() {
//	Animal a;
//	a.setName("Bertie");

	Animal *pAnimal = new Animal();
	pAnimal->setName("Bertie");
	return pAnimal;
}

int main() {

	Animal *pFrog = createAnimal();

	pFrog->speak();

	// deallocating object memory
	delete pFrog;

	return 0;
}
