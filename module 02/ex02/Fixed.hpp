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
		Fixed&				operator = (Fixed const & toCopy);
		bool				operator > (Fixed const & toCompare) const;
		bool				operator < (Fixed const & toCompare) const;
		bool				operator >= (Fixed const & toCompare) const;
		bool				operator <= (Fixed const & toCompare) const;
		bool				operator == (Fixed const & toCompare) const;
		bool				operator != (Fixed const & toCompare) const;
		Fixed				operator + (Fixed const & value) const;
		Fixed				operator - (Fixed const & value) const;
		Fixed				operator * (Fixed const & value) const;
		Fixed				operator / (Fixed const & value) const;
		Fixed&				operator ++ (void);
		Fixed&				operator -- (void);
		Fixed				operator ++ (int);
		Fixed				operator -- (int);
		static Fixed&		max(Fixed &a, Fixed &b);
		static const Fixed&	max(Fixed const &a, Fixed const &b);
		static Fixed&		min(Fixed &a, Fixed &b);
		static const Fixed&	min(Fixed const &a, Fixed const &b);
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