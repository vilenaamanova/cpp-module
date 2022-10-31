#ifndef SCAV_TRAP_HPP
#define SCAV_TRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap: public ClapTrap {

private:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;

public:
		ScavTrap(void);
		ScavTrap(std::string name);
		ScavTrap(ScavTrap const & toCopy);
		ScavTrap& operator = (ScavTrap const & toCopy);
		~ScavTrap(void);

		void			attack(const std::string &target);
		void			guardGate(void);

};

#endif