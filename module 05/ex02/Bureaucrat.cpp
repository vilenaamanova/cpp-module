#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void)
{

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

void	Bureaucrat::signForm(std::string formName, bool status)
{
	if (status)
		std::cout << "Bureaucrat " << this->getName() << " signed " << formName << " form" << std::endl;
	else
		std::cout << this->getName() << " couldn't signed " << formName << " because his grade is too low" << std::endl;
}

void	Bureaucrat::executeForm(Form const & form)
{
	try
	{
		form.execute(*this);
		std::cout << this->name << " executed " << form.getName() << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << this->name << " couldn't execute " << form.getName() << std::endl;
	}
}