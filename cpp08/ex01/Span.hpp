#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <list>

class Span {
private:
	int *_nInts;
	unsigned int _n;
	unsigned int _now;
public:
	Span();
	Span(const Span & span);
	~Span();
	Span(unsigned int n);
	Span & operator=(const Span & span);
	void addNumber(unsigned int number);

	template< typename T >
	void addNumber(T start, T last) {
		for (T it = start; it != last; ++it) {
			if (_now >= _n)
				throw NIntsError();
			_nInts[_now++] = *it;
		}
	}
	unsigned int shortestSpan();
	unsigned int longestSpan();
	class NIntsError : public std::exception {
		const char* what() const throw() {
			return "N ints Error!";
		}
	};
};

unsigned int randomNum();

#endif
