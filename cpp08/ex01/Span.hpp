#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <exception>
#include <algorithm>

class Span {
private:
	unsigned int *_nInts;
	unsigned int _n;
	unsigned int _now;
public:
	Span();
	Span(const Span & span);
	~Span();
	Span(unsigned int n);
	Span & operator=(const Span & span);
	void addNumber(unsigned int number);
	template < typename T >
	void addNumber(T begin, T end) {
		for (T it = begin; it != end; ++it) {
			if (_now == _n)
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

#endif
