#include "Zombie.hpp"

Zombie*	zombieHorde(int N, std::string name);

int	main(void)
{
	int	i;
	int	amount;

	i = 0;
	amount = 10;
	Zombie*	zombies = zombieHorde(amount, "Foo");
	while (i < amount)
	{
		zombies->announce();
		i++;
	}
	delete [] zombies;
	return (0);
}