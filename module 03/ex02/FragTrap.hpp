#ifndef FRAG_TRAP_HPP
#define FRAG_TRAP_HPP

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap {

private:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;

public:
		FragTrap(void);
		FragTrap(std::string name);
		FragTrap(FragTrap const & toCopy);
		FragTrap& operator = (FragTrap const & toCopy);
		~FragTrap(void);

		void			attack(const std::string &target);
		void			highFivesGuys(void);

};

#endif