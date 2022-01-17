#include "easyfind.hpp"

template< typename T >
typename T::iterator easyfind(T int_v, int index) {
	typename T::iterator iter_v;

	if (int_v.size() <= index)
		throw "error : out of index!";
	iter_v = int_v.begin();
	iter_v += index;
	return iter_v;
}

int main(void) {
	std::vector<int> int_v(6);
	for (int i = 0; i < 6; ++i)
		int_v[i] = i * 2;
	try {
	std::cout << *(easyfind(int_v, 0)) << std::endl;
	std::cout << *(easyfind(int_v, 1)) << std::endl;
	std::cout << *(easyfind(int_v, 2)) << std::endl;
	std::cout << *(easyfind(int_v, 3)) << std::endl;
	std::cout << *(easyfind(int_v, 4)) << std::endl;
	std::cout << *(easyfind(int_v, 5)) << std::endl;
	std::cout << *(easyfind(int_v, 7)) << std::endl;
	}
	catch( char const * e)
	{
		std::cout << e << std::endl;
	}
}