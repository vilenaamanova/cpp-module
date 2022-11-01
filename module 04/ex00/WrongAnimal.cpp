#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal(void): type("")
{
	std::cout << "Default WrongAnimal constructor called" << std::endl;
}

WrongAnimal::WrongAnimal(WrongAnimal const & toCopy)
{
	*this = toCopy;
	return ;
}

WrongAnimal& WrongAnimal::operator = (WrongAnimal const & toCopy)
{
	this->type = toCopy.getType();
	return (*this);
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Default WrongAnimal destructor called" << std::endl;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "WrongAnimals can make different sounds" << std::endl;
}