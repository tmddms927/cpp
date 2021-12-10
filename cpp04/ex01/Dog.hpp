#include "Animal.hpp"
#include "Brain.hpp"
#ifndef DOG_HPP
#define DOG_HPP
#define DOG "Dog"

class Dog:public Animal {
private:
	Brain *brain;
public:
	Dog();
	~Dog();
	Dog(const Dog& _dog);
	Dog& operator=(const Dog& _dog);
	void makeSound(void) const;
	void setBrainIdeas(std::string str);
	void printBrainIdea();
};

#endif