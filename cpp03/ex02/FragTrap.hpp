#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ScavTrap.hpp"

class FragTrap : public ScavTrap {
private:
	const int scav_hp = 100;
	const int scav_ep = 100;
	const int scav_ad = 30;

public:
	FragTrap();
	FragTrap(std::string _name);
	~FragTrap();
	FragTrap(const FragTrap &_fragTrap);
	FragTrap& operator=(const FragTrap &_fragTrap);
};

#endif