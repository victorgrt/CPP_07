#include "Array.hpp"

template <typename T>
Array<T>::Array() : _array(NULL), _size(0)
{
	std::cout << "Array constructed." << std::endl;
}

template <typename T>
Array<T>::Array(unsigned int n) : _size(n)
{
	if (_size == 0)
		throw WrongSize();
	else if (_size >= 2147483647)
		throw TooBig();
	this->_array = new T[_size];
	std::cout << "Array constructed with size " << n << "." << std::endl; 
}

template <typename T>
Array<T>::Array(const Array &copie) : _size(copie._size)
{
	this->_array = new T[_size];
	for (size_t i = 0; i < _size; i++)
		this->_array[i] = copie._array[i];
	std::cout << "Array copied." << std::endl;
}

template <typename T>
Array<T>::~Array()
{
	delete[] this->_array;
	std::cout << "Array deleted." << std::endl;
}

template <typename T>
Array<T>& Array<T>::operator=(const Array &copie) //deep copy
{
	if (this != &copie)
	{
		delete[] this->_array;
		this->_size = copie._size;
		this->_array = new T[this->_size];
		for (size_t i = 0; i < _size; i++)
			this->_array[i] = copie._array[i];
	}
	return (*this);
}

template <typename T>
T& Array<T>::operator[](unsigned int index)
{
	if (index >= this->_size)
		throw OutOfBonds();
	return (this->_array[index]);
}

template <typename T>
size_t	Array<T>::size() const
{
	return (this->_size);
}

template <typename T>
const char *Array<T>::OutOfBonds::what() const throw()
{
	return (RED "Error : index out of bounds." RESET);
}

template <typename T>
const char *Array<T>::WrongSize::what() const throw()
{
	return (RED "Size Error : size must be a non NULL positive number." RESET);
}

template <typename T>
const char *Array<T>::TooBig::what() const throw()
{
	return (RED "Error : Cannot allocate this much (maybe negative number) !" RESET);
}
