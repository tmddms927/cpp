#ifndef BASE_HPP
# define BASE_HPP

#include <iostream>

class Base {
public:
	virtual ~Base();
	virtual void printType() = 0;
};

#endif
