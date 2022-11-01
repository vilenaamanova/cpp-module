#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain {

private:
		std::string	ideas[100];

public:
		Brain(void);
		Brain(Brain const & toCopy);
		Brain& operator = (Brain const & toCopy);
		~Brain(void);

		const std::string	&getIdea(int i) const;
		void		setIdea(std::string idea, int i);

};

#endif