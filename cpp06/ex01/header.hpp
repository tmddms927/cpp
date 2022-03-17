#ifndef HEADER_HPP
# define HEADER_HPP

#include <cstdint>
#include <iostream>

struct Data {
int hi;
};

uintptr_t serialize(Data* ptr);
Data* deserialize(uintptr_t raw);

#endif
