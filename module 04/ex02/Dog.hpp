#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"

class Dog: public Animal {

private:
		Brain* brain;

public:
		Dog(void);
		Dog(Dog const & toCopy);
		Dog& operator = (Dog const & toCopy);
		virtual ~Dog(void);

		virtual void	makeSound(void) const;
		virtual Brain	*getBrain(void) const;

};

#endif