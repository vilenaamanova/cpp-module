#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal {

public:
		Dog(void);
		Dog(Dog const & toCopy);
		Dog& operator = (Dog const & toCopy);
		virtual ~Dog(void);

		virtual void	makeSound(void) const;

};

#endif