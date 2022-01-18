#include <iostream>
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

class Animal {
protected:
	std::string type;
public:
	Animal();
	Animal(std::string _type);
	virtual ~Animal();
	Animal(const Animal &_animal);
	Animal& operator=(const Animal &_animal);
	std::string getType(void) const;
	virtual void makeSound(void) const;
};

#endif