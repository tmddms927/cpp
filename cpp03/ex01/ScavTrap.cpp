#include "ScavTrap.hpp"

ScavTrap::ScavTrap() {
	std::cout << "ScavTrap Default Constructor!" << std::endl;
}

ScavTrap::ScavTrap(std::string _name) {
	std::cout << "ScavTrap Constructor!" << std::endl;
	name = _name;
}

ScavTrap::~ScavTrap() {
	std::cout << "ScavTrap Destructor!" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &_scavTrap) {
	*this = _scavTrap;
}

ScavTrap& ScavTrap::operator=(const ScavTrap &_scavTrap) {
	if (this != &_scavTrap) {
		name = _scavTrap.name;
		hitPoints = _scavTrap.hitPoints;
		attackDamage = _scavTrap.attackDamage;
		energyPoints = _scavTrap.energyPoints;
	}

	return *this;
}

void ScavTrap::attack(std::string const & target) {
	std::cout << "[attack]ScavTrap " << name << " attack "
	<< target << " causing " << attackDamage << " points of damage!" << std::endl;
}

void ScavTrap::guardGate() {
	std::cout << name << " enterred in Gate Keeper Mode" << std::endl;
}
