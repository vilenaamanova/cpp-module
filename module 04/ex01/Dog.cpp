#include "Dog.hpp"

Dog::Dog(void)
{
	this->type = "Dog";
	this->brain = new Brain();
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(Dog const & toCopy)
{
	*this = toCopy;
	this->brain = new Brain();
	*(this->brain) = *(toCopy.getBrain());
	return ;
}

Dog& Dog::operator = (Dog const & toCopy)
{
	this->type = toCopy.getType();
	*(this->brain) = *(toCopy.getBrain());
	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "Default Dog destructor called" << std::endl;
	delete this->brain;
}

void	Dog::makeSound(void) const
{
	std::cout << "The dog barks: woof, woof, woof" << std::endl;
}

Brain	*Dog::getBrain(void) const
{
	return (this->brain);
}