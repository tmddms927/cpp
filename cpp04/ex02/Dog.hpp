#include "Animal.hpp"
#ifndef DOG_HPP
#define DOG_HPP
#define DOG "Dog"

class Dog:public Animal {
public:
	Dog();
	~Dog();
	Dog(const Dog& _dog);
	Dog& operator=(const Dog& _dog);
	void makeSound(void) const;
};

#endif