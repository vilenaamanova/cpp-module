#include "Cat.hpp"

Cat::Cat(void)
{
	this->type = "Cat";
	this->brain = new Brain();
	std::cout << "Default Cat constructor called" << std::endl;
}

Cat::Cat(Cat const & toCopy)
{
	*this = toCopy;
	this->brain = new Brain();
	*(this->brain) = *(toCopy.getBrain());
	return ;
}

Cat& Cat::operator = (Cat const & toCopy)
{
	this->type = toCopy.getType();
	*(this->brain) = *(toCopy.getBrain());
	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "Default Cat destructor called" << std::endl;
	delete this->brain;
}

void	Cat::makeSound(void) const
{
	std::cout << "The cat meows: meow, meow, meow" << std::endl;
}

Brain	*Cat::getBrain(void) const
{
	return(this->brain);
}