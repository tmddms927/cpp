#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <iostream>
#include <exception>

template <typename T>
class Array {
private:
	T *_a;
	int _size;
public:
	Array() : _size(0){
		std::cout << "Default constuctor!" << std::endl;
		_a = new T[0];
	}
	Array(unsigned int n) : _size(n) {
		std::cout << "(unsigned int) constuctor!" << std::endl;
		_a = new T[n];
	}
	Array(const Array & array) {
		_a = new T[0];
		std::cout << "copy constuctor!" << std::endl;
		*this = array;
	}
	~Array() {
		std::cout << "Default Destructor!" << std::endl;
		delete [] _a;
	}
	Array & operator=(const Array & array) {
		std::cout << "Assignment operator!" << std::endl;
		if (this != &array) {
			delete [] _a;
			_a = new T[array._size];
			for (int i = 0; i < array._size; ++i)
				_a[i] = array._a[i];
			_size = array._size;
		}
		return *this;
	}
	T & operator[](const int i) {
		if (i < 0 || i >= _size)
			throw OutOfArray();
		return _a[i];
	}
	const T & operator[](const int i) const {
		if (i < 0 || i >= _size)
			throw OutOfArray();
		return _a[i];
	}
	int size() {
		return _size;
	}
	void inputNumInArray1() {
		for (int i = 0; i < _size; ++i)
			_a[i] = i;
	}
	void inputNumInArray2() {
		for (int i = 0; i < _size; ++i)
			_a[i] = i + 50;
	}
	class OutOfArray : public std::exception {
		const char* what() const throw() {
			return "Out of Array!";
		}
	};
};

#endif
