#include "Array.hpp"

int	main(void)
{
	
	//Setup Array de int
	Array<int> int_array(5);
	for (int i = 0; i < 5; i++)
		int_array[i] = i;
	std::cout << "Size de int_array : " << int_array.size() << std::endl;
	for (size_t i = 0; i < 5; i++)
		std::cout << "int_array[" << i << "] : " << int_array[i] << std::endl;
	std::cout << "\n\n";

	//Setup Array de floats
	Array<float> float_array(5);
	for (float i = 0; i < 5.0f; i++)
		float_array[i] = i + 0.5f;
	std::cout << "Size de float_array : " << float_array.size() << std::endl;
	for (size_t i = 0; i < 5; i++)
		std::cout << "float_array[" << i << "] : " << float_array[i] << std::endl;
	std::cout << "\n\n";

	//Setup Array de strings
	Array<std::string> string_array(2);
	string_array[0] = "Hello";
	string_array[1] = "World";
	std::cout << "Size de string_array : " << string_array.size() << std::endl;
	for (size_t i = 0; i < 2; i++)
		std::cout << "string_array[" << i << "] : " << string_array[i] << std::endl;
	std::cout << "\n\n";
	//Setup Array de char
	Array<char> char_array(2);
	char_array[0] = 'T';
	char_array[1] = 'G';
	std::cout << "Size de char_array : " << char_array.size() << std::endl;
	for (size_t i = 0; i < 2; i++)
		std::cout << "char_array[" << i << "] : " << char_array[i] << std::endl;
	std::cout << "\n\n";

	std::cout << RED << "~========  ERRORS  ========~" << RESET << std::endl;
	try
	{
		int_array[5] = 42;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		float_array[5] = 42;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		string_array[2] = "Bonjour le monde";
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		char_array[2] = 't';
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Array<int> error_array(0);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}