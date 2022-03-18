#include "easyfind.hpp"

int main(void) {
	std::vector<int> int_v(6);

	for (int i = 0; i < 6; ++i)
		int_v[i] = i * 2;
	try
	{
		std::cout << *(easyfind(int_v, 0)) << std::endl;
		std::cout << *(easyfind(int_v, 1)) << std::endl;
		std::cout << *(easyfind(int_v, 2)) << std::endl;
		std::cout << *(easyfind(int_v, 3)) << std::endl;
		std::cout << *(easyfind(int_v, 4)) << std::endl;
		std::cout << *(easyfind(int_v, 5)) << std::endl;
		std::cout << *(easyfind(int_v, 6)) << std::endl;
	}
	catch (char const *e)
	{
		std::cout << e << std::endl;
	}
}