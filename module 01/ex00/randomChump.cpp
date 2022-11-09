#include "Zombie.hpp"

void	randomChump(std::string name)
{
	Zombie	zombieStack = Zombie(name);
	zombieStack.announce();
}