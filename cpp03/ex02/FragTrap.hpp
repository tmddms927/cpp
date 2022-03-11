#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap:public ClapTrap {
public:
	FragTrap();
	FragTrap(std::string _name);
	~FragTrap();
	FragTrap(const FragTrap &_fragTrap);
	FragTrap& operator=(const FragTrap &_fragTrap);
	void attack(std::string const & target);
	void highFivesGuys(void);
};

#endif
