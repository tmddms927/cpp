#include "Array.hpp"

int main() {
	Array<int> *test1 = new Array<int>(5);
	Array<int> test2;

	test1->inputNumInArray1();
	try {
		std::cout << (*test1)[0] << std::endl;
		std::cout << (*test1)[1] << std::endl;
		std::cout << (*test1)[2] << std::endl;
		std::cout << (*test1)[3] << std::endl;
		std::cout << (*test1)[4] << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << test2[0] << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	std::cout << "===================================" << std::endl;
	test2 = *test1;
	test1->inputNumInArray2();
	try {
		std::cout << (*test1)[0] << std::endl;
		std::cout << (*test1)[1] << std::endl;
		std::cout << (*test1)[2] << std::endl;
		std::cout << (*test1)[3] << std::endl;
		std::cout << (*test1)[4] << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	try {
		std::cout << test2[0] << std::endl;
		std::cout << test2[1] << std::endl;
		std::cout << test2[2] << std::endl;
		std::cout << test2[3] << std::endl;
		std::cout << test2[4] << std::endl;
	}
	catch (std::exception & e) {
		std::cout << e.what() << std::endl;
	}
	delete test1;
	while (1) ;
}
