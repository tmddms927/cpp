#include "Dog.hpp"
#include "Cat.hpp"

int main(void) {
	// const Animal *meta = new Animal();
	Animal *i = new Cat();
	const Animal *j = new Dog();

	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	// meta->makeSound();
	// delete meta;
	delete j;
	delete i;
}
