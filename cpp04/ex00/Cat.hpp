#include "Animal.hpp"
#ifndef CAT_HPP
#define CAT_HPP
#define CAT "Cat"

class Cat:public Animal {
public:
	Cat();
	~Cat();
	Cat(const Cat &_cat);
	Cat& operator=(const Cat &_cat);
	void makeSound(void) const;
};

#endif
