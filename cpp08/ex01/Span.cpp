#include "Span.hpp"

Span::Span()
{
	std::cout << "Default Constructor!" << std::endl;
	_nInts = new unsigned int[0];
	_n = 0;
	_now = 0;
}

Span::Span(const Span &span)
{
	_nInts = new unsigned int[0];
	std::cout << "Copy Constructor!" << std::endl;
	*this = span;
}

Span::~Span()
{
	std::cout << "Default Destructor!" << std::endl;
	delete[] _nInts;
}

Span::Span(unsigned int n) : _n(n)
{
	std::cout << "(unsigned int) Constructor!" << std::endl;
	_nInts = new unsigned int[n];
	_now = 0;
}

Span & Span::operator=(const Span &span)
{
	std::cout << "Assignment Operator!" << std::endl;
	if (this != &span)
	{
		delete[] _nInts;
		_nInts = new unsigned int[span._n];
		_n = span._n;
		_now = span._now;
		for (unsigned int i = 0; i < (unsigned int)span._n; ++i)
			_nInts[i] = span._nInts[i];
	}
	return *this;
}

void Span::addNumber(unsigned int number)
{
	if (_now == _n)
		throw NIntsError();
	_nInts[_now++] = number;
}

unsigned int Span::shortestSpan()
{
	if (_now <= 1)
		throw NIntsError();
	unsigned int min = UINT_MAX;
	unsigned int temp;

	std::sort(_nInts, _nInts + _n);
	for (unsigned int i = 1; i < (unsigned int)_now; ++i)
	{
		temp = _nInts[i] - _nInts[i - 1];
		min = std::min(temp, min);
	}
	return min;
}

unsigned int Span::longestSpan()
{
	if (_now <= 1)
		throw NIntsError();

	std::sort(_nInts, _nInts + _n);
	return _nInts[_n - 1] - _nInts[0];
}

unsigned int randomNum() {
	return rand() % 100;
}
