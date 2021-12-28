#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed {
private:
	//고정소수점
	int		 			rawBit;
	static const int	fractionalBit = 8;

public:
	Fixed();
	~Fixed();
	Fixed(const Fixed &fixed);
	Fixed& operator=(const Fixed &fixed);
	int getRawBits() const;
	void setRawBits(int const raw);
};

#endif