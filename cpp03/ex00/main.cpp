#include "ClapTrap.hpp"

int main() {
	ClapTrap test1("test1");
	ClapTrap test2(test1);

	test1.attack("hi");
	test2.attack("hi");
	test2.takeDamage(3);
	test2.takeDamage(10);
	test2.beRepaired(5);
}