#include "Animal.hpp"

Animal::Animal() {
	std::cout << "Animal Default Constructor!" << std::endl;
}

Animal::Animal(std::string _type) : type(_type) {
	std::cout << "Animal Constructor!" << std::endl;
}

Animal::~Animal() {
	std::cout << "Animal Destructor!" << std::endl;
}

Animal::Animal(const Animal &_animal) {
	*this = _animal;
}

Animal &Animal::operator=(const Animal &_animal) {
	if (this != &_animal) {
		this->type = _animal.type;
	}
	return *this;
}

std::string Animal::getType(void) const {
	return type;
}
