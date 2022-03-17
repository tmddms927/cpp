#ifndef CONVERT_HPP
# define CONVERT_HPP

#include <iostream>

class Convert {
private:
	std::string _str;
	double _value;
	Convert();
public:
	Convert(const std::string & str);
	~Convert();
	Convert(const Convert & c);
	Convert & operator=(const Convert & c);
	bool inputError();
};

#endif
