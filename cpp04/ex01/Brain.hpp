#include <iostream>
#ifndef BRAIN_HPP
#define BRAIN_HPP

class Brain {
protected:
	std::string ideas[100];
public:
	Brain();
	~Brain();
	Brain(const Brain& _brain);
	Brain& operator=(const Brain& _brain);
	void setIdeas(std::string str);
	void printIdeas();
};

#endif
