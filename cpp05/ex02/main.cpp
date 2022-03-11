#include "Bureaucrat.hpp"
#include "ShrubberyCreationForm.hpp"

int main(void) {
	Bureaucrat test1("test1", 10);
	Form *s = new ShrubberyCreationForm("home");
	test1.signForm(*s);

	test1.executeForm(*s);
	return 0;
}
