#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form(S_NANE, S_SIGN, S_EXEC) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& scf) 
	: Form(scf) {
}

void ShrubberyCreationForm::execute(void) {
	
}
