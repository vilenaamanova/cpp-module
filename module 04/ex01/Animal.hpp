#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include "Brain.hpp"

class Animal {

protected:
		std::string	type;

public:
		Animal(void);
		Animal(Animal const & toCopy);
		Animal& operator = (Animal const & toCopy);
		virtual ~Animal(void);

		std::string		getType(void) const;
		virtual void	makeSound(void) const;
		virtual	Brain	*getBrain(void) const = 0;

};

#endif