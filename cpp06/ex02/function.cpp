#include "header.hpp"

Base * generate(void) {
	Base * base;
	srand(time(NULL));
	int rand_num = rand() % 3;
	if (rand_num == 0) {
		std::cout << "Generate A!" << std::endl;
		base = new A();
	}
	else if (rand_num == 1) {
		std::cout << "Generate B!" << std::endl;
		base = new B();
	}
	else {
		std::cout << "Generate C!" << std::endl;
		base = new C();
	}
	return base;
}

void identify(Base* p) {
	Base *b;

	b = dynamic_cast<A *>(p);
	if (b != 0) 
		std::cout << "Pointer A!" << std::endl;
	b = dynamic_cast<B *>(p);
	if (b != 0) 
		std::cout << "Pointer B!" << std::endl;
	b = dynamic_cast<C *>(p);
	if (b != 0) 
		std::cout << "Pointer C!" << std::endl;
}

void identify(Base& p) {
	try{
		A & a = dynamic_cast<A &>(p);
		(void)a;
		std::cout << "Reference A!" << std::endl;
	}
	catch (std::bad_cast & bad) {
		bad.what();
	}
	try{
		B & b = dynamic_cast<B &>(p);
		(void)b;
		std::cout << "Reference B!" << std::endl;
	}
	catch (std::bad_cast & bad) {
		bad.what();
	}
	try{
		C & c = dynamic_cast<C &>(p);
		(void)c;
		std::cout << "Reference C!" << std::endl;
	}
	catch (std::bad_cast & bad) {
		bad.what();
	}
}
