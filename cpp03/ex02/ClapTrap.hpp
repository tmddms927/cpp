#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <algorithm>

class ClapTrap {
protected:
	std::string		name;
	unsigned int	hitPoints;
	unsigned int	energyPoints;
	unsigned int	attackDamage;
	static const int _clapHp = 100;
	static const int _clapEp = 100;
	static const int _clapAd = 30;
public:
	ClapTrap();
	ClapTrap(std::string _name);
	~ClapTrap();
	ClapTrap(const ClapTrap &_clapTrap);
	ClapTrap& operator=(const ClapTrap &_clapTrap);
	void attack(std::string const & target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
};

#endif