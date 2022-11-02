#ifndef PRESIDENTIAL_PARDON_FORM_HPP
#define PRESIDENTIAL_PARDON_FORM_HPP

#include "Form.hpp"

class PresidentialPardonForm: public Form {

private:
		std::string	target;

public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(PresidentialPardonForm const & toCopy);
		PresidentialPardonForm &operator = (PresidentialPardonForm const & toCopy);
		~PresidentialPardonForm(void);

		const std::string	&getTarget(void) const;
		virtual void		execute(Bureaucrat const & executor) const;

};

#endif