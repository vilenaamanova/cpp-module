#include "HumanB.hpp"

HumanB::HumanB(std::string name): name(name), weapon(NULL)
{
	std::cout << "HumanB named " << name << " with no weapon is ready to attack" << std::endl;
}

HumanB::~HumanB(void)
{
	std::cout << "HumanB named " << this->name << " died" << std::endl;
}

void	HumanB::attack(void)
{
	std::cout << this->name << " attacks with their " << weapon->getType() << std::endl;
}

void	HumanB::setWeapon(Weapon& weapon)
{
	this->weapon = &weapon;
	return ;
}