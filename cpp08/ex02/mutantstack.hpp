#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T> {
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	MutantStack() {
		std::cout << "Default Constructor!" << std::endl;
	}
	~MutantStack() {
		std::cout << "Default Destructor!" << std::endl;
	}
	MutantStack(const MutantStack & m){
		std::cout << "(const MutantStack) Constructor!" << std::endl;
		*this = m;
	}
	MutantStack & operator=(const MutantStack & m) {
		std::cout << "Assignment operator!" << std::endl;
		if (this != &m) {
			this->c = m.c;
		}
		return *this;
	}
	iterator begin() {
		return this->c.begin();
	}
	iterator end() {
		return this->c.end();
	}
};

#endif
