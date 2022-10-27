#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>

class Zombie {

private:
		std::string	name;

public:
		Zombie(std::string	zombie_name);
		~Zombie(void);

		void	announce(void);

};

#endif