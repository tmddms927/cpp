#include "Array.hpp"
#include <iostream>

#define MAX_VAL 750
int main(int, char**)
{
	Array<int> numbers(MAX_VAL);
	int* mirror = new int[MAX_VAL];
	srand(time(NULL));
	for (int i = 0; i < MAX_VAL; i++)
	{
		const int value = rand();
		numbers[i] = value;
		mirror[i] = value;
	}
	//SCOPE
	{
		Array<int> tmp = numbers;
		Array<int> test(tmp);
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		if (mirror[i] != numbers[i])
		{
			std::cerr << "didn't save the same value!!" << std::endl;
			return 1;
		}
	}
	try
	{
		numbers[-2] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		numbers[MAX_VAL] = 0;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}

	for (int i = 0; i < MAX_VAL; i++)
	{
		numbers[i] = rand();
	}
	delete [] mirror;
	return 0;
}






// int main() {
// 	Array<int> *test1 = new Array<int>(5);
// 	Array<int> test2;

// 	test1->inputNumInArray1();
// 	try {
// 		std::cout << (*test1)[0] << std::endl;
// 		std::cout << (*test1)[1] << std::endl;
// 		std::cout << (*test1)[2] << std::endl;
// 		std::cout << (*test1)[3] << std::endl;
// 		std::cout << (*test1)[4] << std::endl;
// 	}
// 	catch (std::exception & e) {
// 		std::cout << e.what() << std::endl;
// 	}
// 	try {
// 		std::cout << test2[0] << std::endl;
// 	}
// 	catch (std::exception & e) {
// 		std::cout << e.what() << std::endl;
// 	}
// 	std::cout << "===================================" << std::endl;
// 	test2 = *test1;
// 	test1->inputNumInArray2();
// 	try {
// 		std::cout << (*test1)[0] << std::endl;
// 		std::cout << (*test1)[1] << std::endl;
// 		std::cout << (*test1)[2] << std::endl;
// 		std::cout << (*test1)[3] << std::endl;
// 		std::cout << (*test1)[4] << std::endl;
// 	}
// 	catch (std::exception & e) {
// 		std::cout << e.what() << std::endl;
// 	}
// 	try {
// 		std::cout << test2[0] << std::endl;
// 		std::cout << test2[1] << std::endl;
// 		std::cout << test2[2] << std::endl;
// 		std::cout << test2[3] << std::endl;
// 		std::cout << test2[4] << std::endl;
// 	}
// 	catch (std::exception & e) {
// 		std::cout << e.what() << std::endl;
// 	}
// 	delete test1;
// 	while (1) ;
// }
