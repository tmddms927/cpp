#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "Form.hpp"
#include <cstdlib>
#include <ctime>

#define R_NANE "RobotomyRequestForm"
#define R_SIGN 72
#define R_EXEC 45

class RobotomyRequestForm : public Form {
private:
	RobotomyRequestForm();
	RobotomyRequestForm& operator=(const RobotomyRequestForm& scf);

public:
	~RobotomyRequestForm();
	RobotomyRequestForm(std::string target);
	RobotomyRequestForm(const RobotomyRequestForm& scf);
	void execute(Bureaucrat const & executor) const;
};

#endif
