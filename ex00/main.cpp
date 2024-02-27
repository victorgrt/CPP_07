#include "whatever.hpp"

int	main(void)
{
	int	a, b;

	a = 2;
	b = 42;

	std::cout << "a : " << a << "\nb : " << b << std::endl;
	swap(&a, &b);
	std::cout << "a : " << a << "\nb : " << b << std::endl;

	std::string s1, s2;

	s1 = "Hello";
	s2 = "World";
	std::cout << "s1 : " << s1 << "\ns2 : " << s2 << std::endl;
	swap(&s1, &s2);
	std::cout << "s1 : " << s1 << "\ns2 : " << s2 << std::endl;

	std::cout << min(a, b) << std::endl; //Comparaison entre 2 et 42
	std::string s3 = "HEllo";
	std::cout << min(s3, s2) << std::endl; //Comparaison entre "HEllo" et "Hello"

	std::string s4 = "HEllo";

	std::cout << "&s3 = " << &s3 << "(" << s3 << ")" << "\n&s4 = " << &s4 << "(" << s4 << ")" << std::endl; 
	std::cout << min(s3, s4) << std::endl;

	std::cout << max(a,b) << std::endl;
	std::cout << max(s1,s2) << std::endl;
	std::cout << min(s1,s2) << std::endl;

	{
		std::cout << MAGENTA << "MAIN FROM SUBJECT" << RESET << std::endl;
		int a = 2;
		int b = 3;
		swap( &a, &b );
		std::cout << "a = " << a << ", b = " << b << std::endl;
		std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
		std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
		std::string c = "chaine1";
		std::string d = "chaine2";
		swap(c, d);
		std::cout << "c = " << c << ", d = " << d << std::endl;
		std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
		std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
	}
	return (0);
}