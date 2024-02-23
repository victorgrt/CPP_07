#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

#define RESET "\033[0m"
#define BOLD "\033[1m"
#define GREEN "\033[1;32m"
#define BLUE "\033[1;34m"
#define YELLOW "\033[1;33m"
#define MAGENTA "\033[1;35m"
#define RED "\033[1;31m"

template<typename T>
void	swap(T *arg1, T *arg2){
	std::cout << GREEN << "swap()" << RESET << " : " << "Swapping " << BLUE << *arg1 << RESET << " and " << BLUE << *arg2 << RESET << "..." << std::endl;
	T	*tmp = new T;
	*tmp = *arg1;
	*arg1 = *arg2;
	*arg2 = *tmp;

	delete tmp;
}

template<typename T>
const T	min(T &arg1, T &arg2)
{
	std::cout << GREEN << "min()" << RESET << " : " << "Finding min between " << BLUE << arg1 << RESET << " and " << BLUE << arg2 << RESET << "..." << std::endl;
	if (arg1 == arg2)
		return (arg2);
	return ((arg1 < arg2) ? arg1 : arg2);
}

template<typename T>
const T	max(T &arg1, T &arg2)
{
	std::cout << GREEN << "min()" << RESET << " : " << "Finding max between " << BLUE << arg1 << RESET << " and " << BLUE << arg2 << RESET << "..." << std::endl;
	if (arg1 == arg2)
		return (arg2);
	return ((arg1 > arg2) ? arg1 : arg2);
}

#endif