#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"

class Cat: public Animal {

public:
		Cat(void);
		Cat(Cat const & toCopy);
		Cat& operator = (Cat const & toCopy);
		virtual ~Cat(void);

		virtual void	makeSound(void) const;

};

#endif