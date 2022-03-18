#include "Span.hpp"
#include <vector>

int main(void)
{
	// {
	// 	Span sp = Span(5);
	// 	sp.addNumber(5);
	// 	sp.addNumber(3);
	// 	sp.addNumber(17);
	// 	sp.addNumber(9);
	// 	sp.addNumber(11);
	// 	std::cout << sp.shortestSpan() << std::endl;
	// 	std::cout << sp.longestSpan() << std::endl;
	// 	return 0;
	// }
	{
		// int a[20] = { 1, 2, 54124 };
		Span sp = Span(5);
		std::vector<unsigned int> test(5);
		test[0] = 1;
		test[1] = 11;
		test[2] = 1321;
		test[3] = 214;
		test[4] = 14;
		try {
			sp.addNumber(4);
			sp.addNumber(std::begin(test), std::end(test));
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		return 0;
	}
}
