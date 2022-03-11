#include "Intern.hpp"

Intern::Intern() {
}

Intern::~Intern() {
}

Form* Intern::makeForm(std::string form_name, std::string target){
	std::string form_list[3] = { S_NANE, R_NANE, P_NANE };
	int num = -1;
	for (int i = 0; i < 3; ++i) {
		if (form_name == form_list[i])
			num = i;
	}
	switch (num)
	{
		case 0 :
			std::cout << "Intern creates " << form_name << std::endl;
			return new ShrubberyCreationForm(target);
		case 1 :
			std::cout << "Intern creates " << form_name << std::endl;
			return new RobotomyRequestForm(target);
		case 2 :
			std::cout << "Intern creates " << form_name << std::endl;
			return new PresidentialPardonForm(target);
		default:
			std::cout << "create failed!" << std::endl;
			return NULL;
	}
}
