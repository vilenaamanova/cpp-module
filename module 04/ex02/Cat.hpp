#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal {

private:
		Brain* brain;

public:
		Cat(void);
		Cat(Cat const & toCopy);
		Cat& operator = (Cat const & toCopy);
		virtual ~Cat(void);

		virtual void	makeSound(void) const;
		virtual Brain	*getBrain(void) const;

};

#endif