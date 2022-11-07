#include "Convert.hpp"

Convert::Convert(void)
{

}

Convert::Convert(char *toConvert)
{
	this->toConvert = toConvert;
}

Convert::Convert(Convert const & toCopy)
{
	*this = toCopy;
}

Convert &Convert::operator = (Convert const & toCopy)
{
	this->toConvert = toCopy.toConvert;
	return (*this);
}

Convert::~Convert(void)
{

}

const std::string	&Convert::getType(void) const
{
	return (this->type);
}

void	Convert::detectChar(std::string detect)
{
	int	length;

	length = detect.size();
	if (detect == "nan")
		this->convertFromString("nan");
	else if (detect == "inf")
		this->convertFromString("inf");
	else if (length == 1 && !std::isdigit(detect[0]))
		this->convertFromString("char");
	else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}

void Convert::detectNum(std::string detect)
{
	int i;
	int	j;
	int	length;

	i = 0;
	length = detect.size();
	if (detect[0] == '-')
		i = detectMinus(detect);
	else if (detect[0] == '+')
		i = detectPlus(detect);
	else
		i = detectInt(detect);

	if (i == length)
		this->convertFromString("int");
	else
	{
		j = 0;
		i++;
		while (detect[i++])
			j++;
		if (j == 2 && detect[i - 2] == 'f')
			this->convertFromString("float");
		else if (j == 1 && detect[i - 2] == '0')
			this->convertFromString("double");
		else
		{
			std::cout << "char: impossible" << std::endl;
			std::cout << "int: impossible" << std::endl;
			std::cout << "float: impossible" << std::endl;
			std::cout << "double: impossible" << std::endl;
		}
	}
}

int	detectMinus(std::string detect)
{
	int i;
		
	i = 1;
	if (detect == "-inf")
	{
		i = 5;
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: -inff" << std::endl;
		std::cout << "double: -inf" << std::endl;
	}
	else
	{
		while (detect[i] && std::isdigit(detect[i]))
			i++;
	}
	return (i);
}

int	detectPlus(std::string detect)
{
	int i;
		
	i = 1;
	if (detect == "+inf")
	{
		i = 5;
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
	}
	else
	{
		while (detect[i] && std::isdigit(detect[i]))
			i++;
	}
	return (i);
}

int	detectInt(std::string detect)
{
	int	i;

	i = 0;
	while (detect[i] && std::isdigit(detect[i]))
		i++;
	return (i);
}

void	Convert::detectType(void)
{
	int	length;

	length = this->toConvert.size();
	if (this->toConvert[0] != '-' && this->toConvert[0] != '+' && !std::isdigit(this->toConvert[0]))
		detectChar(this->toConvert);
	else
		detectNum(this->toConvert);
}

void	Convert::convertFromString(std::string type)
{
	std::stringstream	ss;

	if (type == "char")
	{
		this->charValue = this->toConvert[0];
		this->convertFromChar();
	}
	else if (type == "int")
	{
		ss << this->toConvert;
		ss >> this->intValue;
		this->convertFromInt();
	}
	else if (type == "float")
	{
		ss << this->toConvert;
		ss >> this->floatValue;
		this->convertFromFloat();
	}
	else if (type == "double")
	{
		ss << this->toConvert;
		ss >> this->doubleValue;
		this->convertFromDouble();
	}
	else if (type == "nan")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: nanf" << std::endl;
		std::cout << "double: nan" << std::endl;
	}
	else if (type == "inf")
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: inff" << std::endl;
		std::cout << "double: inf" << std::endl;
	}
}

void	Convert::convertFromChar(void)
{
	std::cout << "char: '" << this->charValue << "'" << std::endl;
	std::cout << "int: " << static_cast<int>(this->charValue) << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(this->charValue) << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(this->charValue) << std::endl;
}

void	Convert::convertFromInt(void)
{
	if ((this->intValue >= 0 && this->intValue <= 31) || this->intValue == 127)
		std::cout << "char: non displayable" << std::endl;
	else if (this->intValue < 0 || this->intValue > 127)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(this->intValue) << "'" << std::endl;
	if (this->intValue >= -2147483648 && this->intValue <= 2147483647)
	{
		std::cout << "int: " << this->intValue << std::endl;
		std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(this->intValue) << "f" << std::endl;
		std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(this->intValue) << std::endl;	
	}
	else
	{
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}
}

void	Convert::convertFromFloat(void)
{
	if ((this->floatValue >= 0 && this->floatValue <= 31) || this->floatValue == 127)
		std::cout << "char: non displayable" << std::endl;
	else if (this->floatValue < 0 || this->floatValue > 127)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(this->floatValue) << "'" << std::endl;
	if (this->floatValue <= (float)2147483647 && this->floatValue >= (float)-2147483648)
		std::cout << "int: " << static_cast<int>(this->floatValue) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << this->floatValue << "f" << std::endl;
	std::cout << "double: " << std::fixed << std::setprecision(1) << static_cast<double>(this->floatValue) << std::endl;
}

void	Convert::convertFromDouble(void)
{
	if ((this->doubleValue >= 0 && this->doubleValue <= 31) || this->doubleValue == 127)
		std::cout << "char: non displayable" << std::endl;
	else if (this->doubleValue < 0 || this->doubleValue > 127)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: '" << static_cast<char>(this->doubleValue) << "'" << std::endl;
	if (this->doubleValue <= (double)2147483647 && this->doubleValue >= (double)-2147483648)
		std::cout << "int: " << static_cast<int>(this->doubleValue) << std::endl;
	else
		std::cout << "int: impossible" << std::endl;
	std::cout << "float: " << std::fixed << std::setprecision(1) << static_cast<float>(this->doubleValue) << "f" << std::endl;
	std::cout << "double: " << this->doubleValue << std::endl;
}