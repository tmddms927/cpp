#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog Default Constructor!" << std::endl;
	type = DOG;
}

Dog::~Dog() {
	std::cout << "Dog Default Destructor!" << std::endl;
}

Dog::Dog(const Dog& _dog) {
	*this = _dog;
}

Dog& Dog::operator=(const Dog& _dog) {
	if (this != &_dog) {
		type = _dog.type;
	}
	return *this;
}

void Dog::makeSound(void) const {
	std::cout << "Woof Woof!" << std::endl;
}