#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"

int main()
{
	const Animal *meta = new Animal();
	const Animal *i = new Cat();
	const Animal *j = new Dog();
	std::cout << i->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	i->makeSound(); // will output the cat sound!
	j->makeSound();
	meta->makeSound();
	delete meta;
	delete j;
	delete i;

	std::cout << "----------------------" << std::endl;

	//wrong
	const WrongAnimal *wrong = new WrongAnimal();
	const WrongAnimal *cat = new WrongCat();
	std::cout << cat->getType() << " " << std::endl;
	cat->makeSound();
	wrong->makeSound();

	delete wrong;
	delete cat;
}
