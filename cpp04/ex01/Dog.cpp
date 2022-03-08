#include "Dog.hpp"

Dog::Dog() {
	std::cout << "Dog Default Constructor!" << std::endl;
	brain = new Brain();
	type = DOG;
}

Dog::~Dog() {
	std::cout << "Dog Default Destructor!" << std::endl;
	delete brain;
}

Dog::Dog(const Dog& _dog) {
	*this = _dog;
}

Dog& Dog::operator=(const Dog& _dog) {
	if (this != &_dog) {
		delete brain;
		brain = new Brain();
		*brain = *_dog.brain;
		type = _dog.type;
	}
	return *this;
}

void Dog::makeSound(void) const {
	std::cout << "Woof Woof!" << std::endl;
}

void Dog::setBrainIdeas(std::string str) {
	brain->setIdeas(str);
}

void Dog::printBrainIdea() {
	brain->printIdeas();
}