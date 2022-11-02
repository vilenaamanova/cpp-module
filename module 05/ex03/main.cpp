#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main(void)
{
	Intern	someRandomIntern;
	Form 	*rrf;

	rrf = someRandomIntern.makeForm("robotomyForm", "Bender");
	rrf = someRandomIntern.makeForm("ShrubberyCreationForm", "Shru");
	rrf = someRandomIntern.makeForm("pardon request", "Killme");

	rrf = someRandomIntern.makeForm("PresidentialPardonForm", "random");

	return (0);
}