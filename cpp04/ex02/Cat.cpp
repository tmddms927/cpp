#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat Default Constructor!" << std::endl;
	type = CAT;
}

Cat::~Cat() {
	std::cout << "Cat Default Destructor!" << std::endl;
}

Cat::Cat(const Cat &_cat) {
	*this = _cat;
}

Cat& Cat::operator=(const Cat &_cat) {
	if (this != &_cat) {
		this->type = _cat.type;
	}
	return *this;
}

void Cat::makeSound(void) const {
	std::cout << "Meow Meow!" << std::endl;
}