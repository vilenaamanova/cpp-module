#include "Animal.hpp"

Animal::Animal(void): type("")
{
	std::cout << "Default Animal constructor called" << std::endl;
}

Animal::Animal(Animal const & toCopy)
{
	*this = toCopy;
	return ;
}

Animal& Animal::operator = (Animal const & toCopy)
{
	this->type = toCopy.getType();
	return (*this);
}

Animal::~Animal(void)
{
	std::cout << "Default Animal destructor called" << std::endl;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}

void	Animal::makeSound(void) const
{
	std::cout << "Animals can make different sounds" << std::endl;
}