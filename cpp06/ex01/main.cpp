#include "header.hpp"

int main(void) {
	Data *data = new Data;
	data->hi = 1;

	std::cout << "original ptr : " << data << std::endl;
	uintptr_t data_int = serialize(data);
	Data *data_ptr = deserialize(data_int);

	std::cout << "after ptr : " << data_ptr << std::endl;
	std::cout << data_ptr->hi << std::endl;
}
