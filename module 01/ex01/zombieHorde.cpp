#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name)
{
	int	i;

	i = 0;
	Zombie*	zombieHorde = new Zombie[N];
	while (i < N)
	{
		zombieHorde[i].set_name(name);
		i++;
	}
	return (zombieHorde);
}