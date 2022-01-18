#include <iostream>
#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

class WrongAnimal {
protected:
	std::string type;
public:
	WrongAnimal();
	WrongAnimal(std::string _type);
	virtual ~WrongAnimal();
	WrongAnimal(const WrongAnimal &_WrongAnimal);
	WrongAnimal& operator=(const WrongAnimal &_WrongAnimal);

	std::string getType(void) const;
	void makeSound(void) const;
};

#endif