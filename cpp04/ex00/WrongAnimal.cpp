#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() {
	std::cout << "WrongAnimal Default Constructor!" << std::endl;
}

WrongAnimal::WrongAnimal(std::string _type) : type(_type) {
	std::cout << "WrongAnimal Constructor!" << std::endl;
}

WrongAnimal::~WrongAnimal() {
	std::cout << "WrongAnimal Destructor!" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &_WrongAnimal) {
	*this = _WrongAnimal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &_WrongAnimal) {
	if (this != &_WrongAnimal) {
		this->type = _WrongAnimal.type;
	}
	return *this;
}

void WrongAnimal::makeSound(void) const {
	std::cout << "Nothing~" << std::endl;
}

std::string WrongAnimal::getType(void) const {
	return type;
}
