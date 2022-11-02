#include "Intern.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

Intern::Intern(void)
{
	formNames[0] = "ShrubberyCreationForm";
	formNames[1] = "RobotomyRequestForm";
	formNames[2] = "PresidentialPardonForm";
}

Intern::Intern(Intern const & toCopy)
{
	*this = toCopy;
}

Intern &Intern::operator = (Intern const & toCopy)
{
	this->forms[0] = toCopy.forms[0];
	this->forms[1] = toCopy.forms[1];
	this->forms[2] = toCopy.forms[2];
	return (*this);
}

Intern::~Intern(void)
{

}

Form	*Intern::makeForm(std::string const &formName, std::string const &formTarget)
{
	int						i;
	ShrubberyCreationForm	shrubberyForm(formTarget);
	RobotomyRequestForm		robotomyForm(formTarget);
	PresidentialPardonForm	presidentialForm(formTarget);

	i = 0;
	forms[0] = &shrubberyForm;
	forms[1] = &robotomyForm;
	forms[2] = &presidentialForm;
	while (i < 3)
	{
		if (this->formNames[i] == formName)
		{
			std::cout << "Intern creates " << forms[i]->getName() << std::endl;
			return (forms[i]);
		}
		i++;
	}
	std::cout << "Intern cannot create a form " << formName << std::endl;
	return (0);
}

