#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void): Form("PresidentialPardonForm", 25, 5)
{

}

PresidentialPardonForm::PresidentialPardonForm(std::string target): Form("PresidentialPardonForm", 25, 5), target(target)
{

}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const & toCopy): Form("PresidentialPardonForm", 25, 5)
{
	*this = toCopy;
}

PresidentialPardonForm &PresidentialPardonForm::operator = (PresidentialPardonForm const & toCopy)
{
	this->target = toCopy.getTarget();
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void)
{

}

const std::string &PresidentialPardonForm::getTarget(void) const
{
	return (this->target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (this->getSignStatus())
	{
		std::cout << this->getTarget() << " has been pardoned by Zaphod Beeblebrox" << std::endl;
	}
	else if (executor.getGrade() > this->getGradeToSign())
		throw (Form::GradeTooLowException());
	else
		throw (Form::NotSignedException());
}