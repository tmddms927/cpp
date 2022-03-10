#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string _name, int _grade):name(_name), grade(_grade) {
}

std::string Bureaucrat::getName(void) {
	return name;
}

int Bureaucrat::getGrade(void) {
	return grade;
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
	return "too higt exception!";
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
	return "too low exception!";
}

void Bureaucrat::increamentGrade(void) {
	if (grade + 1 > GRADE_MIN)
		throw GradeTooLowException();
}

void Bureaucrat::decreamentGrade(void) {
	if (grade - 1 < GRADE_MAX)
		throw GradeTooHighException();
}

std::ostream& operator<<(std::ostream &out, const Bureaucrat &bureaucrat) {
	Bureaucrat temp = bureaucrat;
	out << "name : " << temp.getName() << ", grade : " << temp.getGrade();
	return out;
}
