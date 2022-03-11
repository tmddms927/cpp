#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat() {
}

Bureaucrat::~Bureaucrat() {
}

Bureaucrat::Bureaucrat(const Bureaucrat &bureaucrat) : name(bureaucrat.name), grade(bureaucrat.grade){
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &bureaucrat) {
	if (&bureaucrat != this) {
		*(const_cast<std::string *>(&name)) = bureaucrat.name;
		grade = bureaucrat.grade;
	}
	return *this;
}

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

////////// ex01 추가
void Bureaucrat::signForm(Form &form) {
	try {
		form.beSigned(grade);
	}
	catch (std::exception &e){
		std::cout << name << " cannot sign " << form.getName() <<
			" because " << e.what() << std::endl;
		return ;
	}
	std::cout << name << " signs " << form.getName() << std::endl;
}
