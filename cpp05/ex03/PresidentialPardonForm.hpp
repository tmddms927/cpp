#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "Form.hpp"

#define P_NANE "PresidentialPardonForm"
#define P_SIGN 72
#define P_EXEC 45

class PresidentialPardonForm : public Form {
private:
	PresidentialPardonForm();
	PresidentialPardonForm& operator=(const PresidentialPardonForm& scf);

public:
	~PresidentialPardonForm();
	PresidentialPardonForm(std::string target);
	PresidentialPardonForm(const PresidentialPardonForm& scf);
	void execute(Bureaucrat const & executor) const;
};

#endif
