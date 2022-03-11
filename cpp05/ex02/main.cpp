#include "Bureaucrat.hpp"

int main(void) {
	Bureaucrat test1("test1", 10);
	Form form1("form1", 1, 1);
	Form form2("form2", 50, 50);

	std::cout << test1 << std::endl;
	std::cout << form1 << std::endl;
	std::cout << form2 << std::endl;

	std::cout << "====================\n";

	test1.signForm(form1);
	std::cout << form1 << std::endl;

	std::cout << "====================\n";
	test1.signForm(form2);
	std::cout << form2 << std::endl;

	return 0;
}
