#include "header.hpp"
#include <iostream>

int main() {
	{
		int a = 4;
		int b = 6;

		std::cout << "min : " << min(a, b) << std::endl;
		std::cout << "max : " << max(a, b) << std::endl;
		std::cout << "before swap : " << a << ", " << b << std::endl;
		swap(a, b);
		std::cout << "before swap : " << a << ", " << b << std::endl;
		std::cout << "-----------------------------------------------" << std::endl;
	}
	{
		double a = 40.9;
		double b = 622.10;

		std::cout << "min : " << min(a, b) << std::endl;
		std::cout << "max : " << max(a, b) << std::endl;
		std::cout << "before swap : " << a << ", " << b << std::endl;
		swap(a, b);
		std::cout << "before swap : " << a << ", " << b << std::endl;
		std::cout << "-----------------------------------------------" << std::endl;
	}
	{
		std::string a = "apple";
		std::string b = "banana";

		std::cout << "min : " << min(a, b) << std::endl;
		std::cout << "max : " << max(a, b) << std::endl;
		std::cout << "before swap : " << a << ", " << b << std::endl;
		swap(a, b);
		std::cout << "before swap : " << a << ", " << b << std::endl;
		return 0;
	}
}
