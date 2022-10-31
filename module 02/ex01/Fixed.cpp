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

Fixed::Fixed(int const num)
{
	std::cout << "Int constructor called" << std::endl;
	this->fixedPointNum = num << this->fractionalBits;
}

Fixed::Fixed(float const num)
{
	std::cout << "Float constructor called" << std::endl;
	this->fixedPointNum = roundf(num * (1 << this->fractionalBits));
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

float	Fixed::toFloat(void) const
{
	return ((double)this->fixedPointNum / (double)(1 << this->fractionalBits));
}

int Fixed::toInt(void) const
{
	return (this->fixedPointNum >> this->fractionalBits);
}

std::ostream & operator << (std::ostream & o, Fixed const & rhs)
{
	o << rhs.toFloat();
	return o;
}