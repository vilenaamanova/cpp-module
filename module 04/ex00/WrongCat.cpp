#include "WrongCat.hpp"

WrongCat::WrongCat(void)
{
	this->type = "WrongCat";
	std::cout << "Default WrongCat constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & toCopy)
{
	*this = toCopy;
	return ;
}

WrongCat& WrongCat::operator = (WrongCat const & toCopy)
{
	this->type = toCopy.getType();
	return (*this);
}

WrongCat::~WrongCat(void)
{
	std::cout << "Default WrongCat destructor called" << std::endl;
}

void	WrongCat::makeSound(void) const
{
	std::cout << "The WrongCat meows: meow, meow, meow" << std::endl;
}