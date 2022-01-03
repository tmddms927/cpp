#include "ClapTrap.hpp"

ClapTrap::ClapTrap() {
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	std::cout << "ClapTrap Default Constructor!" << std::endl;
}

ClapTrap::ClapTrap(std::string _name) {
	hitPoints = 10;
	energyPoints = 10;
	attackDamage = 0;
	name = _name;
	std::cout << "ClapTrap Constructor!" << std::endl;
}

ClapTrap::~ClapTrap() {
	std::cout << "ClapTrap Destructor!" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &_clapTrap) {
	*this = _clapTrap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap &_clapTrap) {
	name = _clapTrap.name;
	hitPoints = _clapTrap.hitPoints;
	attackDamage = _clapTrap.attackDamage;
	energyPoints = _clapTrap.energyPoints;

	return *this;
}

void ClapTrap::attack(std::string const & target) {
	std::cout << "[attack]ClapTrap " << name << " attack "
	<< target << " causing " << attackDamage << " points of damage!" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
	hitPoints = std::max(0, (int)(hitPoints - amount));
	std::cout << "[takeDamage]ClapTrap " << name << " take "
	<< amount << " points of damage! >> hitPoint : " << hitPoints << std::endl;
}

void ClapTrap::beRepaired(unsigned int amount) {
	hitPoints += amount;
	std::cout << "[beRepaired]ClapTrap " << name << " be repaired "
	<< amount << " points of heal! >> hitPoint : " << hitPoints << std::endl;
}
