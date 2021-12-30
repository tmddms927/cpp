/*
** 부동소수점 32비트 1비트 부호, 8비트 지수, 23비트 가수 -> float형(소숫점이 움직임)
** 누락되는 수 많음, 계산을 많이 해야되서 느림
** 부동소수점의 단점을 보완한 고정소수점
** 고정소수점 24비트 정수부, 8비트 소수부 
*/

#include "Fixed.hpp"

Fixed::Fixed() {
	//std::cout << "Default constructor called" << std::endl;
	this->rawBit = 0;
}

Fixed::~Fixed() {
	//std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(const Fixed &_fixed) {
	*this = _fixed;
	//std::cout << "Copy constructor called" << std::endl;
}

Fixed& Fixed::operator=(const Fixed &_fixed) {
	this->rawBit = _fixed.getRawBits();
	//std::cout << "Assignation operator called" << std::endl;
	return *this;
}

//뒤에 const를 붙이면 객체의 변수 값을 바꾸지않겠다고 명시
int Fixed::getRawBits(void) const {
	return this->rawBit;
}

void Fixed::setRawBits(int const raw) {
	this->rawBit = roundf(raw * pow(2, this->fractionalBit));
}

//ex01 추가
Fixed::Fixed(const int raw) {
	this->rawBit = roundf(raw * pow(2, this->fractionalBit));
}

Fixed::Fixed(const float raw) {
	this->rawBit = roundf(raw * pow(2, this->fractionalBit));
}

float Fixed::toFloat(void) const {
	float temp = float(this->rawBit);
	temp = temp / pow(2, this->fractionalBit);

	return temp;
}

int Fixed::toInt(void) const {
	return this->rawBit>>this->fractionalBit;
}

std::ostream& operator<<(std::ostream &out, const Fixed &fixed) {
	out << fixed.toFloat();
	return out;
}

//ex02 추가
bool Fixed::operator>(const Fixed &_fixed) {
	return this->getRawBits() > _fixed.getRawBits();
}

bool Fixed::operator<(const Fixed &_fixed) {
	return this->getRawBits() < _fixed.getRawBits();
}

bool Fixed::operator>=(const Fixed &_fixed) {
	return this->getRawBits() >= _fixed.getRawBits();
}

bool Fixed::operator<=(const Fixed &_fixed) {
	return this->getRawBits() <= _fixed.getRawBits();
}

bool Fixed::operator==(const Fixed &_fixed) {
	return this->getRawBits() == _fixed.getRawBits();
}

bool Fixed::operator!=(const Fixed &_fixed) {
	return this->getRawBits() != _fixed.getRawBits();
}

Fixed Fixed::operator+(const Fixed &_fixed) {
	Fixed temp;
	temp.rawBit = this->getRawBits() + _fixed.getRawBits();

	return temp;
}

Fixed Fixed::operator-(const Fixed &_fixed) {
	Fixed temp;
	temp.rawBit = this->getRawBits() - _fixed.getRawBits();

	return temp;
}

Fixed Fixed::operator*(const Fixed &_fixed) {
	Fixed temp;
	temp.rawBit = this->toFloat() * _fixed.toFloat() * pow(2, this->fractionalBit);

	return temp;
}

Fixed Fixed::operator/(const Fixed &_fixed) {
	Fixed temp;
	temp.rawBit = this->toFloat() / _fixed.toFloat() * pow(2, this->fractionalBit);

	return temp;
}

// void값을 받으면 전위 연산자임.
Fixed& Fixed::operator++(void) {
	this->rawBit++;

	return *this;
}

Fixed& Fixed::operator--(void) {
	this->rawBit--;

	return *this;
}

// int값을 받으면 후위 연산자임.
Fixed Fixed::operator++(int _val) {
	(void)_val;
	Fixed temp;

	temp.rawBit = rawBit;
	this->rawBit++;

	return temp;
}

Fixed Fixed::operator--(int _val) {
	(void)_val;
	Fixed temp;

	temp.rawBit = rawBit;
	this->rawBit--;

	return temp;
}

Fixed Fixed::min(Fixed &a, Fixed &b) {
	if (a.toFloat() > b.toFloat())
		return b;
	else
		return a;
}

const Fixed Fixed::min(const Fixed &a, const Fixed &b) {
	if (a.toFloat() > b.toFloat())
		return b;
	else
		return a;
}

Fixed Fixed::max(Fixed &a, Fixed &b) {
	if (a.toFloat() > b.toFloat())
		return a;
	else
		return b;
}

const Fixed Fixed::max(const Fixed &a, const Fixed &b) {
	if (a.toFloat() > b.toFloat())
		return a;
	else
		return b;
}
