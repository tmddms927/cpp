#include "WrongAnimal.hpp"
#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#define WRONGCAT "WrongCat"

class WrongCat:public WrongAnimal {
public:
	WrongCat();
	~WrongCat();
	WrongCat(const WrongCat &_WrongCat);
	WrongCat& operator=(const WrongCat &_WrongCat);
	void makeSound(void) const;
};

#endif
