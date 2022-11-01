#ifndef WRONG_CAT_HPP
#define WRONG_CAT_HPP

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal {

public:
		WrongCat(void);
		WrongCat(WrongCat const & toCopy);
		WrongCat& operator = (WrongCat const & toCopy);
		~WrongCat(void);

		void	makeSound(void) const;

};

#endif