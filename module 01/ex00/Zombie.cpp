#include "Zombie.hpp"

Zombie::Zombie(std::string	zombieName)
{
	this->name = zombieName;
	std::cout << "Born zombie named " << this->name << std::endl;
} 

Zombie::~Zombie(void)
{
	std::cout << this->name << " died" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}