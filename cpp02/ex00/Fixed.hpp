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
};

#endif