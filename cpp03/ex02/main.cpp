#include "FragTrap.hpp"

int main() {
	FragTrap test1;

	test1.attack("hihi");
	test1.takeDamage(20);
	test1.beRepaired(10);
	test1.takeDamage(90);

	std::cout << "==========================" << std::endl;

	FragTrap test2(test1);

	test1.attack("hihi");
	test1.beRepaired(10);
	test1.takeDamage(20);
}
