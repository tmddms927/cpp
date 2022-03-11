#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

#include "Form.hpp"

#define S_NANE "ShrubberyCreationForm"
#define S_SIGN 145
#define S_EXEC 137

class ShrubberyCreationForm : public Form {
private:
	ShrubberyCreationForm();
	ShrubberyCreationForm& operator=(const ShrubberyCreationForm& scf);

public:
	~ShrubberyCreationForm();
	ShrubberyCreationForm(const ShrubberyCreationForm& scf);
	void execute(void);
};

#endif
