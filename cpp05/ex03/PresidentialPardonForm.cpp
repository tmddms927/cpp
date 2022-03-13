#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::~PresidentialPardonForm() {
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)  : Form(target, P_SIGN, P_EXEC) {
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& scf) : Form(scf) {
}

void PresidentialPardonForm::execute(Bureaucrat const & executor) const {
    checkExecute(executor);
    std::cout << getName() << " has been pardoned by Zafod Beeblebrox" << std::endl;
}
