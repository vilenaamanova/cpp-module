#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class	Fixed {

private:
		int					fixedPointNum;
		static const int	fractionalBits = 8;

public:
		Fixed(void);
		Fixed(Fixed const & toCopy);
		Fixed& operator = (Fixed const & toCopy);
		~Fixed(void);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

};

#endif