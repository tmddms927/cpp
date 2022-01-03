#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap:public ClapTrap {
private:

public:
	ScavTrap();
	ScavTrap(std::string _name);
	~ScavTrap();
	ScavTrap(const ScavTrap &_scavTrap);
	ScavTrap& operator=(const ScavTrap &_scavTrap);
	void attack(std::string const & target);
	void guardGate();
};

#endif