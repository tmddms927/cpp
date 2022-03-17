#include "header.hpp"
#include <iostream>

int main(void)
{
	int a = 2;
	int b = 3;
	::swap(a, b);
	std::cout << "a = " << a << ", b = " << b << std::endl;
	std::cout << "min( a, b ) = " << ::min(a, b) << std::endl;
	std::cout << "max( a, b ) = " << ::max(a, b) << std::endl;
	std::string c = "chaine1";
	std::string d = "chaine2";
	::swap(c, d);
	std::cout << "c = " << c << ", d = " << d << std::endl;
	std::cout << "min( c, d ) = " << ::min(c, d) << std::endl;
	std::cout << "max( c, d ) = " << ::max(c, d) << std::endl;
	return 0;
}

// int main() {
// 	{
// 		int a = 4;
// 		int b = 6;

// 		std::cout << "min : " << min(a, b) << std::endl;
// 		std::cout << "max : " << max(a, b) << std::endl;
// 		std::cout << "before swap : " << a << ", " << b << std::endl;
// 		swap(a, b);
// 		std::cout << "before swap : " << a << ", " << b << std::endl;
// 		std::cout << "-----------------------------------------------" << std::endl;
// 	}
// 	{
// 		double a = 40.9;
// 		double b = 622.10;

// 		std::cout << "min : " << min(a, b) << std::endl;
// 		std::cout << "max : " << max(a, b) << std::endl;
// 		std::cout << "before swap : " << a << ", " << b << std::endl;
// 		swap(a, b);
// 		std::cout << "before swap : " << a << ", " << b << std::endl;
// 		std::cout << "-----------------------------------------------" << std::endl;
// 	}
// 	{
// 		std::string a = "apple";
// 		std::string b = "banana";

// 		std::cout << "min : " << min(a, b) << std::endl;
// 		std::cout << "max : " << max(a, b) << std::endl;
// 		std::cout << "before swap : " << a << ", " << b << std::endl;
// 		swap(a, b);
// 		std::cout << "before swap : " << a << ", " << b << std::endl;
// 		return 0;
// 	}
// }
