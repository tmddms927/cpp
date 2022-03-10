#include "Animal.hpp"
#include "Brain.hpp"
#ifndef CAT_HPP
#define CAT_HPP
#define CAT "Cat"

class Cat:public Animal {
private:
	Brain *brain;
public:
	Cat();
	~Cat();
	Cat(const Cat &_cat);
	Cat& operator=(const Cat &_cat);
	void makeSound(void) const;
	void setBrainIdeas(std::string str);
	void printBrainIdea();
};

#endif