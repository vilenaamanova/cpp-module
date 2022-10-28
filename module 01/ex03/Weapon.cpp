#include "Weapon.hpp"

Weapon::Weapon(std::string type): type(type)
{
}

Weapon::~Weapon(void)
{

}

void	Weapon::setType(std::string type)
{
	this->type = type;
	return ;
}

std::string&	Weapon::getType(void)
{
	return (this->type);
}