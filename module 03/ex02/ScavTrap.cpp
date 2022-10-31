#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void)
{
	this->name = "";
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap Default constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->name = name;
	this->hitPoints = 100;
	this->energyPoints = 50;
	this->attackDamage = 20;
	std::cout << "ScavTrap Name constructor called" << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap Destructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const & toCopy)
{
	*this = toCopy;
	return ;
}

ScavTrap& ScavTrap::operator = (ScavTrap const & toCopy)
{
	this->name = toCopy.getName();
	this->hitPoints = toCopy.hitPoints;
	this->energyPoints = toCopy.energyPoints;
	this->attackDamage = toCopy.attackDamage; 
	return (*this);
}

void	ScavTrap::attack(const std::string	&target) 
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		this->energyPoints = this->energyPoints - 1;
		std::cout << "ScavTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		if (this->energyPoints <= 0)
		{
			this->energyPoints = 0;
			std::cout << "ScavTrap " << this->name << " has no energy points left, it has to repaire!" << std::endl;
		}
	}		
	else
		std::cout << "ScavTrap " << this->name << " can not attack, because it has no hit points or energy points left!" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << this->name << " now is in Gate Keeper mode" << std::endl;
}