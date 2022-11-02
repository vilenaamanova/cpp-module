#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

#include <iostream>
#include <stdexcept>

class Bureaucrat {

private:
		std::string			name;
		int					grade;

public:
		Bureaucrat(void);
		Bureaucrat(std::string name, int grade);
		Bureaucrat(Bureaucrat const & toCopy);
		Bureaucrat &operator = (Bureaucrat const & toCopy);
		~Bureaucrat(void);

		const std::string	&getName(void) const;
		int			getGrade(void) const;
		void		incrementGrade(void);
		void		decrementGrade(void);

		class GradeTooHighException: public std::exception {

		public:
				const char *what() const throw();

		};

		class GradeTooLowException: public std::exception {

		public:
				const char *what() const throw();

		};

};

	std::ostream & operator << (std::ostream & o, Bureaucrat const & rhs);

#endif