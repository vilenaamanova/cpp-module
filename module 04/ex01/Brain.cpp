#include "Brain.hpp"

Brain::Brain(void)
{
	std::cout << "Default Brain constructor called" << std::endl;
}

Brain::Brain(Brain const & toCopy)
{
	*this = toCopy;
	return ;
}

Brain& Brain::operator = (Brain const & toCopy)
{
	int	i;

	i = 0;
	while (i < 100)
	{
		this->ideas[i] = toCopy.getIdea(i);
		i++;
	}
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Default Brain destructor called" << std::endl;
}

const std::string	&Brain::getIdea(int i) const
{
	return (this->ideas[i]);
}

void	Brain::setIdea(std::string idea, int i)
{
	this->ideas[i] = idea;
	return ;
}