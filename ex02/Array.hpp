#pragma once

#include <iostream>

#define RESET "\033[0m"
#define BOLD "\033[1m"
#define GREEN "\033[1;32m"
#define BLUE "\033[1;34m"
#define YELLOW "\033[1;33m"
#define MAGENTA "\033[1;35m"
#define RED "\033[1;31m"
#define UNDER "\033[4m"

template<typename T>
class Array 
{
	private:
		T*		_array;
		unsigned int	_size;
	public:
		Array(); //creates an empty array
		Array(unsigned int n);
		Array(const Array &copie); //deep copy
		Array &operator=(const Array &copie); //deep copy
		~Array();

		class WrongSize : public std::exception {
			public:
				virtual const char *what(void) const throw();
		};
		class OutOfBonds : public std::exception {
			public:
				virtual const char *what(void) const throw();
		};
		class TooBig : public std::exception {
			public:
				virtual const char *what(void) const throw();
		};

		T& operator[](unsigned int index);
		size_t	size() const;

};

#include "Array.tpp"