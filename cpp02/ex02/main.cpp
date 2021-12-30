#include "Fixed.hpp"

int main(void)
{
	{
		Fixed a;
		Fixed const b(Fixed(5.05f) * Fixed(2));
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
		std::cout << b << std::endl;
		std::cout << Fixed::max(a, b) << std::endl;
		return 0;
	}
	{
		Fixed a(8.1f);
		Fixed b(2);

		if (a > b)
			std::cout << "hi1!" << std::endl;
		if (a < b)
			std::cout << "hi2!" << std::endl;
		if (a >= b)
			std::cout << "hi3!" << std::endl;
		if (a <= b)
			std::cout << "hi4!" << std::endl;
		if (a == b)
			std::cout << "hi5!" << std::endl;
		if (a != b)
			std::cout << "hi6!" << std::endl;

		std::cout << a + b << std::endl;
		std::cout << a - b << std::endl;
		std::cout << a * b << std::endl;
		std::cout << a / b << std::endl;
	}
}
