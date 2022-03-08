#include "Cat.hpp"

Cat::Cat() {
	std::cout << "Cat Default Constructor!" << std::endl;
	brain = new Brain();
	type = CAT;
}

Cat::~Cat() {
	std::cout << "Cat Default Destructor!" << std::endl;
	delete brain;
}

Cat::Cat(const Cat &_cat) {
	*this = _cat;
}

Cat& Cat::operator=(const Cat &_cat) {
	if (this != &_cat) {
		delete brain;
		brain = new Brain();
		*brain = *_cat.brain;
		this->type = _cat.type;	
	}
	return *this;
}

void Cat::makeSound(void) const {
	std::cout << "Meow Meow!" << std::endl;
}

void Cat::setBrainIdeas(std::string str) {
	brain->setIdeas(str);
}

void Cat::printBrainIdea() {
	brain->printIdeas();
}