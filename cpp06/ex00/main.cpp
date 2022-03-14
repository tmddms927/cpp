#include <iostream>
#include <string>
#include <cmath>

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "input error!" << std::endl;
		return 0;
    }
	std::string str = argv[1];

	char **endptr;
	double value = strtod(argv[1], endptr);
	if (endptr != NULL)
		if (str.size() != 1)
			std::cout << "input error!" << std::endl;
}
