#include "Zombie.hpp"

Zombie::Zombie(void)
{
	std::cout << "A zombie was born" << std::endl;
}

Zombie::~Zombie(void)
{
	std::cout << this->name << " died" << std::endl;
}

void	Zombie::announce(void)
{
	std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void	Zombie::setName(std::string name)
{
	this->name = name;
	return ;
}