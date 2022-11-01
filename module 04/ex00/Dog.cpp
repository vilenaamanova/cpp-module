#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(Dog const & toCopy)
{
	*this = toCopy;
	return ;
}

Dog& Dog::operator = (Dog const & toCopy)
{
	this->type = toCopy.getType();
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Default Dog destructor called" << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "The dog barks: woof, woof, woof" << std::endl;
}