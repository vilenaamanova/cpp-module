#ifndef CONVERT_HPP
#define CONVERT_HPP

#include <iostream>
#include <cstdlib>
#include <iomanip>
#include <string>
#include <sstream>

class Convert {

private:
		std::string	toConvert;
		std::string	type;
		char		charValue;
		long int	intValue;
		float		floatValue;
		double		doubleValue;

public:
		Convert(void);
		Convert(char *toConvert);
		Convert(Convert const & toCopy);
		Convert &operator = (Convert const & toCopy);
		~Convert(void);

		const std::string	&getType(void) const;
		void				detectType(void);
		void				convertFromString(std::string type);
		void				convertFromChar(void);
		void				convertFromInt(void);
		void				convertFromFloat(void);
		void				convertFromDouble(void);
		void				detectChar(std::string detect);
		void				detectNum(std::string detect);

};

		int					detectMinus(std::string detect);
		int					detectPlus(std::string detect);
		int					detectInt(std::string detect);

#endif