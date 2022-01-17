#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap:public ScavTrap {
public:
	FragTrap();
	FragTrap(std::string _name);
	~FragTrap();
	FragTrap(const FragTrap &_fragTrap);
	FragTrap& operator=(const FragTrap &_fragTrap);
	void highFivesGuys(void);
};

#endif