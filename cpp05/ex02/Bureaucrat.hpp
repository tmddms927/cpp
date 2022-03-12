#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

#include <iostream>
#include <exception>
#include <string>

class Form;

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
	// ex02 추가
	void executeForm(Form const & form);
};

std::ostream& operator<<(std::ostream &out, const Bureaucrat &bureaucrat);

#endif
