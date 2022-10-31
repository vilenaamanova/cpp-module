#include "Fixed.hpp"

int	main(void)
{
	Fixed		a;
	Fixed const	b(Fixed(5.05f) * Fixed(2));

	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "a+b = " << a+b << std::endl;
	std::cout << "a-b = " << a-b << std::endl;
	std::cout << "a*b = " << a*b << std::endl;
	std::cout << "a/b = " << a/b << std::endl;
	if (a > b)
		std::cout << "a is greater than b" << std::endl;
	else
		std::cout << "a is smaller than b" << std::endl;
	if (a < b)
		std::cout << "b is greater than a" << std::endl;
	else
		std::cout << "b is smaller than a" << std::endl;
	if (a >= b)
		std::cout << "a is greater or equal to b" << std::endl;
	else
		std::cout << "a is smaller than b" << std::endl;
	if (a <= b)
		std::cout << "a is smaller or equal to b" << std::endl;
	else
		std::cout << "a is greater than b" << std::endl;
	if (a == b)
		std::cout << "a is equal to b" << std::endl;
	else
		std::cout << "a and b are not equal" << std::endl;
	if (a != b)
		std::cout << "a and b are not equal" << std::endl;
	else
		std::cout << "a is equal to b" << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "b = " << b << std::endl;
	std::cout << "max = " << Fixed::max(a, b) << std::endl;
	return (0);
}