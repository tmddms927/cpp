#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class Claptrap {
private:

public:
	Claptrap();
	~Claptrap();
	Claptrap(const Claptrap &_claptrap);
	Claptrap& operator=(const Claptrap &_claptrap);
};

#endif