#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <stdexcept>
#include "Bureaucrat.hpp"

class Form {

private:
		std::string const	name;
		bool				isSigned;
		int const			gradeToSign;
		int const			gradeToExecute;

public:
		Form(void);
		Form(std::string name, int gToSign, int gToExcecute);
		Form(Form const & toCopy);
		Form &operator = (Form const & toCopy);
		~Form(void);

		const std::string	&getName(void) const;
		bool				getSignStatus(void) const;
		int					getGradeToSign(void) const;
		int					getGradeToExecute(void) const;
		void				beSigned(Bureaucrat &check);

		class GradeTooHighException: public std::exception {

		public:
			const char *what() const throw();

		};

		class GradeTooLowException: public std::exception {

		public:
				const char *what() const throw();

		};

};

std::ostream & operator << (std::ostream & o, Form const & rhs);

#endif