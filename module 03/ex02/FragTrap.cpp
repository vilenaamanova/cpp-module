#include "FragTrap.hpp"

FragTrap::FragTrap(void)
{
	this->name = "";
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap Default constructor called" << std::endl;
}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 100;
	this->attackDamage = 30;
	std::cout << "FragTrap Name constructor called" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap Destructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const & toCopy)
{
	*this = toCopy;
	return ;
}

FragTrap& FragTrap::operator = (FragTrap const & toCopy)
{
	this->name = toCopy.getName();
	this->hitPoints = toCopy.hitPoints;
	this->energyPoints = toCopy.energyPoints;
	this->attackDamage = toCopy.attackDamage; 
	return (*this);
}

void	FragTrap::attack(const std::string	&target) 
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		this->energyPoints = this->energyPoints - 1;
		std::cout << "FragTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		if (this->energyPoints <= 0)
		{
			this->energyPoints = 0;
			std::cout << "FragTrap " << this->name << " has no energy points left, it has to repaire!" << std::endl;
		}
	}		
	else
		std::cout << "FragTrap " << this->name << " can not attack, because it has no hit points or energy points left!" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->name << " wants to give you a high five!" << std::endl;
}