#include "Dog.hpp"
#include "Cat.hpp"

#define N 10

int main()
{
	{
		const Animal *j = new Dog();
		const Animal *i = new Cat();
		
		delete j; // should not create a leak
		delete i;
	}
	{
		Animal *animals[N];

		for (int i = 0; i < N / 2; ++i)
			animals[i] = new Dog();
		for (int i = N / 2; i < N; ++i)
			animals[i] = new Cat();

		for (int i = 0; i < N; ++i)
			delete animals[i];
	}
}