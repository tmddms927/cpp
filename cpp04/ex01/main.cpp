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

		return 0;
	}
	{
		Animal *animals[N];

		for (int i = 0; i < N / 2; ++i)
			animals[i] = new Dog();
		for (int i = N / 2; i < N; ++i)
			animals[i] = new Cat();

		/* check deep copy*/
		std::cout << "before : idea[0] ============================" << std::endl;
		dynamic_cast<Dog*>(animals[0])->setBrainIdeas("brain idea");
		dynamic_cast<Dog*>(animals[0])->printBrainIdea();
		std::cout << "before : dog ============================" << std::endl;
		Dog *dog = new Dog();
		*dog = *(Dog *)animals[0];
		dog->printBrainIdea();

		dog->setBrainIdeas("dog brain idea!");
		std::cout << "after : idea[0] ============================" << std::endl;
		((Dog *)(animals[0]))->printBrainIdea();
		std::cout << "after : dog ============================" << std::endl;
		dog->printBrainIdea();
		for (int i = 0; i < N; ++i)
			delete animals[i];
		delete dog;

		/* check leaks */
		// while (1) ;
	}
}
