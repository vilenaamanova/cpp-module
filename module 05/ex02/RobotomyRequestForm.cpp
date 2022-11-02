#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void): Form("RobotomyRequestForm", 72, 45)
{

}

RobotomyRequestForm::RobotomyRequestForm(std::string target): Form("RobotomyRequestForm", 72, 45), target(target)
{

}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const & toCopy): Form("RobotomyRequestForm", 72, 45)
{
	*this = toCopy;
}

RobotomyRequestForm &RobotomyRequestForm::operator = (RobotomyRequestForm const & toCopy)
{
	this->target = toCopy.getTarget();
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{

}

const std::string &RobotomyRequestForm::getTarget(void) const
{
	return (this->target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (this->getSignStatus())
	{
		srand(time(NULL));
		if (rand() % 2)
		{
			std::cout << "--Making some drilling noises--" << std::endl;
			std::cout << this->getTarget() << " has been robotimized successfully" << std::endl;
		}
		else
			std::cout << "Robotomy failed! Couldn't execute form " << this->getTarget() << std::endl;
	}
	else if (executor.getGrade() > this->getGradeToSign())
		throw (Form::GradeTooLowException());
	else
		throw (Form::NotSignedException());
}