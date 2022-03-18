#include "Span.hpp"
#include <vector>

#define N 10000

int main(void)
{
	{
		Span sp = Span(5);
		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
		return 0;
	}

	{
		Span sp = Span(N);
		std::vector<unsigned int> test(N);
		srand(time(NULL));

		for (int i = 0; i < N; ++i)
			test[i] = randomNum();
		try {
			sp.addNumber(test.begin(), test.end());
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		try {
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		return 0;
	}

	{
		Span sp = Span(N);
		std::vector<char> test(N);
		srand(time(NULL));

		for (int i = 0; i < N; ++i)
			test[i] = randomNum();
		try {
			sp.addNumber(std::begin(test), std::end(test));
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		try {
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		return 0;
	}

	{
		Span sp = Span(N);
		std::list<unsigned int> test;
		srand(time(NULL));

		for (int i = 0; i < N; ++i)
			test.push_back(randomNum());
		try {
			sp.addNumber(std::begin(test), std::end(test));
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}

		try {
			std::cout << sp.shortestSpan() << std::endl;
			std::cout << sp.longestSpan() << std::endl;
		}
		catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		return 0;
	}
}
