#include "A.hpp"

A::A() {
	std::cout << "A Default Constructor!" << std::endl;
}

A::~A() {
	std::cout << "A Default Destructor!" << std::endl;
}

void A::printType() {
	std::cout << "A" << std::endl;
}
