#include "Fixed.hpp"

Fixed::Fixed(void): fixedPointNum(0)
{
}

Fixed::Fixed(Fixed const & toCopy)
{
	*this = toCopy;
	return ;
}

Fixed& Fixed::operator = (Fixed const & toCopy)
{
	this->fixedPointNum = toCopy.getRawBits();
	return (*this);
}

bool Fixed::operator > (Fixed const & toCompare) const
{
	if (this->fixedPointNum > toCompare.fixedPointNum)
		return (true);
	return (false);
}

bool Fixed::operator < (Fixed const & toCompare) const
{
	if (this->fixedPointNum < toCompare.fixedPointNum)
		return (true);
	return (false);
}

bool Fixed::operator >= (Fixed const & toCompare) const
{
	if (this->fixedPointNum >= toCompare.fixedPointNum)
		return (true);
	return (false);
}

bool Fixed::operator <= (Fixed const & toCompare) const
{
	if (this->fixedPointNum <= toCompare.fixedPointNum)
		return (true);
	return (false);
}

bool Fixed::operator == (Fixed const & toCompare) const
{
	if (this->fixedPointNum == toCompare.fixedPointNum)
		return (true);
	return (false);
}

bool Fixed::operator != (Fixed const & toCompare) const
{
	if (this->fixedPointNum != toCompare.fixedPointNum)
		return (true);
	return (false);
}

Fixed Fixed::operator + (Fixed const & value) const
{
	return (Fixed(this->toFloat() + value.toFloat()));
}

Fixed Fixed::operator - (Fixed const & value) const
{
	return (Fixed(this->toFloat() - value.toFloat()));
}

Fixed Fixed::operator * (Fixed const & value) const
{
	return (Fixed(this->toFloat() * value.toFloat()));
}

Fixed Fixed::operator / (Fixed const & value) const
{
	return (Fixed(this->toFloat() / value.toFloat()));
}

Fixed& Fixed::operator ++ (void)
{
	this->fixedPointNum++;
	return (*this);
}

Fixed& Fixed::operator -- (void)
{
	this->fixedPointNum--;
	return (*this);
}

Fixed Fixed::operator ++ (int)
{
	Fixed		tmp(*this);

	this->operator++();
	return (tmp);
}

Fixed Fixed::operator -- (int)
{
	Fixed		tmp(*this);

	this->operator--();
	return (tmp);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
	if (a > b)
		return (a);
	return (b);
}

const Fixed& Fixed::max(Fixed const &a, Fixed const &b)
{
	if (a > b)
		return (a);
	return (b);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
	if (a < b)
		return (a);
	return (b);
}

const Fixed& Fixed::min(Fixed const &a, Fixed const &b)
{
	if (a < b)
		return (a);
	return (b);
}

Fixed::~Fixed(void)
{
}

Fixed::Fixed(int const num)
{
	this->fixedPointNum = num << this->fractionalBits;
}

Fixed::Fixed(float const num)
{
	this->fixedPointNum = roundf(num * (1 << this->fractionalBits));
}

int	Fixed::getRawBits(void) const
{
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