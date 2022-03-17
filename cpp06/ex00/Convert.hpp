#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <exception>
#include <cmath>

class Convert {
private:
	const char *_charStr;
	const std::string _stringStr;
	double _value;
	Convert();
public:
	Convert(const char * str);
	~Convert();
	Convert(const Convert & c);
	Convert & operator=(const Convert & c);
	bool inputError();
	void printChar();
	void printInt();
	void printFloat();
	void printDouble();
};

#endif
