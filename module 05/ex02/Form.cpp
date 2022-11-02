#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void): name(""), isSigned(false), gradeToSign(150), gradeToExecute(150)
{

}

Form::Form(std::string name, int gToSign, int gToExcecute): name(name), isSigned(false), gradeToSign(gToSign), gradeToExecute(gToExcecute)
{
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw (Form::GradeTooHighException());
	else if (gradeToSign > 150 || gradeToExecute > 150)
		throw (Form::GradeTooLowException());
}

Form::Form(Form const & toCopy): name(toCopy.getName()), isSigned(toCopy.getSignStatus()), gradeToSign(toCopy.getGradeToSign()), gradeToExecute(toCopy.getGradeToExecute())
{
	*this = toCopy;
}

Form &Form::operator = (Form const & toCopy)
{
	this->isSigned = toCopy.getSignStatus();
	return (*this);
}

Form::~Form(void)
{

}

const char *Form::GradeTooHighException:: what() const throw()
{
	return ("Grade too high!");
}

const char *Form::GradeTooLowException:: what() const throw()
{
	return ("Grade too low!");
}

const char *Form::NotSignedException:: what() const throw()
{
	return ("The Form is not signed!");
}

const std::string &Form::getName(void) const
{
	return (this->name);
}

bool	Form::getSignStatus(void) const
{
	return (this->isSigned);
}

int	Form::getGradeToSign(void) const
{
	return (this->gradeToSign);
}

int	Form::getGradeToExecute(void) const
{
	return (this->gradeToExecute);
}

void	Form::beSigned(Bureaucrat &check)
{
	if (check.getGrade() <= this->getGradeToSign())
		this->isSigned = true;
	check.signForm(this->getName(), this->getSignStatus());
	if (check.getGrade() > this->getGradeToSign())
		throw (Form::GradeTooLowException());
}

std::ostream & operator << (std::ostream & o, Form const & rhs)
{
	o << "Form name is: ";
	o << rhs.getName();
	o << ", its grade is equal to ";
	o << rhs.getGradeToSign();
	if (rhs.getSignStatus())
		o << ".\nThis Form is signed";
	else
		o << ".\nThis form isn't signed";
	return o;
}