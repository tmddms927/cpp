#include "header.hpp"

Base * generate(void) {
	Base * base;
	srand(time(NULL));
	int rand_num = rand() % 3;
	if (rand_num == 0)
		base = new A();
	else if (rand_num == 1)
		base = new B();
	else
		base = new C();
	return base;
}

void identify(Base* p) {
	Base *b;

	b = dynamic_cast<A *>(p);
	if (b != 0) 
		b->printType();
	b = dynamic_cast<B *>(p);
	if (b != 0) 
		b->printType();
	b = dynamic_cast<C *>(p);
	if (b != 0) 
		b->printType();
}

void identify(Base& p) {
	try{
		A & a = dynamic_cast<A &>(p);
		a.printType();
	}
	catch (std::bad_cast & bad) {
		bad.what();
	}
	try{
		B & b = dynamic_cast<B &>(p);
		b.printType();
	}
	catch (std::bad_cast & bad) {
		bad.what();
	}
	try{
		C & c = dynamic_cast<C &>(p);
		c.printType();
	}
	catch (std::bad_cast & bad) {
		bad.what();
	}
}
