#include "iter.hpp"

int	main(void)
{
	std::string array[5] = {"hello","word","how","is","going"};

	iter(array, 5, &print);

	int	array2[5] = {1, 2, 3, 4, 5};
	iter(array2, 5, &print);
	// iter(&array, 5, &append);

	return (0);
}