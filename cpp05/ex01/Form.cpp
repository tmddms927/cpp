#include "Form.hpp"

Form::Form(std::string _name, int _signed_grade, int _excute_grade)
: name(_name), signed_grade(_signed_grade), execute_grade(_excute_grade) {
	sign = false;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "too high exception!";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "too low exception!";
}

std::string Form::getName(void) {
	return name;
}

bool Form::getSign(void) {
	return sign;
}

int Form::getSignedGrade(void) {
	return signed_grade;
}

int Form::getExecuteGrade(void) {
	return execute_grade;
}

void Form::beSigned(int _grade) {
	if (_grade > signed_grade)
		throw GradeTooLowException();
	sign = true;
}

std::ostream& operator<<(std::ostream &out, const Form &form) {
	Form temp = form;
	out << "name : " << temp.getName() << ", sign : " << temp.getSign() <<
		", signed_grade : " << temp.getSignedGrade() << ", execute_grade : " << temp.getExecuteGrade();
	return out;
}
