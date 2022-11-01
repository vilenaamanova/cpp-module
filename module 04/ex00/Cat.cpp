#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(Cat const & toCopy)
{
	*this = toCopy;
	return ;
}

Cat& Cat::operator = (Cat const & toCopy)
{
	this->type = toCopy.getType();
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Default Cat destructor called" << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "The cat meows: meow, meow, meow" << std::endl;
}