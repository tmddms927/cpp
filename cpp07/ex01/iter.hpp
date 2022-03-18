#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template <typename T>
void iter(T * address, int length, void (*function)(T const &)) {
	for (int i =0; i < length; ++i) {
		function(address[i]);
	}
}

template <typename T>
void test1(T t) {
	std::cout << t << std::endl;
}

#endif
