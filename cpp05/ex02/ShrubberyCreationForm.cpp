#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm() : Form(S_NANE, S_SIGN, S_EXEC) {
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& scf) 
	: Form(scf) {
}

void ShrubberyCreationForm::execute(void) {
	// sign이 안 되어있을 경우
	if (!checkExecute())
		return ;
	
}
