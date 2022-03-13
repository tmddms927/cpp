#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"
#include <fstream>

#define S_NANE "ShrubberyCreationForm"
#define S_SIGN 145
#define S_EXEC 137

class ShrubberyCreationForm : public Form {
private:
	ShrubberyCreationForm();
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& scf);

public:
	~ShrubberyCreationForm();
	ShrubberyCreationForm(std::string target);
	ShrubberyCreationForm(const ShrubberyCreationForm& scf);
	void execute(Bureaucrat const & executor) const;
};

#endif
