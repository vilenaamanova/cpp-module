#include "Fixed.hpp"

Fixed::Fixed(void): fixedPointNum(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(Fixed const & toCopy)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
	return ;
}

Fixed& Fixed::operator = (Fixed const & toCopy)
{
	std::cout << "Copy assignment operator called" << std::endl;
	this->fixedPointNum = toCopy.getRawBits();
	return (*this);
}

Fixed::~Fixed(void)
{
	std::cout << "Destructor called" << std::endl;
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member called" << std::endl;
	return (this->fixedPointNum);
}

void	Fixed::setRawBits(int const raw)
{
	this->fixedPointNum = raw;
	return ;
}