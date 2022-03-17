#include "C.hpp"

C::C() {
	std::cout << "C Default Constructor!" << std::endl;
}


C::~C() {
	std::cout << "C Default Destructor!" << std::endl;
}

void C::printType() {
	std::cout << "C" << std::endl;
}
