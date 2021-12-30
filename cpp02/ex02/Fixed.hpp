#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	//고정소수점
	int		 			rawBit;
	//소수점을 몇 비트 쓸건지 명시
	static const int	fractionalBit = 8;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &_fixed);
	Fixed& operator=(const Fixed &_fixed);
	int getRawBits() const;
	void setRawBits(int const raw);

//ex01 추가
	Fixed(const int raw);
	Fixed(const float raw);
	float toFloat(void) const;
	int toInt(void) const;

//ex02 추가
	bool operator>(const Fixed &_fixed);
	bool operator<(const Fixed &_fixed);
	bool operator>=(const Fixed &_fixed);
	bool operator<=(const Fixed &_fixed);
	bool operator==(const Fixed &_fixed);
	bool operator!=(const Fixed &_fixed);
	Fixed operator+(const Fixed &_fixed);
	Fixed operator-(const Fixed &_fixed);
	Fixed operator*(const Fixed &_fixed);
	Fixed operator/(const Fixed &_fixed);
	Fixed& operator++(void);
	Fixed& operator--(void);
	Fixed operator++(int _val);
	Fixed operator--(int _val);
	static Fixed min(Fixed &a, Fixed &b);
	static const Fixed min(const Fixed &a, const Fixed &b);
	static Fixed max(Fixed &a, Fixed &b);
	static const Fixed max(const Fixed &a, const Fixed &b);
};

//std::ostream 좌변, const Fixed obj 우변
std::ostream& operator<<(std::ostream &out, const Fixed &fixed);

#endif