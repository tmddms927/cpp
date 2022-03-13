#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

class Intern {
private:
public:
	Intern();
	~Intern();
	Intern(const Intern &i);
	Intern & operator=(const Intern &i);
	Form* makeForm(std::string form_name, std::string target);
};

#endif
