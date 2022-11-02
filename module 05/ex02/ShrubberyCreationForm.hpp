#ifndef SHRUBBERY_CREATION_FORM_HPP
#define SHRUBBERY_CREATION_FORM_HPP

#include "Form.hpp"
#include <fstream>

class ShrubberyCreationForm: public Form {

private:
		std::string	target;

public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(ShrubberyCreationForm const & toCopy);
		ShrubberyCreationForm &operator = (ShrubberyCreationForm const & toCopy);
		~ShrubberyCreationForm(void);

		const std::string	&getTarget(void) const;
		virtual void		execute(Bureaucrat const & executor) const;

};

#define ASCII_TREES \
"               ,@@@@@@@,                 " << std::endl << \
"      ,,,.   ,@@@@@@/@@,  .oo8888o.      " << std::endl << \
"   ,&%%&%&&%,@@@@@/@@@@@@,8888\\8/8o     " << std::endl << \
"  ,%&\\&&%&&%,@@@\\@@/@@@88\\8888/88'    " << std::endl << \
"  %&&%&%&/%&&%@@\\@/ /@@@88888\\8888'    " << std::endl << \
"  %&&%/ %&%%&&@@\\V /@@' `88\\ `/88'     " << std::endl << \
"  `&%\\` /%&'    |.|        \\'|8'       " << std::endl << \
"      |o|        | |         | |         " << std::endl << \
"      |.|        | |         | |         " << std::endl << \
"   \\/ ._\\/_/__/  ,\\//__\\/.  \\//__/_ " << std::endl 


#endif