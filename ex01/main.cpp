#include "iter.hpp"

int	main(void)
{
	std::string array[5] = {"hello","word","how","is","going"};
	std::cout << MAGENTA << "[Array] :" << RESET << std::endl;
	iter(array, 5, &print);

	int	array2[5] = {1, 2, 3, 4, 5};
	std::cout << MAGENTA << "[Array2] :" << RESET << std::endl;
	iter(array2, 5, &print);

	float	array3[5] = {1.1f, 2.23f, 6.66f, 42.42f, 420.0f};
	std::cout << MAGENTA << "[Array3] :" << RESET << std::endl;

	iter(array3, 5, &print);

	char	array4[5] = {'h', 'e', 'l', 'l', 'o'};
	std::cout << MAGENTA << "[Array4] :" << RESET << std::endl;
	iter(array4, 5, &print);
	return (0);
}