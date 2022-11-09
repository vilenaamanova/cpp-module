#include "PhoneBook.hpp"

std::string	getString(std::string str)
{
	int			i;
	int			strSize;
	std::string	interimRes;
	std::string	result;

	strSize = str.size();
	if (strSize > 10)
	{
		i = 0;
		while (i < 9)
		{
			interimRes.append(1, str[i]);
			i++;
		}
		result = interimRes + ".";
		return (result);
	}
	return (str);
}

void	PhoneBook::displayTable(void)
{
	int	i;

	std::cout << "---------------------------------------------" << std::endl;
	std::cout << "|";
	std::cout << std::setw(10) << "index";
	std::cout << "|";
	std::cout << std::setw(10) << "first name";
	std::cout << "|";
	std::cout << std::setw(10) << "last name";
	std::cout << "|";
	std::cout << std::setw(10) << "nickname";
	std::cout << "|" << std::endl;
	i = 0;
	while (i < 8)
	{
		if (this->Contacts[i].getFirstName().size() != 0)
		{
			std::cout << "|";
			std::cout << std::setw(10) << i;
			std::cout << "|";
			std::cout << std::setw(10) << getString(this->Contacts[i].getFirstName());
			std::cout << "|";
			std::cout << std::setw(10) << getString(this->Contacts[i].getLastName());
			std::cout << "|";
			std::cout << std::setw(10) << getString(this->Contacts[i].getNickname());
			std::cout << "|";
			std::cout << "\n";
		}
		i++;
	}
	std::cout << "---------------------------------------------" << std::endl;
}