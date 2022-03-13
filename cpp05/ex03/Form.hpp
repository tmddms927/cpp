#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include <string>
#include "Bureaucrat.hpp"

#define GRADE_MAX 1
#define GRADE_MIN 100

class Form {
private:
	const std::string name;
	bool sign;
	const int signed_grade;
	const int execute_grade;
	Form();
	Form& operator=(const Form& form);

public:
	virtual ~Form();
	Form(const Form& form);
	Form(std::string _name, int _signed_grade, int _excute_grade);
	class GradeTooHighException : public std::exception {
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
		const char* what() const throw();
	};
	std::string getName(void) const;
	bool getSign(void) const;
	int getSignedGrade(void) const;
	int getExecuteGrade(void) const;
	void beSigned(int _grade);
	// ex02 추가
	void checkExecute(Bureaucrat const &b) const;
	virtual void execute(Bureaucrat const & executor) const = 0;
	class NotSignedException : public std::exception {
		const char* what() const throw();
	};
};

std::ostream& operator<<(std::ostream &out, const Form &form);

#endif
