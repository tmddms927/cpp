#include "Convert.hpp"

int main(int argc, char **argv) {
	if (argc != 2) {
		std::cout << "input error!" << std::endl;
		return 0;
    }
	Convert convert(argv[1]);
	convert.inputError();
}
