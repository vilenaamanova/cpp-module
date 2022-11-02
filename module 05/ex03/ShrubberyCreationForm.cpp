#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): Form("ShrubberyCreationForm", 145, 137)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target): Form("ShrubberyCreationForm", 145, 137), target(target)
{

}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const & toCopy): Form("ShrubberyCreationForm", 145, 137)
{
	*this = toCopy;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator = (ShrubberyCreationForm const & toCopy)
{
	this->target = toCopy.getTarget();
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{

}

const std::string &ShrubberyCreationForm::getTarget(void) const
{
	return (this->target);
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	std::string	newFilename;

	if (this->getSignStatus())
	{
		newFilename = this->target + "_shrubbery";
		std::ofstream newFile(newFilename.c_str());
		newFile << ASCII_TREES;
		std::cout << "The form " << this->getName() << " was executed" << std::endl;
		newFile.close();
	}
	else if (executor.getGrade() > this->getGradeToSign())
		throw (Form::GradeTooLowException());
	else
		throw (Form::NotSignedException());
}