#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

#include <stack>
#include <iostream>

template <typename T>
class MutantStack : public std::stack<T> {
public:
	typedef typename std::stack<T>::container_type::iterator iterator;
	MutantStack() {}
	~MutantStack() {}
	MutantStack(const MutantStack & m);
	MutantStack & operator=(const MutantStack & m);
	iterator begin() {
		return this->c.begin();
	}
	iterator end() {
		return this->c.end();
	}
};

#endif
