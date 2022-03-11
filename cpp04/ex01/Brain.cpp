#include "Brain.hpp"

Brain::Brain() {
	std::cout << "Brain Default Constructor!" << std::endl;
}

Brain::~Brain() {
	std::cout << "Brain Default Destructor!" << std::endl;
}

Brain::Brain(const Brain& _brain) {
	*this = _brain;
}

Brain& Brain::operator=(const Brain& _brain) {
	if (this != &_brain) {
		for (int i = 0; i < 100; ++i)
			this->ideas[i] = _brain.ideas[i];
	}
	return *this;
}

void Brain::setIdeas(std::string str) {
	for (int i = 0; i < 100; ++i) {
		ideas[i] = str;
	}
}

void Brain::printIdeas() {
	for (int i = 0; i < 100; ++i) {
		std::cout << ideas[i] << std::endl;
	}
}
