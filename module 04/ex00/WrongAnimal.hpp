#ifndef WRONG_ANIMAL_HPP
#define WRONG_ANIMAL_HPP

#include <iostream>

class WrongAnimal {

protected:
		std::string	type;

public:
		WrongAnimal(void);
		WrongAnimal(WrongAnimal const & toCopy);
		WrongAnimal& operator = (WrongAnimal const & toCopy);
		~WrongAnimal(void);

		std::string	getType(void) const;
		void	makeSound(void) const;

};

#endif