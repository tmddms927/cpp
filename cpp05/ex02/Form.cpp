#include "Form.hpp"

Form::~Form() {
}

Form::Form(const Form& form) : name(form.name), sign(false),
	signed_grade(form.signed_grade), execute_grade(form.execute_grade) {
}

Form::Form(std::string _name, int _signed_grade, int _excute_grade)
: name(_name), signed_grade(_signed_grade), execute_grade(_excute_grade) {
	sign = false;
}

Form& Form::operator=(const Form& form) {
	if (this != &form) {
		sign = form.sign;
	}
	return *this;
}

const char* Form::GradeTooHighException::what() const throw() {
	return "too high exception!";
}

const char* Form::GradeTooLowException::what() const throw() {
	return "too low exception!";
}

std::string Form::getName(void) const {
	return name;
}

bool Form::getSign(void) const {
	return sign;
}

int Form::getSignedGrade(void) const {
	return signed_grade;
}

int Form::getExecuteGrade(void) const {
	return execute_grade;
}

void Form::beSigned(int _grade) {
	if (_grade > signed_grade)
		throw GradeTooLowException();
	sign = true;
}

std::ostream& operator<<(std::ostream &out, const Form &form) {
	out << "name : " << form.getName() << ", sign : " << form.getSign() <<
		", signed_grade : " << form.getSignedGrade() << ", execute_grade : " << form.getExecuteGrade();
	return out;
}

//////////// ex02 추가
void Form::checkExecute(Bureaucrat const &b) const {
	if (!sign)
		throw NotSignedException();
	if (b.getGrade() > execute_grade)
		throw GradeTooLowException();
}

const char* Form::NotSignedException::what() const throw() {
	return "not signed!";
}
