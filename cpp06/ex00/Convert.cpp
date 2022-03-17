#include "Convert.hpp"

Convert::Convert() {
    std::cout << "Convert Default Constructor!" << std::endl;
}

Convert::Convert(const std::string & str) : _str(str){
    std::cout << "Convert (+str::string) Constructor!" << std::endl;
}

Convert::~Convert() {
    std::cout << "Convert Default Destructot!" << std::endl;
}

Convert::Convert(const Convert & c) {
    std::cout << "Convert Copy Constructor!" << std::endl;
    *this = c;
}

Convert & Convert::operator=(const Convert & c) {
    std::cout << "Convert Assignment Operator Overloading!" << std::endl;
    if (this != &c) {
        _str = c._str;
    }
}

bool Convert::inputError() {
    char **endptr;
	double value = strtod(_str, endptr);
	if (endptr != NULL)
		if (_str.size() != 1)
			std::cout << "input error!" << std::endl;
}
