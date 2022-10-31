#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class	Fixed {

private:
		int					fixedPointNum;
		static const int	fractionalBits = 8;

public:
		Fixed(void);
		Fixed(Fixed const & toCopy);
		Fixed& operator = (Fixed const & toCopy);
		~Fixed(void);

		Fixed(int const num);
		Fixed(float const num);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;

};

	std::ostream & operator << (std::ostream & o, Fixed const & rhs);

#endif