#ifndef ROBOTOMY_REQUEST_FORM
#define ROBOTOMY_REQUEST_FORM

#include "Form.hpp"
#include <cstdlib>

class RobotomyRequestForm: public Form {

private:
		std::string	target;

public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm(RobotomyRequestForm const & toCopy);
		RobotomyRequestForm &operator = (RobotomyRequestForm const & toCopy);
		~RobotomyRequestForm(void);

		const std::string	&getTarget(void) const;
		virtual void		execute(Bureaucrat const & executor) const;

};

#endif