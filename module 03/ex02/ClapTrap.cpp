#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): name(""), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap Default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
	std::cout << "ClapTrap Name constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const & toCopy)
{
	*this = toCopy;
	return ;
}

ClapTrap& ClapTrap::operator = (ClapTrap const & toCopy)
{
	this->name = toCopy.getName();
	this->hitPoints = toCopy.hitPoints;
	this->energyPoints = toCopy.energyPoints;
	this->attackDamage = toCopy.attackDamage; 
	return (*this);
}

void	ClapTrap::attack(const std::string	&target) 
{
	if (this->energyPoints > 0 && this->hitPoints > 0)
	{
		this->energyPoints = this->energyPoints - 1;
		std::cout << "ClapTrap " << this->name << " attacks " << target << ", causing " << this->attackDamage << " points of damage!" << std::endl;
		if (this->energyPoints <= 0)
		{
			this->energyPoints = 0;
			std::cout << "ClapTrap " << this->name << " has no energy points left, it has to repaire!" << std::endl;
		}
	}		
	else
		std::cout << "ClapTrap " << this->name << " can not attack, because it has no hit points or energy points left!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	this->hitPoints = this->hitPoints - amount;
	std::cout << "ClapTrap " << this->name << " takes " << amount << " points of damage!" << std::endl;
	if (this->hitPoints <= 0)
	{
		this->hitPoints = 0;
		std::cout << "ClapTrap " << this->name << " can't do anything, it has no hit points left!" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (this->energyPoints > 0)
	{
		this->hitPoints = this->hitPoints + amount;
		std::cout << "ClapTrap " << this->name << " repairs itself, it gets " << amount << " hit points back!" << std::endl;
	}
}

std::string	ClapTrap::getName(void) const
{
	return (this->name);
}

unsigned int	ClapTrap::getHitPoints(void) const
{
	return (this->hitPoints);
}

unsigned int	ClapTrap::getEnergyPoint(void) const
{
	return (this->energyPoints);
}

unsigned int	ClapTrap::getAttackDamage(void) const
{
	return (this->attackDamage);
}
