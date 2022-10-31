#ifndef CLAP_TRAP_HPP
#define CLAP_TRAP_HPP

#include <iostream>

class ClapTrap {

private:
		std::string	name;
		int			hitPoints;
		int			energyPoints;
		int			attackDamage;

public:
		ClapTrap(void);
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const & toCopy);
		ClapTrap& operator = (ClapTrap const & toCopy);
		~ClapTrap(void);

		void			attack(const std::string &target);
		void			takeDamage(unsigned int amount);
		void			beRepaired(unsigned int amount);
		std::string		getName(void) const;
		unsigned int	getHitPoints(void) const;
		unsigned int	getEnergyPoint(void) const;
		unsigned int	getAttackDamage(void) const;

};

#endif