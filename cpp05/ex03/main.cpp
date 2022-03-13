#include "Intern.hpp"

int main(void) {
	Intern someRandomIntern;
	Form* rrf;

	rrf = someRandomIntern.makeForm("robotomy request", "Bender");
	delete rrf;

	rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Bender");
	delete rrf;
	rrf = someRandomIntern.makeForm("RobotomyRequestForm", "Bender");
	delete rrf;
	rrf = someRandomIntern.makeForm("PresidentialPardonForm", "Bender");
	delete rrf;

	while (1) ;
}
