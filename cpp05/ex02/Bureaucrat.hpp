#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>
#include "Form.hpp"

#define GRADE_MAX 1
#define GRADE_MIN 100

class Bureaucrat {
private:
	const std::string name;
	int grade;
	Bureaucrat();
	Bureaucrat& operator=(const Bureaucrat &bureaucrat);

public:
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &bureaucrat);
	Bureaucrat(std::string _name, int _grade);
	std::string getName(void);
	int getGrade(void);
	class GradeTooHighException : public std::exception {
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
		const char* what() const throw();
	};
	void increamentGrade(void);
	void decreamentGrade(void);
	void signForm(Form &form);
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif
