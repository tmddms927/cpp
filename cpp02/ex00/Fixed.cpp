/*
** 부동소수점 32비트 1비트 부호, 8비트 지수, 23비트 가수 -> float형(소숫점이 움직임)
** 누락되는 수 많음, 계산을 많이 해야되서 느림
** 부동소수점의 단점을 보완한 고정소수점
** 고정소수점 24비트 정수부, 8비트 소수부 
*/

#include "Fixed.hpp"

Fixed::Fixed() {
	std::cout << "Default constructor called" << std::endl;
	this->rawBit = 0;
}

Fixed::~Fixed() {
	std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &_fixed) {
	*this = _fixed;
	std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &_fixed) {
	this->setRawBits(_fixed.rawBit);
	std::cout << "Assignation operator called" << std::endl;
	return *this;
}

//뒤에 const를 붙이면 객체의 변수 값을 바꾸지않겠다고 명시
int Fixed::getRawBits(void) const {
	return (this->rawBit);
}

void Fixed::setRawBits(int const raw) {
	this->rawBit = raw * pow(2, this->fractionalBit);
}
