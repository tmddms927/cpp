#include "FragTrap.hpp"

FragTrap::FragTrap() {
	std::cout << "FragTrap Default Constructor!" << std::endl;
}

FragTrap::FragTrap(std::string _name) {
	std::cout << "FragTrap Constructor!" << std::endl;
	name = _name;
}

FragTrap::~FragTrap() {
	std::cout << "FragTrap Destructor!" << std::endl;
}

FragTrap::FragTrap(const FragTrap &_fragTrap) {
	*this = _fragTrap;
}

FragTrap& FragTrap::operator=(const FragTrap &_fragTrap) {
	if (this != &_fragTrap) {
		name = _fragTrap.name;
		hitPoints = _fragTrap.hitPoints;
		attackDamage = _fragTrap.attackDamage;
		energyPoints = _fragTrap.energyPoints;
	}
	return *this;
}

void FragTrap::attack(std::string const & target) {
	std::cout << "[attack]FragTrap " << name << " attack "
	<< target << " causing " << attackDamage << " points of damage!" << std::endl;
}

void FragTrap::highFivesGuys(void) {
	std::cout << "Give me a highfive!!" << std::endl;
}