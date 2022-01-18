#include "WrongCat.hpp"

WrongCat::WrongCat() {
	std::cout << "WrongCat Default Constructor!" << std::endl;
	type = WRONGCAT;
}

WrongCat::~WrongCat() {
	std::cout << "WrongCat Default Destructor!" << std::endl;
}

WrongCat::WrongCat(const WrongCat &_WrongCat) {
	*this = _WrongCat;
}

WrongCat& WrongCat::operator=(const WrongCat &_WrongCat) {
	if (this != &_WrongCat) {
		this->type = _WrongCat.type;
	}
	return *this;
}

void WrongCat::makeSound(void) const {
	std::cout << "Meow Meow!" << std::endl;
}