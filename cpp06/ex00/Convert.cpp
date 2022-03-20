#include "Convert.hpp"

Convert::Convert() {
	// std::cout << "Convert Default Constructor!" << std::endl;
}

Convert::Convert(const char * str) : _charStr(str), _stringStr(str){
	// std::cout << "Convert (+char *) Constructor!" << std::endl;
}

Convert::~Convert() {
	// std::cout << "Convert Default Destructot!" << std::endl;
}

Convert::Convert(const Convert & c) : _charStr(c._charStr), _stringStr(c._stringStr) {
	// std::cout << "Convert Copy Constructor!" << std::endl;
}

Convert & Convert::operator=(const Convert & c) {
	// std::cout << "Convert Assignment Operator Overloading!" << std::endl;
	if (this != &c) {
		*const_cast<std::string *>(&_stringStr) = c._stringStr;
		_charStr = c._charStr;
		_value = c._value;
	}
	return *this;
}

bool Convert::inputError() {
	char *endptr;

	_value = strtod(_charStr, &endptr);
	if (*endptr != 0) {
		// 10.0f
		if (_stringStr.size() != 1 && *endptr == 'f' && *(endptr + 1) == 0) {
			;
		}
		else if (_stringStr.size() != 1) {
			std::cout << "input error!" << std::endl;
			return false;
		}
		else
			_value = _charStr[0];
	}
	return true;
}

void Convert::printChar() {
	if (_stringStr.compare("nan") == 0 || _stringStr.compare("nanf") == 0)
		std::cout << "char : impossible" << std::endl;
	else if (_value < 0 || _value > 127)
		std::cout << "char : impossible" << std::endl;
	else if (_value < 32)
		std::cout << "char : Non Displayable" << std::endl;
	else
		std::cout << "char : '" << static_cast<char>(_value) << "'"<< std::endl;
}

void Convert::printInt() {
	if (_stringStr.compare("nan") == 0 || _stringStr.compare("nanf") == 0)
		std::cout << "int : impossible" << std::endl;
	else if (INT_MAX < _value || INT_MIN > _value)
		std::cout << "int : impossible" << std::endl;
	else
		std::cout << "int : " << static_cast<int>(_value) << std::endl;
}

void Convert::printFloat() {
	if (_value - static_cast<int>(_value) == 0)
		std::cout << "float : " << static_cast<float>(_value) << ".0f" << std::endl;
	else
		std::cout << "float : " << static_cast<float>(_value) << "f" << std::endl;
}

void Convert::printDouble() {
	if (_value - static_cast<int>(_value) == 0)
		std::cout << "double : " << _value << ".0"<< std::endl;
	else
		std::cout << "double : " << _value << std::endl;
}
