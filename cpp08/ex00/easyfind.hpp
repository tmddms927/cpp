#include <iostream>
#include <vector>
#include <exception>

#ifndef EASYFIND_H
#define EASYFIND_H

template <typename T>
typename T::iterator easyfind(T int_v, int index) {
	typename T::iterator iter_v;

	if (int_v.size() <= index)
		throw "error : out of index!";
	iter_v = int_v.begin();
	iter_v += index;
	return iter_v;
}

#endif