#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {
	/* ShrubberyCreationForm */
	{
		Bureaucrat test1("test1", 10);
		Form *s = new ShrubberyCreationForm("home");
		std::cout << "before =====================" << std::endl;
		test1.executeForm(*s);

		std::cout << "after =====================" << std::endl;
		test1.signForm(*s);
		test1.executeForm(*s);

		std::cout << std::endl << "=====================================" << std::endl << std::endl;
		Bureaucrat test2("test2", 200);
		std::cout << "before =====================" << std::endl;
		test2.executeForm(*s);

		std::cout << "after =====================" << std::endl;
		test2.signForm(*s);
		test2.executeForm(*s);
		delete s;
		// check leaks
		while (1) ;
		return 0;
	}

	/* RobotomyRequestForm */
	// {
	// 	Bureaucrat test1("test1", 10);
	// 	Form *s = new RobotomyRequestForm("home");
	// 	std::cout << "before =====================" << std::endl;
	// 	test1.executeForm(*s);

	// 	std::cout << "after =====================" << std::endl;
	// 	test1.signForm(*s);
	// 	test1.executeForm(*s);

	// 	std::cout << std::endl << "=====================================" << std::endl << std::endl;
	// 	Bureaucrat test2("test2", 200);
	// 	std::cout << "before =====================" << std::endl;
	// 	test2.executeForm(*s);

	// 	std::cout << "after =====================" << std::endl;
	// 	test2.signForm(*s);
	// 	test2.executeForm(*s);
	// 	delete s;
	// 	while (1) ;
	// 	return 0;
	// }

	/* PresidentialPardonForm */
	// {
	// 	Bureaucrat test1("test1", 10);
	// 	Form *s = new PresidentialPardonForm("home");
	// 	std::cout << "before =====================" << std::endl;
	// 	test1.executeForm(*s);

	// 	std::cout << "after =====================" << std::endl;
	// 	test1.signForm(*s);
	// 	test1.executeForm(*s);

	// 	std::cout << std::endl << "=====================================" << std::endl << std::endl;
	// 	Bureaucrat test2("test2", 200);
	// 	std::cout << "before =====================" << std::endl;
	// 	test2.executeForm(*s);

	// 	std::cout << "after =====================" << std::endl;
	// 	test2.signForm(*s);
	// 	test2.executeForm(*s);
	// 	delete s;
	// 	while (1) ;
	// 	return 0;
	// }
}
