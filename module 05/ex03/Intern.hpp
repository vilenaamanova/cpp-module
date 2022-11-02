#ifndef INTERN_HPP
#define INTERN_HPP

#include "Form.hpp"

class Intern {

private:
		std::string	formNames[3];
		Form		*forms[3];

public:
		Intern(void);
		Intern(Intern const & toCopy);
		Intern &operator = (Intern const & toCopy);
		~Intern(void);

		Form	*makeForm(std::string const &formName, std::string const &formTarget);

};

#endif