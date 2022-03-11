#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::~RobotomyRequestForm() {
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)  : Form(target, R_SIGN, R_EXEC) {
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& scf) : Form(scf) {
}

void RobotomyRequestForm::execute(Bureaucrat const & executor) const {
    checkExecute(executor);
    srand (time(NULL));
    int rand_num = rand() % 2;
    if (rand_num)
        std::cout << getName() << "drilling noises!" << std::endl;
    else
        std::cout << "noises failed!" << std::endl;
}
