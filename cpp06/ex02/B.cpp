#include "B.hpp"

B::B() {
	std::cout << "B Default Constructor!" << std::endl;
}


B::~B() {
	std::cout << "B Default Destructor!" << std::endl;
}

void B::printType() {
	std::cout << "B" << std::endl;
}
