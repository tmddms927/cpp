#ifndef FORM_HPP
# define FORM_HPP

#include <iostream>
#include <exception>
#include <string>

#define GRADE_MAX 1
#define GRADE_MIN 100

class Form {
private:
	const std::string name;
	bool sign;
	const int signed_grade;
	const int execute_grade;
	Form();

public:
	~Form();
	Form(const Form& form);
	Form& operator=(const Form& form);
	Form(std::string _name, int _signed_grade, int _excute_grade);
	class GradeTooHighException : public std::exception {
		const char* what() const throw();
	};
	class GradeTooLowException : public std::exception {
		const char* what() const throw();
	};
	std::string getName(void);
	bool getSign(void);
	int getSignedGrade(void);
	int getExecuteGrade(void);
	void beSigned(int _grade);
};

std::ostream& operator<<(std::ostream &out, const Form &form);

#endif