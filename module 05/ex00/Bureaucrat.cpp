#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{
	std::cout << "Default Bureaucrat constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(std::string name, int grade): name(name), grade(grade)
{
	if (grade < 1)
		throw (Bureaucrat::GradeTooHighException());
	else if (grade > 150)
		throw (Bureaucrat::GradeTooLowException());
	this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & toCopy)
{
	*this = toCopy;
}

Bureaucrat &Bureaucrat::operator = (Bureaucrat const & toCopy)
{
	this->name = toCopy.getName();
	this->grade = toCopy.getGrade();
	return (*this);
}

Bureaucrat::~Bureaucrat(void)
{
	std::cout << "Default Bureaucrat destructor called" << std::endl;
}

const char *Bureaucrat::GradeTooHighException:: what() const throw()
{
	return ("Grade too high!");
}

const char *Bureaucrat::GradeTooLowException:: what() const throw()
{
	return ("Grade too low!");
}

const std::string	&Bureaucrat::getName(void) const
{
	return (this->name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->grade);
}

void	Bureaucrat::incrementGrade(void)
{
	this->grade--;
	if (this->grade < 1)
		throw (Bureaucrat::GradeTooHighException());
}

void	Bureaucrat::decrementGrade(void)
{
	this->grade++;
	if (this->grade > 150)
		throw (Bureaucrat::GradeTooLowException());
}

std::ostream & operator << (std::ostream & o, Bureaucrat const & rhs)
{
	o << rhs.getName();
	o << ", bureaucrat grade ";
	o << rhs.getGrade();
	return o;
}
