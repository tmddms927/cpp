#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>
#include "Form.hpp"

class Bureaucrat {
private:
	const std::string name;
	int grade;
	Bureaucrat();

public:
	~Bureaucrat();
	Bureaucrat(const Bureaucrat &bureaucrat);
	Bureaucrat& operator=(const Bureaucrat &bureaucrat);
	Bureaucrat(std::string _name, int _grade);
	std::string getName(void) const;
	int getGrade(void) const;
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
