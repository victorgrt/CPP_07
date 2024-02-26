#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

#define RESET "\033[0m"
#define BOLD "\033[1m"
#define GREEN "\033[1;32m"
#define BLUE "\033[1;34m"
#define YELLOW "\033[1;33m"
#define MAGENTA "\033[1;35m"
#define RED "\033[1;31m"

template<typename T>
void	print(const T *element)
{
	std::cout << *element << std::endl;
}

template<typename T>
void iter(T *array, size_t len, void (*f)(const T *))
{
	for (size_t i = 0; i < len; i++)
		f(&array[i]);
	std::cout << "\n";
}

#endif