#include "Bureaucrat.hpp"

int main(void) {
	Bureaucrat test1("test1", 1);
	Bureaucrat test2("test2", 150);
	Bureaucrat test3("test3", 70);

	std::cout << test1 << std::endl;
	std::cout << test2 << std::endl;
	std::cout << test3 << std::endl;

	std::cout << "===============\n";
	try {
		test1.decreamentGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << test1 << std::endl;

	std::cout << "===============\n";
	try {
		test2.increamentGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << test2 << std::endl;

	std::cout << "===============\n";
	try {
		test3.decreamentGrade();
	}
	catch (std::exception &e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << test3 << std::endl;
	return 0;
}
