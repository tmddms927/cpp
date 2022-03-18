#include "iter.hpp"

int main(void) {
	{
		int array[3] = { 1, 2, 3 };
		iter(array, 3, test1);
	}
	{
		double array[3] = { 1.11, 2.22, 3.33 };
		iter(array, 3, test1);
	}
	{
		char array[3] = { 'a', 'b', 'c' };
		iter(array, 3, test1);
	}
}
